We have n delievelry task and n pickup task
& pn pickup task have to be before dn delively task
​
p1 d1
​
now let p1 p2 p3 ----- pn then we can get n permutaion of n pickup task which is n!
​
now if we add deleivery task Dn ( then it should be behind pn) and that the only position eligible for that. 1 Position
​
p1 p2 p3 ----- pn dn
​
but now where we can we put dn - 1
​
we can put dn - 1 at 3 positions at end , at second and behind pn-1
3 Position
​
p1 p2 p3 ------ pn-1 pn dn dn-1
p1 p2 p3 ------ pn-1 pn dn-1 dn
p1 p2 p3 ------ pn-1 dn-1 pn dn
Now for pn-2 there is dn - 2 and dn - 2 should be behind pn-2.
​
so if i take permutaion ,
​
pn-2 pn-1 dn-1 pn dn [so we can place dn-2 in 5 position according to this permutaion]
​
^     ^    ^  ^  ^
|     |    |  |  |
5 Positions.
​
so for first task we have 2n-1 vacant places we can chose,
​
so 1 * 3 * 5 * (2n -1) kind of different permutaion we can have for difference places of order & deleivery task.
​
Also there are n! permutation of pickup task so we have to multiply every thing with n!
​
n! ( 1 * 3 * 5 * (2n -1) )
​
Also there is modulo , as we don't want number to be too large to overflow.