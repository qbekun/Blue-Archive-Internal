#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_MONITOR_ENTER_OFFSET UNITYSDK_OFFSET(0x93E28E0)
#define SYSTEM_THREADING_MONITOR_ENTER_OFFSET UNITYSDK_OFFSET(0x93E28F0)
#define SYSTEM_THREADING_MONITOR_THROWLOCKTAKENEXCEPTION_OFFSET UNITYSDK_OFFSET(0x93E2980)
#define SYSTEM_THREADING_MONITOR_EXIT_OFFSET UNITYSDK_OFFSET(0x93E2A10)
#define SYSTEM_THREADING_MONITOR_TRYENTER_OFFSET UNITYSDK_OFFSET(0x93E2A20)
#define SYSTEM_THREADING_MONITOR_WAIT_OFFSET UNITYSDK_OFFSET(0x93E2B60)
#define SYSTEM_THREADING_MONITOR_WAIT_OFFSET UNITYSDK_OFFSET(0x93E2C90)
#define SYSTEM_THREADING_MONITOR_PULSE_OFFSET UNITYSDK_OFFSET(0x93E2CA0)
#define SYSTEM_THREADING_MONITOR_PULSEALL_OFFSET UNITYSDK_OFFSET(0x93E2D80)
#define SYSTEM_THREADING_MONITOR_MONITOR_TEST_SYNCHRONISED_OFFSET UNITYSDK_OFFSET(0x93E2E60)
#define SYSTEM_THREADING_MONITOR_MONITOR_PULSE_OFFSET UNITYSDK_OFFSET(0x93E2E70)
#define SYSTEM_THREADING_MONITOR_OBJPULSE_OFFSET UNITYSDK_OFFSET(0x93E2D10)
#define SYSTEM_THREADING_MONITOR_MONITOR_PULSE_ALL_OFFSET UNITYSDK_OFFSET(0x93E2E80)
#define SYSTEM_THREADING_MONITOR_OBJPULSEALL_OFFSET UNITYSDK_OFFSET(0x93E2DF0)
#define SYSTEM_THREADING_MONITOR_MONITOR_WAIT_OFFSET UNITYSDK_OFFSET(0x93E2E90)
#define SYSTEM_THREADING_MONITOR_OBJWAIT_OFFSET UNITYSDK_OFFSET(0x93E2BD0)
#define SYSTEM_THREADING_MONITOR_TRY_ENTER_WITH_ATOMIC_VAR_OFFSET UNITYSDK_OFFSET(0x93E2EA0)
#define SYSTEM_THREADING_MONITOR_RELIABLEENTERTIMEOUT_OFFSET UNITYSDK_OFFSET(0x93E2AB0)
#define SYSTEM_THREADING_MONITOR_RELIABLEENTER_OFFSET UNITYSDK_OFFSET(0x93E2A00)

namespace System::Threading
{
	inline static constexpr unsigned int Monitor_TypeDefinitionIndex = 24091;

	class Monitor : public Il2CppObject
	{
	public:
		::System::Void Enter(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_ENTER_OFFSET))(arg, nullptr);
		}

		::System::Void Enter(::System::Object* arg, bool&* arg)
		{
			((::System::Void(*)(::System::Object*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_ENTER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ThrowLockTakenException()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_THROWLOCKTAKENEXCEPTION_OFFSET))(nullptr);
		}

		::System::Void Exit(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_EXIT_OFFSET))(arg, nullptr);
		}

		::System::Void TryEnter(::System::Object* arg, bool&* arg)
		{
			((::System::Void(*)(::System::Object*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_TRYENTER_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Wait(::System::Object* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_WAIT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean Wait(::System::Object* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_WAIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Pulse(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_PULSE_OFFSET))(arg, nullptr);
		}

		::System::Void PulseAll(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_PULSEALL_OFFSET))(arg, nullptr);
		}

		::System::Boolean Monitor_test_synchronised(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_MONITOR_TEST_SYNCHRONISED_OFFSET))(arg, nullptr);
		}

		::System::Void Monitor_pulse(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_MONITOR_PULSE_OFFSET))(arg, nullptr);
		}

		::System::Void ObjPulse(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_OBJPULSE_OFFSET))(arg, nullptr);
		}

		::System::Void Monitor_pulse_all(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_MONITOR_PULSE_ALL_OFFSET))(arg, nullptr);
		}

		::System::Void ObjPulseAll(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_OBJPULSEALL_OFFSET))(arg, nullptr);
		}

		::System::Boolean Monitor_wait(::System::Object* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_MONITOR_WAIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ObjWait(::System::Boolean arg, ::System::Int32 arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Boolean, ::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_OBJWAIT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void try_enter_with_atomic_var(::System::Object* arg, ::System::Int32 arg, bool&* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_TRY_ENTER_WITH_ATOMIC_VAR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ReliableEnterTimeout(::System::Object* arg, ::System::Int32 arg, bool&* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_RELIABLEENTERTIMEOUT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ReliableEnter(::System::Object* arg, bool&* arg)
		{
			((::System::Void(*)(::System::Object*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MONITOR_RELIABLEENTER_OFFSET))(arg, arg, nullptr);
		}

	};
}

