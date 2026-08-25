#pragma once
#include "../../unitysdk.h"

#define SYSTEM_BUFFERS_SPANACTION`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_SPANACTION`2_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Buffers
{
	inline static constexpr unsigned int SpanAction`2_TypeDefinitionIndex = 25188;

	class SpanAction`2 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_SPANACTION`2_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_SPANACTION`2_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

