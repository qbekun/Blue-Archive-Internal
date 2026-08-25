#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class LevelDotAbilityDAO; }
namespace MX::Logic::Skills { class SkillSpecification; }

#define MX_LOGIC_DATA_DOTABILITYVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x12323E0)
#define MX_LOGIC_DATA_DOTABILITYVALUE_GET_INTERVAL_OFFSET UNITYSDK_OFFSET(0x12329F0)
#define MX_LOGIC_DATA_DOTABILITYVALUE_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x1232A00)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int DotAbilityValue_TypeDefinitionIndex = 13836;

	class DotAbilityValue : public Il2CppObject
	{
	public:
		::System::Int32 _TotalCount_k__BackingField; // 0x30
		::System::Int32 _Interval_k__BackingField; // 0x34

		::System::Void .ctor(::MX::GameData::DAO::Battle::LevelDotAbilityDAO* arg, ::MX::Logic::Skills::SkillSpecification* arg2)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::LevelDotAbilityDAO*, ::MX::Logic::Skills::SkillSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DOTABILITYVALUE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 get_Interval()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DOTABILITYVALUE_GET_INTERVAL_OFFSET))(nullptr);
		}

		::System::Int32 get_TotalCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DOTABILITYVALUE_GET_TOTALCOUNT_OFFSET))(nullptr);
		}

	};
}

