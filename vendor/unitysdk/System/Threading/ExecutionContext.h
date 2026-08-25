#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_EXECUTIONCONTEXT_GET_ISNEWCAPTURE_OFFSET UNITYSDK_OFFSET(0x93E10F0)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_SET_ISNEWCAPTURE_OFFSET UNITYSDK_OFFSET(0x93E1100)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_GET_ISFLOWSUPPRESSED_OFFSET UNITYSDK_OFFSET(0x93E1120)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_SET_ISFLOWSUPPRESSED_OFFSET UNITYSDK_OFFSET(0x93E0D90)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_GET_ISPREALLOCATEDDEFAULT_OFFSET UNITYSDK_OFFSET(0x93E1130)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x93E1140)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x93E1150)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_SETLOCALVALUE_OFFSET UNITYSDK_OFFSET(0x93E1180)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_ONASYNCLOCALCONTEXTCHANGED_OFFSET UNITYSDK_OFFSET(0x93E0720)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_GET_LOGICALCALLCONTEXT_OFFSET UNITYSDK_OFFSET(0x93E1480)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_SET_LOGICALCALLCONTEXT_OFFSET UNITYSDK_OFFSET(0x93E14F0)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_GET_ILLOGICALCALLCONTEXT_OFFSET UNITYSDK_OFFSET(0x93E1500)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_SET_ILLOGICALCALLCONTEXT_OFFSET UNITYSDK_OFFSET(0x93E1570)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_GET_SYNCHRONIZATIONCONTEXT_OFFSET UNITYSDK_OFFSET(0x93E1580)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_SET_SYNCHRONIZATIONCONTEXT_OFFSET UNITYSDK_OFFSET(0x93E1590)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_GET_SYNCHRONIZATIONCONTEXTNOFLOW_OFFSET UNITYSDK_OFFSET(0x93E15A0)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_SET_SYNCHRONIZATIONCONTEXTNOFLOW_OFFSET UNITYSDK_OFFSET(0x93E15B0)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x93E15C0)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_RUN_OFFSET UNITYSDK_OFFSET(0x93DCC40)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_RUN_OFFSET UNITYSDK_OFFSET(0x93E15D0)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_RUNINTERNAL_OFFSET UNITYSDK_OFFSET(0x93E18F0)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_RUNINTERNAL_OFFSET UNITYSDK_OFFSET(0x93E1640)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_ESTABLISHCOPYONWRITESCOPE_OFFSET UNITYSDK_OFFSET(0x93E1C00)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_ESTABLISHCOPYONWRITESCOPE_OFFSET UNITYSDK_OFFSET(0x93E19A0)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_SETEXECUTIONCONTEXT_OFFSET UNITYSDK_OFFSET(0x93E1A00)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_CREATECOPY_OFFSET UNITYSDK_OFFSET(0x93E1CA0)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_CREATEMUTABLECOPY_OFFSET UNITYSDK_OFFSET(0x93E1E80)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_SUPPRESSFLOW_OFFSET UNITYSDK_OFFSET(0x93E2080)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_RESTOREFLOW_OFFSET UNITYSDK_OFFSET(0x93E0ED0)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_ISFLOWSUPPRESSED_OFFSET UNITYSDK_OFFSET(0x93E2210)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_CAPTURE_OFFSET UNITYSDK_OFFSET(0x93D8110)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_FASTCAPTURE_OFFSET UNITYSDK_OFFSET(0x93E24A0)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_CAPTURE_OFFSET UNITYSDK_OFFSET(0x93E2270)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x93E2510)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x93E2600)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_ISDEFAULTFTCONTEXT_OFFSET UNITYSDK_OFFSET(0x93E1950)
#define SYSTEM_THREADING_EXECUTIONCONTEXT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x93E2720)

namespace System::Threading
{
	inline static constexpr unsigned int ExecutionContext_TypeDefinitionIndex = 24090;

	class ExecutionContext : public Il2CppObject
	{
	public:
		::System::Threading::SynchronizationContext* _syncContext; // 0x10
		::System::Threading::SynchronizationContext* _syncContextNoFlow; // 0x18
		::System::Runtime::Remoting::Messaging::LogicalCallContext* _logicalCallContext; // 0x20
		::System::Runtime::Remoting::Messaging::IllogicalCallContext* _illogicalCallContext; // 0x28
		Flags* _flags; // 0x30
		Il2CppObject* _localValues; // 0x38
		Il2CppObject* _localChangeNotifications; // 0x40
		::System::Threading::ExecutionContext* s_dummyDefaultEC; // 0x0
		::System::Threading::ExecutionContext* Default; // 0x8

		::System::Boolean get_isNewCapture()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_GET_ISNEWCAPTURE_OFFSET))(nullptr);
		}

		::System::Void set_isNewCapture(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_SET_ISNEWCAPTURE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isFlowSuppressed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_GET_ISFLOWSUPPRESSED_OFFSET))(nullptr);
		}

		::System::Void set_isFlowSuppressed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_SET_ISFLOWSUPPRESSED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsPreAllocatedDefault()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_GET_ISPREALLOCATEDDEFAULT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void SetLocalValue(::System::Threading::IAsyncLocal* arg, ::System::Object* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Threading::IAsyncLocal*, ::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_SETLOCALVALUE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnAsyncLocalContextChanged(::System::Threading::ExecutionContext* arg, ::System::Threading::ExecutionContext* arg)
		{
			((::System::Void(*)(::System::Threading::ExecutionContext*, ::System::Threading::ExecutionContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_ONASYNCLOCALCONTEXTCHANGED_OFFSET))(arg, arg, nullptr);
		}

		::System::Runtime::Remoting::Messaging::LogicalCallContext* get_LogicalCallContext()
		{
			return (return (::System::Runtime::Remoting::Messaging::LogicalCallContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_GET_LOGICALCALLCONTEXT_OFFSET))(nullptr);
		}

		::System::Void set_LogicalCallContext(::System::Runtime::Remoting::Messaging::LogicalCallContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Messaging::LogicalCallContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_SET_LOGICALCALLCONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Remoting::Messaging::IllogicalCallContext* get_IllogicalCallContext()
		{
			return (return (::System::Runtime::Remoting::Messaging::IllogicalCallContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_GET_ILLOGICALCALLCONTEXT_OFFSET))(nullptr);
		}

		::System::Void set_IllogicalCallContext(::System::Runtime::Remoting::Messaging::IllogicalCallContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Messaging::IllogicalCallContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_SET_ILLOGICALCALLCONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Threading::SynchronizationContext* get_SynchronizationContext()
		{
			return (return (::System::Threading::SynchronizationContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_GET_SYNCHRONIZATIONCONTEXT_OFFSET))(nullptr);
		}

		::System::Void set_SynchronizationContext(::System::Threading::SynchronizationContext* arg)
		{
			((::System::Void(*)(::System::Threading::SynchronizationContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_SET_SYNCHRONIZATIONCONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Threading::SynchronizationContext* get_SynchronizationContextNoFlow()
		{
			return (return (::System::Threading::SynchronizationContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_GET_SYNCHRONIZATIONCONTEXTNOFLOW_OFFSET))(nullptr);
		}

		::System::Void set_SynchronizationContextNoFlow(::System::Threading::SynchronizationContext* arg)
		{
			((::System::Void(*)(::System::Threading::SynchronizationContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_SET_SYNCHRONIZATIONCONTEXTNOFLOW_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Run(::System::Threading::ExecutionContext* arg, ::System::Threading::ContextCallback* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Threading::ExecutionContext*, ::System::Threading::ContextCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_RUN_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Run(::System::Threading::ExecutionContext* arg, ::System::Threading::ContextCallback* arg, ::System::Object* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Threading::ExecutionContext*, ::System::Threading::ContextCallback*, ::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_RUN_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void RunInternal(::System::Threading::ExecutionContext* arg, ::System::Threading::ContextCallback* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Threading::ExecutionContext*, ::System::Threading::ContextCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_RUNINTERNAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void RunInternal(::System::Threading::ExecutionContext* arg, ::System::Threading::ContextCallback* arg, ::System::Object* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Threading::ExecutionContext*, ::System::Threading::ContextCallback*, ::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_RUNINTERNAL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void EstablishCopyOnWriteScope(::System::Threading::ExecutionContextSwitcher&* arg)
		{
			((::System::Void(*)(::System::Threading::ExecutionContextSwitcher&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_ESTABLISHCOPYONWRITESCOPE_OFFSET))(arg, nullptr);
		}

		::System::Void EstablishCopyOnWriteScope(::System::Threading::Thread* arg, ::System::Boolean arg, ::System::Threading::ExecutionContextSwitcher&* arg)
		{
			((::System::Void(*)(::System::Threading::Thread*, ::System::Boolean, ::System::Threading::ExecutionContextSwitcher&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_ESTABLISHCOPYONWRITESCOPE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Threading::ExecutionContextSwitcher* SetExecutionContext(::System::Threading::ExecutionContext* arg, ::System::Boolean arg)
		{
			return (return (::System::Threading::ExecutionContextSwitcher*(*)(::System::Threading::ExecutionContext*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_SETEXECUTIONCONTEXT_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::ExecutionContext* CreateCopy()
		{
			return (return (::System::Threading::ExecutionContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_CREATECOPY_OFFSET))(nullptr);
		}

		::System::Threading::ExecutionContext* CreateMutableCopy()
		{
			return (return (::System::Threading::ExecutionContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_CREATEMUTABLECOPY_OFFSET))(nullptr);
		}

		::System::Threading::AsyncFlowControl* SuppressFlow()
		{
			return (return (::System::Threading::AsyncFlowControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_SUPPRESSFLOW_OFFSET))(nullptr);
		}

		::System::Void RestoreFlow()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_RESTOREFLOW_OFFSET))(nullptr);
		}

		::System::Boolean IsFlowSuppressed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_ISFLOWSUPPRESSED_OFFSET))(nullptr);
		}

		::System::Threading::ExecutionContext* Capture()
		{
			return (return (::System::Threading::ExecutionContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_CAPTURE_OFFSET))(nullptr);
		}

		::System::Threading::ExecutionContext* FastCapture()
		{
			return (return (::System::Threading::ExecutionContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_FASTCAPTURE_OFFSET))(nullptr);
		}

		::System::Threading::ExecutionContext* Capture(::System::Threading::StackCrawlMark&* arg, CaptureOptions* arg)
		{
			return (return (::System::Threading::ExecutionContext*(*)(::System::Threading::StackCrawlMark&*, CaptureOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_CAPTURE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsDefaultFTContext(::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_ISDEFAULTFTCONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

