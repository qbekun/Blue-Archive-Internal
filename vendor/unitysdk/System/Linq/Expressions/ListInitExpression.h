#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_LISTINITEXPRESSION_GET_NEWEXPRESSION_OFFSET UNITYSDK_OFFSET(0x9662DB0)
#define SYSTEM_LINQ_EXPRESSIONS_LISTINITEXPRESSION_GET_INITIALIZERS_OFFSET UNITYSDK_OFFSET(0x9662DC0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int ListInitExpression_TypeDefinitionIndex = 33075;

	class ListInitExpression : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::NewExpression* _NewExpression_k__BackingField; // 0x10
		Il2CppObject* _Initializers_k__BackingField; // 0x18

		::System::Linq::Expressions::NewExpression* get_NewExpression()
		{
			return (return (::System::Linq::Expressions::NewExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LISTINITEXPRESSION_GET_NEWEXPRESSION_OFFSET))(nullptr);
		}

		Il2CppObject* get_Initializers()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LISTINITEXPRESSION_GET_INITIALIZERS_OFFSET))(nullptr);
		}

	};
}

