#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_PROPERTYEXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9663090)
#define SYSTEM_LINQ_EXPRESSIONS_PROPERTYEXPRESSION_GETMEMBER_OFFSET UNITYSDK_OFFSET(0x96632F0)
#define SYSTEM_LINQ_EXPRESSIONS_PROPERTYEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9663300)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int PropertyExpression_TypeDefinitionIndex = 33082;

	class PropertyExpression : public Il2CppObject
	{
	public:
		::System::Reflection::PropertyInfo* _property; // 0x18

		::System::Void .ctor(::System::Linq::Expressions::Expression* arg, ::System::Reflection::PropertyInfo* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::PropertyInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_PROPERTYEXPRESSION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Reflection::MemberInfo* GetMember()
		{
			return (return (::System::Reflection::MemberInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_PROPERTYEXPRESSION_GETMEMBER_OFFSET))(nullptr);
		}

		::System::Type* get_Type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_PROPERTYEXPRESSION_GET_TYPE_OFFSET))(nullptr);
		}

	};
}

