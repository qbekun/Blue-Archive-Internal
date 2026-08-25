#pragma once
#include "unitysdk.h"

class UIParcelGridScrollViewController;

#define NONEQUIPMENTITEMLIST_SCROLLABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2716400)
#define NONEQUIPMENTITEMLIST_SCROLLABLE_SETDATA_OFFSET UNITYSDK_OFFSET(0x2716410)
#define NONEQUIPMENTITEMLIST_SCROLLABLE_GET_SCROLLVIEWCONTROLLER_OFFSET UNITYSDK_OFFSET(0x27167E0)
#define NONEQUIPMENTITEMLIST_SCROLLABLE_REFRESH_OFFSET UNITYSDK_OFFSET(0x2716850)

	inline static constexpr unsigned int NonEquipmentItemList_Scrollable_TypeDefinitionIndex = 7139;

	class NonEquipmentItemList_Scrollable : public Il2CppObject
	{
	public:
		UIParcelGridScrollViewController* _scrollViewController; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NONEQUIPMENTITEMLIST_SCROLLABLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NONEQUIPMENTITEMLIST_SCROLLABLE_SETDATA_OFFSET))(arg, nullptr);
		}

		UIParcelGridScrollViewController* get_scrollViewController()
		{
			return ((UIParcelGridScrollViewController*(*)(::PVOID))((::PBYTE)hIl2Cpp + NONEQUIPMENTITEMLIST_SCROLLABLE_GET_SCROLLVIEWCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NONEQUIPMENTITEMLIST_SCROLLABLE_REFRESH_OFFSET))(nullptr);
		}

	};

