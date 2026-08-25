#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x93E2EB0)
#define SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_ISWAITNOTIFICATIONREQUIRED_OFFSET UNITYSDK_OFFSET(0x93E2EC0)
#define SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_SEND_OFFSET UNITYSDK_OFFSET(0x93E2ED0)
#define SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_POST_OFFSET UNITYSDK_OFFSET(0x93E2F00)
#define SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_OPERATIONSTARTED_OFFSET UNITYSDK_OFFSET(0x93E30C0)
#define SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_OPERATIONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x93E30D0)
#define SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_WAIT_OFFSET UNITYSDK_OFFSET(0x93E30E0)
#define SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_WAITHELPER_OFFSET UNITYSDK_OFFSET(0x93E31B0)
#define SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_SETSYNCHRONIZATIONCONTEXT_OFFSET UNITYSDK_OFFSET(0x93E3240)
#define SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x93E33D0)
#define SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_GET_CURRENTNOFLOW_OFFSET UNITYSDK_OFFSET(0x93E3540)
#define SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_GETTHREADLOCALCONTEXT_OFFSET UNITYSDK_OFFSET(0x93E34E0)
#define SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_CREATECOPY_OFFSET UNITYSDK_OFFSET(0x93E37E0)
#define SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_GET_CURRENTEXPLICIT_OFFSET UNITYSDK_OFFSET(0x93E3830)

namespace System::Threading
{
	inline static constexpr unsigned int SynchronizationContext_TypeDefinitionIndex = 24093;

	class SynchronizationContext : public Il2CppObject
	{
	public:
		::System::Threading::SynchronizationContextProperties* _props; // 0x10
		::System::Type* s_cachedPreparedType1; // 0x0
		::System::Type* s_cachedPreparedType2; // 0x8
		::System::Type* s_cachedPreparedType3; // 0x10
		::System::Type* s_cachedPreparedType4; // 0x18
		::System::Type* s_cachedPreparedType5; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsWaitNotificationRequired()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_ISWAITNOTIFICATIONREQUIRED_OFFSET))(nullptr);
		}

		::System::Void Send(::System::Threading::SendOrPostCallback* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Threading::SendOrPostCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_SEND_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Post(::System::Threading::SendOrPostCallback* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Threading::SendOrPostCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_POST_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OperationStarted()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_OPERATIONSTARTED_OFFSET))(nullptr);
		}

		::System::Void OperationCompleted()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_OPERATIONCOMPLETED_OFFSET))(nullptr);
		}

		::System::Int32 Wait(::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_WAIT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 WaitHelper(::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_WAITHELPER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetSynchronizationContext(::System::Threading::SynchronizationContext* arg)
		{
			((::System::Void(*)(::System::Threading::SynchronizationContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_SETSYNCHRONIZATIONCONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Threading::SynchronizationContext* get_Current()
		{
			return (return (::System::Threading::SynchronizationContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Threading::SynchronizationContext* get_CurrentNoFlow()
		{
			return (return (::System::Threading::SynchronizationContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_GET_CURRENTNOFLOW_OFFSET))(nullptr);
		}

		::System::Threading::SynchronizationContext* GetThreadLocalContext()
		{
			return (return (::System::Threading::SynchronizationContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_GETTHREADLOCALCONTEXT_OFFSET))(nullptr);
		}

		::System::Threading::SynchronizationContext* CreateCopy()
		{
			return (return (::System::Threading::SynchronizationContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_CREATECOPY_OFFSET))(nullptr);
		}

		::System::Threading::SynchronizationContext* get_CurrentExplicit()
		{
			return (return (::System::Threading::SynchronizationContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SYNCHRONIZATIONCONTEXT_GET_CURRENTEXPLICIT_OFFSET))(nullptr);
		}

	};
}

