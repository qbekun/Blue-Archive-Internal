#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_SERVICEPOINTSCHEDULER_GET_SERVICEPOINT_OFFSET UNITYSDK_OFFSET(0x9A7A190)
#define SYSTEM_NET_SERVICEPOINTSCHEDULER_SET_SERVICEPOINT_OFFSET UNITYSDK_OFFSET(0x9A7A1A0)
#define SYSTEM_NET_SERVICEPOINTSCHEDULER_GET_MAXIDLETIME_OFFSET UNITYSDK_OFFSET(0x9A7A1B0)
#define SYSTEM_NET_SERVICEPOINTSCHEDULER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A78460)
#define SYSTEM_NET_SERVICEPOINTSCHEDULER_RUN_OFFSET UNITYSDK_OFFSET(0x9A7A380)
#define SYSTEM_NET_SERVICEPOINTSCHEDULER_RUNSCHEDULER_OFFSET UNITYSDK_OFFSET(0x9A7A720)
#define SYSTEM_NET_SERVICEPOINTSCHEDULER_CLEANUP_OFFSET UNITYSDK_OFFSET(0x9A7A810)
#define SYSTEM_NET_SERVICEPOINTSCHEDULER_RUNSCHEDULERITERATION_OFFSET UNITYSDK_OFFSET(0x9A7AAA0)
#define SYSTEM_NET_SERVICEPOINTSCHEDULER_OPERATIONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9A7B0A0)
#define SYSTEM_NET_SERVICEPOINTSCHEDULER_CLOSEIDLECONNECTION_OFFSET UNITYSDK_OFFSET(0x9A7B890)
#define SYSTEM_NET_SERVICEPOINTSCHEDULER_SCHEDULERITERATION_OFFSET UNITYSDK_OFFSET(0x9A7AFB0)
#define SYSTEM_NET_SERVICEPOINTSCHEDULER_REMOVEOPERATION_OFFSET UNITYSDK_OFFSET(0x9A7B9A0)
#define SYSTEM_NET_SERVICEPOINTSCHEDULER_REMOVEIDLECONNECTION_OFFSET UNITYSDK_OFFSET(0x9A7B540)
#define SYSTEM_NET_SERVICEPOINTSCHEDULER_FINALCLEANUP_OFFSET UNITYSDK_OFFSET(0x9A7BA60)
#define SYSTEM_NET_SERVICEPOINTSCHEDULER_SENDREQUEST_OFFSET UNITYSDK_OFFSET(0x9A78F90)
#define SYSTEM_NET_SERVICEPOINTSCHEDULER_CLOSECONNECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x9A79210)
#define SYSTEM_NET_SERVICEPOINTSCHEDULER_GETCONNECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x9A7BB40)
#define SYSTEM_NET_SERVICEPOINTSCHEDULER_ONCONNECTIONCREATED_OFFSET UNITYSDK_OFFSET(0x9A7C190)
#define SYSTEM_NET_SERVICEPOINTSCHEDULER_ONCONNECTIONCLOSED_OFFSET UNITYSDK_OFFSET(0x9A7C1A0)
#define SYSTEM_NET_SERVICEPOINTSCHEDULER_WAITASYNC_OFFSET UNITYSDK_OFFSET(0x9A7C1C0)
#define SYSTEM_NET_SERVICEPOINTSCHEDULER__RUN_B__31_0_OFFSET UNITYSDK_OFFSET(0x9A7C2D0)

namespace System::Net
{
	inline static constexpr unsigned int ServicePointScheduler_TypeDefinitionIndex = 29797;

	class ServicePointScheduler : public Il2CppObject
	{
	public:
		::System::Net::ServicePoint* _ServicePoint_k__BackingField; // 0x10
		::System::Int32 running; // 0x18
		::System::Int32 maxIdleTime; // 0x1C
		AsyncManualResetEvent* schedulerEvent; // 0x20
		ConnectionGroup* defaultGroup; // 0x28
		Il2CppObject* groups; // 0x30
		Il2CppObject* operations; // 0x38
		Il2CppObject* idleConnections; // 0x40
		::System::Int32 currentConnections; // 0x48
		::System::Int32 connectionLimit; // 0x4C
		::System::DateTime* idleSince; // 0x50
		::System::Int32 nextId; // 0x0
		::System::Int32 ID; // 0x58

		::System::Net::ServicePoint* get_ServicePoint()
		{
			return (return (::System::Net::ServicePoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTSCHEDULER_GET_SERVICEPOINT_OFFSET))(nullptr);
		}

		::System::Void set_ServicePoint(::System::Net::ServicePoint* arg)
		{
			((::System::Void(*)(::System::Net::ServicePoint*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTSCHEDULER_SET_SERVICEPOINT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MaxIdleTime()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTSCHEDULER_GET_MAXIDLETIME_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Net::ServicePoint* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Net::ServicePoint*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTSCHEDULER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Run()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTSCHEDULER_RUN_OFFSET))(nullptr);
		}

		::System::Threading::Tasks::Task* RunScheduler()
		{
			return (return (::System::Threading::Tasks::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTSCHEDULER_RUNSCHEDULER_OFFSET))(nullptr);
		}

		::System::Void Cleanup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTSCHEDULER_CLEANUP_OFFSET))(nullptr);
		}

		::System::Void RunSchedulerIteration()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTSCHEDULER_RUNSCHEDULERITERATION_OFFSET))(nullptr);
		}

		::System::Boolean OperationCompleted(ConnectionGroup* arg, ::System::Net::WebOperation* arg)
		{
			return (return (::System::Boolean(*)(ConnectionGroup*, ::System::Net::WebOperation*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTSCHEDULER_OPERATIONCOMPLETED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CloseIdleConnection(ConnectionGroup* arg, ::System::Net::WebConnection* arg)
		{
			((::System::Void(*)(ConnectionGroup*, ::System::Net::WebConnection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTSCHEDULER_CLOSEIDLECONNECTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean SchedulerIteration(ConnectionGroup* arg)
		{
			return (return (::System::Boolean(*)(ConnectionGroup*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTSCHEDULER_SCHEDULERITERATION_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveOperation(::System::Net::WebOperation* arg)
		{
			((::System::Void(*)(::System::Net::WebOperation*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTSCHEDULER_REMOVEOPERATION_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveIdleConnection(::System::Net::WebConnection* arg)
		{
			((::System::Void(*)(::System::Net::WebConnection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTSCHEDULER_REMOVEIDLECONNECTION_OFFSET))(arg, nullptr);
		}

		::System::Void FinalCleanup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTSCHEDULER_FINALCLEANUP_OFFSET))(nullptr);
		}

		::System::Void SendRequest(::System::Net::WebOperation* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Net::WebOperation*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTSCHEDULER_SENDREQUEST_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean CloseConnectionGroup(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTSCHEDULER_CLOSECONNECTIONGROUP_OFFSET))(str, nullptr);
		}

		ConnectionGroup* GetConnectionGroup(::System::String* str)
		{
			return (return (ConnectionGroup*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTSCHEDULER_GETCONNECTIONGROUP_OFFSET))(str, nullptr);
		}

		::System::Void OnConnectionCreated(::System::Net::WebConnection* arg)
		{
			((::System::Void(*)(::System::Net::WebConnection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTSCHEDULER_ONCONNECTIONCREATED_OFFSET))(arg, nullptr);
		}

		::System::Void OnConnectionClosed(::System::Net::WebConnection* arg)
		{
			((::System::Void(*)(::System::Net::WebConnection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTSCHEDULER_ONCONNECTIONCLOSED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* WaitAsync(::System::Threading::Tasks::Task* arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::Tasks::Task*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTSCHEDULER_WAITASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* _Run_b__31_0()
		{
			return (return (::System::Threading::Tasks::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTSCHEDULER__RUN_B__31_0_OFFSET))(nullptr);
		}

	};
}

