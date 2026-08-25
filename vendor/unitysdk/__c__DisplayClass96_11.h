#pragma once
#include "unitysdk.h"

class UIPopup_NonEquipmentItem;

#define <>C__DISPLAYCLASS96_11_.CTOR_OFFSET UNITYSDK_OFFSET(0x2662FA0)
#define <>C__DISPLAYCLASS96_11__ADDPOPUPS_B__53_OFFSET UNITYSDK_OFFSET(0x2662FB0)
#define <>C__DISPLAYCLASS96_11__ADDPOPUPS_B__54_OFFSET UNITYSDK_OFFSET(0x2663110)

	inline static constexpr unsigned int <>c__DisplayClass96_11_TypeDefinitionIndex = 6654;

	class <>c__DisplayClass96_11 : public Il2CppObject
	{
	public:
		Il2CppObject* shortExperationItems; // 0x10
		::System::Boolean trackCompleted; // 0x18
		::System::Action* __9__54; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS96_11_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _AddPopups_b__53(UIPopup_NonEquipmentItem* arg)
		{
			((::System::Void(*)(UIPopup_NonEquipmentItem*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS96_11__ADDPOPUPS_B__53_OFFSET))(arg, nullptr);
		}

		::System::Void _AddPopups_b__54()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS96_11__ADDPOPUPS_B__54_OFFSET))(nullptr);
		}

	};

