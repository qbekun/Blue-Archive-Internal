#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_ARRAYBUILDEREXTENSIONS_TOREADONLY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int ArrayBuilderExtensions_TypeDefinitionIndex = 33023;

	class ArrayBuilderExtensions : public Il2CppObject
	{
	public:
		Il2CppObject* ToReadOnly(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ARRAYBUILDEREXTENSIONS_TOREADONLY_OFFSET))(arg, nullptr);
		}

	};
}

