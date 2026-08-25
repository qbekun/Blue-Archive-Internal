#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class TargetSideId; }
namespace MX::Logic::Skills { class TargetEntityType; }
namespace MX::GameData::DAO::Battle { class TargetProjectileEntityDAO; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }
namespace MX::GameData::DAO::Battle { class FixedFrameTargetProjectileEntityDAO; }
namespace MX::GameData::DAO::Battle { class ExtraHitTargetProjectileEntityDAO; }
namespace MX::GameData::DAO::Battle { class FixedFrameExtraHitTargetProjectileEntityDAO; }
namespace MX::GameData::DAO::Battle { class SkillEntityDAO; }

#define MX_LOGIC_DATA_TARGETPROJECTILEENTITYVALUE_GET_EXTRAHITCHECKTARGETSIDE_OFFSET UNITYSDK_OFFSET(0x124CB20)
#define MX_LOGIC_DATA_TARGETPROJECTILEENTITYVALUE_GET_EXTRAHITCHECKTARGETENTITYTYPE_OFFSET UNITYSDK_OFFSET(0x124CB30)
#define MX_LOGIC_DATA_TARGETPROJECTILEENTITYVALUE_GET_PIERCING_OFFSET UNITYSDK_OFFSET(0x124CB40)
#define MX_LOGIC_DATA_TARGETPROJECTILEENTITYVALUE_GET_MAXEXTRAHITCOUNT_OFFSET UNITYSDK_OFFSET(0x124CB50)
#define MX_LOGIC_DATA_TARGETPROJECTILEENTITYVALUE_GET_REDUCEDAMAGERATEPERHIT_OFFSET UNITYSDK_OFFSET(0x124CB60)
#define MX_LOGIC_DATA_TARGETPROJECTILEENTITYVALUE_GET_MAXREDUCEDDAMAGERATEPERHIT_OFFSET UNITYSDK_OFFSET(0x124CB70)
#define MX_LOGIC_DATA_TARGETPROJECTILEENTITYVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x124C8B0)
#define MX_LOGIC_DATA_TARGETPROJECTILEENTITYVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x124CA70)
#define MX_LOGIC_DATA_TARGETPROJECTILEENTITYVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x124CB80)
#define MX_LOGIC_DATA_TARGETPROJECTILEENTITYVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x124CC70)
#define MX_LOGIC_DATA_TARGETPROJECTILEENTITYVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x124CD60)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int TargetProjectileEntityValue_TypeDefinitionIndex = 13985;

	class TargetProjectileEntityValue : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::TargetSideId* _ExtraHitCheckTargetSide_k__BackingField; // 0x1D0
		::MX::Logic::Skills::TargetEntityType* _ExtraHitCheckTargetEntityType_k__BackingField; // 0x1D4
		::System::Boolean _Piercing_k__BackingField; // 0x1D8
		::System::Int32 _MaxExtraHitCount_k__BackingField; // 0x1DC
		::System::Int64 _ReduceDamageRatePerHit_k__BackingField; // 0x1E0
		::System::Int64 _MaxReducedDamageRatePerHit_k__BackingField; // 0x1E8

		::MX::Logic::Skills::TargetSideId* get_ExtraHitCheckTargetSide()
		{
			return ((::MX::Logic::Skills::TargetSideId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TARGETPROJECTILEENTITYVALUE_GET_EXTRAHITCHECKTARGETSIDE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::TargetEntityType* get_ExtraHitCheckTargetEntityType()
		{
			return ((::MX::Logic::Skills::TargetEntityType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TARGETPROJECTILEENTITYVALUE_GET_EXTRAHITCHECKTARGETENTITYTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_Piercing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TARGETPROJECTILEENTITYVALUE_GET_PIERCING_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxExtraHitCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TARGETPROJECTILEENTITYVALUE_GET_MAXEXTRAHITCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_ReduceDamageRatePerHit()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TARGETPROJECTILEENTITYVALUE_GET_REDUCEDAMAGERATEPERHIT_OFFSET))(nullptr);
		}

		::System::Int64 get_MaxReducedDamageRatePerHit()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TARGETPROJECTILEENTITYVALUE_GET_MAXREDUCEDDAMAGERATEPERHIT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::TargetProjectileEntityDAO* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::System::Int32 arg3, ::MX::Logic::Skills::TargetCandidateRule* arg4, ::MX::Logic::Skills::TargetSortRule* arg5)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::TargetProjectileEntityDAO*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TARGETPROJECTILEENTITYVALUE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::FixedFrameTargetProjectileEntityDAO* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::System::Int32 arg3, ::MX::Logic::Skills::TargetCandidateRule* arg4, ::MX::Logic::Skills::TargetSortRule* arg5)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::FixedFrameTargetProjectileEntityDAO*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TARGETPROJECTILEENTITYVALUE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::ExtraHitTargetProjectileEntityDAO* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::System::Int32 arg3, ::MX::Logic::Skills::TargetCandidateRule* arg4, ::MX::Logic::Skills::TargetSortRule* arg5)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::ExtraHitTargetProjectileEntityDAO*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TARGETPROJECTILEENTITYVALUE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::FixedFrameExtraHitTargetProjectileEntityDAO* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::System::Int32 arg3, ::MX::Logic::Skills::TargetCandidateRule* arg4, ::MX::Logic::Skills::TargetSortRule* arg5)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::FixedFrameExtraHitTargetProjectileEntityDAO*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TARGETPROJECTILEENTITYVALUE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::SkillEntityDAO* arg, Il2CppObject* arg2, ::MX::Logic::Skills::SkillSpecification* arg3, ::System::Int32 arg4, ::MX::Logic::Skills::TargetCandidateRule* arg5, ::MX::Logic::Skills::TargetSortRule* arg6)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::SkillEntityDAO*, Il2CppObject*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TARGETPROJECTILEENTITYVALUE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

	};
}

