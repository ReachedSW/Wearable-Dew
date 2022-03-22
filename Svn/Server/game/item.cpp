//ara

int CItem::FindEquipCell(LPCHARACTER ch, int iCandidateCell)

//içinde bul

if ((0 == GetWearFlag() || ITEM_TOTEM == GetType()) && ITEM_COSTUME != GetType() && ITEM_DS != GetType() && ITEM_SPECIAL_DS != GetType() && ITEM_RING != GetType() && ITEM_BELT != GetType())

// kontrolün sonuna şunu ekle

&& GetType() != ITEM_DEW_S


// ara
	else if (GetWearFlag() & WEARABLE_UNIQUE)
	{
		if (ch->GetWear(WEAR_UNIQUE1))
			return WEAR_UNIQUE2;
		else
			return WEAR_UNIQUE1;
	}

// altına ekle

	else if (GetType() == ITEM_DEW_S)
	{
		if (GetSubType() == DEW_GREEN)
			return WEAR_DEW_GREEN;
		else if (GetSubType() == DEW_BLUE)
			return WEAR_DEW_BLUE;
		else if (GetSubType() == DEW_RED)
			return WEAR_DEW_RED;
		else if (GetSubType() == DEW_ORANGE)
			return WEAR_DEW_ORANGE;
		else if (GetSubType() == DEW_YELLOW)
			return WEAR_DEW_YELLOW;
		else if (GetSubType() == DEW_WHITE)
			return WEAR_DEW_WHITE;
	}


// ara

bool CItem::IsEquipable() const

// içine ekle return true'nun üstüne
case ITEM_DEW_S: