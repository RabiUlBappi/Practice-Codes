roots :-
	write('Input the values of A, B, C consecutively or stop (end with.): '),
	read(A),
	read(B), 
	read(C),
	processroots(A,B,C).

processroots(stop) :- !.

processroots(X,Y,Z):-
	nl,

	Yn is -Y,
	Y2 is Y*Y,
	D is 4 * X * Z,
	F is Y2-D,
	E is sqrt(F),

	Root1 is (Yn+E)/(2*X),
	write('The root1 is: '),
	write(Root1),nl,nl,

	Root2 is (Yn-E)/(2*X),
	write('The root2 is: '),
	write(Root2),nl,nl,

roots.
