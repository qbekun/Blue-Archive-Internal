#pragma once
#include "../../../../unitysdk.h"

namespace MX::Visual::Battles::SkillRange { class SkillGuide; }
namespace MX::Logic::Actions { class IActiveSkill; }
namespace MX::GameData::DAO::Battle { class TargetSkillEntityDAO; }
namespace MX::GameData::DAO::Battle { class SkillEntityDAO; }
namespace MX::Visual::Battles::SkillRange { class SkillGuideState; }

#define MX_VISUAL_BATTLES_SKILLRANGE_TARGETSKILLGUIDEPROCESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DA74E0)
#define MX_VISUAL_BATTLES_SKILLRANGE_TARGETSKILLGUIDEPROCESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DA74F0)
#define MX_VISUAL_BATTLES_SKILLRANGE_TARGETSKILLGUIDEPROCESS_GETTARGETLIST_OFFSET UNITYSDK_OFFSET(0x1DA7500)

namespace MX::Visual::Battles::SkillRange
{
	inline static constexpr unsigned int TargetSkillGuideProcess_TypeDefinitionIndex = 20407;

	class TargetSkillGuideProcess : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::Visual::Battles::SkillRange::SkillGuide* arg, ::MX::Logic::Actions::IActiveSkill* arg, ::MX::GameData::DAO::Battle::TargetSkillEntityDAO* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::SkillRange::SkillGuide*, ::MX::Logic::Actions::IActiveSkill*, ::MX::GameData::DAO::Battle::TargetSkillEntityDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_TARGETSKILLGUIDEPROCESS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::MX::Visual::Battles::SkillRange::SkillGuide* arg, ::MX::Logic::Actions::IActiveSkill* arg, ::MX::GameData::DAO::Battle::SkillEntityDAO* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::SkillRange::SkillGuide*, ::MX::Logic::Actions::IActiveSkill*, ::MX::GameData::DAO::Battle::SkillEntityDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_TARGETSKILLGUIDEPROCESS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* GetTargetList(::MX::Visual::Battles::SkillRange::SkillGuideState* arg)
		{
			return (return (Il2CppObject*(*)(::MX::Visual::Battles::SkillRange::SkillGuideState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_TARGETSKILLGUIDEPROCESS_GETTARGETLIST_OFFSET))(arg, nullptr);
		}

	};
}

