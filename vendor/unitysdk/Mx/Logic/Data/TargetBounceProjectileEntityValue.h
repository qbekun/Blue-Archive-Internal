#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class NontargetBounceCondition; }
namespace MX::GameData::DAO::Battle { class TargetBounceProjectileEntityDAO; }
namespace MX::Logic::Data { class BounceConditionCheckTiming; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }
namespace MX::GameData::DAO::Battle { class FixedFrameTargetBounceProjectileEntityDAO; }

#define MX_LOGIC_DATA_TARGETBOUNCEPROJECTILEENTITYVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x124C7A0)
#define MX_LOGIC_DATA_TARGETBOUNCEPROJECTILEENTITYVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x124C960)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int TargetBounceProjectileEntityValue_TypeDefinitionIndex = 13984;

	class TargetBounceProjectileEntityValue : public Il2CppObject
	{
	public:
		::System::Int64 BounceRadius; // 0x1F0
		::System::Boolean AllowBounceTargetDuplication; // 0x1F8
		::MX::Logic::Data::NontargetBounceCondition* BounceCondition; // 0x1FC
		::MX::GameData::DAO::Battle::TargetBounceProjectileEntityDAO* BounceProjectileEntity; // 0x200
		::MX::Logic::Data::BounceConditionCheckTiming* BounceCheckTiming; // 0x208
		::System::Int32 BounceConditionCheckFixedDelay; // 0x20C

		::System::Void .ctor(::MX::GameData::DAO::Battle::TargetBounceProjectileEntityDAO* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::System::Int32 arg3, ::MX::Logic::Skills::TargetCandidateRule* arg4, ::MX::Logic::Skills::TargetSortRule* arg5)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::TargetBounceProjectileEntityDAO*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TARGETBOUNCEPROJECTILEENTITYVALUE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::FixedFrameTargetBounceProjectileEntityDAO* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::System::Int32 arg3, ::MX::Logic::Skills::TargetCandidateRule* arg4, ::MX::Logic::Skills::TargetSortRule* arg5)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::FixedFrameTargetBounceProjectileEntityDAO*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TARGETBOUNCEPROJECTILEENTITYVALUE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

	};
}

