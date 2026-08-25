#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class LogicEffect; }

#define MX_MINIGAMESHOOTING_LOGICEFFECTTILE_AWAKE_OFFSET UNITYSDK_OFFSET(0x146A300)
#define MX_MINIGAMESHOOTING_LOGICEFFECTTILE_.CTOR_OFFSET UNITYSDK_OFFSET(0x146A380)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int LogicEffectTile_TypeDefinitionIndex = 15111;

	class LogicEffectTile : public Il2CppObject
	{
	public:
		::System::Boolean IgnoreEnemy; // 0x18
		::System::Boolean IgnorePlayer; // 0x19
		::MX::MinigameShooting::LogicEffect* LogicEffect; // 0x20

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_LOGICEFFECTTILE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_LOGICEFFECTTILE_.CTOR_OFFSET))(nullptr);
		}

	};
}

