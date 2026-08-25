#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_UNITYSYNCHRONIZATIONCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA236000)
#define UNITYENGINE_UNITYSYNCHRONIZATIONCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2360D0)
#define UNITYENGINE_UNITYSYNCHRONIZATIONCONTEXT_SEND_OFFSET UNITYSDK_OFFSET(0xA236180)
#define UNITYENGINE_UNITYSYNCHRONIZATIONCONTEXT_OPERATIONSTARTED_OFFSET UNITYSDK_OFFSET(0xA236580)
#define UNITYENGINE_UNITYSYNCHRONIZATIONCONTEXT_OPERATIONCOMPLETED_OFFSET UNITYSDK_OFFSET(0xA236590)
#define UNITYENGINE_UNITYSYNCHRONIZATIONCONTEXT_POST_OFFSET UNITYSDK_OFFSET(0xA2365A0)
#define UNITYENGINE_UNITYSYNCHRONIZATIONCONTEXT_CREATECOPY_OFFSET UNITYSDK_OFFSET(0xA236790)
#define UNITYENGINE_UNITYSYNCHRONIZATIONCONTEXT_EXEC_OFFSET UNITYSDK_OFFSET(0xA2367F0)
#define UNITYENGINE_UNITYSYNCHRONIZATIONCONTEXT_HASPENDINGTASKS_OFFSET UNITYSDK_OFFSET(0xA236B20)
#define UNITYENGINE_UNITYSYNCHRONIZATIONCONTEXT_INITIALIZESYNCHRONIZATIONCONTEXT_OFFSET UNITYSDK_OFFSET(0xA236B80)
#define UNITYENGINE_UNITYSYNCHRONIZATIONCONTEXT_EXECUTETASKS_OFFSET UNITYSDK_OFFSET(0xA236BF0)
#define UNITYENGINE_UNITYSYNCHRONIZATIONCONTEXT_EXECUTEPENDINGTASKS_OFFSET UNITYSDK_OFFSET(0xA236C40)

namespace UnityEngine
{
	inline static constexpr unsigned int UnitySynchronizationContext_TypeDefinitionIndex = 31181;

	class UnitySynchronizationContext : public Il2CppObject
	{
	public:
		Il2CppObject* m_AsyncWorkQueue; // 0x18
		Il2CppObject* m_CurrentFrameWork; // 0x20
		::System::Int32 m_MainThreadID; // 0x28
		::System::Int32 m_TrackedCount; // 0x2C

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYSYNCHRONIZATIONCONTEXT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYSYNCHRONIZATIONCONTEXT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Send(::System::Threading::SendOrPostCallback* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Threading::SendOrPostCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYSYNCHRONIZATIONCONTEXT_SEND_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OperationStarted()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYSYNCHRONIZATIONCONTEXT_OPERATIONSTARTED_OFFSET))(nullptr);
		}

		::System::Void OperationCompleted()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYSYNCHRONIZATIONCONTEXT_OPERATIONCOMPLETED_OFFSET))(nullptr);
		}

		::System::Void Post(::System::Threading::SendOrPostCallback* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Threading::SendOrPostCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYSYNCHRONIZATIONCONTEXT_POST_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::SynchronizationContext* CreateCopy()
		{
			return (return (::System::Threading::SynchronizationContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYSYNCHRONIZATIONCONTEXT_CREATECOPY_OFFSET))(nullptr);
		}

		::System::Void Exec()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYSYNCHRONIZATIONCONTEXT_EXEC_OFFSET))(nullptr);
		}

		::System::Boolean HasPendingTasks()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYSYNCHRONIZATIONCONTEXT_HASPENDINGTASKS_OFFSET))(nullptr);
		}

		::System::Void InitializeSynchronizationContext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYSYNCHRONIZATIONCONTEXT_INITIALIZESYNCHRONIZATIONCONTEXT_OFFSET))(nullptr);
		}

		::System::Void ExecuteTasks()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYSYNCHRONIZATIONCONTEXT_EXECUTETASKS_OFFSET))(nullptr);
		}

		::System::Boolean ExecutePendingTasks(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYSYNCHRONIZATIONCONTEXT_EXECUTEPENDINGTASKS_OFFSET))(arg, nullptr);
		}

	};
}

