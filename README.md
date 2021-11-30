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
 >   * Java (with granted permission)
 >   * PuTTy(vim)
 >   * Git/Github
 >   * Unit Testing
 >   * UML Notation 
 >   * Kanban Board/Scrum Meetings
 > * What will be the input/output of your project? What are the features that the project provides?
 >   * The input/output of the project will be on terminal. 
 >   * Input:
 >     * Choose among three different characters to play with: Captain America, Ironman, and Aquaman
 >     * After choosing the character there will be two different paths that the user will select from.
 >     * Once the character arrives in their battle, they have to choose between the different options including attack, run, heal, and access inventory so they can access any items they may acquire throughout their journey. 
 >     * The step for choosing between the different paths repeats after each battle until you reach the final boss. 
 >     * Choose the different options from attack, run, heal and access inventory.
 >   * Output:
 >     * You will get a message for which character and path that you have chosen
 >     * You will see the amount of health the boss has and the amount of health your character has after each attack.
 >     * Once you have won the first battle you will get the option to pick the next path and onwards.
 >     * You will get a message that you have reached the final boss.
 >     * Once the game is over you will get a message that you won or lost.
 >   * User Controls:
 >     * Attack-A
 >     * Run-R
 >     * Heal Item-H
 >     * Q-Quit
 >     * Path1-1
 >     * Path2-2   
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
> Class Diagram Description:
> 
> For our project we are using a strategy pattern as the basis for our UML diagram. The purpose of using the strategy pattern is so you can take one class that implements something specific, and use different variations of an algorithm within different classes; you are able to switch between different algorithms during runtime. The UML diagram represents a single player role-playing game called “Hero’s Journey,” where the user chooses between 3 characters and then is given different options of attack based on the path they choose. The user ventures through two battles and a final boss battle. If the user defeats the Boss, then they win the game.  It is useful to use the strategy pattern in this case because we have six abstract classes that represent different attack strategies that multiple characters share. The characters inherit from the six abstract behavior classes.The characters can “runtime inherit” from the behavior classes by implementing different variations of the algorithm. 
> 
> The 6 abstract classes are ABehavior, RBehavior, HBehavior, QBehavior, SBehavior,and BBehavior. A stands for attack, R stands for run, H stands for heal, Q stands for quit, S stands for special attack which would be implemented based on the strengths of the specific character chosen, and B stands for block. Each of these classes contains public member functions of type void that pertains to the specific class. For example, ABehavior contains the function PressA(): and BBehavior contains the function PressB(). When a user presses B, for example, that will result in outputting “block,” which blocks the computer enemy. Similarly, Each of these abstract classes have private variables. For ABehavior, there is attack which is a string, for BBehavior there is block which is a string, for RBehavior there is run which is a string, for HBehavior there is heal which is a string, for QBehavior there is quit which is a string, and for SBehavior, there is special which is a string. 
> 
> The three character classes that inherit from these behaviors are CaptainAmerica, IronMan, and AquaMan. All of these classes share the same private variables and public member functions. All three character classes contain the vector totalmoves, which represents the total amount of moves for the character within the game. Name is a private variable within each character class that pertains to the character that is chosen. For example “Captain America'' is the name for the CaptainAmerica class. The public member function getMoves which is a string is in all of the character classes and retrieves the value of the total number of moves a character makes so the client can access this value in the form of the string. The public member function, printmoves, prints the number of moves onto the console and is of type void. The function, printmoves is in all 3 character classes.
>The BossClass represents the boss that will be fought in the last battle. It contains the private variable health as an integer which would display the health as a number. The higher the number, the stronger the health of the boss. The private variable, BossName is a string that has the name of the Boss the character is fighting. The public member function, PressC(), is a void function that outputs the attack the boss uses. It inherits from the 6 abstract behavior classes, which represent different types of attacks.
>
> A user class is created for client use, which contains a private variable, firstName which is a string and a public member function, displayName. The function displayName is also a string. The class path will inherit from the user since the user will have to choose one of two paths for the character to go on before they battle. Path has a private variable path, which is an integer, and a public member function choosePath() which is void. This displays the path that is chosen. After the path is chosen, there are two classes that are inherited from it. They are AquireItems and Narrative. AquireItems contains a private variable, itemName which is a string and 2 public member functions, openInventory which is void and useItem which is also of type void. The item name would be for example a shield to block or a laser to attack. The function, openInventory, would show the different items and useItem would output the name of the item. The Narrative class includes the private variable storyline which is a string. It also includes a public member function, Narrative() which is of type void. This function will output the “Hero’s Journey” or the story that relates to the specific character after choosing a path.  The user can also see a menu which contains a public member function, displayMenu() which is a string. This menu will display the characters to choose from and the different attack strategies. 
> 
> Character is the context class. It includes the strategies for BBehavior, ABehavior, RBehavior, HBehavior, QBehavior, and SBehavior. These strategies are private. 
The Character class also includes the following public member functions:
BBlock(),SetBBlock(BBehavior),AAttack(),SetAAttack(ABehavior),RRun(),SetRRun(RBehavior),HHeal(),SetHHeal(HBehavior),QQuit(),SetQQuit(Qbehavior),SSpecial(),and SetSSpecial(Sbehavior). These are all of the return type void. The context class maintains a reference to the strategy object. This class implements the above functions using the strategy interface.


 
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
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
