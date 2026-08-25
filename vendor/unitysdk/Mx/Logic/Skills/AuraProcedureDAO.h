#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class AuraProcedureTriggerType; }
namespace FlatData { class MultipleConditionCheckType; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }
namespace MX::Logic::Skills { class AuraProcedureDAO; }

#define MX_LOGIC_SKILLS_AURAPROCEDUREDAO_TOVALUE_OFFSET UNITYSDK_OFFSET(0x13DAE80)
#define MX_LOGIC_SKILLS_AURAPROCEDUREDAO_EQUALS_OFFSET UNITYSDK_OFFSET(0x13DB310)
#define MX_LOGIC_SKILLS_AURAPROCEDUREDAO_EQUALS_OFFSET UNITYSDK_OFFSET(0x13DB3D0)
#define MX_LOGIC_SKILLS_AURAPROCEDUREDAO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x13DB450)
#define MX_LOGIC_SKILLS_AURAPROCEDUREDAO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x13DB520)
#define MX_LOGIC_SKILLS_AURAPROCEDUREDAO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x13DB600)
#define MX_LOGIC_SKILLS_AURAPROCEDUREDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x13DB680)
#define MX_LOGIC_SKILLS_AURAPROCEDUREDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x13DB690)
#define MX_LOGIC_SKILLS_AURAPROCEDUREDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x13DBB80)
#define MX_LOGIC_SKILLS_AURAPROCEDUREDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x13DBC20)

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int AuraProcedureDAO_TypeDefinitionIndex = 14522;

	class AuraProcedureDAO : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::AuraProcedureTriggerType* Trigger; // 0x10
		::FlatData::MultipleConditionCheckType* ConditionLogicalOperator; // 0x14
		::Il2CppArray<::System::Object*>* ConditionList; // 0x18
		::Il2CppArray<::System::Object*>* CommandList; // 0x20

		::System::Void ToValue(::MX::Logic::Skills::SkillSpecification* arg, ::System::Int32 arg2, ::MX::Logic::Skills::TargetCandidateRule* arg3, ::MX::Logic::Skills::TargetSortRule* arg4)
		{
			((::System::Void(*)(::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AURAPROCEDUREDAO_TOVALUE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AURAPROCEDUREDAO_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Skills::AuraProcedureDAO* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::AuraProcedureDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AURAPROCEDUREDAO_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AURAPROCEDUREDAO_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Skills::AuraProcedureDAO* arg, ::MX::Logic::Skills::AuraProcedureDAO* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::AuraProcedureDAO*, ::MX::Logic::Skills::AuraProcedureDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AURAPROCEDUREDAO_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Skills::AuraProcedureDAO* arg, ::MX::Logic::Skills::AuraProcedureDAO* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::AuraProcedureDAO*, ::MX::Logic::Skills::AuraProcedureDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AURAPROCEDUREDAO_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AURAPROCEDUREDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AURAPROCEDUREDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Skills::AuraProcedureDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Skills::AuraProcedureDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AURAPROCEDUREDAO_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Skills::AuraProcedureDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Skills::AuraProcedureDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AURAPROCEDUREDAO_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

