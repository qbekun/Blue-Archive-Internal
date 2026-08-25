#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALDEFINITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A0790)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALDEFINITION_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x96A07B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALDEFINITION_GET_PARAMETER_OFFSET UNITYSDK_OFFSET(0x96A07C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALDEFINITION_EQUALS_OFFSET UNITYSDK_OFFSET(0x96A07D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALDEFINITION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x96A0850)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LocalDefinition_TypeDefinitionIndex = 33361;

	class LocalDefinition : public Il2CppObject
	{
	public:
		::System::Int32 _Index_k__BackingField; // 0x10
		::System::Linq::Expressions::ParameterExpression* _Parameter_k__BackingField; // 0x18

		::System::Void .ctor(::System::Int32 arg, ::System::Linq::Expressions::ParameterExpression* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Linq::Expressions::ParameterExpression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALDEFINITION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_Index()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALDEFINITION_GET_INDEX_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::ParameterExpression* get_Parameter()
		{
			return (return (::System::Linq::Expressions::ParameterExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALDEFINITION_GET_PARAMETER_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALDEFINITION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALDEFINITION_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

