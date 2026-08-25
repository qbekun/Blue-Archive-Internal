#pragma once
#include "../../unitysdk.h"

#define SYSTEM_BUFFERS_IBUFFERWRITER`1_ADVANCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_IBUFFERWRITER`1_GETMEMORY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_IBUFFERWRITER`1_GETSPAN_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Buffers
{
	inline static constexpr unsigned int IBufferWriter`1_TypeDefinitionIndex = 25201;

	class IBufferWriter`1 : public Il2CppObject
	{
	public:
		::System::Void Advance(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_IBUFFERWRITER`1_ADVANCE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetMemory(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_IBUFFERWRITER`1_GETMEMORY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetSpan(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_IBUFFERWRITER`1_GETSPAN_OFFSET))(arg, nullptr);
		}

	};
}

