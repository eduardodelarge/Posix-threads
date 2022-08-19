# philosophers


## Dining Philosophers Problem

The idea behind this problem comes from a very popular problem called the dining philosophers problem. It goes as follows. A certain number of philosophers sit on a round table. Each philosophers has a fork/chopstick on their left and their right. There are as many forks as philosophers on the table, and every philosopher has a bowl of spaghetti in front of them. Philosophers do these tasks in the following order:

Grab fork from both their left and right sides (if they're available) 🍴
Start eating for X amount of time 🍝
Release both forks for other philosophers to use
Start sleeping for X amount of time 🌙
Start thinking until forks are available to eat again 💭
Additionally, if a philosopher doesn't fetch both forks quickly enough, they will die 💀

The problem here is that philosophers must take turns to grab forks, otherwise they might all get stuck with only one fork until they starve.