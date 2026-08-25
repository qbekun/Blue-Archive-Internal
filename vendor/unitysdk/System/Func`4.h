#pragma once
#include "../unitysdk.h"

#define SYSTEM_FUNC`4_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_FUNC`4_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System
{
	inline static constexpr unsigned int Func`4_TypeDefinitionIndex = 23691;

	class Func`4 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_FUNC`4_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Invoke(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_FUNC`4_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

