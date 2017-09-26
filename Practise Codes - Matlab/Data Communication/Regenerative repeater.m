% Muhammad Rabiul Alam

clc;
clear all;

t = linspace(1,2,1024);
x=sin(2*pi*10*t)+sin(2*pi*20*t);
y = awgn(x,0.5); 
subplot(3,1,1);
hold on;
plot(t,y,'g--'); 
plot(t,x,'k','LineWidth',2); 
xlabel('Time');
ylabel('Amplitude');
legend('noisy signal','true signal');

y = 2*y; 

Y = fft(y);
subplot(3,1,2);
plot(t,Y); 
xlabel('Frequency');
ylabel('Amplitude');
legend('amplified filtered signal');

r = 20;
rectangle = zeros(size(Y));
rectangle(1:r+1) = 1;
rectangle(end-r+1:end) = 1;     
y_rect = ifft(Y.*rectangle);
subplot(3,1,3);
plot(t,y_rect,'r','LineWidth',2);
xlabel('Time');
ylabel('Amplitude');
legend('amplified true signal');

