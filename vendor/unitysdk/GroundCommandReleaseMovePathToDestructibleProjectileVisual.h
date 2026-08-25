#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandReleaseMovePathToDestructibleProjectile; }
namespace MX::Logic::Battles { class GroundCommand; }

#define GROUNDCOMMANDRELEASEMOVEPATHTODESTRUCTIBLEPROJECTILEVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B7D00)
#define GROUNDCOMMANDRELEASEMOVEPATHTODESTRUCTIBLEPROJECTILEVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15B7D10)
#define GROUNDCOMMANDRELEASEMOVEPATHTODESTRUCTIBLEPROJECTILEVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B7D20)

	inline static constexpr unsigned int GroundCommandReleaseMovePathToDestructibleProjectileVisual_TypeDefinitionIndex = 1179;

	class GroundCommandReleaseMovePathToDestructibleProjectileVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandReleaseMovePathToDestructibleProjectile* Command; // 0x18

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDRELEASEMOVEPATHTODESTRUCTIBLEPROJECTILEVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDRELEASEMOVEPATHTODESTRUCTIBLEPROJECTILEVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDRELEASEMOVEPATHTODESTRUCTIBLEPROJECTILEVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

	};

