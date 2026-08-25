#pragma once
#include "../../../unitysdk.h"

#define BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERSTORE_.CTOR_OFFSET UNITYSDK_OFFSET(0x897D50)
#define BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERSTORE_.CTOR_OFFSET UNITYSDK_OFFSET(0x897DD0)
#define BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERSTORE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x897FA0)

namespace BestHTTP::PlatformSupport::Memory
{
	inline static constexpr unsigned int BufferStore_TypeDefinitionIndex = 23279;

	class BufferStore : public Il2CppObject
	{
	public:
		::System::Int64 Size; // 0x10
		Il2CppObject* buffers; // 0x18

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERSTORE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int64, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERSTORE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERSTORE_TOSTRING_OFFSET))(nullptr);
		}

	};
}

