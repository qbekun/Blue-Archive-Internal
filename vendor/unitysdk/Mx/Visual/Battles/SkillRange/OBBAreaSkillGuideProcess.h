#pragma once
#include "../../../../unitysdk.h"

namespace MX::Visual::Battles::SkillRange { class SkillGuide; }
namespace MX::Logic::Actions { class IActiveSkill; }
namespace MX::GameData::DAO::Battle { class ObbAreaEntityDAO; }

#define MX_VISUAL_BATTLES_SKILLRANGE_OBBAREASKILLGUIDEPROCESS_DRAWSHAPE_OFFSET UNITYSDK_OFFSET(0x1D8FEE0)
#define MX_VISUAL_BATTLES_SKILLRANGE_OBBAREASKILLGUIDEPROCESS__.CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x1D8FF00)
#define MX_VISUAL_BATTLES_SKILLRANGE_OBBAREASKILLGUIDEPROCESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D8FF30)

namespace MX::Visual::Battles::SkillRange
{
	inline static constexpr unsigned int OBBAreaSkillGuideProcess_TypeDefinitionIndex = 20367;

	class OBBAreaSkillGuideProcess : public ::System::Net::Http::Headers::RangeItemHeaderValue
	{
	public:
		::System::Void DrawShape()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_OBBAREASKILLGUIDEPROCESS_DRAWSHAPE_OFFSET))(nullptr);
		}

		::System::Int32 _.ctor_b__0_0()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_OBBAREASKILLGUIDEPROCESS__.CTOR_B__0_0_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Visual::Battles::SkillRange::SkillGuide* arg, ::MX::Logic::Actions::IActiveSkill* arg, ::MX::GameData::DAO::Battle::ObbAreaEntityDAO* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::SkillRange::SkillGuide*, ::MX::Logic::Actions::IActiveSkill*, ::MX::GameData::DAO::Battle::ObbAreaEntityDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_OBBAREASKILLGUIDEPROCESS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

