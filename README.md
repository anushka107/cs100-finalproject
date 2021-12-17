  > As you complete each section you **must** remove the prompt text. Every *turnin* of this project includes points for formatting of this README so keep it clean and keep it up to date. 
 > Prompt text is any lines beginning with "\>"
 > Replace anything between \<...\> with your project specifics and remove angle brackets. For example, you need to name your project and replace the header right below this line with that title (no angle brackets). 
# Text-Based Role Playing Game 

 > ## Authors
 > *  Karanvir Chima(https://github.com/karanvirchima/karanvirchima.git)
 > *  Nikhil Sharma(https://github.com/nicktarma/nicktarma.git)
 > * Anushka Pandya(https://github.com/anushka107/anushka107.git)
 > * Neha Mathews(https://github.com/nmath018/nmath018.git)
 
 > You will be forming a group of **FOUR** students and working on an interesting project. The project has 4 phases, each one with specific requirements. A list of proposed project ideas that have been successful in previous quarters is listed in the project specifications document on Canvas. You can select an idea from the list, start thinking about the features you will implement, what design patterns can help you implement them, and why. If you want to propose your own original idea, you will have to contact an instructor to discuss the project and obtain written permission before you submit your project proposal (Phase 1). Your project needs to implement at least two design patterns iteratively, which you will have to justify for later phases.The project work should be divided almost equally among team members and each member is expected to work on at least one design pattern (more than one partner may work on a pattern) and some of its test cases. You can of course help each other, but it needs to be clear who will be responsible for which patterns and for which features. Additionally, you are expected to follow Scrum patterns, specifically the use of a Scrum (Project) board, Sprints, and Scrum meetings. While Daily Scrums are not required we highly recommend you practice them too.
 
 > ## Expectations
 > * Incorporate **at least two** distinct design patterns. You need to include at least *one* design pattern that we will teach this session:
 >   * Composite, Strategy, Abstract Factory or Visitor
 > * All design patterns need to be linked together (it can't be two distinct projects)
 > * Your project should be implemented in C++. If you wish to choose anoher programming language (e.g. Java, Python), please discuss with your lab TA to obtain permission.
 > * You can incorporate additional technologies/tools but they must be approved (in writing) by the instructor or the TA.
 > * Each member of the group **must** be committing code regularly and make sure their code is correctly attributed to them. We will be checking attributions to determine if there was equal contribution to the project.
 > * Each member of the group must actively participate in the Github Project board and reviewing commited code.
> * All project phases are to be submitted to this GitHub repository. You should modify this README file to reflect the different phases of the project. In addition, you should regularly hold sprint meetings with your group. You will need to hold one check-in meeting with your lab TA in addition to the final demo.

## Project Description
 > Description: 
A Text-Based Role-Playing Game (RPG): In this game, users can choose among three different characters to play with: Captain America, Ironman, and Aquaman. These characters are associated with different types of weapons and armors. Each character has different powers and is able to maneuver through each situation differently. At every step of the game, a narrative is presented and the user can select between different options. These options include attack, run, heal, and access inventory so they can access any items they may acquire throughout their journey in the game. These characters will have different paths to choose from, which will allow them to complete their unique journeys. After completing their journeys the final obstacle each character will face is a boss battle which will decide their faith in whether they win or lose the game.
 > * Why is it important or interesting to you?
 >   * This idea is important to our team because we are aspiring to create a role-playing
game to help use the skills that we are learning in this course.
 >   * This is interesting to us because we have all played role-playing games growing up such as Pokemon, however, we have never gotten the opportunity to create a Role Playing Game ourselves.
 >   * Using techniques that we have learned throughout this course, and applying them to this game will allow us to test our knowledge and challenge ourselves to work as a team and create a flawless product.
 > * What languages/tools/technologies do you plan to use? (This list may change over the course of the project)
 >   * C++ 
 >   * PuTTy(vim)
 >   * Git/Github
 >   * Unit Testing
 >   * UML Notation 
 >   * Kanban Board/Scrum Meetings
 > * What will be the input/output of your project? What are the features that the project provides?
 >   * The input/output of the project will be on terminal. 
 >   * Input:
 >     * Choose among three different characters to play with: Captain America, Ironman, and Aquaman
 >     * After choosing the character there will be an output of what actions the characters can do.
 >     * Once the character arrives in their battle, they have to choose between the different options including attack, run, heal.
 >     * Choose the different options from attack, run, heal and access inventory.
 >     * Be able to quit the game 
 >   * Output:
 >     * You will get a message for which character and path that you have chosen
 >     * You will see the amount of health the boss has and the amount of health your character has after each attack.
 >     * Once you have won the first battle you will get the option to pick the next path and onwards.
 >     * You will get a message that you have reached the final boss.
 >     * Once the game is over you will get a message that you won or lost.
 >   * User Controls:
 >     * BasicAttack-1
 >     * SpecialAttack-2
 >     * Heal Charcter- 3
 >     * Quit the Game/Run- 4
 >     
 >      
 >
 >
 > ## Phase II
 > In addition to completing the "Class Diagram" section below, you will need to:
 > * Create an "Epic" (note) for each feature and each design pattern and assign them to the appropriate team member. Place these in the `Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Create smaller actionable development tasks as issues and assign them to team members. Place these in the `TODO` column.
 >   * These cards should represent roughly 7 days worth of development time for your team, taking you until your first meeting with the TA
## Class Diagram
> Link To Class Diagrams: https://lucid.app/lucidchart/6cec9519-27c7-4c07-a5a1-d303511ead8c/edit?viewport_loc=-590%2C-350%2C3911%2C1953%2C0_0&invitationId=inv_3ad213c2-4a91-4a0e-8e48-66b0a540e067  
> ![Hero's Journey](https://github.com/cs100/final-project-kchim003-nshar040-apand023-nmath018/blob/master/FinalProjectUMLDiagram%20-%20Page%201.png) 
> Class Diagram Description:
> 
> The GameHandler, Boss and Enemy classes use the Factory pattern. This pattern is shown in these three classes when the user chooses what object to use. In this case, the objects would be the three different heroes: Iron Man, Aqua Man and Captain America. Because it is able to generate different objects at a time and its set in stone. It generates the character based on user input. It will make the boss if the character meets certain requirements. This follows for the enemy as well.

> The GameHandler class acts as a menu for the user. It outputs the character and attack options to the user to choose for the battle. In the chooseBoss function, a boss is generated and it outputs a message, The current character's health is reset after one round of battle. Next, the generateEnemy function generates enemies the same way the Boss function does. The chooseAction function allows the character to choose what attack they want. If there is an invalid input, an error message is outputted and prompts the user to choose an attack. In the isFightOver function, if the character’s health is less than zero the character will lose. On the other hand, if the enemy's health is greater than zero then the character will win the battle. 

> Both the Enemy and the Boss class have a destructor and a constructor. It includes 12 virtual functions.


> The Boss Class includes three attack functions: attack, specialAttack and heal. In all three attack functions, it calculates the damage that has been created. It outputs what type of attack was used and how much damage was inflicted. Then, it displays to the user the remaining health. The function genRandomStats, starts with a positive health and allows the specialAttack function to output more damage then the attack. In addition, it also has a variable called increaseHealth, which randomizes the amount of health that is increased. Also, the Boss constructor will call the genRandomStats. Next, the randomNumber function includes two parameters with return type int and the function generates a Boss with random values. Lastly, there is a decideAction function, which randomizes the attack that will be used by the Boss. If the value of the randomized is between 0 to 3 it will use attack, for 4 to 6 special Attack will be used, and for 7 to 9 it will use Heal.
>
 The Enemy class is similar to the boss class since the user battles the enemy first and will only proceed to battle boss if they win against the enemy. Similarly, the enemy class includes the same functions as the boss. One difference can be seen in the genRandomStats function. The values for the genRandomStats function for the enemy differ from those of the genRandomStats for the boss. For example, the initial health of the enemy is set to 150 while the boss is set to 300. Another difference can be seen in the decideAction function in the enemy class because the range that determines the enemy’s attack is larger. For example, 0 to 8 will implement Attack while 9 to 10 uses specialAttack. All the other functions that are implemented in the Enemy class work the same way as in the Boss class.
 
 > Aqua Man, Captain America, and Captain America class: In these three classes, they come directly from the character class. They inherit the functions that are implemented in the Character class.   
 > Character Class: The game handler and attacks rely on using the Character class. We are able to implement composite into this . The various actions throughout the code rely on the Character being the base class. We have certain actions for the boss, certain actions for the character, aquaman,ironman,captain america and enemy. Character is inherited by all of the heroes. We are able to see where we are using composite in the pure virtual function which were created for attack,special attack,heal,and stats. Here inheritance is similar to a tree structure. In our code character would be the root node and Captain America , Iron Man, and Aqua man would be considered the leaf. Enemy would be an internal node which has the leaf of Boss.


 
 > ## Phase III
 > You will need to schedule a check-in with the TA (during lab hours or office hours). Your entire team must be present. 
 > * Before the meeting you should perform a sprint plan like you did in Phase II.
 > * You should also update this README file by adding the following:
 >   * What design patterns did you use? For each design pattern you must explain in 4-5 sentences:
 >     * Why did you pick this pattern? And what feature did you implement with it?
 >     * How did the design pattern help you write better code?
 >   * An updated class diagram that reflects the design patterns you used. You may combine multiple design patterns into one diagram if you'd like, but it needs to be clear which portion of the diagram represents which design pattern (either in the diagram or in the description).
 >   * Make sure your README file (and Project board) are up-to-date reflecting the current status of your project. Previous versions of the README file should still be visible through your commit history.
> 
> During the meeting with your TA you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.
 ## Design Patterns
> We used the Composite pattern in designing our classes and class interfaces.
Our Character class was the root of the inheritance hierarchy, with the hero and boss classes being leafs that implemented the Character interface. The composite pattern allows for a tree structure and asks each node of the tree to perform a task. Attack, special attack and, heal are implemented which is the default behavior common to the specific character classes (Aqua Man, Captain America, Iron Man). Attacks and other interactions between objects were handled through this inheritance hierarchy. This allowed us to write less code and also make it more extendable.

>The Factory Pattern came from the GameHandler class. A Factory Pattern creates objects of different types which is done here. In this case, the GameHandler created and handled interactions between Enemy/Boss objects and their hero counterparts. The only changes made are when creating new objects. It created these objects based on program state and user decisions. It helped us write better code by making the code more simplified and allows the subclasses to create objects of different types ( in this case different characters  as well as enemy and boss).

 > ## Final deliverable
 > All group members will give a demo to the TA during lab time. The TA will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before erd of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Showing when the user selects Aqua Man and showing all the behaviors(attack,special attack, heal) working.  
 > ![Hero's Journey](https://github.com/cs100/final-project-kchim003-nshar040-apand023-nmath018/blob/master/AquaOutput.png) 
 > 
 > Showing when the user selects Iron Man and showing all the behaviors(attack,special attack, heal) working.  
 > ![Hero's Journey](https://github.com/cs100/final-project-kchim003-nshar040-apand023-nmath018/blob/master/IronOutput.png) 
 > 
 > Showing when the user selects Captain America and showing all the behaviors(attack,special attack, heal) working.  
 > ![Hero's Journey](https://github.com/cs100/final-project-kchim003-nshar040-apand023-nmath018/blob/master/CaptainOutput.png) 
 > 
 > Showing when the user beats the first boss.  
 > ![Hero's Journey](https://github.com/cs100/final-project-kchim003-nshar040-apand023-nmath018/blob/master/BeatBoss1.png) 
 > 
 > Showing when the user beats the second boss.   
 > ![Hero's Journey](https://github.com/cs100/final-project-kchim003-nshar040-apand023-nmath018/blob/master/BeatBoss2.png) 
 > 
 > Showing when the user loses against the first boss.
 > ![Hero's Journey](https://github.com/cs100/final-project-kchim003-nshar040-apand023-nmath018/blob/master/LossMessage1.png) 
 > 
 > Showing when the user loses against the second boss.
 > ![Hero's Journey](https://github.com/cs100/final-project-kchim003-nshar040-apand023-nmath018/blob/master/LossMessage2.png) 
 > 
 > Showing input validation for both menus.  
 > ![Hero's Journey](https://github.com/cs100/final-project-kchim003-nshar040-apand023-nmath018/blob/master/MenuValidation.png) 
 > 
 ## Installation/Usage
 > We are not deploying anything for our project. Thus we are only using hammer, vim, and valgrind. 
 >
 >The command line prompt that runs the game is ./game : This prompt runs the actual game itself and allows the user to play. 
 >
 >The command line prompt that runs the tests are ./test : This prompt runs all of our unit tests for the code. 


 ## Testing
  >We used unit tests to test the project. For the Heroes we created unit tests to check that the attacks, special attacks, and heal were always giving positive  values. We also tested to make sure that these powers were not too powerful. To do this we tested their range by checking if they went over 100 damage or healing.
  > 
  >We also created unit tests for the Boss Thanos to check that the health, attack, special attack, and heal were all positive values above 0. In addition to this we also tested that the Enemy has the same values above 0 to make sure that positive damage and healing is taking place. 
  >
  >In addition to this we made sure the code had no memory leaks possible. We ran valgrind with our command line executable ./test to confirm that there were no leaks. The Heap Summary of valgrind shows that there are 3 allocs and 3 frees. It also states that “All heap blocks were freed -- no leaks are possible”. 
  >
  >Unit Tests Working
  >![Hero's Journey](https://github.com/cs100/final-project-kchim003-nshar040-apand023-nmath018/blob/master/Test1.png) 
  >![Hero's Journey](https://github.com/cs100/final-project-kchim003-nshar040-apand023-nmath018/blob/master/Test2.png) 
 
