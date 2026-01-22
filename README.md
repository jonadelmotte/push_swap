*This project has been created as part of the 42 curriculum by jdelmott*

### PUSH_SWAP

## Description

sort a random list of integers using the smallest number of moves, 2 stacks and a limited set of operation.

# allowed operations :

- `sa` : swap a - swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements).
- `sb` : swap b - swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements).
- `ss` : `sa` and `sb` at the same time.
- `pa` : push a - take the first element at the top of b and put it at the top of a. Do
nothing if b is empty.
- `pb` : push b - take the first element at the top of a and put it at the top of b. Do
nothing if a is empty.
- `ra` : rotate a - shift up all elements of stack a by 1. The first element becomes
the last one.
- `rb` : rotate b - shift up all elements of stack b by 1. The first element becomes the last one.
- `rr` : `ra` and `rb` at the same time.
- `rra` : reverse rotate a - shift down all elements of stack a by 1. The last element becomes the first one.
- `rrb` : reverse rotate b - shift down all elements of stack b by 1. The last element becomes the first one.
- `rrr` : `rra` and `rrb` at the same time.

## Checker

you can use the checker given in the subject with this command :

`ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker_linux $ARG`

changing the number inside of the ARG

you can also use this command :

`ARG=$(seq 1 500 | shuf | tr '\n' ' '); ./push_swap $ARG | ./checker_linux $ARG`

changing the numbers in the seq, its less precise than the first one but can be used to test larger list of numbers.

## Resources

# Algorithm

https://github.com/AdrianWR/push_swap

https://github.com/anyaschukin/Push_Swap?tab=readme-ov-file

https://medium.com/@jamierobertdawson/push-swap-the-least-amount-of-moves-with-two-stacks-d1e76a71789a

# Tools

https://github.com/SimonCROS/push_swap_tester/tree/main?tab=readme-ov-file

https://github.com/o-reo/push_swap_visualizer
