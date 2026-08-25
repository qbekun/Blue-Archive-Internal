#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_SPINLOCK_.CTOR_OFFSET UNITYSDK_OFFSET(0x93DF380)
#define SYSTEM_THREADING_SPINLOCK_ENTER_OFFSET UNITYSDK_OFFSET(0x93DF3C0)
#define SYSTEM_THREADING_SPINLOCK_TRYENTER_OFFSET UNITYSDK_OFFSET(0x93DF9C0)
#define SYSTEM_THREADING_SPINLOCK_CONTINUETRYENTER_OFFSET UNITYSDK_OFFSET(0x93DF470)
#define SYSTEM_THREADING_SPINLOCK_DECREMENTWAITERS_OFFSET UNITYSDK_OFFSET(0x93DFF10)
#define SYSTEM_THREADING_SPINLOCK_CONTINUETRYENTERWITHTHREADTRACKING_OFFSET UNITYSDK_OFFSET(0x93DFAA0)
#define SYSTEM_THREADING_SPINLOCK_EXIT_OFFSET UNITYSDK_OFFSET(0x93E0020)
#define SYSTEM_THREADING_SPINLOCK_EXITSLOWPATH_OFFSET UNITYSDK_OFFSET(0x93E00A0)
#define SYSTEM_THREADING_SPINLOCK_GET_ISHELDBYCURRENTTHREAD_OFFSET UNITYSDK_OFFSET(0x93E01B0)
#define SYSTEM_THREADING_SPINLOCK_GET_ISTHREADOWNERTRACKINGENABLED_OFFSET UNITYSDK_OFFSET(0x93DFA80)
#define SYSTEM_THREADING_SPINLOCK_.CCTOR_OFFSET UNITYSDK_OFFSET(0x93E02B0)

namespace System::Threading
{
	inline static constexpr unsigned int SpinLock_TypeDefinitionIndex = 24076;

	class SpinLock : public Il2CppObject
	{
	public:
		::System::Int32 m_owner; // 0x10
		::System::Int32 MAXIMUM_WAITERS; // 0x0

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPINLOCK_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Enter(bool&* arg)
		{
			((::System::Void(*)(bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPINLOCK_ENTER_OFFSET))(arg, nullptr);
		}

		::System::Void TryEnter(::System::Int32 arg, bool&* arg)
		{
			((::System::Void(*)(::System::Int32, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPINLOCK_TRYENTER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ContinueTryEnter(::System::Int32 arg, bool&* arg)
		{
			((::System::Void(*)(::System::Int32, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPINLOCK_CONTINUETRYENTER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DecrementWaiters()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPINLOCK_DECREMENTWAITERS_OFFSET))(nullptr);
		}

		::System::Void ContinueTryEnterWithThreadTracking(::System::Int32 arg, ::System::UInt32 arg, bool&* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::UInt32, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPINLOCK_CONTINUETRYENTERWITHTHREADTRACKING_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Exit(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPINLOCK_EXIT_OFFSET))(arg, nullptr);
		}

		::System::Void ExitSlowPath(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPINLOCK_EXITSLOWPATH_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsHeldByCurrentThread()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPINLOCK_GET_ISHELDBYCURRENTTHREAD_OFFSET))(nullptr);
		}

		::System::Boolean get_IsThreadOwnerTrackingEnabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPINLOCK_GET_ISTHREADOWNERTRACKINGENABLED_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPINLOCK_.CCTOR_OFFSET))(nullptr);
		}

	};
}

