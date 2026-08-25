#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Data::Excel { class CharacterExcel; }
namespace MX::Logic::BattleEntities { class O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a; }
namespace MX::Data::Excel { class CharacterAIExcel; }
namespace MX::Logic::BattleEntities { class HeroSummaryDetailFlag; }

#define MX_LOGIC_BATTLEENTITIES_RAIDBOSSCHARACTER_BUILDDEFAULTBEHAVIORTREE_OFFSET UNITYSDK_OFFSET(0x1140AB0)
#define MX_LOGIC_BATTLEENTITIES_RAIDBOSSCHARACTER__BUILDDEFAULTBEHAVIORTREE_B__1_0_OFFSET UNITYSDK_OFFSET(0x11434B0)
#define MX_LOGIC_BATTLEENTITIES_RAIDBOSSCHARACTER__BUILDDEFAULTBEHAVIORTREE_B__1_3_OFFSET UNITYSDK_OFFSET(0x11434D0)
#define MX_LOGIC_BATTLEENTITIES_RAIDBOSSCHARACTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1137650)
#define MX_LOGIC_BATTLEENTITIES_RAIDBOSSCHARACTER_GET_SUMMARYDETAIL_OFFSET UNITYSDK_OFFSET(0x11434E0)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int RaidBossCharacter_TypeDefinitionIndex = 13113;

	class RaidBossCharacter : public Il2CppObject
	{
	public:
		::System::Void BuildDefaultBehaviorTree()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_RAIDBOSSCHARACTER_BUILDDEFAULTBEHAVIORTREE_OFFSET))(nullptr);
		}

		::System::Boolean _BuildDefaultBehaviorTree_b__1_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_RAIDBOSSCHARACTER__BUILDDEFAULTBEHAVIORTREE_B__1_0_OFFSET))(nullptr);
		}

		::System::Boolean _BuildDefaultBehaviorTree_b__1_3()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_RAIDBOSSCHARACTER__BUILDDEFAULTBEHAVIORTREE_B__1_3_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Data::Excel::CharacterExcel* arg3, ::MX::Logic::BattleEntities::O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a* arg4, ::MX::Data::Excel::CharacterAIExcel* arg5, ::System::Int32 arg6)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Data::Excel::CharacterExcel*, ::MX::Logic::BattleEntities::O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a*, ::MX::Data::Excel::CharacterAIExcel*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_RAIDBOSSCHARACTER_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::MX::Logic::BattleEntities::HeroSummaryDetailFlag* get_SummaryDetail()
		{
			return ((::MX::Logic::BattleEntities::HeroSummaryDetailFlag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_RAIDBOSSCHARACTER_GET_SUMMARYDETAIL_OFFSET))(nullptr);
		}

	};
}

