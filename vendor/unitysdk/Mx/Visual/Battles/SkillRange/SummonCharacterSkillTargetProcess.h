#pragma once
#include "../../../../unitysdk.h"

namespace MX::Data::Excel { class CharacterExcel; }
namespace MX::GameData::DAO::Battle { class CharacterEntityDAO; }
namespace MX::Visual::Battles::SkillRange { class SkillGuide; }
namespace MX::Logic::Actions { class IActiveSkill; }
namespace MX::Visual::Battles::SkillRange { class SkillGuideState; }
namespace MX::Visual::Battles::SkillRange { class ISkillGuide; }

#define MX_VISUAL_BATTLES_SKILLRANGE_SUMMONCHARACTERSKILLTARGETPROCESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DA6D70)
#define MX_VISUAL_BATTLES_SKILLRANGE_SUMMONCHARACTERSKILLTARGETPROCESS_CANUSESKILLANDFINALGUIDETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1DA6F60)
#define MX_VISUAL_BATTLES_SKILLRANGE_SUMMONCHARACTERSKILLTARGETPROCESS_SET_DEFINEEXCEL_OFFSET UNITYSDK_OFFSET(0x1DA7430)
#define MX_VISUAL_BATTLES_SKILLRANGE_SUMMONCHARACTERSKILLTARGETPROCESS_GET_DEFINEEXCEL_OFFSET UNITYSDK_OFFSET(0x1DA7450)

namespace MX::Visual::Battles::SkillRange
{
	inline static constexpr unsigned int SummonCharacterSkillTargetProcess_TypeDefinitionIndex = 20406;

	class SummonCharacterSkillTargetProcess : public Il2CppObject
	{
	public:
		::MX::Data::Excel::CharacterExcel* _defineExcel_k__BackingField; // 0x148
		::System::Boolean ignoreCrashByTSSObstacle; // 0x158
		::MX::GameData::DAO::Battle::CharacterEntityDAO* characterEntityData; // 0x160

		::System::Void .ctor(::MX::Visual::Battles::SkillRange::SkillGuide* arg, ::MX::Logic::Actions::IActiveSkill* arg, ::MX::GameData::DAO::Battle::CharacterEntityDAO* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::SkillRange::SkillGuide*, ::MX::Logic::Actions::IActiveSkill*, ::MX::GameData::DAO::Battle::CharacterEntityDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SUMMONCHARACTERSKILLTARGETPROCESS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean CanUseSkillAndFinalGuideTransform(::MX::Visual::Battles::SkillRange::SkillGuideState* arg, ::MX::Visual::Battles::SkillRange::ISkillGuide* arg)
		{
			return (return (::System::Boolean(*)(::MX::Visual::Battles::SkillRange::SkillGuideState*, ::MX::Visual::Battles::SkillRange::ISkillGuide*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SUMMONCHARACTERSKILLTARGETPROCESS_CANUSESKILLANDFINALGUIDETRANSFORM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_defineExcel(::MX::Data::Excel::CharacterExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::CharacterExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SUMMONCHARACTERSKILLTARGETPROCESS_SET_DEFINEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CharacterExcel* get_defineExcel()
		{
			return (return (::MX::Data::Excel::CharacterExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SUMMONCHARACTERSKILLTARGETPROCESS_GET_DEFINEEXCEL_OFFSET))(nullptr);
		}

	};
}

