#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class NormalAttackBulletEntityDAO; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }

#define MX_LOGIC_DATA_NORMALATTACKBULLETENTITYVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1248FC0)
#define MX_LOGIC_DATA_NORMALATTACKBULLETENTITYVALUE_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x12493B0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int NormalAttackBulletEntityValue_TypeDefinitionIndex = 13969;

	class NormalAttackBulletEntityValue : public Il2CppObject
	{
	public:
		::System::Int64 _Speed_k__BackingField; // 0x168

		::System::Void .ctor(::MX::GameData::DAO::Battle::NormalAttackBulletEntityDAO* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::System::Int32 arg3, ::MX::Logic::Skills::TargetCandidateRule* arg4, ::MX::Logic::Skills::TargetSortRule* arg5)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::NormalAttackBulletEntityDAO*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_NORMALATTACKBULLETENTITYVALUE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Int64 get_Speed()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_NORMALATTACKBULLETENTITYVALUE_GET_SPEED_OFFSET))(nullptr);
		}

	};
}

