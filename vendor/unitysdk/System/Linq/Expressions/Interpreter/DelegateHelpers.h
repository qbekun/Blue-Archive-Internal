#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DELEGATEHELPERS_MAKEDELEGATE_OFFSET UNITYSDK_OFFSET(0x969C3F0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int DelegateHelpers_TypeDefinitionIndex = 33503;

	class DelegateHelpers : public Il2CppObject
	{
	public:
		::System::Type* MakeDelegate(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Type*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DELEGATEHELPERS_MAKEDELEGATE_OFFSET))(arg, nullptr);
		}

	};
}

