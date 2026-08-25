#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class SkillData; }

#define MX_MINIGAMESHOOTING_PUBLICSKILLBLACKBOARD_GET_CANUSEPUBLICSKILL_OFFSET UNITYSDK_OFFSET(0x145D2F0)
#define MX_MINIGAMESHOOTING_PUBLICSKILLBLACKBOARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x145D6E0)
#define MX_MINIGAMESHOOTING_PUBLICSKILLBLACKBOARD_USEPUBLICSKILL_OFFSET UNITYSDK_OFFSET(0x145D850)
#define MX_MINIGAMESHOOTING_PUBLICSKILLBLACKBOARD_UPDATE_OFFSET UNITYSDK_OFFSET(0x145D7C0)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int PublicSkillBlackBoard_TypeDefinitionIndex = 15048;

	class PublicSkillBlackBoard : public Il2CppObject
	{
	public:
		::MX::MinigameShooting::SkillData* PublicSkillData; // 0x10
		::System::Single publicSkillCoolTime; // 0x18
		::System::Single publicSkillTimer; // 0x1C

		::System::Boolean get_CanUsePublicSkill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PUBLICSKILLBLACKBOARD_GET_CANUSEPUBLICSKILL_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameShooting::SkillData* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::SkillData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PUBLICSKILLBLACKBOARD_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void UsePublicSkill()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PUBLICSKILLBLACKBOARD_USEPUBLICSKILL_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PUBLICSKILLBLACKBOARD_UPDATE_OFFSET))(nullptr);
		}

	};
}

