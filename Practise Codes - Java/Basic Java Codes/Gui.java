import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.event.*;
public class Gui extends JFrame implements ActionListener{
    public double total1=0,total2=0;
    public TextField tf;
    public int index=0;
   
    Gui(){
        super("Basic Calculator");
		BorderLayout br =new BorderLayout();
		setLayout(br);
		tf =new TextField();      
		add(tf,br.NORTH);               
		JPanel jp=new JPanel(new GridLayout(4,5));
		add(jp,br.CENTER);		
		String button[]={"7","8","9","/","=","4","5","6","*","CLEAR",
				"1","2","3","+","-","AC","0","."
				};
		JButton jb[]=new JButton[20];
		for(int i=0;i<18;i++)
		{
			jb[i]=new JButton(button[i]);
			jp.add(jb[i]);
			jb[i].addActionListener(this);
		}
    }
    public static void main(String[] args) {
        		Gui go=new Gui();
		go.setSize(250,300);
		go.setLocation(200,100);
		go.setVisible(true);
    }
    @Override
    public void actionPerformed(ActionEvent e) {
		for(int i=0;i<=9;i++)
		{
			if(String.valueOf(i).equals(e.getActionCommand()))
			{
				tf.setText(tf.getText()+i);
			}
		}
                if("+".equals(e.getActionCommand())){
                    tf.setText(tf.getText()+" + ");
                    index=1;                    
                }
                if("-".equals(e.getActionCommand())){
                    tf.setText(tf.getText()+" - ");
                    index=2;
                }
                if("*".equals(e.getActionCommand())){
                    tf.setText(tf.getText()+" * ");
                    index=3;
                }
                if("/".equals(e.getActionCommand())){
                    tf.setText(tf.getText()+" / ");
                    index=4;
                }
                if("AC".equals(e.getActionCommand()))
		{
                    tf.setText("");
		}
                if(".".equals(e.getActionCommand()))
		{
                    tf.setText(".");
		}
                
                if("CLEAR".equals(e.getActionCommand()))
		{
                    tf.setText("0");
		}
            
                if("=".equals(e.getActionCommand())){
                    String s=tf.getText().toString();
                    if(index==1){
                        
                       int index1=s.indexOf("+");
                        String s1=s.substring(0,index1);
                        String s2=s.substring(index1+1);
                        total1=Double.parseDouble(s1);
                        total2=Double.parseDouble(s2);
                        total1=total1+total2;
                       
                    }
                    if(index==2){
                        int index2=s.indexOf("-");
                        String s3=s.substring(0,index2);
                        String s4=s.substring(index2+1);
                        total1=Double.parseDouble(s3);
                        total2=Double.parseDouble(s4);
                        total1=total1-total2;                       
                 }
                    if(index==3){
                        int index3=s.indexOf("*");
                        String s5=s.substring(0,index3);
                        String s6=s.substring(index3+1);
                        total1=Double.parseDouble(s5);
                        total2=Double.parseDouble(s6);
                        total1=total1*total2;   
                    }                    
                    if(index==4){
                        int index4=s.indexOf("/");
                        String s7=s.substring(0,index4);
                        String s8=s.substring(index4+1);
                        total1=Double.parseDouble(s7);
                        total2=Double.parseDouble(s8);
                        total1=total1/total2;   
                    }
                                        
                    String ans=Double.toString(total1);
                    tf.setText(ans);
                }
           }
}