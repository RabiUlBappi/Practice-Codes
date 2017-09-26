clc; 
clear all;
 
fc = 500; 
fs = fc*20;
F=(-fs/2:fs/2-1)/fs;
t = 0:1/fs:1;
ct = cos(2*pi*fc*t);
mt = cos(2*pi*10*t)+cos(2*pi*20*t)+cos(2*pi*30*t)+cos(2*pi*40*t)+cos(2*pi*50*t);
 
figure(1)
subplot(4,1,1),plot(F, fftshift(abs(fft(ct,fs))));
title('Carrier signal');
xlabel('frequency');
ylabel('amplitude');
grid on;
 
subplot(4,1,2),plot(F, fftshift(abs(fft(mt,fs))));
title('Message signal');
xlabel('frequency');
ylabel('amplitude');
grid on;
 
mod = ct.*mt;
subplot(4,1,3),plot(F, fftshift(abs(fft(mod,fs))));
title('Modulated Signal');
xlabel('frequency');
ylabel('amplitude');
grid on;
 
dmod = ct.*mod;
subplot(4,1,4),plot(F, fftshift(abs(fft(dmod,fs))));
title('Demodulated Signal');
xlabel('frequency');
ylabel('amplitude');
grid on;
