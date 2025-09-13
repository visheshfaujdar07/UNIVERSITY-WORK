clc; clear; close all;

x = 0:0.05:2*pi;   % plot x axis from (0 to 2pie)

y1 = sin(x);
y2 = sin(2*x);
y3 = sin(3*x);

figure
plot(x, y1, 'k-', x, y2, 'b*', x, y3, 'ro')

xlabel('x')
ylabel('y')
title('Sine functions: sin(x), sin(2x), sin(3x)')
legend('sin(x)', 'sin(2x)', 'sin(3x)')
grid on
