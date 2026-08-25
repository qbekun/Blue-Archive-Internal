#pragma once
#include "unitysdk.h"

class UIGrid;

#define NONEQUIPMENTITEMLIST_NOTSCROLLABLE_SETDATA_OFFSET UNITYSDK_OFFSET(0x2715CD0)
#define NONEQUIPMENTITEMLIST_NOTSCROLLABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2716330)
#define NONEQUIPMENTITEMLIST_NOTSCROLLABLE_GET_CARDCOUNT_OFFSET UNITYSDK_OFFSET(0x2716340)
#define NONEQUIPMENTITEMLIST_NOTSCROLLABLE_GET_ITEMCARDS_OFFSET UNITYSDK_OFFSET(0x2716260)
#define NONEQUIPMENTITEMLIST_NOTSCROLLABLE_GET_GRID_OFFSET UNITYSDK_OFFSET(0x27162C0)

	inline static constexpr unsigned int NonEquipmentItemList_NotScrollable_TypeDefinitionIndex = 7137;

	class NonEquipmentItemList_NotScrollable : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _itemCards; // 0x18
		UIGrid* _grid; // 0x20

		::System::Void SetData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NONEQUIPMENTITEMLIST_NOTSCROLLABLE_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NONEQUIPMENTITEMLIST_NOTSCROLLABLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_CardCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NONEQUIPMENTITEMLIST_NOTSCROLLABLE_GET_CARDCOUNT_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_itemCards()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NONEQUIPMENTITEMLIST_NOTSCROLLABLE_GET_ITEMCARDS_OFFSET))(nullptr);
		}

		UIGrid* get_grid()
		{
			return ((UIGrid*(*)(::PVOID))((::PBYTE)hIl2Cpp + NONEQUIPMENTITEMLIST_NOTSCROLLABLE_GET_GRID_OFFSET))(nullptr);
		}

	};

