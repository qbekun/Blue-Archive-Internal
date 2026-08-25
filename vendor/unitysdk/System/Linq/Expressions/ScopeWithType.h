#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_SCOPEWITHTYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9651610)
#define SYSTEM_LINQ_EXPRESSIONS_SCOPEWITHTYPE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x96516A0)
#define SYSTEM_LINQ_EXPRESSIONS_SCOPEWITHTYPE_REWRITE_OFFSET UNITYSDK_OFFSET(0x96516B0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int ScopeWithType_TypeDefinitionIndex = 33019;

	class ScopeWithType : public Il2CppObject
	{
	public:
		::System::Type* _Type_k__BackingField; // 0x20

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg, ::System::Type* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SCOPEWITHTYPE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Type* get_Type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SCOPEWITHTYPE_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::BlockExpression* Rewrite(Il2CppObject* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Linq::Expressions::BlockExpression*(*)(Il2CppObject*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SCOPEWITHTYPE_REWRITE_OFFSET))(arg, arg, nullptr);
		}

	};
}

