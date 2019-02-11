
```bash
g++ -ggdb3 main.cpp
gdb a.out
getconf PAGESIZE
```

4096 pagesize je 12 bitů, tj. virtuální adresa je (64 bit) je 52-bit page
a 12-bit offset v rámci page.

```gdb
run
p i
p &q[199]
```

Vzít poslední 3 čísla v hex. Převést na dec.
4096 - X = kolik zbývá do konce stránky.
Podělit 4 je počet int.
Přičíst 200 a porovnat s tím, co zbylo.

```
echo $(((4096 - 16#1bc) / 4 + 199))
```
