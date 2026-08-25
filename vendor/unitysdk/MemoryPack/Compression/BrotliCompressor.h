#pragma once
#include "../../unitysdk.h"

namespace MemoryPack::Internal { class ReusableLinkedArrayBufferWriter; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MEMORYPACK_COMPRESSION_BROTLICOMPRESSOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x907B170)
#define MEMORYPACK_COMPRESSION_BROTLICOMPRESSOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x907B2A0)
#define MEMORYPACK_COMPRESSION_BROTLICOMPRESSOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x907B230)
#define MEMORYPACK_COMPRESSION_BROTLICOMPRESSOR_SYSTEM.BUFFERS.IBUFFERWRITER_SYSTEM.BYTE_.ADVANCE_OFFSET UNITYSDK_OFFSET(0x907B360)
#define MEMORYPACK_COMPRESSION_BROTLICOMPRESSOR_SYSTEM.BUFFERS.IBUFFERWRITER_SYSTEM.BYTE_.GETMEMORY_OFFSET UNITYSDK_OFFSET(0x907B430)
#define MEMORYPACK_COMPRESSION_BROTLICOMPRESSOR_SYSTEM.BUFFERS.IBUFFERWRITER_SYSTEM.BYTE_.GETSPAN_OFFSET UNITYSDK_OFFSET(0x907B4C0)
#define MEMORYPACK_COMPRESSION_BROTLICOMPRESSOR_TOARRAY_OFFSET UNITYSDK_OFFSET(0x907B530)
#define MEMORYPACK_COMPRESSION_BROTLICOMPRESSOR_COPYTO_OFFSET UNITYSDK_OFFSET(0x907BEA0)
#define MEMORYPACK_COMPRESSION_BROTLICOMPRESSOR_COPYTOASYNC_OFFSET UNITYSDK_OFFSET(0x907C5D0)
#define MEMORYPACK_COMPRESSION_BROTLICOMPRESSOR_COPYTO_OFFSET UNITYSDK_OFFSET(0x907C760)
#define MEMORYPACK_COMPRESSION_BROTLICOMPRESSOR_COMPRESSCORE_OFFSET UNITYSDK_OFFSET(0x907C260)
#define MEMORYPACK_COMPRESSION_BROTLICOMPRESSOR_COMPRESSCORE_OFFSET UNITYSDK_OFFSET(0x907CB10)
#define MEMORYPACK_COMPRESSION_BROTLICOMPRESSOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x907CEA0)
#define MEMORYPACK_COMPRESSION_BROTLICOMPRESSOR_THROWIFDISPOSED_OFFSET UNITYSDK_OFFSET(0x907B3D0)

namespace MemoryPack::Compression
{
	inline static constexpr unsigned int BrotliCompressor_TypeDefinitionIndex = 35552;

	class BrotliCompressor : public Il2CppObject
	{
	public:
		::MemoryPack::Internal::ReusableLinkedArrayBufferWriter* bufferWriter; // 0x10
		::System::Int32 quality; // 0x18
		::System::Int32 window; // 0x1C

		::System::Void .ctor(::System::IO::Compression::CompressionLevel* arg)
		{
			((::System::Void(*)(::System::IO::Compression::CompressionLevel*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_COMPRESSION_BROTLICOMPRESSOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Compression::CompressionLevel* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::IO::Compression::CompressionLevel*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_COMPRESSION_BROTLICOMPRESSOR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_COMPRESSION_BROTLICOMPRESSOR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void System.Buffers.IBufferWriter_System.Byte_.Advance(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_COMPRESSION_BROTLICOMPRESSOR_SYSTEM.BUFFERS.IBUFFERWRITER_SYSTEM.BYTE_.ADVANCE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* System.Buffers.IBufferWriter_System.Byte_.GetMemory(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_COMPRESSION_BROTLICOMPRESSOR_SYSTEM.BUFFERS.IBUFFERWRITER_SYSTEM.BYTE_.GETMEMORY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* System.Buffers.IBufferWriter_System.Byte_.GetSpan(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_COMPRESSION_BROTLICOMPRESSOR_SYSTEM.BUFFERS.IBUFFERWRITER_SYSTEM.BYTE_.GETSPAN_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ToArray()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_COMPRESSION_BROTLICOMPRESSOR_TOARRAY_OFFSET))(nullptr);
		}

		::System::Void CopyTo(Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_COMPRESSION_BROTLICOMPRESSOR_COPYTO_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::ValueTask* CopyToAsync(::System::IO::Stream* arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::ValueTask*(*)(::System::IO::Stream*, ::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_COMPRESSION_BROTLICOMPRESSOR_COPYTOASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void CopyTo(::MemoryPack::MemoryPackWriter&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_COMPRESSION_BROTLICOMPRESSOR_COPYTO_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompressCore(::System::IO::Compression::BrotliEncoder&* arg, Il2CppObject* arg, Il2CppObject&* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::IO::Compression::BrotliEncoder&*, Il2CppObject*, Il2CppObject&*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_COMPRESSION_BROTLICOMPRESSOR_COMPRESSCORE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 CompressCore(::System::IO::Compression::BrotliEncoder&* arg, Il2CppObject* arg, ::MemoryPack::MemoryPackWriter&* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::IO::Compression::BrotliEncoder&*, Il2CppObject*, ::MemoryPack::MemoryPackWriter&*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_COMPRESSION_BROTLICOMPRESSOR_COMPRESSCORE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_COMPRESSION_BROTLICOMPRESSOR_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void ThrowIfDisposed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_COMPRESSION_BROTLICOMPRESSOR_THROWIFDISPOSED_OFFSET))(nullptr);
		}

	};
}

