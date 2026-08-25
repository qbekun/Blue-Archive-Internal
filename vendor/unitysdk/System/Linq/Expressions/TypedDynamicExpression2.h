#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_TYPEDDYNAMICEXPRESSION2_.CTOR_OFFSET UNITYSDK_OFFSET(0x96535B0)
#define SYSTEM_LINQ_EXPRESSIONS_TYPEDDYNAMICEXPRESSION2_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x96544A0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int TypedDynamicExpression2_TypeDefinitionIndex = 33039;

	class TypedDynamicExpression2 : public Il2CppObject
	{
	public:
		::System::Type* _Type_k__BackingField; // 0x30

		::System::Void .ctor(::System::Type* arg, ::System::Type* arg, ::System::Runtime::CompilerServices::CallSiteBinder* arg, ::System::Linq::Expressions::Expression* arg, ::System::Linq::Expressions::Expression* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Type*, ::System::Runtime::CompilerServices::CallSiteBinder*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TYPEDDYNAMICEXPRESSION2_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Type* get_Type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TYPEDDYNAMICEXPRESSION2_GET_TYPE_OFFSET))(nullptr);
		}

	};
}

