#pragma once
#include "unitysdk.h"

class UISprite;

#define UIEVENTREWARDDETAILPOPUPDEBUFFITEM_SETDATA_OFFSET UNITYSDK_OFFSET(0x24C27B0)
#define UIEVENTREWARDDETAILPOPUPDEBUFFITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x24C2880)

	inline static constexpr unsigned int UIEventRewardDetailPopupDebuffItem_TypeDefinitionIndex = 5896;

	class UIEventRewardDetailPopupDebuffItem : public Il2CppObject
	{
	public:
		UISprite* debuffIconSprite; // 0x18

		::System::Void SetData(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTREWARDDETAILPOPUPDEBUFFITEM_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTREWARDDETAILPOPUPDEBUFFITEM_.CTOR_OFFSET))(nullptr);
		}

	};

