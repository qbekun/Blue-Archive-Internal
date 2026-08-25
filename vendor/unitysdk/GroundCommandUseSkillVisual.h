#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandUseSkill; }
namespace MX::Logic::Battles { class GroundCommand; }

#define GROUNDCOMMANDUSESKILLVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x1812740)
#define GROUNDCOMMANDUSESKILLVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1812800)
#define GROUNDCOMMANDUSESKILLVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x1812810)

	inline static constexpr unsigned int GroundCommandUseSkillVisual_TypeDefinitionIndex = 1209;

	class GroundCommandUseSkillVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandUseSkill* SpawnUseSkill; // 0x18

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDUSESKILLVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDUSESKILLVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDUSESKILLVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

	};

