#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_BYREFPARAMETEREXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x96664A0)
#define SYSTEM_LINQ_EXPRESSIONS_BYREFPARAMETEREXPRESSION_GETISBYREF_OFFSET UNITYSDK_OFFSET(0x9666660)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int ByRefParameterExpression_TypeDefinitionIndex = 33106;

	class ByRefParameterExpression : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Type* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Type*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BYREFPARAMETEREXPRESSION_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean GetIsByRef()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_BYREFPARAMETEREXPRESSION_GETISBYREF_OFFSET))(nullptr);
		}

	};
}

