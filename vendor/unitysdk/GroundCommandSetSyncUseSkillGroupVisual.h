#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandSetSyncUseSkillGroup; }
namespace MX::Logic::Battles { class GroundCommand; }

#define GROUNDCOMMANDSETSYNCUSESKILLGROUPVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15B9670)
#define GROUNDCOMMANDSETSYNCUSESKILLGROUPVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B9680)
#define GROUNDCOMMANDSETSYNCUSESKILLGROUPVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x15B9740)

	inline static constexpr unsigned int GroundCommandSetSyncUseSkillGroupVisual_TypeDefinitionIndex = 1195;

	class GroundCommandSetSyncUseSkillGroupVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundCommandSetSyncUseSkillGroup* SetSyncUseSkillGroup; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETSYNCUSESKILLGROUPVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Logic::Battles::GroundCommand* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCommand*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETSYNCUSESKILLGROUPVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::GroundCommand* GetCommand()
		{
			return ((::MX::Logic::Battles::GroundCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETSYNCUSESKILLGROUPVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

	};

