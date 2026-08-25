#pragma once
#include "unitysdk.h"

class UIEnemyInfoAdvantage;

#define UIADVANTAGEINDEXPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x24E8D00)

	inline static constexpr unsigned int UIAdvantageIndexPopup_TypeDefinitionIndex = 6020;

	class UIAdvantageIndexPopup : public Il2CppObject
	{
	public:
		UIEnemyInfoAdvantage* advantage; // 0xD8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIADVANTAGEINDEXPOPUP_.CTOR_OFFSET))(nullptr);
		}

	};

