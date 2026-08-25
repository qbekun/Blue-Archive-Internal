#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandSpawnEntity; }
namespace MX::Logic::Battles { class GroundCommand; }

#define GROUNDCOMMANDSPAWNENTITYVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15BA970)
#define GROUNDCOMMANDSPAWNENTITYVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15BAA30)
#define GROUNDCOMMANDSPAWNENTITYVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15BAA40)

	inline static constexpr unsigned int GroundCommandSpawnEntityVisual_TypeDefinitionIndex = 1203;

	class GroundCommandSpawnEntityVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandSpawnEntity* SpawnEntity; // 0x18

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSPAWNENTITYVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSPAWNENTITYVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSPAWNENTITYVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

