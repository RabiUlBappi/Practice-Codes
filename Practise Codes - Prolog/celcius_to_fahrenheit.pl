ctof :-
	write('Input celsius temperature or stop (end with.): '),
	read(C), 
	processctof(C).

processctof(stop) :- !.

processctof(N):-
	nl,
	Result is 9/5*N+32, 
	write('The temperature is: '),
	write(Result),
	write(' dgree fahrenheit. '),nl,nl,

ctof.
