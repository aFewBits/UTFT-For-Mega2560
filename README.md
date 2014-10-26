UTFT-For-Mega2560
=================

MCUFRIEND MEGA-2560 LCD Shield

UTFT with driver for ILI9327 8 bit mode

This is current version of UTFT (2.79) with modifications to support the ILI9327 LCD driver
in 8 bit mode. The modifications have been made with pre-processor directives (#ifdef's) so
that the changes can be readily identified for changes, removal, etc. The actual changes are
minimal and affect the "LCD_Writ_Bus" subroutines such that a single byte is written rather
than the leading zero that UTFT writes even in 8 bit mode. I do not know if this is a bug
in UTFT that has crept in over time as it did not exsist in very early (<1.3) versions.
As the very early versions had stability and speed issues, it was decided that updating
a current version library was a better approach than attempting to bring an older version
up to current features and speed.

Once the symbol "ILI9327_8BIT" is defined, UTFT no longer uses the variables declared in
the declaration during creation of the object and the proper pins and driver type are 
forced into place with preprocessor directives. Yes, it is a brute force approach but
this will allow the example files to be used as-is without having to change all of the 
driver model and pin declaration statments.
