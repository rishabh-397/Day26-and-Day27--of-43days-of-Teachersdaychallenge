# Day26-and-Day27--of-43days-of-Teachersdaychallenge

A. Lucky Sum of Digits
time limit per test2 seconds
memory limit per test256 megabytes
Petya loves lucky numbers. We all know that lucky numbers are the positive integers whose decimal representations contain only the lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

Petya wonders eagerly what minimum lucky number has the sum of digits equal to n. Help him cope with the task.

Input
The single line contains an integer n (1 ≤ n ≤ 106) — the sum of digits of the required lucky number.

Output
Print on the single line the result — the minimum lucky number, whose sum of digits equals n. If such number does not exist, print -1.

Examples

Input
11

Output
47

Input
10

Output
-1



B. Pashmak and Flowers
time limit per test1 second
memory limit per test256 megabytes
Pashmak decided to give Parmida a pair of flowers from the garden. There are n flowers in the garden and the i-th of them has a beauty number bi. Parmida is a very strange girl so she doesn't want to have the two most beautiful flowers necessarily. She wants to have those pairs of flowers that their beauty difference is maximal possible!

Your task is to write a program which calculates two things:

The maximum beauty difference of flowers that Pashmak can give to Parmida.
The number of ways that Pashmak can pick the flowers. Two ways are considered different if and only if there is at least one flower that is chosen in the first way and not chosen in the second way.
Input
The first line of the input contains n (2 ≤ n ≤ 2·105). In the next line there are n space-separated integers b1, b2, ..., bn (1 ≤ bi ≤ 109).

Output
The only line of output should contain two integers. The maximum beauty difference and the number of ways this may happen, respectively.

Examples
Input
2
1 2

Output
1 1

Input
3
1 4 5

Output
4 1

Input
5
3 1 2 3 1

Output
2 4


B. BerSU Ball
time limit per test1 second
memory limit per test256 megabytes
The Berland State University is hosting a ballroom dance in celebration of its 100500-th anniversary! n boys and m girls are already busy rehearsing waltz, minuet, polonaise and quadrille moves.

We know that several boy&girl pairs are going to be invited to the ball. However, the partners' dancing skill in each pair must differ by at most one.

For each boy, we know his dancing skills. Similarly, for each girl we know her dancing skills. Write a code that can determine the largest possible number of pairs that can be formed from n boys and m girls.

Input
The first line contains an integer n (1 ≤ n ≤ 100) — the number of boys. The second line contains sequence a1, a2, ..., an (1 ≤ ai ≤ 100), where ai is the i-th boy's dancing skill.

Similarly, the third line contains an integer m (1 ≤ m ≤ 100) — the number of girls. The fourth line contains sequence b1, b2, ..., bm (1 ≤ bj ≤ 100), where bj is the j-th girl's dancing skill.

Output
Print a single number — the required maximum possible number of pairs.

Examples
Input
4
1 4 6 2
5
5 1 5 7 9

Output
3

Input
4
1 2 3 4
4
10 11 12 13

Output
0

Input
5
1 1 1 1 1
3
1 2 3

Output
2


C. Soldier and Cards
time limit per test2 seconds
memory limit per test256 megabytes
Two bored soldiers are playing card war. Their card deck consists of exactly n cards, numbered from 1 to n, all values are different. They divide cards between them in some manner, it's possible that they have different number of cards. Then they play a "war"-like card game.

The rules are following. On each turn a fight happens. Each of them picks card from the top of his stack and puts on the table. The one whose card value is bigger wins this fight and takes both cards from the table to the bottom of his stack. More precisely, he first takes his opponent's card and puts to the bottom of his stack, and then he puts his card to the bottom of his stack. If after some turn one of the player's stack becomes empty, he loses and the other one wins.

You have to calculate how many fights will happen and who will win the game, or state that game won't end.

Input
First line contains a single integer n (2 ≤ n ≤ 10), the number of cards.

Second line contains integer k1 (1 ≤ k1 ≤ n - 1), the number of the first soldier's cards. Then follow k1 integers that are the values on the first soldier's cards, from top to bottom of his stack.

Third line contains integer k2 (k1 + k2 = n), the number of the second soldier's cards. Then follow k2 integers that are the values on the second soldier's cards, from top to bottom of his stack.

All card values are different.

Output
If somebody wins in this game, print 2 integers where the first one stands for the number of fights before end of game and the second one is 1 or 2 showing which player has won.

If the game won't end and will continue forever output  - 1.

Examples
Input
4
2 1 3
2 4 2

Output
6 2

Input
3
1 2
2 1 3

Output
-1
