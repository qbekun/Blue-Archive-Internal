#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Actions { class HeroAction; }

#define MX_LOGIC_BATTLEENTITIES_SKILLACTIONREGISTEREDEVENTARGS_GET_SKILLACTION_OFFSET UNITYSDK_OFFSET(0x112E9F0)
#define MX_LOGIC_BATTLEENTITIES_SKILLACTIONREGISTEREDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x112EA00)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int SkillActionRegisteredEventArgs_TypeDefinitionIndex = 13061;

	class SkillActionRegisteredEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::Actions::HeroAction* _SkillAction_k__BackingField; // 0x10

		::MX::Logic::Actions::HeroAction* get_SkillAction()
		{
			return ((::MX::Logic::Actions::HeroAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTIONREGISTEREDEVENTARGS_GET_SKILLACTION_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Actions::HeroAction* arg)
		{
			((::System::Void(*)(::MX::Logic::Actions::HeroAction*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLACTIONREGISTEREDEVENTARGS_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

