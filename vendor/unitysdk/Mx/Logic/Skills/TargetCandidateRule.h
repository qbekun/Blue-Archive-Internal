#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetingType; }
namespace MX::Logic::Skills { class TargetEntityType; }
namespace MX::Logic::Skills { class TargetSideId; }
namespace MX::Logic::Skills { class AliveState; }
namespace MX::Logic::Data { class SchoolConstraint; }
namespace MX::Logic::Data { class PersonalityIdConstraint; }
namespace MX::Logic::Data { class WeaponConstraint; }
namespace MX::Logic::Data { class SquadTypeConstraint; }
namespace MX::Logic::Data { class AdaptationConstraint; }
namespace MX::Logic::Data { class BulletConstraint; }
namespace MX::Logic::Data { class TacticRangeConstraint; }
namespace MX::Logic::Data { class TagConstraint; }
namespace MX::Logic::Data { class HPRateConstraint; }
namespace MX::Logic::Data { class TacticRoleConstraint; }
namespace MX::Logic::Data { class SpawnSourceConstraint; }
namespace MX::Logic::Data { class BlackboardConstraint; }
namespace MX::Logic::Skills { class CoverState; }
namespace MX::Logic::Skills { class EssentialCandidateRule; }
namespace MX::Logic::Skills { class OptionalCandidateRule; }

#define MX_LOGIC_SKILLS_TARGETCANDIDATERULE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x13EFF30)
#define MX_LOGIC_SKILLS_TARGETCANDIDATERULE_GET_TARGETINGTYPE_OFFSET UNITYSDK_OFFSET(0x13EFF80)
#define MX_LOGIC_SKILLS_TARGETCANDIDATERULE_GET_APPLYENTITYTYPE_OFFSET UNITYSDK_OFFSET(0x13EFF90)
#define MX_LOGIC_SKILLS_TARGETCANDIDATERULE_GET_MAXCOUNT_OFFSET UNITYSDK_OFFSET(0x13EFFA0)
#define MX_LOGIC_SKILLS_TARGETCANDIDATERULE_GET_TARGETSIDE_OFFSET UNITYSDK_OFFSET(0x13EFFB0)
#define MX_LOGIC_SKILLS_TARGETCANDIDATERULE_GET_IGNOREUNTARGETABLE_OFFSET UNITYSDK_OFFSET(0x13EFFC0)
#define MX_LOGIC_SKILLS_TARGETCANDIDATERULE_GET_ALIVESTATE_OFFSET UNITYSDK_OFFSET(0x13EFFD0)
#define MX_LOGIC_SKILLS_TARGETCANDIDATERULE_GET_SCHOOLCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x13EFFE0)
#define MX_LOGIC_SKILLS_TARGETCANDIDATERULE_GET_PERSONALITYIDCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x13EFFF0)
#define MX_LOGIC_SKILLS_TARGETCANDIDATERULE_GET_WEAPONCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x13F0000)
#define MX_LOGIC_SKILLS_TARGETCANDIDATERULE_GET_SQUADTYPECONSTRAINT_OFFSET UNITYSDK_OFFSET(0x13F0010)
#define MX_LOGIC_SKILLS_TARGETCANDIDATERULE_GET_ADAPTATIONCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x13F0020)
#define MX_LOGIC_SKILLS_TARGETCANDIDATERULE_GET_BULLETCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x13F0040)
#define MX_LOGIC_SKILLS_TARGETCANDIDATERULE_GET_TACTICRANGECONSTRAINT_OFFSET UNITYSDK_OFFSET(0x13F0050)
#define MX_LOGIC_SKILLS_TARGETCANDIDATERULE_GET_TAGCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x13F0060)
#define MX_LOGIC_SKILLS_TARGETCANDIDATERULE_GET_HPRATECONSTRAINT_OFFSET UNITYSDK_OFFSET(0x13F0070)
#define MX_LOGIC_SKILLS_TARGETCANDIDATERULE_GET_TACTICROLECONSTRAINT_OFFSET UNITYSDK_OFFSET(0x13F0080)
#define MX_LOGIC_SKILLS_TARGETCANDIDATERULE_GET_SPAWNSOURCECONSTRAINT_OFFSET UNITYSDK_OFFSET(0x13F0090)
#define MX_LOGIC_SKILLS_TARGETCANDIDATERULE_GET_BLACKBOARDCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x13F00A0)
#define MX_LOGIC_SKILLS_TARGETCANDIDATERULE_GET_COVERSTATE_OFFSET UNITYSDK_OFFSET(0x13F00B0)
#define MX_LOGIC_SKILLS_TARGETCANDIDATERULE_GET_NEEDSEARCHTARGET_OFFSET UNITYSDK_OFFSET(0x13F00C0)
#define MX_LOGIC_SKILLS_TARGETCANDIDATERULE_.CTOR_OFFSET UNITYSDK_OFFSET(0x13F0110)
#define MX_LOGIC_SKILLS_TARGETCANDIDATERULE_.CTOR_OFFSET UNITYSDK_OFFSET(0x13F0240)
#define MX_LOGIC_SKILLS_TARGETCANDIDATERULE_.CTOR_OFFSET UNITYSDK_OFFSET(0x13F0390)
#define MX_LOGIC_SKILLS_TARGETCANDIDATERULE_.CTOR_OFFSET UNITYSDK_OFFSET(0x13F04E0)
#define MX_LOGIC_SKILLS_TARGETCANDIDATERULE_EQUALS_OFFSET UNITYSDK_OFFSET(0x13F0820)
#define MX_LOGIC_SKILLS_TARGETCANDIDATERULE_EQUALS_OFFSET UNITYSDK_OFFSET(0x13F08C0)
#define MX_LOGIC_SKILLS_TARGETCANDIDATERULE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x13F0FC0)
#define MX_LOGIC_SKILLS_TARGETCANDIDATERULE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x13F1550)
#define MX_LOGIC_SKILLS_TARGETCANDIDATERULE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x13F15C0)
#define MX_LOGIC_SKILLS_TARGETCANDIDATERULE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x13F16A0)

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int TargetCandidateRule_TypeDefinitionIndex = 14604;

	class TargetCandidateRule : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::TargetCandidateRule* Invalid; // 0x0
		::MX::Logic::Skills::TargetingType* _TargetingType_k__BackingField; // 0x10
		::MX::Logic::Skills::TargetEntityType* _ApplyEntityType_k__BackingField; // 0x14
		::System::Int32 _MaxCount_k__BackingField; // 0x18
		::MX::Logic::Skills::TargetSideId* _TargetSide_k__BackingField; // 0x1C
		::System::Boolean _IgnoreUntargetable_k__BackingField; // 0x20
		::MX::Logic::Skills::AliveState* _AliveState_k__BackingField; // 0x24
		::MX::Logic::Data::SchoolConstraint* _SchoolConstraint_k__BackingField; // 0x28
		::MX::Logic::Data::PersonalityIdConstraint* _PersonalityIdConstraint_k__BackingField; // 0x30
		::MX::Logic::Data::WeaponConstraint* _WeaponConstraint_k__BackingField; // 0x40
		::MX::Logic::Data::SquadTypeConstraint* _SquadTypeConstraint_k__BackingField; // 0x48
		::MX::Logic::Data::AdaptationConstraint* _AdaptationConstraint_k__BackingField; // 0x50
		::MX::Logic::Data::BulletConstraint* _BulletConstraint_k__BackingField; // 0x68
		::MX::Logic::Data::TacticRangeConstraint* _TacticRangeConstraint_k__BackingField; // 0x70
		::MX::Logic::Data::TagConstraint* _TagConstraint_k__BackingField; // 0x80
		::MX::Logic::Data::HPRateConstraint* _HPRateConstraint_k__BackingField; // 0x90
		::MX::Logic::Data::TacticRoleConstraint* _TacticRoleConstraint_k__BackingField; // 0x98
		::MX::Logic::Data::SpawnSourceConstraint* _SpawnSourceConstraint_k__BackingField; // 0xA8
		::MX::Logic::Data::BlackboardConstraint* _BlackboardConstraint_k__BackingField; // 0xB8
		::MX::Logic::Skills::CoverState* _CoverState_k__BackingField; // 0xC8

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETCANDIDATERULE_GET_ISVALID_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::TargetingType* get_TargetingType()
		{
			return ((::MX::Logic::Skills::TargetingType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETCANDIDATERULE_GET_TARGETINGTYPE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::TargetEntityType* get_ApplyEntityType()
		{
			return ((::MX::Logic::Skills::TargetEntityType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETCANDIDATERULE_GET_APPLYENTITYTYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETCANDIDATERULE_GET_MAXCOUNT_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::TargetSideId* get_TargetSide()
		{
			return ((::MX::Logic::Skills::TargetSideId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETCANDIDATERULE_GET_TARGETSIDE_OFFSET))(nullptr);
		}

		::System::Boolean get_IgnoreUntargetable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETCANDIDATERULE_GET_IGNOREUNTARGETABLE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::AliveState* get_AliveState()
		{
			return ((::MX::Logic::Skills::AliveState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETCANDIDATERULE_GET_ALIVESTATE_OFFSET))(nullptr);
		}

		::MX::Logic::Data::SchoolConstraint* get_SchoolConstraint()
		{
			return ((::MX::Logic::Data::SchoolConstraint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETCANDIDATERULE_GET_SCHOOLCONSTRAINT_OFFSET))(nullptr);
		}

		::MX::Logic::Data::PersonalityIdConstraint* get_PersonalityIdConstraint()
		{
			return ((::MX::Logic::Data::PersonalityIdConstraint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETCANDIDATERULE_GET_PERSONALITYIDCONSTRAINT_OFFSET))(nullptr);
		}

		::MX::Logic::Data::WeaponConstraint* get_WeaponConstraint()
		{
			return ((::MX::Logic::Data::WeaponConstraint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETCANDIDATERULE_GET_WEAPONCONSTRAINT_OFFSET))(nullptr);
		}

		::MX::Logic::Data::SquadTypeConstraint* get_SquadTypeConstraint()
		{
			return ((::MX::Logic::Data::SquadTypeConstraint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETCANDIDATERULE_GET_SQUADTYPECONSTRAINT_OFFSET))(nullptr);
		}

		::MX::Logic::Data::AdaptationConstraint* get_AdaptationConstraint()
		{
			return ((::MX::Logic::Data::AdaptationConstraint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETCANDIDATERULE_GET_ADAPTATIONCONSTRAINT_OFFSET))(nullptr);
		}

		::MX::Logic::Data::BulletConstraint* get_BulletConstraint()
		{
			return ((::MX::Logic::Data::BulletConstraint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETCANDIDATERULE_GET_BULLETCONSTRAINT_OFFSET))(nullptr);
		}

		::MX::Logic::Data::TacticRangeConstraint* get_TacticRangeConstraint()
		{
			return ((::MX::Logic::Data::TacticRangeConstraint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETCANDIDATERULE_GET_TACTICRANGECONSTRAINT_OFFSET))(nullptr);
		}

		::MX::Logic::Data::TagConstraint* get_TagConstraint()
		{
			return ((::MX::Logic::Data::TagConstraint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETCANDIDATERULE_GET_TAGCONSTRAINT_OFFSET))(nullptr);
		}

		::MX::Logic::Data::HPRateConstraint* get_HPRateConstraint()
		{
			return ((::MX::Logic::Data::HPRateConstraint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETCANDIDATERULE_GET_HPRATECONSTRAINT_OFFSET))(nullptr);
		}

		::MX::Logic::Data::TacticRoleConstraint* get_TacticRoleConstraint()
		{
			return ((::MX::Logic::Data::TacticRoleConstraint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETCANDIDATERULE_GET_TACTICROLECONSTRAINT_OFFSET))(nullptr);
		}

		::MX::Logic::Data::SpawnSourceConstraint* get_SpawnSourceConstraint()
		{
			return ((::MX::Logic::Data::SpawnSourceConstraint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETCANDIDATERULE_GET_SPAWNSOURCECONSTRAINT_OFFSET))(nullptr);
		}

		::MX::Logic::Data::BlackboardConstraint* get_BlackboardConstraint()
		{
			return ((::MX::Logic::Data::BlackboardConstraint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETCANDIDATERULE_GET_BLACKBOARDCONSTRAINT_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::CoverState* get_CoverState()
		{
			return ((::MX::Logic::Skills::CoverState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETCANDIDATERULE_GET_COVERSTATE_OFFSET))(nullptr);
		}

		::System::Boolean get_NeedSearchTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETCANDIDATERULE_GET_NEEDSEARCHTARGET_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Skills::EssentialCandidateRule* arg, ::MX::Logic::Skills::OptionalCandidateRule* arg2)
		{
			((::System::Void(*)(::MX::Logic::Skills::EssentialCandidateRule*, ::MX::Logic::Skills::OptionalCandidateRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETCANDIDATERULE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Skills::TargetCandidateRule* arg, ::MX::Logic::Skills::TargetSideId* arg2)
		{
			((::System::Void(*)(::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSideId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETCANDIDATERULE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Skills::TargetCandidateRule* arg, ::MX::Logic::Skills::TargetEntityType* arg2)
		{
			((::System::Void(*)(::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetEntityType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETCANDIDATERULE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETCANDIDATERULE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETCANDIDATERULE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Skills::TargetCandidateRule* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::TargetCandidateRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETCANDIDATERULE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETCANDIDATERULE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Skills::TargetCandidateRule* arg, ::MX::Logic::Skills::TargetCandidateRule* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetCandidateRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETCANDIDATERULE_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Skills::TargetCandidateRule* arg, ::MX::Logic::Skills::TargetCandidateRule* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetCandidateRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETCANDIDATERULE_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_TARGETCANDIDATERULE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

