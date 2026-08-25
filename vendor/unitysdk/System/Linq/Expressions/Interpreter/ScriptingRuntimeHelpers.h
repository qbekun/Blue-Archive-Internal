#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SCRIPTINGRUNTIMEHELPERS_INT32TOOBJECT_OFFSET UNITYSDK_OFFSET(0x96A1890)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SCRIPTINGRUNTIMEHELPERS_GETPRIMITIVEDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x96B15F0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int ScriptingRuntimeHelpers_TypeDefinitionIndex = 33504;

	class ScriptingRuntimeHelpers : public Il2CppObject
	{
	public:
		::System::Object* Int32ToObject(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SCRIPTINGRUNTIMEHELPERS_INT32TOOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Object* GetPrimitiveDefaultValue(::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_SCRIPTINGRUNTIMEHELPERS_GETPRIMITIVEDEFAULTVALUE_OFFSET))(arg, nullptr);
		}

	};
}

