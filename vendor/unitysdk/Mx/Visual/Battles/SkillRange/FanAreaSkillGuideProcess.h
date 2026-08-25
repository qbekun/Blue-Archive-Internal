#pragma once
#include "../../../../unitysdk.h"

namespace MX::Visual::Battles::SkillRange { class SkillGuide; }
namespace MX::Logic::Actions { class IActiveSkill; }
namespace MX::GameData::DAO::Battle { class FanAreaEntityDAO; }

#define MX_VISUAL_BATTLES_SKILLRANGE_FANAREASKILLGUIDEPROCESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D8AC30)
#define MX_VISUAL_BATTLES_SKILLRANGE_FANAREASKILLGUIDEPROCESS_DRAWSHAPE_OFFSET UNITYSDK_OFFSET(0x1D8AE30)

namespace MX::Visual::Battles::SkillRange
{
	inline static constexpr unsigned int FanAreaSkillGuideProcess_TypeDefinitionIndex = 20362;

	class FanAreaSkillGuideProcess : public ::System::Net::Http::Headers::RangeItemHeaderValue
	{
	public:
		::System::Void .ctor(::MX::Visual::Battles::SkillRange::SkillGuide* arg, ::MX::Logic::Actions::IActiveSkill* arg, ::MX::GameData::DAO::Battle::FanAreaEntityDAO* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::SkillRange::SkillGuide*, ::MX::Logic::Actions::IActiveSkill*, ::MX::GameData::DAO::Battle::FanAreaEntityDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_FANAREASKILLGUIDEPROCESS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DrawShape()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_FANAREASKILLGUIDEPROCESS_DRAWSHAPE_OFFSET))(nullptr);
		}

	};
}

