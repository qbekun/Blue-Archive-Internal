#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLES_DEFINELOCAL_OFFSET UNITYSDK_OFFSET(0x96A08A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLES_UNDEFINELOCAL_OFFSET UNITYSDK_OFFSET(0x969A8C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLES_BOX_OFFSET UNITYSDK_OFFSET(0x96A0C00)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLES_GET_LOCALCOUNT_OFFSET UNITYSDK_OFFSET(0x96A0E10)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLES_TRYGETLOCALORCLOSURE_OFFSET UNITYSDK_OFFSET(0x96A0E20)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLES_GET_CLOSUREVARIABLES_OFFSET UNITYSDK_OFFSET(0x96A0EE0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLES_ADDCLOSUREVARIABLE_OFFSET UNITYSDK_OFFSET(0x96A0EF0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLES_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A1000)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LocalVariables_TypeDefinitionIndex = 33363;

	class LocalVariables : public Il2CppObject
	{
	public:
		Il2CppObject* _variables; // 0x10
		Il2CppObject* _closureVariables; // 0x18
		::System::Int32 _localCount; // 0x20
		::System::Int32 _maxLocalCount; // 0x24

		::System::Linq::Expressions::Interpreter::LocalDefinition* DefineLocal(::System::Linq::Expressions::ParameterExpression* arg, ::System::Int32 arg)
		{
			return (return (::System::Linq::Expressions::Interpreter::LocalDefinition*(*)(::System::Linq::Expressions::ParameterExpression*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLES_DEFINELOCAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UndefineLocal(::System::Linq::Expressions::Interpreter::LocalDefinition* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Interpreter::LocalDefinition*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLES_UNDEFINELOCAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Box(::System::Linq::Expressions::ParameterExpression* arg, ::System::Linq::Expressions::Interpreter::InstructionList* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::InstructionList*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLES_BOX_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_LocalCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLES_GET_LOCALCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean TryGetLocalOrClosure(::System::Linq::Expressions::ParameterExpression* arg, ::System::Linq::Expressions::Interpreter::LocalVariable&* arg)
		{
			return (return (::System::Boolean(*)(::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLES_TRYGETLOCALORCLOSURE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* get_ClosureVariables()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLES_GET_CLOSUREVARIABLES_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Interpreter::LocalVariable* AddClosureVariable(::System::Linq::Expressions::ParameterExpression* arg)
		{
			return (return (::System::Linq::Expressions::Interpreter::LocalVariable*(*)(::System::Linq::Expressions::ParameterExpression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLES_ADDCLOSUREVARIABLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLES_.CTOR_OFFSET))(nullptr);
		}

	};
}

