#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_FULLEXPRESSION`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_EXPRESSIONS_FULLEXPRESSION`1_GET_NAMECORE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_EXPRESSIONS_FULLEXPRESSION`1_GET_TAILCALLCORE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int FullExpression`1_TypeDefinitionIndex = 33074;

	class FullExpression`1 : public ::MX::Logic::GenericCondition::OrCondition
	{
	public:
		::System::String* _NameCore_k__BackingField; // 0x0
		::System::Boolean _TailCallCore_k__BackingField; // 0x0

		::System::Void .ctor(::System::Linq::Expressions::Expression* arg, ::System::String* str, ::System::Boolean arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Expression*, ::System::String*, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_FULLEXPRESSION`1_.CTOR_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::String* get_NameCore()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_FULLEXPRESSION`1_GET_NAMECORE_OFFSET))(nullptr);
		}

		::System::Boolean get_TailCallCore()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_FULLEXPRESSION`1_GET_TAILCALLCORE_OFFSET))(nullptr);
		}

	};
}

