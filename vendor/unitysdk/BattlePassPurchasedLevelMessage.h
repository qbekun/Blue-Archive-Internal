#pragma once
#include "unitysdk.h"

#define BATTLEPASSPURCHASEDLEVELMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA7FD20)

	inline static constexpr unsigned int BattlePassPurchasedLevelMessage_TypeDefinitionIndex = 7899;

	class BattlePassPurchasedLevelMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSPURCHASEDLEVELMESSAGE_.CTOR_OFFSET))(nullptr);
		}

	};

