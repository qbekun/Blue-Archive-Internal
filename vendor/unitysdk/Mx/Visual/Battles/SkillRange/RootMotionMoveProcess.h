#pragma once
#include "../../../../unitysdk.h"

namespace MX::Visual::Battles::SkillRange { class SkillGuideState; }
namespace MX::Visual::Battles::SkillRange { class ISkillGuide; }
namespace MX::Visual::Battles::SkillRange { class SkillGuide; }
namespace MX::Logic::Actions { class IActiveSkill; }
namespace MX::GameData::DAO::Battle { class RootMotionMoveDAO; }

#define MX_VISUAL_BATTLES_SKILLRANGE_ROOTMOTIONMOVEPROCESS_GETTARGETLIST_OFFSET UNITYSDK_OFFSET(0x1D97590)
#define MX_VISUAL_BATTLES_SKILLRANGE_ROOTMOTIONMOVEPROCESS_CANUSESKILLANDFINALGUIDETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1D975F0)
#define MX_VISUAL_BATTLES_SKILLRANGE_ROOTMOTIONMOVEPROCESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D97A80)

namespace MX::Visual::Battles::SkillRange
{
	inline static constexpr unsigned int RootMotionMoveProcess_TypeDefinitionIndex = 20375;

	class RootMotionMoveProcess : public Il2CppObject
	{
	public:
		::System::Boolean ignoreCrashByTSSObstacle; // 0x140

		Il2CppObject* GetTargetList(::MX::Visual::Battles::SkillRange::SkillGuideState* arg)
		{
			return (return (Il2CppObject*(*)(::MX::Visual::Battles::SkillRange::SkillGuideState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_ROOTMOTIONMOVEPROCESS_GETTARGETLIST_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanUseSkillAndFinalGuideTransform(::MX::Visual::Battles::SkillRange::SkillGuideState* arg, ::MX::Visual::Battles::SkillRange::ISkillGuide* arg)
		{
			return (return (::System::Boolean(*)(::MX::Visual::Battles::SkillRange::SkillGuideState*, ::MX::Visual::Battles::SkillRange::ISkillGuide*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_ROOTMOTIONMOVEPROCESS_CANUSESKILLANDFINALGUIDETRANSFORM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::MX::Visual::Battles::SkillRange::SkillGuide* arg, ::MX::Logic::Actions::IActiveSkill* arg, ::MX::GameData::DAO::Battle::RootMotionMoveDAO* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::SkillRange::SkillGuide*, ::MX::Logic::Actions::IActiveSkill*, ::MX::GameData::DAO::Battle::RootMotionMoveDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_ROOTMOTIONMOVEPROCESS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

