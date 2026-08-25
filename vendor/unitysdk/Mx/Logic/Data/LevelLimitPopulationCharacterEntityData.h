#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class OverLimitBehavior; }
namespace MX::Logic::Skills { class TargetSortRule; }

#define MX_LOGIC_DATA_LEVELLIMITPOPULATIONCHARACTERENTITYDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FBE00)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LevelLimitPopulationCharacterEntityData_TypeDefinitionIndex = 13700;

	class LevelLimitPopulationCharacterEntityData : public Il2CppObject
	{
	public:
		::System::Int32 LimitPopulation; // 0x1B0
		::System::String* PopulationGroupId; // 0x1B8
		::MX::Logic::Data::OverLimitBehavior* OverLimitRule; // 0x1C0
		Il2CppObject* OverLimitAbility; // 0x1C8
		::MX::Logic::Skills::TargetSortRule* OverLimitTarget; // 0x1D0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELLIMITPOPULATIONCHARACTERENTITYDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

