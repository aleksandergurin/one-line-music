/* Discovered by: xpansive */
main(t) {
    for (t = 0; ; ++t)
        putchar(((t * (t >> 8 | t >> 9) & 46 & t >> 8))^(t & t >> 13 | t >> 6));
}

