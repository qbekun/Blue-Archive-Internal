#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_SPINWAIT_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x93DA5B0)
#define SYSTEM_THREADING_SPINWAIT_GET_NEXTSPINWILLYIELD_OFFSET UNITYSDK_OFFSET(0x93DA5C0)
#define SYSTEM_THREADING_SPINWAIT_SPINONCE_OFFSET UNITYSDK_OFFSET(0x93DA4C0)
#define SYSTEM_THREADING_SPINWAIT_SPINONCE_OFFSET UNITYSDK_OFFSET(0x93DA070)
#define SYSTEM_THREADING_SPINWAIT_SPINONCECORE_OFFSET UNITYSDK_OFFSET(0x93DA630)
#define SYSTEM_THREADING_SPINWAIT_RESET_OFFSET UNITYSDK_OFFSET(0x93DA7E0)
#define SYSTEM_THREADING_SPINWAIT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x93DA7F0)

namespace System::Threading
{
	inline static constexpr unsigned int SpinWait_TypeDefinitionIndex = 24055;

	class SpinWait : public Il2CppObject
	{
	public:
		::System::Int32 SpinCountforSpinBeforeWait; // 0x0
		::System::Int32 _count; // 0x10

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPINWAIT_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_NextSpinWillYield()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPINWAIT_GET_NEXTSPINWILLYIELD_OFFSET))(nullptr);
		}

		::System::Void SpinOnce()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPINWAIT_SPINONCE_OFFSET))(nullptr);
		}

		::System::Void SpinOnce(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPINWAIT_SPINONCE_OFFSET))(arg, nullptr);
		}

		::System::Void SpinOnceCore(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPINWAIT_SPINONCECORE_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPINWAIT_RESET_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPINWAIT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

