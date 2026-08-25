#pragma once
#include "unitysdk.h"

class UIPopup_ParcelExchange;

#define <>C__DISPLAYCLASS96_17_.CTOR_OFFSET UNITYSDK_OFFSET(0x2663920)
#define <>C__DISPLAYCLASS96_17__ADDPOPUPS_B__66_OFFSET UNITYSDK_OFFSET(0x2663930)
#define <>C__DISPLAYCLASS96_17__ADDPOPUPS_B__67_OFFSET UNITYSDK_OFFSET(0x2663A20)

	inline static constexpr unsigned int <>c__DisplayClass96_17_TypeDefinitionIndex = 6660;

	class <>c__DisplayClass96_17 : public Il2CppObject
	{
	public:
		Il2CppObject* list; // 0x10
		::System::String* title; // 0x18
		::System::String* message; // 0x20
		::System::Boolean popupClosed; // 0x28
		::System::Action* __9__67; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS96_17_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _AddPopups_b__66(UIPopup_ParcelExchange* arg)
		{
			((::System::Void(*)(UIPopup_ParcelExchange*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS96_17__ADDPOPUPS_B__66_OFFSET))(arg, nullptr);
		}

		::System::Void _AddPopups_b__67()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS96_17__ADDPOPUPS_B__67_OFFSET))(nullptr);
		}

	};

