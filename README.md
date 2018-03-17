# CIGARParser
C++ CigarParser class.  
Provides straightforward interface to access CIGAR fields for aligned reads.  
Parses the CIGAR string as a contigous array of CIGAR operations.  
This enables each CIGAR operation to be accessed using array syntax.  
Example:
```c++
  CigarParser cp("80M12I8M");
  cout << cp.operation_at(2) << endl;
  cout << cp.length_at(2) << endl;
```

Prints the following to stdout:
```c++
M
8
```
