#pragma once
#include "../../../../unitysdk.h"

namespace MX::Data { class GroundObstacleData; }
namespace MX::GameData::DAO::Battle { class ObstacleEntityDAO; }
namespace MX::Visual::Battles::SkillRange { class SkillGuideState; }
namespace MX::Visual::Battles::SkillRange { class ISkillGuide; }
namespace MX::Visual::Battles::SkillRange { class SkillGuide; }
namespace MX::Logic::Actions { class IActiveSkill; }

#define MX_VISUAL_BATTLES_SKILLRANGE_SUMMONOBSTACLESKILLTARGETPROCESS_CANUSESKILLANDFINALGUIDETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1DA2900)
#define MX_VISUAL_BATTLES_SKILLRANGE_SUMMONOBSTACLESKILLTARGETPROCESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2D70)
#define MX_VISUAL_BATTLES_SKILLRANGE_SUMMONOBSTACLESKILLTARGETPROCESS_GETTARGETLIST_OFFSET UNITYSDK_OFFSET(0x1DA2F40)

namespace MX::Visual::Battles::SkillRange
{
	inline static constexpr unsigned int SummonObstacleSkillTargetProcess_TypeDefinitionIndex = 20402;

	class SummonObstacleSkillTargetProcess : public Il2CppObject
	{
	public:
		::MX::Data::GroundObstacleData* obstacleData; // 0x148
		::MX::GameData::DAO::Battle::ObstacleEntityDAO* levelObstacleEntityData; // 0x150

		::System::Boolean CanUseSkillAndFinalGuideTransform(::MX::Visual::Battles::SkillRange::SkillGuideState* arg, ::MX::Visual::Battles::SkillRange::ISkillGuide* arg)
		{
			return (return (::System::Boolean(*)(::MX::Visual::Battles::SkillRange::SkillGuideState*, ::MX::Visual::Battles::SkillRange::ISkillGuide*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SUMMONOBSTACLESKILLTARGETPROCESS_CANUSESKILLANDFINALGUIDETRANSFORM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::MX::Visual::Battles::SkillRange::SkillGuide* arg, ::MX::Logic::Actions::IActiveSkill* arg, ::MX::GameData::DAO::Battle::ObstacleEntityDAO* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::SkillRange::SkillGuide*, ::MX::Logic::Actions::IActiveSkill*, ::MX::GameData::DAO::Battle::ObstacleEntityDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SUMMONOBSTACLESKILLTARGETPROCESS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* GetTargetList(::MX::Visual::Battles::SkillRange::SkillGuideState* arg)
		{
			return (return (Il2CppObject*(*)(::MX::Visual::Battles::SkillRange::SkillGuideState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SUMMONOBSTACLESKILLTARGETPROCESS_GETTARGETLIST_OFFSET))(arg, nullptr);
		}

	};
}

