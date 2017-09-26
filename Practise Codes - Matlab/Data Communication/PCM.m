% Muhammad Rabiul Alam

clc;
clear all;
t = 0:0.0005:20;
part = -1:0.1:1;
cb = -1:0.1:1.1;
x=sin(1*t)+sin(2*t)+sin(3*t)+sin(4*t);
[index,quants] = quantiz(x,part,cb);
subplot(5,1,1);
plot(t,x);
title('Message Signal');
xlabel('Time(s) ---->')
ylabel('Amplitude(V) ---->')
subplot(5,1,2);
plot(t,quants);
title('Flat top PAM Signal');
xlabel('Time(s) ---->')
ylabel('Amplitude(V) ---->')
y = uencode(quants,2);
subplot(5,1,3);
plot(t,y);
title('Quantized PAM Signal');
xlabel('Time(s) ---->');
ylabel('Amplitude(V) ---->')
c=compand(x,9999,2,'mu/compressor');
e1=uencode(c,2);
d1=udecode(e1,2);
subplot(5,1,4);
plot(t,x-d1);
title('Error Signal');
xlabel('Time(s) ---->');
ylabel('Amplitude(V) ---->')
subplot(5,1,5);
plot(t,d1);
title('PCM Signal');
xlabel('Time(s) ---->');
ylabel('Amplitude(V) ---->')