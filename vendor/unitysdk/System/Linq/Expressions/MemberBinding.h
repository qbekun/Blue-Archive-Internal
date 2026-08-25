#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_MEMBERBINDING_GET_BINDINGTYPE_OFFSET UNITYSDK_OFFSET(0x9662F50)
#define SYSTEM_LINQ_EXPRESSIONS_MEMBERBINDING_GET_MEMBER_OFFSET UNITYSDK_OFFSET(0x9662F60)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int MemberBinding_TypeDefinitionIndex = 33079;

	class MemberBinding : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::MemberBindingType* _BindingType_k__BackingField; // 0x10
		::System::Reflection::MemberInfo* _Member_k__BackingField; // 0x18

		::System::Linq::Expressions::MemberBindingType* get_BindingType()
		{
			return (return (::System::Linq::Expressions::MemberBindingType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBERBINDING_GET_BINDINGTYPE_OFFSET))(nullptr);
		}

		::System::Reflection::MemberInfo* get_Member()
		{
			return (return (::System::Reflection::MemberInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBERBINDING_GET_MEMBER_OFFSET))(nullptr);
		}

	};
}

