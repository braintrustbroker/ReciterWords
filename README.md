# ReciterWords
Ridiculously tiny voice synthesizer program using a massively huge collection of public domain sounds.

While browsing around for public domain material to be used in my programs I discovered several
websites like wyabdcrealpeopletts files on the ReciteWord project: 
http://www.huzheng.org/reciteword/index_en.html

By combining words from multiple sources I created a massively large collection of 26,567 words!

As for the code, it is less than 20 lines!!
It uses tricks from the standard C argv[] and the Windows PlaySound commands.

ReciterWords can be built as "r.exe" using ANY C/C++ compiler and run on Windows or WINE.
Remember to extract the "zWAV.7z" into .\zWAV directory.

Despite the tiny size of the program, and no real processing done on the input, it still
works and sounds great! Although it will skip around a bit in character since the 
voices are from multiple people. 

You just type:
r Hello world or whatever you want it to say

Don't put any punctuation in the sentences when using r.exe

Unknown words will not be spoken by using the SND_NODEFAULT trick to skip anything,
not found. 

Conversely you can add more vocabulary words just by copying them into the .\zWAV folder.

r.exe is NOT case sensitive because Windows operating system is not case sensitive, and
WINE also mimic this case insensitive behavior for the program.

The "build.bat" can be used to build "r.exe" with "r.c" using TCC Compiler if you wish.
You do have to edit the line "..\..\TCC\Tinycc\Win32\tcc.exe" to point to where your
tcc.exe compiler.

Or you can build this tiny program with your own compiler; Or just use the prebuilt r.exe

Remember to have fun and enjoy life!
Cheerio and Toodle Pip.

And have a Suntastic Day!!
;-)

![image](Applause.gif)
