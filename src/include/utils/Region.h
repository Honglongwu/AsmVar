/* Author : Shujia Huang
 * Date   : 2013-10-2
 *
 * Region class
 */
#ifndef __REGION_H__
#define __REGION_H__

#include <iostream>

using namespace std;

class Region {

public:
    string id;
    unsigned long int start;
    unsigned long int end;
	string info;

public:
    Region () : start(0), end (0) { id.clear(); info.clear(); }
    Region ( const Region &R ) { // The copy construct function. 
		id = R.id; start = R.start; end = R.end; info = R.info; 
	}

public:

	void OutErrReg() {
		cerr << "# " << id << "\t" << start << "\t" << end << "\t" << info << "\n";
    }

	bool IsOverlap ( Region &R ) { // determine overlap other region or not!
		bool flag (false);
		if ( (id == R.id) && (start <= R.end && end >= R.start) ) flag = true;
		return flag;
	}
	bool isEmpty () { return (end == 0); }
};

#endif
