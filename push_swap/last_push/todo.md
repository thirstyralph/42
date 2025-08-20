1. main calls sort(int argc, char \*argv[]))
2. sort calls parse(program arguments)
3. If the arguments are correct, parse retuns an int array to be placed at sa.arr, if they are not, the program exits(safely, hopefully)
4. sort sets argc - 1 as sa.top
5. if a.top = 2: sort two
6. if sa is not sorted, sa.
5. if a.top = 3: sort three
5. if a.top = 5: sort five (should I do sort five?? I'm not sure)
6. if a.top > 5 or 3, not sure yet, call turk(t_stack \*a, t_stack \*b)
7. while the sa is not sorted, turk will:
8. push every number except 3 to sb
9. targets calculates the targets and they get asigned to t_mov instructions


# TODO
- [ ] Function that fills the t_mov struct that is used by perform.
- [ ] _simplify function that calculates cost_ nevermind.


# comprobations
- [ ] Do all malloc'd arrays get freed when the parameters are not correct? (too few, repated parameters)
