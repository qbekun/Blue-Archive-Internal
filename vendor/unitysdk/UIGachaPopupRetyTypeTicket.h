#pragma once
#include "unitysdk.h"

class UILabel;
class UISprite;

#define UIGACHAPOPUPRETYTYPETICKET_.CTOR_OFFSET UNITYSDK_OFFSET(0x25BAAC0)
#define UIGACHAPOPUPRETYTYPETICKET_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x25B69E0)

	inline static constexpr unsigned int UIGachaPopupRetyTypeTicket_TypeDefinitionIndex = 6273;

	class UIGachaPopupRetyTypeTicket : public Il2CppObject
	{
	public:
		UILabel* messageLabel; // 0x18
		UILabel* messageSubLabel; // 0x20
		UISprite* ticketIcon; // 0x28
		UILabel* hasTicketAmountLabel; // 0x30
		UILabel* afterHasTicketAmountLabel; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHAPOPUPRETYTYPETICKET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::String* str)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Int64, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHAPOPUPRETYTYPETICKET_INITIALIZE_OFFSET))(arg, arg2, arg3, str, nullptr);
		}

	};

