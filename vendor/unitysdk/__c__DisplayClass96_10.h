#pragma once
#include "unitysdk.h"

namespace MX::Data { class CurrencyData; }
class UIPopup_ParcelExchange;

#define <>C__DISPLAYCLASS96_10_.CTOR_OFFSET UNITYSDK_OFFSET(0x2662E20)
#define <>C__DISPLAYCLASS96_10__ADDPOPUPS_B__50_OFFSET UNITYSDK_OFFSET(0x2662E30)
#define <>C__DISPLAYCLASS96_10__ADDPOPUPS_B__51_OFFSET UNITYSDK_OFFSET(0x2662EA0)
#define <>C__DISPLAYCLASS96_10__ADDPOPUPS_B__52_OFFSET UNITYSDK_OFFSET(0x2662F90)

	inline static constexpr unsigned int <>c__DisplayClass96_10_TypeDefinitionIndex = 6653;

	class <>c__DisplayClass96_10 : public Il2CppObject
	{
	public:
		::MX::Data::CurrencyData* currencyData; // 0x10
		Il2CppObject* list; // 0x18
		::System::String* title; // 0x20
		::System::String* message; // 0x28
		::System::Boolean trackCompleted; // 0x30
		::System::Action* __9__52; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS96_10_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _AddPopups_b__50(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS96_10__ADDPOPUPS_B__50_OFFSET))(arg, nullptr);
		}

		::System::Void _AddPopups_b__51(UIPopup_ParcelExchange* arg)
		{
			((::System::Void(*)(UIPopup_ParcelExchange*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS96_10__ADDPOPUPS_B__51_OFFSET))(arg, nullptr);
		}

		::System::Void _AddPopups_b__52()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS96_10__ADDPOPUPS_B__52_OFFSET))(nullptr);
		}

	};

