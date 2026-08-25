#pragma once
#include "../../../unitysdk.h"

#define BESTHTTP_PLATFORMSUPPORT_THREADING_WRITELOCK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x895570)
#define BESTHTTP_PLATFORMSUPPORT_THREADING_WRITELOCK_.CTOR_OFFSET UNITYSDK_OFFSET(0x8955A0)

namespace BestHTTP::PlatformSupport::Threading
{
	inline static constexpr unsigned int WriteLock_TypeDefinitionIndex = 23265;

	class WriteLock : public Il2CppObject
	{
	public:
		::System::Threading::ReaderWriterLockSlim* rwLock; // 0x10
		::System::Boolean locked; // 0x18

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_THREADING_WRITELOCK_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Threading::ReaderWriterLockSlim* arg)
		{
			((::System::Void(*)(::System::Threading::ReaderWriterLockSlim*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_THREADING_WRITELOCK_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

