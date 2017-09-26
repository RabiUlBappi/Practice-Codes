cubeAV :-
	write('Input the cube edge or stop (end with.): '),
	read(E),
	processcubeAV(E).

processcubeAV(stop) :- !.

processcubeAV(N):-
	nl,
	Area is N*N, 
	Volume is N*N*N, 
	write('The cube area is: '),
	write(Area),nl,nl,
	write('The cube volume is: '),
	write(Volume),nl,nl,

cubeAV.
