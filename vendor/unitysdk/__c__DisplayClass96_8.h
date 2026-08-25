#pragma once
#include "unitysdk.h"

namespace MX::Data { class CurrencyData; }
class UIPopup_NonEquipmentItem;

#define <>C__DISPLAYCLASS96_8_.CTOR_OFFSET UNITYSDK_OFFSET(0x2662AC0)
#define <>C__DISPLAYCLASS96_8__ADDPOPUPS_B__44_OFFSET UNITYSDK_OFFSET(0x2662AD0)
#define <>C__DISPLAYCLASS96_8__ADDPOPUPS_B__45_OFFSET UNITYSDK_OFFSET(0x2662B40)
#define <>C__DISPLAYCLASS96_8__ADDPOPUPS_B__46_OFFSET UNITYSDK_OFFSET(0x2662CA0)

	inline static constexpr unsigned int <>c__DisplayClass96_8_TypeDefinitionIndex = 6651;

	class <>c__DisplayClass96_8 : public Il2CppObject
	{
	public:
		::MX::Data::CurrencyData* currencyData; // 0x10
		Il2CppObject* deleted; // 0x18
		::System::Boolean trackCompleted; // 0x20
		::System::Action* __9__46; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS96_8_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _AddPopups_b__44(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS96_8__ADDPOPUPS_B__44_OFFSET))(arg, nullptr);
		}

		::System::Void _AddPopups_b__45(UIPopup_NonEquipmentItem* arg)
		{
			((::System::Void(*)(UIPopup_NonEquipmentItem*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS96_8__ADDPOPUPS_B__45_OFFSET))(arg, nullptr);
		}

		::System::Void _AddPopups_b__46()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS96_8__ADDPOPUPS_B__46_OFFSET))(nullptr);
		}

	};

