// enum EItemType içine ekle

ITEM_TYPE_DEW_S,


// ara
enum ECostumeSubTypes

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



// ara

WEAR_MAX_NUM,

// üstüne ekle
		WEAR_DEW_GREEN,
		WEAR_DEW_BLUE,
		WEAR_DEW_RED,
		WEAR_DEW_ORANGE,
		WEAR_DEW_YELLOW,
		WEAR_DEW_WHITE,


// ara
enum EItemWearableFlag

// içine ekle


WEARABLE_DEW = (1 << 14),// numaraya dikkat sonuncusu +1