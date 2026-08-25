#pragma once
#include "../../../../unitysdk.h"

namespace MX::Visual::Battles::SkillRange { class SkillGuide; }
namespace MX::Logic::Actions { class IActiveSkill; }
namespace MX::GameData::DAO::Battle { class DonutAreaEntityDAO; }

#define MX_VISUAL_BATTLES_SKILLRANGE_DONUTAREASKILLGUIDEPROCESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D8A9E0)
#define MX_VISUAL_BATTLES_SKILLRANGE_DONUTAREASKILLGUIDEPROCESS_DRAWSHAPE_OFFSET UNITYSDK_OFFSET(0x1D8AC10)

namespace MX::Visual::Battles::SkillRange
{
	inline static constexpr unsigned int DonutAreaSkillGuideProcess_TypeDefinitionIndex = 20361;

	class DonutAreaSkillGuideProcess : public ::System::Net::Http::Headers::RangeItemHeaderValue
	{
	public:
		::System::Void .ctor(::MX::Visual::Battles::SkillRange::SkillGuide* arg, ::MX::Logic::Actions::IActiveSkill* arg, ::MX::GameData::DAO::Battle::DonutAreaEntityDAO* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::SkillRange::SkillGuide*, ::MX::Logic::Actions::IActiveSkill*, ::MX::GameData::DAO::Battle::DonutAreaEntityDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_DONUTAREASKILLGUIDEPROCESS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DrawShape()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_DONUTAREASKILLGUIDEPROCESS_DRAWSHAPE_OFFSET))(nullptr);
		}

	};
}

