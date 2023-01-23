# FSM-Challenge-Ghaisan Gun
This repository contains a system simulating the diffrent phases of a gun with a FSM system.

# Why a gun?
I picked a gun to use as a reprisantation for my Fsm system because the games i usually play in my spare time are Fps (First person shooter) games. such as Valorant, Csgo, and Cod Warzone.

# States
For this challenge i made an fsm for the 4 states of a gun.
- idle (mag is full) : on this stage the gun is fully loaded and ready to fire at the enemy at anytime.
- firing mode : on this stage the gun is currently firing all the bullets in the guns magazine until it runs out of ammo.
- empty clip : on this stage the gun is out of ammo and needs a reload.
- reloading : on this stage the gun is being reloaded, changing the old magazine with a new loaded one.

00 = Idle = this input represents the idle state of the gun.
01 = Firing = this input represents the firing state of the gun.
10 = Empty = this input represents the empty state of the gun after the gun.
11 = reload = This input represents the reload state of the gun.

Boolean Equations
From the Karnaugh Maps above, we can derive these boolean equations:

S0 = s0 i1' i2' + s0' i1' i2 + s0' s1' i2 + s1' i1' i2' + s0' i1 i2'
S1 = s1 i1' i2' + s1' i1 i2 + s0' i1 i2'
o0 = s0
o1 = s1

# Karnaugh map
S0 Kmap
![kmapS0](https://user-images.githubusercontent.com/114584858/214088849-6554d21c-0007-44bd-911a-ce50f344a8fe.png)
 
S1 Kmap
![kmapS1](https://user-images.githubusercontent.com/114584858/214088935-a8fbf251-96fe-4462-8085-bd6620aaf8ac.png)

O0 Kmap
![kmaps11](https://user-images.githubusercontent.com/114584858/214090199-116246d5-ddd0-495a-b772-433f07a62d7e.png)

O1 Kmap
![kmapO1](https://user-images.githubusercontent.com/114584858/214089093-532179fa-d03d-4792-b531-1fc26620079c.png)

# Truth table
![TrutTable](https://user-images.githubusercontent.com/114584858/214091759-fa93b645-dec2-4c0f-bab3-8ba42db34952.png)
