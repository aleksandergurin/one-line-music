/* Discovered by: tejeez */
main(t) {
    for (t = 0; ; ++t)
        putchar(((-t & 4095) * (255 & t * (t & t >> 13)) >> 12) +
        (127 & t * (234 & t >> 8 & t >> 3) >> (3 & t >> 14)));
}

