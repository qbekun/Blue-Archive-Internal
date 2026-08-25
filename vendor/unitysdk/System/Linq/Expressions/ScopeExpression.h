#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_SCOPEEXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9650DB0)
#define SYSTEM_LINQ_EXPRESSIONS_SCOPEEXPRESSION_GETORMAKEVARIABLES_OFFSET UNITYSDK_OFFSET(0x9650E10)
#define SYSTEM_LINQ_EXPRESSIONS_SCOPEEXPRESSION_GET_VARIABLESLIST_OFFSET UNITYSDK_OFFSET(0x9650E50)
#define SYSTEM_LINQ_EXPRESSIONS_SCOPEEXPRESSION_REUSEORVALIDATEVARIABLES_OFFSET UNITYSDK_OFFSET(0x9650E60)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int ScopeExpression_TypeDefinitionIndex = 33016;

	class ScopeExpression : public Il2CppObject
	{
	public:
		Il2CppObject* _variables; // 0x10

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SCOPEEXPRESSION_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetOrMakeVariables()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SCOPEEXPRESSION_GETORMAKEVARIABLES_OFFSET))(nullptr);
		}

		Il2CppObject* get_VariablesList()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SCOPEEXPRESSION_GET_VARIABLESLIST_OFFSET))(nullptr);
		}

		Il2CppObject* ReuseOrValidateVariables(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SCOPEEXPRESSION_REUSEORVALIDATEVARIABLES_OFFSET))(arg, nullptr);
		}

	};
}

