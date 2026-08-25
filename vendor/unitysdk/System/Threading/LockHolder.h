#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_LOCKHOLDER_HOLD_OFFSET UNITYSDK_OFFSET(0x93DCDF0)
#define SYSTEM_THREADING_LOCKHOLDER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x93DCE40)

namespace System::Threading
{
	inline static constexpr unsigned int LockHolder_TypeDefinitionIndex = 24070;

	class LockHolder : public Il2CppObject
	{
	public:
		::System::Threading::Lock* _lock; // 0x10

		::System::Threading::LockHolder* Hold(::System::Threading::Lock* arg)
		{
			return (return (::System::Threading::LockHolder*(*)(::System::Threading::Lock*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_LOCKHOLDER_HOLD_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_LOCKHOLDER_DISPOSE_OFFSET))(nullptr);
		}

	};
}

