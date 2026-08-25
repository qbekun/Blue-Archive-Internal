#pragma once
#include "../unitysdk.h"

#define SYSTEM_BUFFEREX_ZEROMEMORY_OFFSET UNITYSDK_OFFSET(0xA4AD360)
#define SYSTEM_BUFFEREX_MEMCPY_OFFSET UNITYSDK_OFFSET(0xA4AD3B0)

namespace System
{
	inline static constexpr unsigned int BufferEx_TypeDefinitionIndex = 34646;

	class BufferEx : public Il2CppObject
	{
	public:
		::System::Void ZeroMemory(::System::Object** arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFEREX_ZEROMEMORY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Memcpy(::System::Object** arg, ::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFEREX_MEMCPY_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

