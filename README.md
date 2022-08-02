<h1 align="center">
Dynamic Programming :rocket:
</h1>

<p align="center">
<img src="https://user-images.githubusercontent.com/91309280/182393754-3a65bceb-377c-4e66-a07e-359a563e4e86.gif" height="500" width="900" align="center"/>
</p>

## What the hell is DP?

One of the toughest DSA topic, right?😂

```
DP = Recursion+storage

DP is just a recursion nothing else.

Master the recursion and you can master Dynamic Programming. 
```

## Identify DP problem 👀

-  Choice (max,min,largest,greatest etc.)
-  Optimization 

## Approach 💡

Recursion → memoization → Tabulation → Space Optimization 

### Shortcut to find recurance relation 

1. Try to represent the problem in terms of indexes.
2. Do all possible  stuffs on that index.
3. sum up all stuffs - count all ways 

      min(all stuff) - find min

### Recursion → memoization 

1. Declare a dp array with changing parameters. Initialise its all elements as -1.
2. Pass dp array in recursive helper function. 
3. add the condition dp[i][j] ! = -1 after the base case and before recurrence relation code.
4. pass the output into dp[i][j] and return.

```
Auxillary stack space is really enemy in memoization code. 😢
```

### Memoization → tabulation

1. Declare the base case.
2. Express all changes in for loop.
3. copy the recurrance and write. 

Always remember that tabulation is bottom up so start and end the loop accordingly. 

```
Thumb rule - There’s always a space optimization if n-1 and n-2 is there. 
```

### Tabulation → space optimization 

1. Just declare the prev and curr vectors intialize both with 0.
2. where there is i-1 case replace with prev[i]
3. and for i replace with curr[i]
4. after the inner loop ends swap prev with curr.

## Resourses 📑

🎥 Strivers DP Series - https://www.youtube.com/playlist?list=PLgUwDviBIf0qUlt5H_kiKYaNSqJ81PMMY

🎥 Aditya Verma DP Series - https://www.youtube.com/playlist?list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go
