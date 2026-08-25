#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_STACKGUARD_TRYENTERONCURRENTSTACK_OFFSET UNITYSDK_OFFSET(0x9666690)
#define SYSTEM_LINQ_EXPRESSIONS_STACKGUARD_RUNONEMPTYSTACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_EXPRESSIONS_STACKGUARD_RUNONEMPTYSTACKCORE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_EXPRESSIONS_STACKGUARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x9666700)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int StackGuard_TypeDefinitionIndex = 33111;

	class StackGuard : public Il2CppObject
	{
	public:
		::System::Int32 _executionStackCount; // 0x10

		::System::Boolean TryEnterOnCurrentStack()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_STACKGUARD_TRYENTERONCURRENTSTACK_OFFSET))(nullptr);
		}

		::System::Void RunOnEmptyStack(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_STACKGUARD_RUNONEMPTYSTACK_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* RunOnEmptyStackCore(Il2CppObject* arg, ::System::Object* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_STACKGUARD_RUNONEMPTYSTACKCORE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_STACKGUARD_.CTOR_OFFSET))(nullptr);
		}

	};
}

