#pragma once
#include "unitysdk.h"

class UILabel;
class UISprite;

#define UIGACHAPOPUPRETYTYPEMIX_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x25B6D60)
#define UIGACHAPOPUPRETYTYPEMIX_.CTOR_OFFSET UNITYSDK_OFFSET(0x25BAAB0)

	inline static constexpr unsigned int UIGachaPopupRetyTypeMix_TypeDefinitionIndex = 6272;

	class UIGachaPopupRetyTypeMix : public Il2CppObject
	{
	public:
		UILabel* messageLabel; // 0x18
		UILabel* messageSubLabel; // 0x20
		UISprite* ticketIcon; // 0x28
		UILabel* hasGemAmountLabel; // 0x30
		UILabel* hasTicketAmountLabel; // 0x38
		UILabel* afterHasTicketAmountLabel; // 0x40
		UILabel* costGemAmountLabel; // 0x48

		::System::Void Initialize(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Int64 arg4, ::System::String* str)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHAPOPUPRETYTYPEMIX_INITIALIZE_OFFSET))(arg, arg2, arg3, arg4, str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHAPOPUPRETYTYPEMIX_.CTOR_OFFSET))(nullptr);
		}

	};

