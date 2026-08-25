#pragma once
#include "../../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class BarrierObstacleEntityDAO; }
namespace MX::Visual::Battles::SkillRange { class SkillGuide; }
namespace MX::Logic::Actions { class IActiveSkill; }
namespace MX::Visual::Battles::SkillRange { class SkillGuideState; }
namespace MX::Visual::Battles::SkillRange { class ISkillGuide; }

#define MX_VISUAL_BATTLES_SKILLRANGE_SUMMONBARRIEROBSTACLESKILLTARGETPROCESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DA4870)
#define MX_VISUAL_BATTLES_SKILLRANGE_SUMMONBARRIEROBSTACLESKILLTARGETPROCESS_GETTARGETLIST_OFFSET UNITYSDK_OFFSET(0x1DA48C0)
#define MX_VISUAL_BATTLES_SKILLRANGE_SUMMONBARRIEROBSTACLESKILLTARGETPROCESS_CANUSESKILLANDFINALGUIDETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1DA6170)

namespace MX::Visual::Battles::SkillRange
{
	inline static constexpr unsigned int SummonBarrierObstacleSkillTargetProcess_TypeDefinitionIndex = 20403;

	class SummonBarrierObstacleSkillTargetProcess : public Il2CppObject
	{
	public:
		::MX::GameData::DAO::Battle::BarrierObstacleEntityDAO* levelBarrierObstacleEntityData; // 0x148

		::System::Void .ctor(::MX::Visual::Battles::SkillRange::SkillGuide* arg, ::MX::Logic::Actions::IActiveSkill* arg, ::MX::GameData::DAO::Battle::BarrierObstacleEntityDAO* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::SkillRange::SkillGuide*, ::MX::Logic::Actions::IActiveSkill*, ::MX::GameData::DAO::Battle::BarrierObstacleEntityDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SUMMONBARRIEROBSTACLESKILLTARGETPROCESS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* GetTargetList(::MX::Visual::Battles::SkillRange::SkillGuideState* arg)
		{
			return (return (Il2CppObject*(*)(::MX::Visual::Battles::SkillRange::SkillGuideState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SUMMONBARRIEROBSTACLESKILLTARGETPROCESS_GETTARGETLIST_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanUseSkillAndFinalGuideTransform(::MX::Visual::Battles::SkillRange::SkillGuideState* arg, ::MX::Visual::Battles::SkillRange::ISkillGuide* arg)
		{
			return (return (::System::Boolean(*)(::MX::Visual::Battles::SkillRange::SkillGuideState*, ::MX::Visual::Battles::SkillRange::ISkillGuide*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SUMMONBARRIEROBSTACLESKILLTARGETPROCESS_CANUSESKILLANDFINALGUIDETRANSFORM_OFFSET))(arg, arg, nullptr);
		}

	};
}

