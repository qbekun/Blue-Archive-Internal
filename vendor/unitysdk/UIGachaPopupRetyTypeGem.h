#pragma once
#include "unitysdk.h"

class UILabel;

#define UIGACHAPOPUPRETYTYPEGEM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x25B6BE0)
#define UIGACHAPOPUPRETYTYPEGEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x25BAAA0)

	inline static constexpr unsigned int UIGachaPopupRetyTypeGem_TypeDefinitionIndex = 6271;

	class UIGachaPopupRetyTypeGem : public Il2CppObject
	{
	public:
		UILabel* messageLabel; // 0x18
		UILabel* messageSubLabel; // 0x20
		UILabel* hasGemAmountLabel; // 0x28
		UILabel* costGemAmountLabel; // 0x30

		::System::Void Initialize(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHAPOPUPRETYTYPEGEM_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHAPOPUPRETYTYPEGEM_.CTOR_OFFSET))(nullptr);
		}

	};

