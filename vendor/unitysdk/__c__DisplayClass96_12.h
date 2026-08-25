#pragma once
#include "unitysdk.h"

class UIPopup_NonEquipmentItem;

#define <>C__DISPLAYCLASS96_12_.CTOR_OFFSET UNITYSDK_OFFSET(0x2663120)
#define <>C__DISPLAYCLASS96_12__ADDPOPUPS_B__55_OFFSET UNITYSDK_OFFSET(0x2663130)
#define <>C__DISPLAYCLASS96_12__ADDPOPUPS_B__56_OFFSET UNITYSDK_OFFSET(0x2663290)

	inline static constexpr unsigned int <>c__DisplayClass96_12_TypeDefinitionIndex = 6655;

	class <>c__DisplayClass96_12 : public Il2CppObject
	{
	public:
		Il2CppObject* shortExpired; // 0x10
		::System::Boolean trackCompleted; // 0x18
		::System::Action* __9__56; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS96_12_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _AddPopups_b__55(UIPopup_NonEquipmentItem* arg)
		{
			((::System::Void(*)(UIPopup_NonEquipmentItem*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS96_12__ADDPOPUPS_B__55_OFFSET))(arg, nullptr);
		}

		::System::Void _AddPopups_b__56()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS96_12__ADDPOPUPS_B__56_OFFSET))(nullptr);
		}

	};

