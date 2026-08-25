#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_LOCK_ACQUIRE_OFFSET UNITYSDK_OFFSET(0x93DCE30)
#define SYSTEM_THREADING_LOCK_RELEASE_OFFSET UNITYSDK_OFFSET(0x93DCE70)
#define SYSTEM_THREADING_LOCK_.CTOR_OFFSET UNITYSDK_OFFSET(0x93DCE80)

namespace System::Threading
{
	inline static constexpr unsigned int Lock_TypeDefinitionIndex = 24071;

	class Lock : public Il2CppObject
	{
	public:
		::System::Object* _lock; // 0x10

		::System::Void Acquire()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_LOCK_ACQUIRE_OFFSET))(nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_LOCK_RELEASE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_LOCK_.CTOR_OFFSET))(nullptr);
		}

	};
}

