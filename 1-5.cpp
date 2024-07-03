// introduction to iostream;

// std::cout cout << x;

/*
buffering

cout is buffered, meaning any output sent to it is first stored in a buffer
and then sent to console when all thhe data has been calculated, this means
that any fault in the program when calculating any of the output will result
in no output being produced
*/

/*
std::endl causes the buffer to be flushed, so we usually use \n instead.
\n can be used in either single quotes: '\n' or within double quotes "Hi\n"
*/

/*
std::cin : cin >> x;

operator>> first discards any leading whitespace (spaces, tabs, and newlines)
operator>> then extracts as many consecutive characters as it can, until it
encounters either a newline or a character that is not valid for the type.
Any non-extracted characters (including newlines) remain available for
the next extraction attempt.
If an extraction attempt extracts no characters, the object being extracted
to is assigned the value 0 (as of C++11), and any future extractions will
immediately fail (until std::cin is reset)
*/

// if any unexpected output is entered, cin enters a fail state.
// to check for and remove any fail state, the following can be used:
/*
    if (std::cin.fail()) {
        std::cin.clear(); // Clear the error state
    }
*/
// std::cin can be reset using std::cin.ignore()