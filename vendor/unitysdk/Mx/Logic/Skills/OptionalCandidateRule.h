#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class OptionalCandidateRule; }
namespace MX::Logic::Skills { class AliveState; }
namespace MX::Logic::Data { class SchoolConstraint; }
namespace MX::Logic::Data { class PersonalityIdConstraint; }
namespace MX::Logic::Data { class WeaponConstraint; }
namespace MX::Logic::Data { class SquadTypeConstraint; }
namespace MX::Logic::Data { class AdaptationConstraint; }
namespace MX::Logic::Data { class BulletConstraint; }
namespace MX::Logic::Data { class TacticRangeConstraint; }
namespace MX::Logic::Data { class TagConstraint; }
namespace MX::Logic::Skills { class CoverState; }
namespace MX::Logic::Data { class HPRateConstraint; }
namespace MX::Logic::Data { class TacticRoleConstraint; }
namespace MX::Logic::Data { class SpawnSourceConstraint; }
namespace MX::Logic::Data { class BlackboardConstraint; }

#define MX_LOGIC_SKILLS_OPTIONALCANDIDATERULE_SHOULDSERIALIZEIGNOREUNTARGETABLE_OFFSET UNITYSDK_OFFSET(0x13EDFB0)
#define MX_LOGIC_SKILLS_OPTIONALCANDIDATERULE_SHOULDSERIALIZEALIVESTATE_OFFSET UNITYSDK_OFFSET(0x13EDFC0)
#define MX_LOGIC_SKILLS_OPTIONALCANDIDATERULE_SHOULDSERIALIZEPERSONALITYIDCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x13EDFD0)
#define MX_LOGIC_SKILLS_OPTIONALCANDIDATERULE_SHOULDSERIALIZESQUADTYPECONSTRAINT_OFFSET UNITYSDK_OFFSET(0x13EDFE0)
#define MX_LOGIC_SKILLS_OPTIONALCANDIDATERULE_SHOULDSERIALIZEADAPTATIONCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x13EDFF0)
#define MX_LOGIC_SKILLS_OPTIONALCANDIDATERULE_SHOULDSERIALIZEBULLETCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x13EE000)
#define MX_LOGIC_SKILLS_OPTIONALCANDIDATERULE_SHOULDSERIALIZETACTICRANGECONSTRAINT_OFFSET UNITYSDK_OFFSET(0x13EE010)
#define MX_LOGIC_SKILLS_OPTIONALCANDIDATERULE_SHOULDSERIALIZETAGCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x13EE090)
#define MX_LOGIC_SKILLS_OPTIONALCANDIDATERULE_SHOULDSERIALIZEHPRATECONSTRAINT_OFFSET UNITYSDK_OFFSET(0x13EE0A0)
#define MX_LOGIC_SKILLS_OPTIONALCANDIDATERULE_SHOULDSERIALIZETACTICROLECONSTRAINT_OFFSET UNITYSDK_OFFSET(0x13EE0B0)
#define MX_LOGIC_SKILLS_OPTIONALCANDIDATERULE_SHOULDSERIALIZESPAWNSOURCECONSTRAINT_OFFSET UNITYSDK_OFFSET(0x13EE130)
#define MX_LOGIC_SKILLS_OPTIONALCANDIDATERULE_SHOULDSERIALIZEBLACKBOARDCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x13EE140)
#define MX_LOGIC_SKILLS_OPTIONALCANDIDATERULE_EQUALS_OFFSET UNITYSDK_OFFSET(0x13EE170)
#define MX_LOGIC_SKILLS_OPTIONALCANDIDATERULE_EQUALS_OFFSET UNITYSDK_OFFSET(0x13EE210)
#define MX_LOGIC_SKILLS_OPTIONALCANDIDATERULE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x13EE6E0)
#define MX_LOGIC_SKILLS_OPTIONALCANDIDATERULE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x13EEA20)
#define MX_LOGIC_SKILLS_OPTIONALCANDIDATERULE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x13EEA90)
#define MX_LOGIC_SKILLS_OPTIONALCANDIDATERULE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x13EEB70)
#define MX_LOGIC_SKILLS_OPTIONALCANDIDATERULE_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x13EEF40)
#define MX_LOGIC_SKILLS_OPTIONALCANDIDATERULE_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x13EF250)
#define MX_LOGIC_SKILLS_OPTIONALCANDIDATERULE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x13EF430)

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int OptionalCandidateRule_TypeDefinitionIndex = 14603;

	class OptionalCandidateRule : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::OptionalCandidateRule* Default; // 0x0
		::System::Boolean IgnoreUntargetable; // 0x10
		::MX::Logic::Skills::AliveState* AliveState; // 0x14
		::MX::Logic::Data::SchoolConstraint* SchoolConstraint; // 0x18
		::MX::Logic::Data::PersonalityIdConstraint* PersonalityIdConstraint; // 0x20
		::MX::Logic::Data::WeaponConstraint* WeaponConstraint; // 0x30
		::MX::Logic::Data::SquadTypeConstraint* SquadTypeConstraint; // 0x38
		::MX::Logic::Data::AdaptationConstraint* AdaptationConstraint; // 0x40
		::MX::Logic::Data::BulletConstraint* BulletConstraint; // 0x58
		::MX::Logic::Data::TacticRangeConstraint* TacticRangeConstraint; // 0x60
		::MX::Logic::Data::TagConstraint* TagConstraint; // 0x70
		::MX::Logic::Skills::CoverState* CoverState; // 0x80
		::MX::Logic::Data::HPRateConstraint* HPRateConstraint; // 0x84
		::MX::Logic::Data::TacticRoleConstraint* TacticRoleConstraint; // 0x90
		::MX::Logic::Data::SpawnSourceConstraint* SpawnSourceConstraint; // 0xA0
		::MX::Logic::Data::BlackboardConstraint* BlackboardConstraint; // 0xB0

		::System::Boolean ShouldSerializeIgnoreUntargetable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_OPTIONALCANDIDATERULE_SHOULDSERIALIZEIGNOREUNTARGETABLE_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeAliveState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_OPTIONALCANDIDATERULE_SHOULDSERIALIZEALIVESTATE_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializePersonalityIdConstraint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_OPTIONALCANDIDATERULE_SHOULDSERIALIZEPERSONALITYIDCONSTRAINT_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeSquadTypeConstraint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_OPTIONALCANDIDATERULE_SHOULDSERIALIZESQUADTYPECONSTRAINT_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeAdaptationConstraint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_OPTIONALCANDIDATERULE_SHOULDSERIALIZEADAPTATIONCONSTRAINT_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeBulletConstraint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_OPTIONALCANDIDATERULE_SHOULDSERIALIZEBULLETCONSTRAINT_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeTacticRangeConstraint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_OPTIONALCANDIDATERULE_SHOULDSERIALIZETACTICRANGECONSTRAINT_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeTagConstraint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_OPTIONALCANDIDATERULE_SHOULDSERIALIZETAGCONSTRAINT_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeHPRateConstraint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_OPTIONALCANDIDATERULE_SHOULDSERIALIZEHPRATECONSTRAINT_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeTacticRoleConstraint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_OPTIONALCANDIDATERULE_SHOULDSERIALIZETACTICROLECONSTRAINT_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeSpawnSourceConstraint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_OPTIONALCANDIDATERULE_SHOULDSERIALIZESPAWNSOURCECONSTRAINT_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeBlackboardConstraint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_OPTIONALCANDIDATERULE_SHOULDSERIALIZEBLACKBOARDCONSTRAINT_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_OPTIONALCANDIDATERULE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Skills::OptionalCandidateRule* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::OptionalCandidateRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_OPTIONALCANDIDATERULE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_OPTIONALCANDIDATERULE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Skills::OptionalCandidateRule* arg, ::MX::Logic::Skills::OptionalCandidateRule* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::OptionalCandidateRule*, ::MX::Logic::Skills::OptionalCandidateRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_OPTIONALCANDIDATERULE_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Skills::OptionalCandidateRule* arg, ::MX::Logic::Skills::OptionalCandidateRule* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::OptionalCandidateRule*, ::MX::Logic::Skills::OptionalCandidateRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_OPTIONALCANDIDATERULE_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_OPTIONALCANDIDATERULE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_OPTIONALCANDIDATERULE_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Skills::OptionalCandidateRule&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Skills::OptionalCandidateRule&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_OPTIONALCANDIDATERULE_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Skills::OptionalCandidateRule&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Skills::OptionalCandidateRule&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_OPTIONALCANDIDATERULE_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

