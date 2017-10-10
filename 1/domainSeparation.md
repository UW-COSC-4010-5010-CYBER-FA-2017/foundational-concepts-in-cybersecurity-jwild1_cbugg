## Domain Separation
Domain Separation involves separating access between processes/machines and the data and or resources they should have access to. 

In our example, we... 

TODELETE:
In the Robert Frost poem “Mending Fences”, the last line states “Good fences make good neighbors”. Domain separation is like this. 

In the programming department, there are programmers (developers and maintainers and many more), testers and system administrators. When the developers wish to test their code, they need test data that is similar to the real data, but obviously not live data. The not live data. The test program must use test data in case the program reacts unexpectedly. Keeping the test data separate from the operational data is one example of domain separation. 

For example, most hardware microprocessors have a supervisor domain (sometimes referred to as a supervisor state or privileged state) and a user domain. In supervisor state, privileged hardware instructions can be executed. An operating system uses these hardware domains to implement mechanisms that protect it from interference by user written programs and purchased applications. The operating system code runs in supervisor state, while the user programs run in the user domain. 