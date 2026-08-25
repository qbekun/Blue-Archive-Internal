#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_NEWVALUETYPEEXPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9665C90)
#define SYSTEM_LINQ_EXPRESSIONS_NEWVALUETYPEEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9665D30)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int NewValueTypeExpression_TypeDefinitionIndex = 33104;

	class NewValueTypeExpression : public Il2CppObject
	{
	public:
		::System::Type* _Type_k__BackingField; // 0x28

		::System::Void .ctor(::System::Type* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Type*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_NEWVALUETYPEEXPRESSION_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Type* get_Type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_NEWVALUETYPEEXPRESSION_GET_TYPE_OFFSET))(nullptr);
		}

	};
}

