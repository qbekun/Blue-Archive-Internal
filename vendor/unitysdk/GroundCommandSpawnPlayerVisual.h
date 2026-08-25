#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandSpawnPlayer; }
namespace MX::Logic::Battles { class GroundCommand; }

#define GROUNDCOMMANDSPAWNPLAYERVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15BAA50)
#define GROUNDCOMMANDSPAWNPLAYERVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15BAA60)
#define GROUNDCOMMANDSPAWNPLAYERVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15BAB20)

	inline static constexpr unsigned int GroundCommandSpawnPlayerVisual_TypeDefinitionIndex = 1204;

	class GroundCommandSpawnPlayerVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandSpawnPlayer* SpawnPlayer; // 0x18

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSPAWNPLAYERVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSPAWNPLAYERVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSPAWNPLAYERVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

