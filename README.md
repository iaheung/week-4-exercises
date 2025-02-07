# COMP0210 Week 4 Exercises

Notes:
Inhenritance and Code Sharing:
We can't just inherit everything

Eg: Main class: Things with wheels
Car and Luggage both have wheels, so we can inherit from main class, right?

No, because Car and Luggage are not related. Instead, we should do something like this:

Wheel Class

Car and Luggage are different, but both contain a Wheel Class object that has functions.