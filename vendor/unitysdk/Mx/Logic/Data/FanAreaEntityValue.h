#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class FanAreaEntityDAO; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }

#define MX_LOGIC_DATA_FANAREAENTITYVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1245540)
#define MX_LOGIC_DATA_FANAREAENTITYVALUE_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x12467E0)
#define MX_LOGIC_DATA_FANAREAENTITYVALUE_GET_ANGLEOFFSET_OFFSET UNITYSDK_OFFSET(0x12467F0)
#define MX_LOGIC_DATA_FANAREAENTITYVALUE_GET_DEGREE_OFFSET UNITYSDK_OFFSET(0x1246800)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int FanAreaEntityValue_TypeDefinitionIndex = 13962;

	class FanAreaEntityValue : public Uri
	{
	public:
		::System::Single _Radius_k__BackingField; // 0x1A8
		::System::Int32 _Degree_k__BackingField; // 0x1AC
		::System::Single _AngleOffset_k__BackingField; // 0x1B0

		::System::Void .ctor(::MX::GameData::DAO::Battle::FanAreaEntityDAO* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::System::Int32 arg3, ::MX::Logic::Skills::TargetCandidateRule* arg4, ::MX::Logic::Skills::TargetSortRule* arg5)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::FanAreaEntityDAO*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FANAREAENTITYVALUE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Single get_Radius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FANAREAENTITYVALUE_GET_RADIUS_OFFSET))(nullptr);
		}

		::System::Single get_AngleOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FANAREAENTITYVALUE_GET_ANGLEOFFSET_OFFSET))(nullptr);
		}

		::System::Int32 get_Degree()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FANAREAENTITYVALUE_GET_DEGREE_OFFSET))(nullptr);
		}

	};
}

