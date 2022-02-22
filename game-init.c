t_game *game_init()
{
    t_game *ret = malloc(sizeof(t_game));

    srand(time(NULL));
    ret->cards = malloc(DECK_SIZE);
    game_cards_fill(ret->cards, DECK_SIZE);
    game_cards_shuffle(ret->cards, DECK_SIZE);
    ret->end = 0;
    ret->indeck = 0;
    ret->broker = 0;
    ret->bet = 0;
    ret->player = player_init();
    return ret;
}
