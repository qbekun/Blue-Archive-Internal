#pragma once
#include "../../../../unitysdk.h"

namespace MX::Visual::Battles::SkillRange { class SkillGuide; }
namespace MX::Logic::Actions { class IActiveSkill; }
namespace MX::GameData::DAO::Battle { class BreathAreaEntityDAO; }

#define MX_VISUAL_BATTLES_SKILLRANGE_BREATHSKILLGUIDEPROCESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D89980)
#define MX_VISUAL_BATTLES_SKILLRANGE_BREATHSKILLGUIDEPROCESS_DRAWSHAPE_OFFSET UNITYSDK_OFFSET(0x1D89B80)

namespace MX::Visual::Battles::SkillRange
{
	inline static constexpr unsigned int BreathSkillGuideProcess_TypeDefinitionIndex = 20358;

	class BreathSkillGuideProcess : public ::System::Net::Http::Headers::RangeItemHeaderValue
	{
	public:
		::System::Void .ctor(::MX::Visual::Battles::SkillRange::SkillGuide* arg, ::MX::Logic::Actions::IActiveSkill* arg, ::MX::GameData::DAO::Battle::BreathAreaEntityDAO* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::SkillRange::SkillGuide*, ::MX::Logic::Actions::IActiveSkill*, ::MX::GameData::DAO::Battle::BreathAreaEntityDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_BREATHSKILLGUIDEPROCESS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DrawShape()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_BREATHSKILLGUIDEPROCESS_DRAWSHAPE_OFFSET))(nullptr);
		}

	};
}

