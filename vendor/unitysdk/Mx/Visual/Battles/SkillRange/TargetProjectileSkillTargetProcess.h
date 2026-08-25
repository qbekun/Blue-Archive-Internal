#pragma once
#include "../../../../unitysdk.h"

namespace MX::Visual::Battles::SkillRange { class SkillGuide; }
namespace MX::Logic::Actions { class IActiveSkill; }
namespace MX::GameData::DAO::Battle { class TargetProjectileEntityDAO; }
namespace MX::Visual::Battles::SkillRange { class SkillGuideState; }

#define MX_VISUAL_BATTLES_SKILLRANGE_TARGETPROJECTILESKILLTARGETPROCESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D91D40)
#define MX_VISUAL_BATTLES_SKILLRANGE_TARGETPROJECTILESKILLTARGETPROCESS_GETTARGETLIST_OFFSET UNITYSDK_OFFSET(0x1D91D80)

namespace MX::Visual::Battles::SkillRange
{
	inline static constexpr unsigned int TargetProjectileSkillTargetProcess_TypeDefinitionIndex = 20370;

	class TargetProjectileSkillTargetProcess : public Il2CppObject
	{
	public:
		::System::Boolean hasLoggedEmptyNodeError; // 0x148

		::System::Void .ctor(::MX::Visual::Battles::SkillRange::SkillGuide* arg, ::MX::Logic::Actions::IActiveSkill* arg, ::MX::GameData::DAO::Battle::TargetProjectileEntityDAO* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::SkillRange::SkillGuide*, ::MX::Logic::Actions::IActiveSkill*, ::MX::GameData::DAO::Battle::TargetProjectileEntityDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_TARGETPROJECTILESKILLTARGETPROCESS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* GetTargetList(::MX::Visual::Battles::SkillRange::SkillGuideState* arg)
		{
			return (return (Il2CppObject*(*)(::MX::Visual::Battles::SkillRange::SkillGuideState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_TARGETPROJECTILESKILLTARGETPROCESS_GETTARGETLIST_OFFSET))(arg, nullptr);
		}

	};
}

