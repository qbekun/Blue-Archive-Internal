#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_MEMBERINITEXPRESSION_GET_NEWEXPRESSION_OFFSET UNITYSDK_OFFSET(0x9663330)
#define SYSTEM_LINQ_EXPRESSIONS_MEMBERINITEXPRESSION_GET_BINDINGS_OFFSET UNITYSDK_OFFSET(0x9663340)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int MemberInitExpression_TypeDefinitionIndex = 33083;

	class MemberInitExpression : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::NewExpression* _NewExpression_k__BackingField; // 0x10
		Il2CppObject* _Bindings_k__BackingField; // 0x18

		::System::Linq::Expressions::NewExpression* get_NewExpression()
		{
			return (return (::System::Linq::Expressions::NewExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBERINITEXPRESSION_GET_NEWEXPRESSION_OFFSET))(nullptr);
		}

		Il2CppObject* get_Bindings()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBERINITEXPRESSION_GET_BINDINGS_OFFSET))(nullptr);
		}

	};
}

