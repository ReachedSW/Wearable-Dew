# Inventory classının içinde ara

def RefreshEquipSlotWindow(self):


# içinde bul

		if app.ENABLE_NEW_EQUIPMENT_SYSTEM:
			for i in xrange(player.NEW_EQUIPMENT_SLOT_COUNT):
				slotNumber = player.NEW_EQUIPMENT_SLOT_START + i
				itemCount = getItemCount(slotNumber)
				if itemCount <= 1:
					itemCount = 0
				self.wndSecondary.SetItemSlot(slotNumber, getItemVNum(slotNumber), itemCount)



#altına ekle
				#Dew
				self.wndDew.SetItemSlot(item.EQUIPMENT_DEW_GREEN, getItemVNum(item.EQUIPMENT_DEW_GREEN), 0)
				self.wndDew.SetItemSlot(item.EQUIPMENT_DEW_BLUE, getItemVNum(item.EQUIPMENT_DEW_BLUE), 0)
				self.wndDew.SetItemSlot(item.EQUIPMENT_DEW_RED, getItemVNum(item.EQUIPMENT_DEW_RED), 0)
				self.wndDew.SetItemSlot(item.EQUIPMENT_DEW_ORANGE, getItemVNum(item.EQUIPMENT_DEW_ORANGE), 0)
				self.wndDew.SetItemSlot(item.EQUIPMENT_DEW_YELLOW, getItemVNum(item.EQUIPMENT_DEW_YELLOW), 0)
				self.wndDew.SetItemSlot(item.EQUIPMENT_DEW_WHITE, getItemVNum(item.EQUIPMENT_DEW_WHITE), 0)