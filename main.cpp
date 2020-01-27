#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

 write out 10 nouns.
 for each of the 10 nouns, write out 3 actions it might perform, in plain english.
 write out how you'd call that action in pseudo code, in the space between each block comment
 
 If the action requires multiple words, use camelCaseToNameIt
 don't forget the semi-colon after each statement
 
 When you finish, commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].

 Send me the the link to your repl.it in a DM on Slack

 Wait for my code review.
 */

/*
 example)
 Noun:       arm
 action 1:   the arm extends
 action 2:   the arm flexes
 action 3:   the arm rotates conter-clockwise
 */
arm.extend();
arm.flex();
arm.rotateCounterClockwise(); //demonstrates CamelCase

/*
 1)
 Noun: hand
 action 1: the hand grabs
 action 2: the hand makes an OK sign
 action 3: the hand crosses the index and the middle finger
 */
 hand.grab();
 hand.makeOKSign();
 hand.crossFingers(index, middle);


/*
 2)
 Noun: car
 action 1: the car starts
 action 2: the car stops
 action 3: the car turns on the front lights
 */
 car.start();
 car.stop();
 car.turnFrontLightsON();

/*
 3)
 Noun: person
 action 1: the person walks
 action 2: the person says the word "hello"
 action 3: the person jumps
 */
 person.walks();
 person.say("hello");
 person.jump();


/*
 4)
 Noun: Box
 action 1: the box opens itself
 action 2: tge box closes itself
 action 3: the box locks itself
 */
 box.open();
 box.close();
 box.lock();

/*
 5)
 Noun: cat 
 action 1: the meows
 action 2: the cat purrs
 action 3: the cat sits
 */
cat.meow();
cat.purr();
cat.sit();

/*
 6)
 Noun: pen
 action 1: the pen's cap is removed 
 action 2: the pen writes the word "hello"
 action 3: the pen is recharged
 */
 pen.removeCap();
 pen.write("hello");
 pen.addInk();

/*
 7)
 Noun: plane
 action 1: the plane takes off
 action 2: the plane lands
 action 3: the plane is refueled with 1000 l of fuel
 */
plane.takeOff();
plane.land();
plane.refuel(1000);

/*
 8) 
 Noun: computer
 action 1: the computer boots up
 action 2: the computer launchs the task manager
 action 3: the computer scans itself for viruses
 */
 computer.bootUp();
 computer.launchTaskManager();
 computer.scanForViruses();

/*
 9)
 Noun: Audio Plugin
 action 1: audio plugin plays sound
 action 2: audio plugin increase the pitch
 action 3: audio plugin add reverb
 */
 audioPlugin.play(sound);
 audioPlugin.pitchIncrease();
 audioPlugin.addReverb();


/*
 10)
 Noun: email
 action 1: send email
 action 2: read email 
 action 3: correct the grammar mistakes in the email
 */
 email.send();
 email.read();
 email.correctGrammar();


#endif

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
