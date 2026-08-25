#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class LevelOneTimeAbilityDAO; }
namespace MX::Logic::Skills { class SkillSpecification; }

#define MX_LOGIC_DATA_ONETIMEABILITYVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1232A10)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int OneTimeAbilityValue_TypeDefinitionIndex = 13837;

	class OneTimeAbilityValue : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::GameData::DAO::Battle::LevelOneTimeAbilityDAO* arg, ::MX::Logic::Skills::SkillSpecification* arg2)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::LevelOneTimeAbilityDAO*, ::MX::Logic::Skills::SkillSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ONETIMEABILITYVALUE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};
}

