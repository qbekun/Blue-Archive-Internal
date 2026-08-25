#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class ObbAreaEntityDAO; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }

#define MX_LOGIC_DATA_OBBAREAENTITYVALUE_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x12493C0)
#define MX_LOGIC_DATA_OBBAREAENTITYVALUE_GET_ANGLEOFFSET_OFFSET UNITYSDK_OFFSET(0x12493D0)
#define MX_LOGIC_DATA_OBBAREAENTITYVALUE_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x12493E0)
#define MX_LOGIC_DATA_OBBAREAENTITYVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x12493F0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ObbAreaEntityValue_TypeDefinitionIndex = 13970;

	class ObbAreaEntityValue : public Uri
	{
	public:
		::System::Single _Width_k__BackingField; // 0x1A8
		::System::Single _Height_k__BackingField; // 0x1AC
		::System::Single _AngleOffset_k__BackingField; // 0x1B0

		::System::Single get_Width()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_OBBAREAENTITYVALUE_GET_WIDTH_OFFSET))(nullptr);
		}

		::System::Single get_AngleOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_OBBAREAENTITYVALUE_GET_ANGLEOFFSET_OFFSET))(nullptr);
		}

		::System::Single get_Height()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_OBBAREAENTITYVALUE_GET_HEIGHT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::ObbAreaEntityDAO* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::System::Int32 arg3, ::MX::Logic::Skills::TargetCandidateRule* arg4, ::MX::Logic::Skills::TargetSortRule* arg5)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::ObbAreaEntityDAO*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_OBBAREAENTITYVALUE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

	};
}

