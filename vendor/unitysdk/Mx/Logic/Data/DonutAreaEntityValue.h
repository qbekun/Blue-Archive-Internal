#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class DonutAreaEntityDAO; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }

#define MX_LOGIC_DATA_DONUTAREAENTITYVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x12466E0)
#define MX_LOGIC_DATA_DONUTAREAENTITYVALUE_GET_EXCLUDERADIUS_OFFSET UNITYSDK_OFFSET(0x12467D0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int DonutAreaEntityValue_TypeDefinitionIndex = 13961;

	class DonutAreaEntityValue : public Il2CppObject
	{
	public:
		::System::Single _ExcludeRadius_k__BackingField; // 0x1B8

		::System::Void .ctor(::MX::GameData::DAO::Battle::DonutAreaEntityDAO* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::System::Int32 arg3, ::MX::Logic::Skills::TargetCandidateRule* arg4, ::MX::Logic::Skills::TargetSortRule* arg5)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::DonutAreaEntityDAO*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DONUTAREAENTITYVALUE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Single get_ExcludeRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DONUTAREAENTITYVALUE_GET_EXCLUDERADIUS_OFFSET))(nullptr);
		}

	};
}

