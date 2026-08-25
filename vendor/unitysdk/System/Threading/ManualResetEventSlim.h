#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_GET_WAITHANDLE_OFFSET UNITYSDK_OFFSET(0x93D8A00)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_GET_ISSET_OFFSET UNITYSDK_OFFSET(0x93D8CD0)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_SET_ISSET_OFFSET UNITYSDK_OFFSET(0x93D8D30)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_GET_SPINCOUNT_OFFSET UNITYSDK_OFFSET(0x93D8EC0)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_SET_SPINCOUNT_OFFSET UNITYSDK_OFFSET(0x93D8F30)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_GET_WAITERS_OFFSET UNITYSDK_OFFSET(0x93D8F60)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_SET_WAITERS_OFFSET UNITYSDK_OFFSET(0x93D8FB0)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_.CTOR_OFFSET UNITYSDK_OFFSET(0x93D9060)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_.CTOR_OFFSET UNITYSDK_OFFSET(0x93D90D0)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_.CTOR_OFFSET UNITYSDK_OFFSET(0x93D9200)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x93D9140)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_ENSURELOCKOBJECTCREATED_OFFSET UNITYSDK_OFFSET(0x93D9320)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_LAZYINITIALIZEEVENT_OFFSET UNITYSDK_OFFSET(0x93D8AB0)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_SET_OFFSET UNITYSDK_OFFSET(0x93D9420)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_SET_OFFSET UNITYSDK_OFFSET(0x93D9430)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_WAIT_OFFSET UNITYSDK_OFFSET(0x93D96F0)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x93DA1A0)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x93DA200)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_THROWIFDISPOSED_OFFSET UNITYSDK_OFFSET(0x93D8A40)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_CANCELLATIONTOKENCALLBACK_OFFSET UNITYSDK_OFFSET(0x93DA360)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_UPDATESTATEATOMICALLY_OFFSET UNITYSDK_OFFSET(0x93D8D70)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_EXTRACTSTATEPORTIONANDSHIFTRIGHT_OFFSET UNITYSDK_OFFSET(0x93D8F20)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_EXTRACTSTATEPORTION_OFFSET UNITYSDK_OFFSET(0x93D8D20)
#define SYSTEM_THREADING_MANUALRESETEVENTSLIM_.CCTOR_OFFSET UNITYSDK_OFFSET(0x93DA510)

namespace System::Threading
{
	inline static constexpr unsigned int ManualResetEventSlim_TypeDefinitionIndex = 24053;

	class ManualResetEventSlim : public Il2CppObject
	{
	public:
		::System::Int32 DEFAULT_SPIN_SP; // 0x0
		::System::Object* m_lock; // 0x10
		::System::Threading::ManualResetEvent* m_eventObj; // 0x18
		::System::Int32 m_combinedState; // 0x20
		::System::Int32 SignalledState_BitMask; // 0x0
		::System::Int32 SignalledState_ShiftCount; // 0x0
		::System::Int32 Dispose_BitMask; // 0x0
		::System::Int32 SpinCountState_BitMask; // 0x0
		::System::Int32 SpinCountState_ShiftCount; // 0x0
		::System::Int32 SpinCountState_MaxValue; // 0x0
		::System::Int32 NumWaitersState_BitMask; // 0x0
		::System::Int32 NumWaitersState_ShiftCount; // 0x0
		::System::Int32 NumWaitersState_MaxValue; // 0x0
		Il2CppObject* s_cancellationTokenCallback; // 0x0

		::System::Threading::WaitHandle* get_WaitHandle()
		{
			return (return (::System::Threading::WaitHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_GET_WAITHANDLE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSet()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_GET_ISSET_OFFSET))(nullptr);
		}

		::System::Void set_IsSet(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_SET_ISSET_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SpinCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_GET_SPINCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_SpinCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_SET_SPINCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Waiters()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_GET_WAITERS_OFFSET))(nullptr);
		}

		::System::Void set_Waiters(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_SET_WAITERS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Boolean arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Initialize(::System::Boolean arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_INITIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EnsureLockObjectCreated()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_ENSURELOCKOBJECTCREATED_OFFSET))(nullptr);
		}

		::System::Boolean LazyInitializeEvent()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_LAZYINITIALIZEEVENT_OFFSET))(nullptr);
		}

		::System::Void Set()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_SET_OFFSET))(nullptr);
		}

		::System::Void Set(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_SET_OFFSET))(arg, nullptr);
		}

		::System::Boolean Wait(::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_WAIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void ThrowIfDisposed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_THROWIFDISPOSED_OFFSET))(nullptr);
		}

		::System::Void CancellationTokenCallback(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_CANCELLATIONTOKENCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateStateAtomically(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_UPDATESTATEATOMICALLY_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 ExtractStatePortionAndShiftRight(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_EXTRACTSTATEPORTIONANDSHIFTRIGHT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 ExtractStatePortion(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_EXTRACTSTATEPORTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENTSLIM_.CCTOR_OFFSET))(nullptr);
		}

	};
}

