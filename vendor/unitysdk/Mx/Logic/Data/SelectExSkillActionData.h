#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class LevelSkillEntityData; }
namespace MX::Logic::Skills { class EssentialCandidateRule; }
namespace MX::Logic::Skills { class OptionalCandidateRule; }

#define MX_LOGIC_DATA_SELECTEXSKILLACTIONDATA_SHOULDSERIALIZESELECTABLEEXSKILLLIST_OFFSET UNITYSDK_OFFSET(0x11F9F20)
#define MX_LOGIC_DATA_SELECTEXSKILLACTIONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F9F70)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int SelectExSkillActionData_TypeDefinitionIndex = 13663;

	class SelectExSkillActionData : public Il2CppObject
	{
	public:
		::System::Int32 Range; // 0x18
		::MX::Logic::Data::LevelSkillEntityData* MainEntityData; // 0x20
		::MX::Logic::Skills::EssentialCandidateRule* EssentialCandidateRule; // 0x28
		::MX::Logic::Skills::OptionalCandidateRule* OptionalCandidateRule; // 0x38
		Il2CppObject* SelectableExSkillList; // 0xE8

		::System::Boolean ShouldSerializeSelectableExSkillList()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SELECTEXSKILLACTIONDATA_SHOULDSERIALIZESELECTABLEEXSKILLLIST_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SELECTEXSKILLACTIONDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

