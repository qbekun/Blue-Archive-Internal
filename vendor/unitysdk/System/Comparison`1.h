#pragma once
#include "../unitysdk.h"

#define SYSTEM_COMPARISON`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPARISON`1_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System
{
	inline static constexpr unsigned int Comparison`1_TypeDefinitionIndex = 23697;

	class Comparison`1 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPARISON`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Invoke(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPARISON`1_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

