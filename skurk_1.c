/* Discovered by: skurk */
main(t) {
    for (t = 0; ; ++t)
        putchar(((t & 4096) ?
            ((t * (t^t % 255) | (t >> 4)) >> 1) :
            (t >> 3) | ((t & 8192) ? t << 2 : t)));
}

