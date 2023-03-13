<p align="center">
<a href="https://github.com/jpedr0c/42_pushswap">
<img src="./push_swap.png" height="120" width="120">
</a>
</p>
<h1 align=center>
  <strong> PUSH_SWAP </strong>
</h1>

<p align="center">
  <sub> Push_swap is a C program that sorts a stack of integers using a limited set of operations.
  <sub>
</p>


[![-----------------------------------------------------](https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/rainbow.png)](#table-of-contents)

<p align="center">
  <a href="#About"> 💡 About the project </a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#Explanation"> 📝 Explanation</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#HowUse"> ⚙️ How to use</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#Credits"> 🏆 Credits</a>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
</p>

<br/>

<a id="About"></a>
## 💡 About the project
> The objective of the Push_swap project is to create a C program that sorts a stack of integers using only a limited set of operations. The program must be able to sort the stack with the fewest possible number of operations.

<br/>

<a id="Explanation"></a>
## 📝 Explanation
- It has 2 stacks called a and b.
  - The stack a contains random amount of negative and/or positive numbers which cannot be duplicated.
  - The stack b is empty.
- The goal is to sort in ascending order numbers into stack a. For this you have operations at your disposal.

### Operations
-> The program will print to the standard output the list of operations needed to sort the list. 

These operations are:

- `sa`: swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements.
- `sb`: swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements.
- `ss`: `sa` and `sb` at the same time.
- `pa`: take the first element at the top of b and put it at the top of a. Do nothing if b is empty.
- `pb`: take the first element at the top of a and put it at the top of b. Do nothing if a is empty.
- `ra`: Shift up all elements of stack a by 1. The first element becomes the last one.
- `rb`: Shift up all elements of stack b by 1. The first element becomes the last one.
- `rr`: `ra` and `rb` at the same time.
- `rra`: Shift down all elements of stack a by 1. The last element becomes the first one.
- `rrb`: Shift down all elements of stack b by 1. The last element becomes the first one.
- `rrr`: `rra` and `rrb` at the same time.

<br/>

<a id="HowUse"></a>
## ⚙️ How to use

1. Clone this repository
```sh
git clone https://github.com/jpedr0c/42_pushswap.git
```
2. In the project directory, compile the program using the following command
```sh
make
```
3. To use the program, run the following command
```sh
./push_swap 3 1 4 2 6 5
```
- This will execute the program and sort the provid list of number. Put the numbers you want and the amount you want.
4. If you want to remove the object files generated during compilation
```sh
make clean
```
5. If you want to remove the object files and executable generated during compilation
```sh
make fclean
```

<br/>

<a id="Credits"></a>
## 🏆 Credits
| [<img src="https://avatars.githubusercontent.com/u/78514252?v=4" width="300" style="border-radius:50%"><br><sub> João Pedro </sub>](https://www.linkedin.com/in/jpedroc) | <p align="justify">***Thank you for taking the time to review my project. If you have any questions or would like to connect with me, please feel free to reach out to me on [LinkedIn](https://www.linkedin.com/in/jpedroc)***</p> | 
|---|---|
