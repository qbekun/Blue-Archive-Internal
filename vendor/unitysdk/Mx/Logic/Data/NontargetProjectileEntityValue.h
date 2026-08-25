#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class NontargetBounceCondition; }
namespace MX::GameData::DAO::Battle { class SkillEntityDAO; }
namespace MX::Logic::Data { class BounceConditionCheckTiming; }
namespace MX::GameData::DAO::Battle { class NontargetProjectileEntityDAO; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }
namespace MX::GameData::DAO::Battle { class FixedFrameNontargetProjectileEntityDAO; }

#define MX_LOGIC_DATA_NONTARGETPROJECTILEENTITYVALUE_GET_BARRIERTRANSFERABILITIES_OFFSET UNITYSDK_OFFSET(0x1247E20)
#define MX_LOGIC_DATA_NONTARGETPROJECTILEENTITYVALUE_GET_ANGLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1247E30)
#define MX_LOGIC_DATA_NONTARGETPROJECTILEENTITYVALUE_GET_EXPIREDISTANCE_OFFSET UNITYSDK_OFFSET(0x1247E40)
#define MX_LOGIC_DATA_NONTARGETPROJECTILEENTITYVALUE_GET_PIERCING_OFFSET UNITYSDK_OFFSET(0x1247E50)
#define MX_LOGIC_DATA_NONTARGETPROJECTILEENTITYVALUE_GET_REDUCEDAMAGERATEPERHIT_OFFSET UNITYSDK_OFFSET(0x1247E60)
#define MX_LOGIC_DATA_NONTARGETPROJECTILEENTITYVALUE_GET_MAXREDUCEDDAMAGERATE_OFFSET UNITYSDK_OFFSET(0x1247E70)
#define MX_LOGIC_DATA_NONTARGETPROJECTILEENTITYVALUE_GET_BOUNCEENTITY_OFFSET UNITYSDK_OFFSET(0x1247E80)
#define MX_LOGIC_DATA_NONTARGETPROJECTILEENTITYVALUE_SET_BOUNCEENTITY_OFFSET UNITYSDK_OFFSET(0x1247E90)
#define MX_LOGIC_DATA_NONTARGETPROJECTILEENTITYVALUE_GET_BOUNCECONDITIONCHECKFIXEDDELAY_OFFSET UNITYSDK_OFFSET(0x1247EB0)
#define MX_LOGIC_DATA_NONTARGETPROJECTILEENTITYVALUE_SET_BOUNCECONDITIONCHECKFIXEDDELAY_OFFSET UNITYSDK_OFFSET(0x1247EC0)
#define MX_LOGIC_DATA_NONTARGETPROJECTILEENTITYVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x12475B0)
#define MX_LOGIC_DATA_NONTARGETPROJECTILEENTITYVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1247CD0)
#define MX_LOGIC_DATA_NONTARGETPROJECTILEENTITYVALUE_GETBARRIERTRANSFERABILITIES_OFFSET UNITYSDK_OFFSET(0x1248FB0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int NontargetProjectileEntityValue_TypeDefinitionIndex = 13968;

	class NontargetProjectileEntityValue : public Il2CppObject
	{
	public:
		Il2CppObject* _BarrierTransferAbilities_k__BackingField; // 0x1D0
		::System::Single MAX_DISTANCE; // 0x0
		::System::Single _AngleOffset_k__BackingField; // 0x1D8
		::System::Single _ExpireDistance_k__BackingField; // 0x1DC
		::System::Boolean _Piercing_k__BackingField; // 0x1E0
		::System::Int64 _ReduceDamageRatePerHit_k__BackingField; // 0x1E8
		::System::Int64 _MaxReducedDamageRate_k__BackingField; // 0x1F0
		::MX::Logic::Data::NontargetBounceCondition* BounceCondition; // 0x1F8
		::MX::GameData::DAO::Battle::SkillEntityDAO* _BounceEntity_k__BackingField; // 0x200
		::MX::Logic::Data::BounceConditionCheckTiming* BounceCheckTiming; // 0x208
		::System::Int32 _BounceConditionCheckFixedDelay_k__BackingField; // 0x20C

		Il2CppObject* get_BarrierTransferAbilities()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_NONTARGETPROJECTILEENTITYVALUE_GET_BARRIERTRANSFERABILITIES_OFFSET))(nullptr);
		}

		::System::Single get_AngleOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_NONTARGETPROJECTILEENTITYVALUE_GET_ANGLEOFFSET_OFFSET))(nullptr);
		}

		::System::Single get_ExpireDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_NONTARGETPROJECTILEENTITYVALUE_GET_EXPIREDISTANCE_OFFSET))(nullptr);
		}

		::System::Boolean get_Piercing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_NONTARGETPROJECTILEENTITYVALUE_GET_PIERCING_OFFSET))(nullptr);
		}

		::System::Int64 get_ReduceDamageRatePerHit()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_NONTARGETPROJECTILEENTITYVALUE_GET_REDUCEDAMAGERATEPERHIT_OFFSET))(nullptr);
		}

		::System::Int64 get_MaxReducedDamageRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_NONTARGETPROJECTILEENTITYVALUE_GET_MAXREDUCEDDAMAGERATE_OFFSET))(nullptr);
		}

		::MX::GameData::DAO::Battle::SkillEntityDAO* get_BounceEntity()
		{
			return ((::MX::GameData::DAO::Battle::SkillEntityDAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_NONTARGETPROJECTILEENTITYVALUE_GET_BOUNCEENTITY_OFFSET))(nullptr);
		}

		::System::Void set_BounceEntity(::MX::GameData::DAO::Battle::SkillEntityDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::SkillEntityDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_NONTARGETPROJECTILEENTITYVALUE_SET_BOUNCEENTITY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BounceConditionCheckFixedDelay()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_NONTARGETPROJECTILEENTITYVALUE_GET_BOUNCECONDITIONCHECKFIXEDDELAY_OFFSET))(nullptr);
		}

		::System::Void set_BounceConditionCheckFixedDelay(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_NONTARGETPROJECTILEENTITYVALUE_SET_BOUNCECONDITIONCHECKFIXEDDELAY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::NontargetProjectileEntityDAO* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::System::Int32 arg3, ::MX::Logic::Skills::TargetCandidateRule* arg4, ::MX::Logic::Skills::TargetSortRule* arg5)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::NontargetProjectileEntityDAO*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_NONTARGETPROJECTILEENTITYVALUE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::FixedFrameNontargetProjectileEntityDAO* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::System::Int32 arg3, ::MX::Logic::Skills::TargetCandidateRule* arg4, ::MX::Logic::Skills::TargetSortRule* arg5)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::FixedFrameNontargetProjectileEntityDAO*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_NONTARGETPROJECTILEENTITYVALUE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		Il2CppObject* GetBarrierTransferAbilities()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_NONTARGETPROJECTILEENTITYVALUE_GETBARRIERTRANSFERABILITIES_OFFSET))(nullptr);
		}

	};
}

