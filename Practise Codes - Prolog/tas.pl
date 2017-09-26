go:- menu. 

menu:-
	nl,nl,
	write('1. Convert Celsius temperature in to Fahrenheit.'),nl,
	write('2. Find the Area and Volume of a cube.'),nl, 
	write('3. Find the Roots of a quadratic equation.'),nl,
	write('Choice: '),
	read(Choice), choice(Choice). 

choice(1):-
	nl,
	write('Input celsius temperature: '),
	read(N), nl,
	Result is 9/5*N+32, 
	write('The temperature is: '),
	write(Result),
	write(' dgree fahrenheit. '),nl,nl,
	menu. 
choice(2):-
	nl,
	write('a. Find cube area.'),nl,
	write('b. Find cube volume.'),nl, 
	write('c. Find both area and volume.'),nl, 
	write('Choice: '),
	read(Cchoice), cchoice(Cchoice).
choice(3):-
	nl,
	write('A = '),
	read( A ),
	( 
		A = 0 , write('A should be non zero.');
		write('B = '),
		read( B ),
		write('C = '),
		read( C ),
		D is B * B -4* A * C ,
		( 
			D = 0 , 
				write('x = '), 
				X is -B / (2 * A) , 
				write( X );

			D > 0 , 
				write('x1 = '), 
				X1 is ( -B + sqrt( D )) /2/ A , 
				write( X1 ), nl, 
				write('x2 = '), 
				X2 is ( -B - sqrt( D ))/2/ A , 
				write( X2 );


			R is - B / (2 * A) , I is abs( sqrt( -D ) / (2 * A) ),

			write('x1 = ('), 
			write( R ), 
			write(', '), 
			write( I ), 
			write('i)'), nl,

			write('x2 = ('), 
			write( R ), 
			write(', -'), 
			write( I ), 
			write('i)')
		)
	), menu.
choice(_):-write('Please try again!'),menu. 


cchoice(a):-
	nl,
	write('Input the cube edge: '),
	read(N),
	write('The cube area is: '),
	Area is N*N,
	write(Area),nl,
	menu.
cchoice(b):-
	nl,
	write('Input the cube edge: '),
	read(N),
	write('The cube volume is: '),
	Volume is N*N*N,
	write(Volume),nl,
	menu.
cchoice(c):-
	nl,
	write('Input the cube edge: '),
	read(N),nl,
	write('The cube area is: '),
	Area is N*N,
	write(Area),nl,
	write('The cube volume is: '),
	Volume is N*N*N,
	write(Volume),nl,
	menu.