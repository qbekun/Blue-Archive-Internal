#pragma once
#include "../../../unitysdk.h"

#define BESTHTTP_PLATFORMSUPPORT_THREADING_READLOCK_.CTOR_OFFSET UNITYSDK_OFFSET(0x8954F0)
#define BESTHTTP_PLATFORMSUPPORT_THREADING_READLOCK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x895540)

namespace BestHTTP::PlatformSupport::Threading
{
	inline static constexpr unsigned int ReadLock_TypeDefinitionIndex = 23264;

	class ReadLock : public Il2CppObject
	{
	public:
		::System::Threading::ReaderWriterLockSlim* rwLock; // 0x10
		::System::Boolean locked; // 0x18

		::System::Void .ctor(::System::Threading::ReaderWriterLockSlim* arg)
		{
			((::System::Void(*)(::System::Threading::ReaderWriterLockSlim*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_THREADING_READLOCK_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_THREADING_READLOCK_DISPOSE_OFFSET))(nullptr);
		}

	};
}

