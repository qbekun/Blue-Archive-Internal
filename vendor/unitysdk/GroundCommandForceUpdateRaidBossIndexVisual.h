#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandForceUpdateRaidBossIndex; }
namespace MX::Logic::Battles { class GroundCommand; }

#define GROUNDCOMMANDFORCEUPDATERAIDBOSSINDEXVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B0F40)
#define GROUNDCOMMANDFORCEUPDATERAIDBOSSINDEXVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15B0F50)
#define GROUNDCOMMANDFORCEUPDATERAIDBOSSINDEXVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B0F60)

	inline static constexpr unsigned int GroundCommandForceUpdateRaidBossIndexVisual_TypeDefinitionIndex = 1149;

	class GroundCommandForceUpdateRaidBossIndexVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandForceUpdateRaidBossIndex* UpdateRaidBossIndex; // 0x18

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFORCEUPDATERAIDBOSSINDEXVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFORCEUPDATERAIDBOSSINDEXVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDFORCEUPDATERAIDBOSSINDEXVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

	};

