#pragma once
#include "../../unitysdk.h"

#define SYSTEM_IO_PINNEDBUFFERMEMORYSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x92F2520)
#define SYSTEM_IO_PINNEDBUFFERMEMORYSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x92F25F0)
#define SYSTEM_IO_PINNEDBUFFERMEMORYSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x92F2610)
#define SYSTEM_IO_PINNEDBUFFERMEMORYSTREAM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x92F2630)
#define SYSTEM_IO_PINNEDBUFFERMEMORYSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x92F2700)

namespace System::IO
{
	inline static constexpr unsigned int PinnedBufferMemoryStream_TypeDefinitionIndex = 25235;

	class PinnedBufferMemoryStream : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _array; // 0x68
		::System::Runtime::InteropServices::GCHandle* _pinningHandle; // 0x70

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PINNEDBUFFERMEMORYSTREAM_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Read(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PINNEDBUFFERMEMORYSTREAM_READ_OFFSET))(arg, nullptr);
		}

		::System::Void Write(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PINNEDBUFFERMEMORYSTREAM_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PINNEDBUFFERMEMORYSTREAM_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PINNEDBUFFERMEMORYSTREAM_DISPOSE_OFFSET))(arg, nullptr);
		}

	};
}

