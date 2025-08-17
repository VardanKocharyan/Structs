#ifndef UNION_H
#define UNION_H


	union Representation {
		int inValue;
		float fValue;
	};
	
	union Data {
			int intValue;
			char charValue;
	};
	
	union Value {
			float floatValue;
			int intValue;
	};

	union Measurement {
			int length;
			float weight;
	};

	union Flag {
			int number;
			 char flag;
	};
	
	union Time {
			struct {
					int hours;
					int minutes;
			}First;
			
			struct {
				float totalHours;
			}Second;
	};

	union Currency {
			float usd;
			float eur;
	};

#endif
