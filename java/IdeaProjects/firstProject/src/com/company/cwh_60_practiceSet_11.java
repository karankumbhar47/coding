package com.company;

import java.util.Scanner;

//question 1
abstract class Pen{
    abstract void refill();
    abstract void write();
    void erase(){
        System.out.println("This method is non Abstract method");
        System.out.println("Erasing...");
    }
}

//question2
class FountainPen extends Pen{
    @Override
    void erase() {
        super.erase();
        System.out.println("overriding method of class pen ");
        System.out.println("we can't erase...");
    }

    @Override
    void refill() {
        System.out.println("Refilling...");
    }

    @Override
    void write() {
        System.out.println("Writting...");
    }

    void changeNib(){
        System.out.println("Changing Nib of pen...");
    }
}

//question 3
interface BasicAnimal{
    void eat();
    void step();
}

class Monkey{
    void jump(){
        System.out.println("Jumping...");
    }
    void bite(){
        System.out.println("Biting...");
    }
}

class Human extends Monkey implements BasicAnimal{
    @Override
    public void eat() {
        System.out.println("Eating...");
    }

    @Override
    public void step() {
        System.out.println("Stepping...");
    }

    @Override
    void bite() {
        System.out.println("Chewing...");
    }

    void taking(){
        System.out.println("Talking...");
    }
}

//question 4
abstract class Telephone{
    abstract void ring();
    abstract void left();
    abstract void disconnect();
}

class SmartTelephone extends Telephone{

    @Override
    void ring(){
        System.out.println("Ringing...");
    }

    @Override
    void left(){
        System.out.println("lefting...");
    }

    @Override
    void disconnect(){
        System.out.println("Disconnecting...");
    }

    void call(){
        System.out.println("Calling...");
    }
}

//question 6
interface TvRemote{
    void nextChannel();
    void previousChannel();
    void increaseVolume();
    void decreaseVolume();
}

interface SmartTvRemote extends TvRemote{
    void goToChannel(int channel);
    void muteVolume();
    void showChannels();
}

class Tv implements SmartTvRemote{
    int channel = 100;
    int volume = 10;
    String channelsList[] = {"Sony","StarPravah","ZeeMarathi","ABPMaza"};

    void displayChannel(){
        System.out.println("Displaying channel number "+this.channel);
    }

    void displayVolume(){
        System.out.println("Volume "+this.volume+"%");
    }

    @Override
    public void showChannels() {
        for(String channel : channelsList){
            System.out.println(channel);
        }
    }

    @Override
    public void nextChannel() {
        this.channel += 1;
        if(channel>1000){
            channel = 100;
        }
        displayChannel();
    }

    @Override
    public void previousChannel(){
        channel-=1;
        if(channel<100){
            channel = 1000;
        }
        displayChannel();
    }

    @Override
    public void increaseVolume(){
        volume+=10;
        if(volume>100){
            volume=100;
        }
        displayVolume();
    }

    @Override
    public void decreaseVolume() {
        volume-=10;
        if(volume<0){
            volume=0;
        }
        displayVolume();
    }

    @Override
    public void goToChannel(int channel){
        if(channel>=100 && channel<=1000){
            this.channel = channel;
        }
        else{
            System.out.println("Invalid Channel number");
        }
        displayChannel();
    }

    @Override
    public void muteVolume() {
        volume = 0;
        displayVolume();
    }
}

public class cwh_60_practiceSet_11 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
//        Pen p = new FountainPen();
//        p.erase();
//        p.refill();
//        p.write();

//        FountainPen fp = new FountainPen();
//        fp.changeNib();
//        fp.erase();
//        fp.refill();
//        fp.write();

//        Human h = new Human();
//        h.eat();
//        h.step();
//        h.taking();
//        h.bite();
//        h.jump();
//        Monkey m = new Human();
//        m.bite();//override method will be used
//        m.jump();

//        Telephone t = new SmartTelephone();
//        t.disconnect();
//        t.left();
//        t.ring();
////        t.call();//not allowed;

        Tv t = new Tv();
        t.showChannels();
        t.nextChannel();
        t.increaseVolume();
        t.muteVolume();
        t.decreaseVolume();
        t.goToChannel(1002);


    }
}
