import java.awt.*;
import javax.swing.*;
class Calculator1 extends JFrame{
    Calculator1(){
        GridLayout gd = new GridLayout(4,8);
        setLayout(gd);
        JButton b16 = new JButton("AC");
        add(b16);
        JButton b1 = new JButton("1");
        add(b1);
        JButton b2 = new JButton("2");
        add(b2);
        JButton b3 = new JButton("3");
        add(b3);
        JButton b4 = new JButton("4");
        add(b4);
        JButton b5 = new JButton("5");
        add(b5);
        JButton b6 = new JButton("6");
        add(b6);
        JButton b7 = new JButton("7");
        add(b7);
        JButton b8 = new JButton("8");
        add(b8);
        JButton b9 = new JButton("9");
        add(b9);
        JButton b10 = new JButton("0");
        add(b10);
        JButton b11 = new JButton("+");
        add(b11);
        JButton b12 = new JButton("-");
        add(b12);
        JButton b13 = new JButton("*");
        add(b13);
        JButton b14 = new JButton("/");
        add(b14);
        JButton b15 = new JButton("=");
        add(b15);
        setLocation(400,10);
        setSize(400,700);
        setVisible(true);
    }
    public static void main(String[] args){
        Calculator1 obj = new Calculator1();
    }
}