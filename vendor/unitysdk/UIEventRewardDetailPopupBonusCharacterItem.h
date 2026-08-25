#pragma once
#include "unitysdk.h"

class UITexture;

#define UIEVENTREWARDDETAILPOPUPBONUSCHARACTERITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x24C25C0)
#define UIEVENTREWARDDETAILPOPUPBONUSCHARACTERITEM_SETDATA_OFFSET UNITYSDK_OFFSET(0x24C25D0)

	inline static constexpr unsigned int UIEventRewardDetailPopupBonusCharacterItem_TypeDefinitionIndex = 5895;

	class UIEventRewardDetailPopupBonusCharacterItem : public Il2CppObject
	{
	public:
		UITexture* characterIconTexture; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTREWARDDETAILPOPUPBONUSCHARACTERITEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTREWARDDETAILPOPUPBONUSCHARACTERITEM_SETDATA_OFFSET))(arg, nullptr);
		}

	};

