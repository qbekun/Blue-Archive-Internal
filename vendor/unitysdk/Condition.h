#pragma once
#include "unitysdk.h"

namespace MX::Logic::Skills { class AuraProcedureConditionType; }
class Condition;

#define CONDITION_EQUALS_OFFSET UNITYSDK_OFFSET(0x13DDCB0)

	inline static constexpr unsigned int Condition_TypeDefinitionIndex = 14528;

	class Condition : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::AuraProcedureConditionType* Type; // 0x10
		::System::String* Parameter; // 0x18

		::System::Boolean Equals(Condition* arg)
		{
			return ((::System::Boolean(*)(Condition*, ::PVOID))((::PBYTE)hIl2Cpp + CONDITION_EQUALS_OFFSET))(arg, nullptr);
		}

	};

