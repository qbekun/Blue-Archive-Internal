#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandAddSkillCost; }
namespace MX::Logic::Battles { class GroundCommand; }
namespace MX::Logic::Battles { class Battle; }

#define GROUNDCOMMANDADDSKILLCOSTVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15AC6D0)
#define GROUNDCOMMANDADDSKILLCOSTVISUAL_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x15AC790)
#define GROUNDCOMMANDADDSKILLCOSTVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15AC7A0)
#define GROUNDCOMMANDADDSKILLCOSTVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15AC7B0)

	inline static constexpr unsigned int GroundCommandAddSkillCostVisual_TypeDefinitionIndex = 1117;

	class GroundCommandAddSkillCostVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandAddSkillCost* AddSkillCost; // 0x18

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDADDSKILLCOSTVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void Visualize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDADDSKILLCOSTVISUAL_VISUALIZE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDADDSKILLCOSTVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDADDSKILLCOSTVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

