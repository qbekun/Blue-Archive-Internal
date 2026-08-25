#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_RUNTIMEVARIABLESEXPRESSION_GET_VARIABLES_OFFSET UNITYSDK_OFFSET(0x9666680)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int RuntimeVariablesExpression_TypeDefinitionIndex = 33109;

	class RuntimeVariablesExpression : public Il2CppObject
	{
	public:
		Il2CppObject* _Variables_k__BackingField; // 0x10

		Il2CppObject* get_Variables()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_RUNTIMEVARIABLESEXPRESSION_GET_VARIABLES_OFFSET))(nullptr);
		}

	};
}

