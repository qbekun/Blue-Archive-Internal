#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandSetMovePathToDestructibleProjectile; }
namespace MX::Logic::Battles { class GroundCommand; }

#define GROUNDCOMMANDSETMOVEPATHTODESTRUCTIBLEPROJECTILEVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B8BF0)
#define GROUNDCOMMANDSETMOVEPATHTODESTRUCTIBLEPROJECTILEVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15B8CB0)
#define GROUNDCOMMANDSETMOVEPATHTODESTRUCTIBLEPROJECTILEVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B8CC0)

	inline static constexpr unsigned int GroundCommandSetMovePathToDestructibleProjectileVisual_TypeDefinitionIndex = 1188;

	class GroundCommandSetMovePathToDestructibleProjectileVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandSetMovePathToDestructibleProjectile* Command; // 0x18

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETMOVEPATHTODESTRUCTIBLEPROJECTILEVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETMOVEPATHTODESTRUCTIBLEPROJECTILEVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETMOVEPATHTODESTRUCTIBLEPROJECTILEVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

	};

