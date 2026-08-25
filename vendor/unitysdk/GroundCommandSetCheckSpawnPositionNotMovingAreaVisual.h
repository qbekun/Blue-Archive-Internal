#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandSetCheckSpawnPositionNotMovingArea; }
namespace MX::Logic::Battles { class GroundCommand; }

#define GROUNDCOMMANDSETCHECKSPAWNPOSITIONNOTMOVINGAREAVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15B8660)
#define GROUNDCOMMANDSETCHECKSPAWNPOSITIONNOTMOVINGAREAVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B8670)
#define GROUNDCOMMANDSETCHECKSPAWNPOSITIONNOTMOVINGAREAVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B8680)

	inline static constexpr unsigned int GroundCommandSetCheckSpawnPositionNotMovingAreaVisual_TypeDefinitionIndex = 1185;

	class GroundCommandSetCheckSpawnPositionNotMovingAreaVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandSetCheckSpawnPositionNotMovingArea* Command; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETCHECKSPAWNPOSITIONNOTMOVINGAREAVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETCHECKSPAWNPOSITIONNOTMOVINGAREAVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETCHECKSPAWNPOSITIONNOTMOVINGAREAVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

	};

