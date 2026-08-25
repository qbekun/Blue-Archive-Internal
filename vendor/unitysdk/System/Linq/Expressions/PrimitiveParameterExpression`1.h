#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_PRIMITIVEPARAMETEREXPRESSION`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_EXPRESSIONS_PRIMITIVEPARAMETEREXPRESSION`1_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int PrimitiveParameterExpression`1_TypeDefinitionIndex = 33108;

	class PrimitiveParameterExpression`1 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_PRIMITIVEPARAMETEREXPRESSION`1_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Type* get_Type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_PRIMITIVEPARAMETEREXPRESSION`1_GET_TYPE_OFFSET))(nullptr);
		}

	};
}

