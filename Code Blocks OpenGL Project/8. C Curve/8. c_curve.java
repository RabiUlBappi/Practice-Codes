// Java Sample Implementation of Levy C Curve

import java.awt.Color;
import java.awt.Graphics;
import java.awt.Graphics2D;
import javax.swing.JFrame;
import javax.swing.JPanel;
import java.util.concurrent.ThreadLocalRandom;

public class c_curve extends JPanel {

    public float x, y, len, alpha_angle;
    public int iteration_n;

    public void paint(Graphics g) {
        Graphics2D g2d = (Graphics2D) g;
        c_curve(x, y, len, alpha_angle, iteration_n, g2d);
    }

    public void c_curve(double x, double y, double len, double alpha_angle, int iteration_n, Graphics2D g) {
        double fx = x; 
        double fy = y;
        double length = len;
        double alpha = alpha_angle;
        int it_n = iteration_n;
        if (it_n > 0) {
            length = (length / Math.sqrt(2));
            c_curve(fx, fy, length, (alpha + 45), (it_n - 1), g); // Recursive Call
            fx = (fx + (length * Math.cos(Math.toRadians(alpha + 45))));
            fy = (fy + (length * Math.sin(Math.toRadians(alpha + 45))));
            c_curve(fx, fy, length, (alpha - 45), (it_n - 1), g); // Recursive Call
        } else {
            Color[] A = {Color.RED, Color.ORANGE, Color.BLUE, Color.DARK_GRAY};
            g.setColor(A[ThreadLocalRandom.current().nextInt(0, A.length)]); //For Choosing Different Color Values
            g.drawLine((int) fx, (int) fy, (int) (fx + (length * Math.cos(Math.toRadians(alpha)))), (int) (fy + (length * Math.sin(Math.toRadians(alpha)))));
        }
    }

    public static void main(String[] args) {
        c_curve points = new c_curve();
        points.x = 200; // Stating x value
        points.y = 100; // Stating y value98
        points.len = 150; // Stating length value
        points.alpha_angle = 90; // Stating angle value
        points.iteration_n = 3; // Stating iteration value

        JFrame frame = new JFrame("Points");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.add(points);
        frame.setSize(500, 500);
        frame.setLocationRelativeTo(null);
        frame.setVisible(true);

    }
}