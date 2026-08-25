#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class CircleAreaEntityDAO; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }

#define MX_LOGIC_DATA_CIRCLEAREAENTITYVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1245BD0)
#define MX_LOGIC_DATA_CIRCLEAREAENTITYVALUE_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1245C80)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CircleAreaEntityValue_TypeDefinitionIndex = 13958;

	class CircleAreaEntityValue : public Uri
	{
	public:
		::System::Single _Radius_k__BackingField; // 0x1A8

		::System::Void .ctor(::MX::GameData::DAO::Battle::CircleAreaEntityDAO* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::System::Int32 arg3, ::MX::Logic::Skills::TargetCandidateRule* arg4, ::MX::Logic::Skills::TargetSortRule* arg5)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::CircleAreaEntityDAO*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CIRCLEAREAENTITYVALUE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Single get_Radius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CIRCLEAREAENTITYVALUE_GET_RADIUS_OFFSET))(nullptr);
		}

	};
}

