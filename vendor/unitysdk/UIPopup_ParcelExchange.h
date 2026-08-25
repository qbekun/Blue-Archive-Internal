#pragma once
#include "unitysdk.h"

class UIParcelExchangeListItem;
class ParcelExchangeList_Scrollable;
class UILabel;
class MXButton;

#define UIPOPUP_PARCELEXCHANGE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2770E00)
#define UIPOPUP_PARCELEXCHANGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2771080)
#define UIPOPUP_PARCELEXCHANGE_AWAKE_OFFSET UNITYSDK_OFFSET(0x2771090)
#define UIPOPUP_PARCELEXCHANGE_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2771290)
#define UIPOPUP_PARCELEXCHANGE_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x2770FC0)

	inline static constexpr unsigned int UIPopup_ParcelExchange_TypeDefinitionIndex = 7344;

	class UIPopup_ParcelExchange : public Il2CppObject
	{
	public:
		UIParcelExchangeListItem* Type1; // 0xD8
		ParcelExchangeList_Scrollable* Type2Scroll; // 0xE0
		UILabel* title; // 0xE8
		UILabel* message; // 0xF0
		MXButton* closeButton; // 0xF8
		MXButton* confirmButton; // 0x100
		::System::Action* closeCallback; // 0x108

		::System::Void Initialize(Il2CppObject* arg, ::System::String* str, ::System::String* str2, ::System::Action* arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::String*, ::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_PARCELEXCHANGE_INITIALIZE_OFFSET))(arg, str, str2, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_PARCELEXCHANGE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_PARCELEXCHANGE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_PARCELEXCHANGE_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_PARCELEXCHANGE_ONCLICKCLOSE_OFFSET))(nullptr);
		}

	};

