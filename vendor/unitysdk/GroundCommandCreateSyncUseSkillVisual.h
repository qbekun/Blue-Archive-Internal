#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandCreateSyncUseSkill; }
namespace MX::Logic::Battles { class GroundCommand; }

#define GROUNDCOMMANDCREATESYNCUSESKILLVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15AF430)
#define GROUNDCOMMANDCREATESYNCUSESKILLVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15AF4F0)
#define GROUNDCOMMANDCREATESYNCUSESKILLVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15AF500)

	inline static constexpr unsigned int GroundCommandCreateSyncUseSkillVisual_TypeDefinitionIndex = 1135;

	class GroundCommandCreateSyncUseSkillVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandCreateSyncUseSkill* CreateSyncUseSkill; // 0x18

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCREATESYNCUSESKILLVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCREATESYNCUSESKILLVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCREATESYNCUSESKILLVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

