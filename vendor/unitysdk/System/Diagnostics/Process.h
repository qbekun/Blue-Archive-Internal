#pragma once
#include "../../unitysdk.h"

namespace Microsoft::Win32::SafeHandles { class SafeProcessHandle; }

#define SYSTEM_DIAGNOSTICS_PROCESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B01870)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_ASSOCIATED_OFFSET UNITYSDK_OFFSET(0x9B01900)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_HASEXITED_OFFSET UNITYSDK_OFFSET(0x9B01910)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_ID_OFFSET UNITYSDK_OFFSET(0x9AFF490)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_SYNCHRONIZINGOBJECT_OFFSET UNITYSDK_OFFSET(0x9B02320)
#define SYSTEM_DIAGNOSTICS_PROCESS_RELEASEPROCESSHANDLE_OFFSET UNITYSDK_OFFSET(0x9B024E0)
#define SYSTEM_DIAGNOSTICS_PROCESS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B02500)
#define SYSTEM_DIAGNOSTICS_PROCESS_CLOSE_OFFSET UNITYSDK_OFFSET(0x9B02540)
#define SYSTEM_DIAGNOSTICS_PROCESS_ENSURESTATE_OFFSET UNITYSDK_OFFSET(0x9B01C80)
#define SYSTEM_DIAGNOSTICS_PROCESS_GETCURRENTPROCESS_OFFSET UNITYSDK_OFFSET(0x9AFF3B0)
#define SYSTEM_DIAGNOSTICS_PROCESS_ONEXITED_OFFSET UNITYSDK_OFFSET(0x9B02940)
#define SYSTEM_DIAGNOSTICS_PROCESS_GETPROCESSHANDLE_OFFSET UNITYSDK_OFFSET(0x9B01DB0)
#define SYSTEM_DIAGNOSTICS_PROCESS_GETPROCESSHANDLE_OFFSET UNITYSDK_OFFSET(0x9B02BD0)
#define SYSTEM_DIAGNOSTICS_PROCESS_REFRESH_OFFSET UNITYSDK_OFFSET(0x9B028F0)
#define SYSTEM_DIAGNOSTICS_PROCESS_STOPWATCHINGFOREXIT_OFFSET UNITYSDK_OFFSET(0x9B027A0)
#define SYSTEM_DIAGNOSTICS_PROCESS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9B02BE0)
#define SYSTEM_DIAGNOSTICS_PROCESS_PROCESSNAME_ICALL_OFFSET UNITYSDK_OFFSET(0x9B02D70)
#define SYSTEM_DIAGNOSTICS_PROCESS_PROCESSNAME_INTERNAL_OFFSET UNITYSDK_OFFSET(0x9B02D80)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_PROCESSNAME_OFFSET UNITYSDK_OFFSET(0x9AFF4B0)
#define SYSTEM_DIAGNOSTICS_PROCESS_RAISEONEXITED_OFFSET UNITYSDK_OFFSET(0x9B02220)

namespace System::Diagnostics
{
	inline static constexpr unsigned int Process_TypeDefinitionIndex = 29255;

	class Process : public Il2CppObject
	{
	public:
		::System::Boolean haveProcessId; // 0x28
		::System::Int32 processId; // 0x2C
		::System::Boolean haveProcessHandle; // 0x30
		::Microsoft::Win32::SafeHandles::SafeProcessHandle* m_processHandle; // 0x38
		::System::Boolean isRemoteMachine; // 0x40
		::System::String* machineName; // 0x48
		::System::Int32 m_processAccess; // 0x50
		::System::Diagnostics::ProcessThreadCollection* threads; // 0x58
		::System::Diagnostics::ProcessModuleCollection* modules; // 0x60
		::System::Boolean haveWorkingSetLimits; // 0x68
		::System::Boolean havePriorityClass; // 0x69
		::System::Boolean watchForExit; // 0x6A
		::System::Boolean watchingForExit; // 0x6B
		::System::EventHandler* onExited; // 0x70
		::System::Boolean exited; // 0x78
		::System::Int32 exitCode; // 0x7C
		::System::Boolean signaled; // 0x80
		::System::Boolean haveExitTime; // 0x81
		::System::Boolean raisedOnExited; // 0x82
		::System::Threading::RegisteredWaitHandle* registeredWaitHandle; // 0x88
		::System::Threading::WaitHandle* waitHandle; // 0x90
		::System::ComponentModel::ISynchronizeInvoke* synchronizingObject; // 0x98
		::System::IO::StreamReader* standardOutput; // 0xA0
		::System::IO::StreamWriter* standardInput; // 0xA8
		::System::IO::StreamReader* standardError; // 0xB0
		::System::Boolean disposed; // 0xB8
		StreamReadMode* outputStreamReadMode; // 0xBC
		StreamReadMode* errorStreamReadMode; // 0xC0
		StreamReadMode* inputStreamReadMode; // 0xC4
		::System::Diagnostics::AsyncStreamReader* output; // 0xC8
		::System::Diagnostics::AsyncStreamReader* error; // 0xD0
		::System::String* process_name; // 0xD8

		::System::Void .ctor(::System::String* str, ::System::Boolean arg, ::System::Int32 arg, ::System::Diagnostics::ProcessInfo* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Int32, ::System::Diagnostics::ProcessInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_.CTOR_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Boolean get_Associated()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_ASSOCIATED_OFFSET))(nullptr);
		}

		::System::Boolean get_HasExited()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_HASEXITED_OFFSET))(nullptr);
		}

		::System::Int32 get_Id()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_ID_OFFSET))(nullptr);
		}

		::System::ComponentModel::ISynchronizeInvoke* get_SynchronizingObject()
		{
			return (return (::System::ComponentModel::ISynchronizeInvoke*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_SYNCHRONIZINGOBJECT_OFFSET))(nullptr);
		}

		::System::Void ReleaseProcessHandle(::Microsoft::Win32::SafeHandles::SafeProcessHandle* arg)
		{
			((::System::Void(*)(::Microsoft::Win32::SafeHandles::SafeProcessHandle*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_RELEASEPROCESSHANDLE_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_CLOSE_OFFSET))(nullptr);
		}

		::System::Void EnsureState(State* arg)
		{
			((::System::Void(*)(State*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_ENSURESTATE_OFFSET))(arg, nullptr);
		}

		::System::Diagnostics::Process* GetCurrentProcess()
		{
			return (return (::System::Diagnostics::Process*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GETCURRENTPROCESS_OFFSET))(nullptr);
		}

		::System::Void OnExited()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_ONEXITED_OFFSET))(nullptr);
		}

		::Microsoft::Win32::SafeHandles::SafeProcessHandle* GetProcessHandle(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::Microsoft::Win32::SafeHandles::SafeProcessHandle*(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GETPROCESSHANDLE_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::Win32::SafeHandles::SafeProcessHandle* GetProcessHandle(::System::Int32 arg)
		{
			return (return (::Microsoft::Win32::SafeHandles::SafeProcessHandle*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GETPROCESSHANDLE_OFFSET))(arg, nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_REFRESH_OFFSET))(nullptr);
		}

		::System::Void StopWatchingForExit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_STOPWATCHINGFOREXIT_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ProcessName_icall(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_PROCESSNAME_ICALL_OFFSET))(arg, nullptr);
		}

		::System::String* ProcessName_internal(::Microsoft::Win32::SafeHandles::SafeProcessHandle* arg)
		{
			return (return (::System::String*(*)(::Microsoft::Win32::SafeHandles::SafeProcessHandle*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_PROCESSNAME_INTERNAL_OFFSET))(arg, nullptr);
		}

		::System::String* get_ProcessName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_PROCESSNAME_OFFSET))(nullptr);
		}

		::System::Void RaiseOnExited()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_RAISEONEXITED_OFFSET))(nullptr);
		}

	};
}

