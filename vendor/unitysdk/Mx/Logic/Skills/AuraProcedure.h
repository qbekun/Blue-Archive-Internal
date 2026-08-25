#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class AuraProcedureTriggerType; }
namespace FlatData { class MultipleConditionCheckType; }
namespace MX::Logic::Skills { class AuraProcedure; }

#define MX_LOGIC_SKILLS_AURAPROCEDURE_EQUALS_OFFSET UNITYSDK_OFFSET(0x13DD930)
#define MX_LOGIC_SKILLS_AURAPROCEDURE_EQUALS_OFFSET UNITYSDK_OFFSET(0x13DDA20)
#define MX_LOGIC_SKILLS_AURAPROCEDURE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x13DDAA0)
#define MX_LOGIC_SKILLS_AURAPROCEDURE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x13DDB70)
#define MX_LOGIC_SKILLS_AURAPROCEDURE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x13DDC00)

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int AuraProcedure_TypeDefinitionIndex = 14530;

	class AuraProcedure : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::AuraProcedureTriggerType* Trigger; // 0x10
		::FlatData::MultipleConditionCheckType* ConditionLogicalOperator; // 0x14
		::Il2CppArray<::System::Object*>* ConditionList; // 0x18
		::Il2CppArray<::System::Object*>* CommandList; // 0x20

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AURAPROCEDURE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Skills::AuraProcedure* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::AuraProcedure*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AURAPROCEDURE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AURAPROCEDURE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Skills::AuraProcedure* arg, ::MX::Logic::Skills::AuraProcedure* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::AuraProcedure*, ::MX::Logic::Skills::AuraProcedure*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AURAPROCEDURE_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Skills::AuraProcedure* arg, ::MX::Logic::Skills::AuraProcedure* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::AuraProcedure*, ::MX::Logic::Skills::AuraProcedure*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AURAPROCEDURE_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

	};
}

