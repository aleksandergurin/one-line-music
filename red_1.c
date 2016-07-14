/* Discovered by: red- */
main(t) {
    for (t = 0; ; ++t)
        putchar((t | (t >> 9 | t >> 7)) * t & (t >> 11 | t >> 9));
}

