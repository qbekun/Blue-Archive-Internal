#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_READERWRITERLOCK_.CTOR_OFFSET UNITYSDK_OFFSET(0x93EA7F0)
#define SYSTEM_THREADING_READERWRITERLOCK_FINALIZE_OFFSET UNITYSDK_OFFSET(0x93EA8E0)
#define SYSTEM_THREADING_READERWRITERLOCK_ACQUIREREADERLOCK_OFFSET UNITYSDK_OFFSET(0x93EA8F0)
#define SYSTEM_THREADING_READERWRITERLOCK_ACQUIREREADERLOCK_OFFSET UNITYSDK_OFFSET(0x93EA900)
#define SYSTEM_THREADING_READERWRITERLOCK_ACQUIREWRITERLOCK_OFFSET UNITYSDK_OFFSET(0x93EB360)
#define SYSTEM_THREADING_READERWRITERLOCK_ACQUIREWRITERLOCK_OFFSET UNITYSDK_OFFSET(0x93EAFE0)
#define SYSTEM_THREADING_READERWRITERLOCK_RELEASEREADERLOCK_OFFSET UNITYSDK_OFFSET(0x93EB370)
#define SYSTEM_THREADING_READERWRITERLOCK_RELEASEREADERLOCK_OFFSET UNITYSDK_OFFSET(0x93EB800)
#define SYSTEM_THREADING_READERWRITERLOCK_RELEASEWRITERLOCK_OFFSET UNITYSDK_OFFSET(0x93EB650)
#define SYSTEM_THREADING_READERWRITERLOCK_RELEASEWRITERLOCK_OFFSET UNITYSDK_OFFSET(0x93EBAD0)
#define SYSTEM_THREADING_READERWRITERLOCK_HASWRITERLOCK_OFFSET UNITYSDK_OFFSET(0x93EAF50)

namespace System::Threading
{
	inline static constexpr unsigned int ReaderWriterLock_TypeDefinitionIndex = 24121;

	class ReaderWriterLock : public Il2CppObject
	{
	public:
		::System::Int32 seq_num; // 0x10
		::System::Int32 state; // 0x14
		::System::Int32 readers; // 0x18
		::System::Int32 writer_lock_owner; // 0x1C
		::System::Threading::LockQueue* writer_queue; // 0x20
		::System::Collections::Hashtable* reader_locks; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCK_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void AcquireReaderLock(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCK_ACQUIREREADERLOCK_OFFSET))(arg, nullptr);
		}

		::System::Void AcquireReaderLock(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCK_ACQUIREREADERLOCK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AcquireWriterLock(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCK_ACQUIREWRITERLOCK_OFFSET))(arg, nullptr);
		}

		::System::Void AcquireWriterLock(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCK_ACQUIREWRITERLOCK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ReleaseReaderLock()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCK_RELEASEREADERLOCK_OFFSET))(nullptr);
		}

		::System::Void ReleaseReaderLock(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCK_RELEASEREADERLOCK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ReleaseWriterLock()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCK_RELEASEWRITERLOCK_OFFSET))(nullptr);
		}

		::System::Void ReleaseWriterLock(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCK_RELEASEWRITERLOCK_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasWriterLock()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_READERWRITERLOCK_HASWRITERLOCK_OFFSET))(nullptr);
		}

	};
}

