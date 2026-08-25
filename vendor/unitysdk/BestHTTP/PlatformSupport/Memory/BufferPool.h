#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::PlatformSupport::Memory { class BufferSegment; }
namespace BestHTTP::PlatformSupport::Memory { class BufferDesc; }

#define BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERPOOL_GET_ISENABLED_OFFSET UNITYSDK_OFFSET(0x8981A0)
#define BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERPOOL_SET_ISENABLED_OFFSET UNITYSDK_OFFSET(0x898200)
#define BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERPOOL_.CCTOR_OFFSET UNITYSDK_OFFSET(0x898460)
#define BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERPOOL_GET_OFFSET UNITYSDK_OFFSET(0x898720)
#define BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERPOOL_RELEASE_OFFSET UNITYSDK_OFFSET(0x898DB0)
#define BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERPOOL_RELEASE_OFFSET UNITYSDK_OFFSET(0x897B30)
#define BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERPOOL_RESIZE_OFFSET UNITYSDK_OFFSET(0x899300)
#define BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERPOOL_GETSTATISTICS_OFFSET UNITYSDK_OFFSET(0x899470)
#define BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERPOOL_CLEAR_OFFSET UNITYSDK_OFFSET(0x8982A0)
#define BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERPOOL_MAINTAIN_OFFSET UNITYSDK_OFFSET(0x8999A0)
#define BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERPOOL_ISPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0x898960)
#define BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERPOOL_NEXTPOWEROF2_OFFSET UNITYSDK_OFFSET(0x898970)
#define BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERPOOL_FINDFREEBUFFER_OFFSET UNITYSDK_OFFSET(0x898990)
#define BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERPOOL_ADDFREEBUFFER_OFFSET UNITYSDK_OFFSET(0x898E00)

namespace BestHTTP::PlatformSupport::Memory
{
	inline static constexpr unsigned int BufferPool_TypeDefinitionIndex = 23281;

	class BufferPool : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* NoData; // 0x0
		::System::Boolean _isEnabled; // 0x8
		::System::TimeSpan* RemoveOlderThan; // 0x10
		::System::TimeSpan* RunMaintenanceEvery; // 0x18
		::System::Int64 MinBufferSize; // 0x20
		::System::Int64 MaxBufferSize; // 0x28
		::System::Int64 MaxPoolSize; // 0x30
		::System::Boolean RemoveEmptyLists; // 0x38
		::System::Boolean IsDoubleReleaseCheckEnabled; // 0x39
		Il2CppObject* FreeBuffers; // 0x40
		::System::DateTime* lastMaintenance; // 0x48
		::System::Int64 PoolSize; // 0x50
		::System::Int64 GetBuffers; // 0x58
		::System::Int64 ReleaseBuffers; // 0x60
		::System::Text::StringBuilder* statiscticsBuilder; // 0x68
		::System::Threading::ReaderWriterLockSlim* rwLock; // 0x70

		::System::Boolean get_IsEnabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERPOOL_GET_ISENABLED_OFFSET))(nullptr);
		}

		::System::Void set_IsEnabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERPOOL_SET_ISENABLED_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERPOOL_.CCTOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* Get(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERPOOL_GET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Release(::BestHTTP::PlatformSupport::Memory::BufferSegment* arg)
		{
			((::System::Void(*)(::BestHTTP::PlatformSupport::Memory::BufferSegment*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERPOOL_RELEASE_OFFSET))(arg, nullptr);
		}

		::System::Void Release(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERPOOL_RELEASE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Resize(::System::Object[]&* arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Object[]&*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERPOOL_RESIZE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::String* GetStatistics(::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERPOOL_GETSTATISTICS_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERPOOL_CLEAR_OFFSET))(nullptr);
		}

		::System::Void Maintain()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERPOOL_MAINTAIN_OFFSET))(nullptr);
		}

		::System::Boolean IsPowerOfTwo(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERPOOL_ISPOWEROFTWO_OFFSET))(arg, nullptr);
		}

		::System::Int64 NextPowerOf2(::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERPOOL_NEXTPOWEROF2_OFFSET))(arg, nullptr);
		}

		::BestHTTP::PlatformSupport::Memory::BufferDesc* FindFreeBuffer(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (::BestHTTP::PlatformSupport::Memory::BufferDesc*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERPOOL_FINDFREEBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFreeBuffer(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_MEMORY_BUFFERPOOL_ADDFREEBUFFER_OFFSET))(arg, nullptr);
		}

	};
}

