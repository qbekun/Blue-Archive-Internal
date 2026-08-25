#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class TargetSkillEntityDAO; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }

#define MX_LOGIC_DATA_TARGETSKILLENTITYVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1249070)
#define MX_LOGIC_DATA_TARGETSKILLENTITYVALUE_GET_ABILITIES_OFFSET UNITYSDK_OFFSET(0x124CE10)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int TargetSkillEntityValue_TypeDefinitionIndex = 13986;

	class TargetSkillEntityValue : public Il2CppObject
	{
	public:
		Il2CppObject* _Abilities_k__BackingField; // 0x160

		::System::Void .ctor(::MX::GameData::DAO::Battle::TargetSkillEntityDAO* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::System::Int32 arg3, ::MX::Logic::Skills::TargetCandidateRule* arg4, ::MX::Logic::Skills::TargetSortRule* arg5)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::TargetSkillEntityDAO*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TARGETSKILLENTITYVALUE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		Il2CppObject* get_Abilities()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TARGETSKILLENTITYVALUE_GET_ABILITIES_OFFSET))(nullptr);
		}

	};
}

