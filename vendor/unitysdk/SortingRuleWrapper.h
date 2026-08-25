#pragma once
#include "unitysdk.h"

class SortingRule;
class SortingRuleWrapper;

#define SORTINGRULEWRAPPER_GET_HASSUBSORTINGVALUE_OFFSET UNITYSDK_OFFSET(0x1FDDC60)
#define SORTINGRULEWRAPPER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FDDC70)
#define SORTINGRULEWRAPPER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FDDCB0)
#define SORTINGRULEWRAPPER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FDDD50)

	inline static constexpr unsigned int SortingRuleWrapper_TypeDefinitionIndex = 3053;

	class SortingRuleWrapper : public Il2CppObject
	{
	public:
		SortingRule* SortingRule; // 0x10
		::System::Object* SubSortingValue; // 0x18

		::System::Boolean get_HasSubSortingValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SORTINGRULEWRAPPER_GET_HASSUBSORTINGVALUE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(SortingRuleWrapper* arg)
		{
			return ((::System::Boolean(*)(SortingRuleWrapper*, ::PVOID))((::PBYTE)hIl2Cpp + SORTINGRULEWRAPPER_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SORTINGRULEWRAPPER_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SORTINGRULEWRAPPER_GETHASHCODE_OFFSET))(nullptr);
		}

	};

