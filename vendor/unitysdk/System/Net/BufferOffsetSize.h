#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_BUFFEROFFSETSIZE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A4DCC0)
#define SYSTEM_NET_BUFFEROFFSETSIZE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A4DD70)

namespace System::Net
{
	inline static constexpr unsigned int BufferOffsetSize_TypeDefinitionIndex = 29708;

	class BufferOffsetSize : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* Buffer; // 0x10
		::System::Int32 Offset; // 0x18
		::System::Int32 Size; // 0x1C

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_BUFFEROFFSETSIZE_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_BUFFEROFFSETSIZE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

