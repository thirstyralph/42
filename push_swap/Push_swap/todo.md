# Parsing
- [ ] single parse
- [ ] parse_full

# algorithm
- [ ] sort two
- 
# main

# Program flow
1. parse
	check if argument is:
	a number
	In the range between INT_MIN and INT_MAX
	Not repeated	
2. if parsing is correct, create and allocate stacks
	malloc
	test if malloc succeeded
2. if parse fails, free and exit
3. move the arguments to stack a
4. if they are three tiny sort
5. if they are two, swap
4. move all nodes except 3 to stack b
5. tinysort stack a.
6. while sb is not empty
7. calculate the target of each node in sb
8. for each node in sb, calculate the moves it need to get to the top
9. for each bnode/target combination, calculate the total moves needed(considering combos)
10. efectuate the cheapest combination
11. repeat until b is empty, a should be ordered, not necesarily sorted
12. find cheapest way to sort a
13. sort a


