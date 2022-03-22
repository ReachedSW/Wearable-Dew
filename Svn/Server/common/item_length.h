// enum EItemTypes'ın sonuna ekle

ITEM_DEW_S,


// ara

enum EItemWearableFlag

// üstüne ekle
enum EDewSubTypes
{
	DEW_GREEN,
	DEW_BLUE,
	DEW_RED,
	DEW_ORANGE,
	DEW_YELLOW,
	DEW_WHITE,
	DEW_MAX_NUM,
};



// EItemWearableFlag içine ekle 

WEARABLE_DEW = (1 << 14), // sayıya dikkat