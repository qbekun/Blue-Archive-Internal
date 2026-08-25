#pragma once
#include "unitysdk.h"

#define UITUTORIALBATTLECHARACTERPOS_.CTOR_OFFSET UNITYSDK_OFFSET(0xB7F480)
#define UITUTORIALBATTLECHARACTERPOS_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB7F490)
#define UITUTORIALBATTLECHARACTERPOS_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB7FC80)

	inline static constexpr unsigned int UITutorialBattleCharacterPos_TypeDefinitionIndex = 8511;

	class UITutorialBattleCharacterPos : public Il2CppObject
	{
	public:
		::System::Boolean playerTaget; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITUTORIALBATTLECHARACTERPOS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITUTORIALBATTLECHARACTERPOS_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITUTORIALBATTLECHARACTERPOS_ONDISABLE_OFFSET))(nullptr);
		}

	};

