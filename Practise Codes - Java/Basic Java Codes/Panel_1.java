import java.awt.*;
import javax.swing.*;
public class Panel extends JFrame{
    Panel(){
        BorderLayout grid=new BorderLayout();
        setLayout(grid);
        JTextField f=new JTextField();
        add(f,grid.NORTH);
        JPanel p=new JPanel();
        add(p,grid.CENTER);
        setLocation(200,30);
        setSize(250,300);
        setVisible(true);
        GridLayout grid1=new GridLayout(3,5);
        p.setLayout(grid1);
        JButton b1[]=new JButton[25];
        String bn[]={"7","8","9","+","-","4","5","6","*","/","1","2","3","=","DEL"};
        for(int i=0;i<=15;i++){
            b1[i]=new JButton(bn[i]);
            p.add(b1[i]);
        }
    }
    public static void main (String[] args){
        Panel o=new Panel();
    }
}