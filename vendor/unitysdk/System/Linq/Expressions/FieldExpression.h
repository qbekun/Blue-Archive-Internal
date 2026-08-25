#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_FIELDEXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x96631C0)
#define SYSTEM_LINQ_EXPRESSIONS_FIELDEXPRESSION_GETMEMBER_OFFSET UNITYSDK_OFFSET(0x96632B0)
#define SYSTEM_LINQ_EXPRESSIONS_FIELDEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x96632C0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int FieldExpression_TypeDefinitionIndex = 33081;

	class FieldExpression : public Il2CppObject
	{
	public:
		::System::Reflection::FieldInfo* _field; // 0x18

		::System::Void .ctor(::System::Linq::Expressions::Expression* arg, ::System::Reflection::FieldInfo* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::FieldInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_FIELDEXPRESSION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Reflection::MemberInfo* GetMember()
		{
			return (return (::System::Reflection::MemberInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_FIELDEXPRESSION_GETMEMBER_OFFSET))(nullptr);
		}

		::System::Type* get_Type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_FIELDEXPRESSION_GET_TYPE_OFFSET))(nullptr);
		}

	};
}

