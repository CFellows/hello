===============================================================================
hello.exe - A hello world application with a little something extra
===============================================================================

During my time at Microsoft, I noticed that on occasion the default graphics
drivers are unable to display text to the screen.  This affects the progress
of some batch scripts as the execution of one application does not complete
until the program finishes displaying text to the screen.

You either need to update your display drivers or run the program minimized.

So I wrote this little console app with the STL high precision timer.  Using 
STL has the added benefit of being platform agnostic, and it is helpful to have
the syntax in a small example. Also it's my first public github project.

You might even wrap the timer into your own class so that you don't have to use
chrono::duration_cast<>.

Cheers,
 CFellows

===============================================================================
