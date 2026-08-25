#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandActivateMovingArea; }
class BattleGroundCamera;
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class GroundCommand; }

#define GROUNDCOMMANDACTIVATEMOVINGAREAVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15AC550)
#define GROUNDCOMMANDACTIVATEMOVINGAREAVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15AC560)
#define GROUNDCOMMANDACTIVATEMOVINGAREAVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15AC570)

	inline static constexpr unsigned int GroundCommandActivateMovingAreaVisual_TypeDefinitionIndex = 1116;

	class GroundCommandActivateMovingAreaVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandActivateMovingArea* ActivateMovingArea; // 0x18
		BattleGroundCamera* groundCamera; // 0x20
		Il2CppObject* railPointInfos; // 0x28
		::MX::Logic::Battles::Battle* battle; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDACTIVATEMOVINGAREAVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDACTIVATEMOVINGAREAVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDACTIVATEMOVINGAREAVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

	};

