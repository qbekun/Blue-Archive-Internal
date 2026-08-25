#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class AreaSpawnerDAO; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }

#define MX_LOGIC_DATA_AREASPAWNERVALUE_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x12412F0)
#define MX_LOGIC_DATA_AREASPAWNERVALUE_GET_ENTITYTIMELINE_OFFSET UNITYSDK_OFFSET(0x1241300)
#define MX_LOGIC_DATA_AREASPAWNERVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1241310)
#define MX_LOGIC_DATA_AREASPAWNERVALUE_SETDAMAGEDISTRIBUTERATE_OFFSET UNITYSDK_OFFSET(0x12418A0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int AreaSpawnerValue_TypeDefinitionIndex = 13941;

	class AreaSpawnerValue : public Il2CppObject
	{
	public:
		::System::Int32 _Duration_k__BackingField; // 0x160
		Il2CppObject* _EntityTimeline_k__BackingField; // 0x168

		::System::Int32 get_Duration()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AREASPAWNERVALUE_GET_DURATION_OFFSET))(nullptr);
		}

		Il2CppObject* get_EntityTimeline()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AREASPAWNERVALUE_GET_ENTITYTIMELINE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::AreaSpawnerDAO* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::System::Int32 arg3, ::MX::Logic::Skills::TargetCandidateRule* arg4, ::MX::Logic::Skills::TargetSortRule* arg5)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::AreaSpawnerDAO*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AREASPAWNERVALUE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void SetDamageDistributeRate(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AREASPAWNERVALUE_SETDAMAGEDISTRIBUTERATE_OFFSET))(arg, nullptr);
		}

	};
}

