#pragma once
#include "../../../../unitysdk.h"

namespace MX::Visual::Battles::SkillRange { class SkillGuide; }
namespace MX::Logic::Actions { class IActiveSkill; }
namespace MX::GameData::DAO::Battle { class CircleAreaEntityDAO; }

#define MX_VISUAL_BATTLES_SKILLRANGE_CIRCLEAREASKILLGUIDEPROCESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D89BA0)
#define MX_VISUAL_BATTLES_SKILLRANGE_CIRCLEAREASKILLGUIDEPROCESS_DRAWSHAPE_OFFSET UNITYSDK_OFFSET(0x1D89D60)

namespace MX::Visual::Battles::SkillRange
{
	inline static constexpr unsigned int CircleAreaSkillGuideProcess_TypeDefinitionIndex = 20359;

	class CircleAreaSkillGuideProcess : public ::System::Net::Http::Headers::RangeItemHeaderValue
	{
	public:
		::System::Void .ctor(::MX::Visual::Battles::SkillRange::SkillGuide* arg, ::MX::Logic::Actions::IActiveSkill* arg, ::MX::GameData::DAO::Battle::CircleAreaEntityDAO* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::SkillRange::SkillGuide*, ::MX::Logic::Actions::IActiveSkill*, ::MX::GameData::DAO::Battle::CircleAreaEntityDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_CIRCLEAREASKILLGUIDEPROCESS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DrawShape()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_CIRCLEAREASKILLGUIDEPROCESS_DRAWSHAPE_OFFSET))(nullptr);
		}

	};
}

