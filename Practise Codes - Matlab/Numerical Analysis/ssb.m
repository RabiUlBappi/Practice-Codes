clc;
clear all;
Fs = 8000; % Sampling rate is 8000 samples per second.
Fc = 300; % Carrier frequency in Hz
t = [0:.2*Fs]'/Fs; % Sampling times for .2 second
x = sin(20*pi*t)+2*cos(2*pi*20*t); % Representation of the 
y = ammod(x,Fc,Fs); % DSB-SC signal
z = ssbmod(x,Fc,Fs); % SSB signal
subplot(3,1,1); plot(t,x); % Plot x on top.
title('Original Signal');
subplot(3,1,2); plot(t,y)% Plot y below.
title('DSB-SC Modulated Signal');
subplot(3,1,3); plot(t,z)% Plot z below y.
title('SSB Modulated Signal');
% Demodulation of DSB-SC AM signal
s1 = amdemod(y,Fc,Fs); % Demodulate.
subplot(3,1,1); plot(t,y);
title('DSB-SC Modulated Signal');
subplot(3,1,2); plot(t,x);
title('Original Signal');
subplot(3,1,3); plot(t,s1);
title('Recovered Signal');
s2 = ssbdemod(z,Fc,Fs); % Demodulate.
subplot(3,1,1); plot(t,z);
title('SSB Modulated Signal');
subplot(3,1,2); plot(t,x);
title('Original Signal');
subplot(3,1,3); plot(t,s2);
title('Recovered Signal');
