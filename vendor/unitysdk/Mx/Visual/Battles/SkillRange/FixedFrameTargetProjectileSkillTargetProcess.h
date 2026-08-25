#pragma once
#include "../../../../unitysdk.h"

namespace MX::Visual::Battles::SkillRange { class SkillGuide; }
namespace MX::Logic::Actions { class IActiveSkill; }
namespace MX::GameData::DAO::Battle { class FixedFrameTargetProjectileEntityDAO; }
namespace MX::Visual::Battles::SkillRange { class SkillGuideState; }

#define MX_VISUAL_BATTLES_SKILLRANGE_FIXEDFRAMETARGETPROJECTILESKILLTARGETPROCESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D8BBE0)
#define MX_VISUAL_BATTLES_SKILLRANGE_FIXEDFRAMETARGETPROJECTILESKILLTARGETPROCESS_GETTARGETLIST_OFFSET UNITYSDK_OFFSET(0x1D8BC20)

namespace MX::Visual::Battles::SkillRange
{
	inline static constexpr unsigned int FixedFrameTargetProjectileSkillTargetProcess_TypeDefinitionIndex = 20364;

	class FixedFrameTargetProjectileSkillTargetProcess : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::Visual::Battles::SkillRange::SkillGuide* arg, ::MX::Logic::Actions::IActiveSkill* arg, ::MX::GameData::DAO::Battle::FixedFrameTargetProjectileEntityDAO* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::SkillRange::SkillGuide*, ::MX::Logic::Actions::IActiveSkill*, ::MX::GameData::DAO::Battle::FixedFrameTargetProjectileEntityDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_FIXEDFRAMETARGETPROJECTILESKILLTARGETPROCESS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* GetTargetList(::MX::Visual::Battles::SkillRange::SkillGuideState* arg)
		{
			return (return (Il2CppObject*(*)(::MX::Visual::Battles::SkillRange::SkillGuideState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_FIXEDFRAMETARGETPROJECTILESKILLTARGETPROCESS_GETTARGETLIST_OFFSET))(arg, nullptr);
		}

	};
}

