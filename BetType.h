#ifndef BET_TYPE_H
#define BET_TYPE_H


class BetType{
public:
	static enum Type {
		STRAIGHT, 
		SPLIT, 
		STREET, 
		CORNER, 
		DOUBLE_STREET,
		TRIO,
		BASKET,
		TOP_LINE,
		MANQUE,
		PASSE,
		ROUGE_OU_NOIR,
		PAIR_OU_IMPAIR,
		DOZEN,
		COLUMN,
		SNAKE
	};
	
	static enum Location{ INSIDE, OUTSIDE};

	BetType(int m, Type t, Location l) : muliplier(m), type(t), location(l){}

	~BetType(){}

	int getMuliplier() const{
		return muliplier;
	}

	Type getType() const{
		return type;
	}

	Location getLocation() const{
		return location;
	}

private:
	int muliplier;
	Type type;
	Location location;
};

#endif // !BET_TYPE_H
