#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_TYPEDDYNAMICEXPRESSIONN_.CTOR_OFFSET UNITYSDK_OFFSET(0x9653090)
#define SYSTEM_LINQ_EXPRESSIONS_TYPEDDYNAMICEXPRESSIONN_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9653E30)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int TypedDynamicExpressionN_TypeDefinitionIndex = 33035;

	class TypedDynamicExpressionN : public Il2CppObject
	{
	public:
		::System::Type* _Type_k__BackingField; // 0x28

		::System::Void .ctor(::System::Type* arg, ::System::Type* arg, ::System::Runtime::CompilerServices::CallSiteBinder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Type*, ::System::Runtime::CompilerServices::CallSiteBinder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TYPEDDYNAMICEXPRESSIONN_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Type* get_Type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_TYPEDDYNAMICEXPRESSIONN_GET_TYPE_OFFSET))(nullptr);
		}

	};
}

