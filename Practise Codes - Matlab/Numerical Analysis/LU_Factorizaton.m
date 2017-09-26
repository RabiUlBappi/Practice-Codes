A = [1 3 8;1 4 3;1 3 4];
B = [4;-2;1];
[L,U] = lu(A);
L
U
d = L\B;
x = U\d;
x
y = U\x;
y
