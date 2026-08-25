#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::BattleEntities { class SupportActor; }
namespace MX::Logic::BattleEntities { class SkillSlot; }

#define MX_LOGIC_SKILLS_SKILLFACTORY_CREATESKILLCARD_OFFSET UNITYSDK_OFFSET(0x13EBBA0)
#define MX_LOGIC_SKILLS_SKILLFACTORY_CREATESKILLCARD_OFFSET UNITYSDK_OFFSET(0x13EC290)
#define MX_LOGIC_SKILLS_SKILLFACTORY_CREATECARRIERSKILLCARD_OFFSET UNITYSDK_OFFSET(0x13EC970)
#define MX_LOGIC_SKILLS_SKILLFACTORY_ISEXSKILL_OFFSET UNITYSDK_OFFSET(0x13EC280)

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int SkillFactory_TypeDefinitionIndex = 14590;

	class SkillFactory : public Il2CppObject
	{
	public:
		Il2CppObject* CreateSkillCard(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			return ((Il2CppObject*(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLFACTORY_CREATESKILLCARD_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CreateSkillCard(::MX::Logic::BattleEntities::SupportActor* arg)
		{
			return ((Il2CppObject*(*)(::MX::Logic::BattleEntities::SupportActor*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLFACTORY_CREATESKILLCARD_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CreateCarrierSkillCard(::MX::Logic::BattleEntities::SupportActor* arg)
		{
			return ((Il2CppObject*(*)(::MX::Logic::BattleEntities::SupportActor*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLFACTORY_CREATECARRIERSKILLCARD_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsExSkill(::MX::Logic::BattleEntities::SkillSlot* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLFACTORY_ISEXSKILL_OFFSET))(arg, nullptr);
		}

	};
}

