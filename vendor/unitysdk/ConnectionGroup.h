#pragma once
#include "unitysdk.h"

#define CONNECTIONGROUP_GET_SCHEDULER_OFFSET UNITYSDK_OFFSET(0x9A7C2E0)
#define CONNECTIONGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A7A260)
#define CONNECTIONGROUP_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x9A7AA30)
#define CONNECTIONGROUP_REMOVECONNECTION_OFFSET UNITYSDK_OFFSET(0x9A7B4A0)
#define CONNECTIONGROUP_CLEANUP_OFFSET UNITYSDK_OFFSET(0x9A7B600)
#define CONNECTIONGROUP_CLOSE_OFFSET UNITYSDK_OFFSET(0x9A7BE00)
#define CONNECTIONGROUP_ENQUEUEOPERATION_OFFSET UNITYSDK_OFFSET(0x9A7BDB0)
#define CONNECTIONGROUP_GETNEXTOPERATION_OFFSET UNITYSDK_OFFSET(0x9A7B8D0)
#define CONNECTIONGROUP_FINDIDLECONNECTION_OFFSET UNITYSDK_OFFSET(0x9A7C340)
#define CONNECTIONGROUP_CREATEORREUSECONNECTION_OFFSET UNITYSDK_OFFSET(0x9A7B6E0)

	inline static constexpr unsigned int ConnectionGroup_TypeDefinitionIndex = 29792;

	class ConnectionGroup : public Il2CppObject
	{
	public:
		::System::Net::ServicePointScheduler* _Scheduler_k__BackingField; // 0x10
		::System::String* _Name_k__BackingField; // 0x18
		::System::Int32 nextId; // 0x0
		::System::Int32 ID; // 0x20
		Il2CppObject* connections; // 0x28
		Il2CppObject* queue; // 0x30

		::System::Net::ServicePointScheduler* get_Scheduler()
		{
			return (return (::System::Net::ServicePointScheduler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONNECTIONGROUP_GET_SCHEDULER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Net::ServicePointScheduler* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Net::ServicePointScheduler*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CONNECTIONGROUP_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean IsEmpty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONNECTIONGROUP_ISEMPTY_OFFSET))(nullptr);
		}

		::System::Void RemoveConnection(::System::Net::WebConnection* arg)
		{
			((::System::Void(*)(::System::Net::WebConnection*, ::PVOID))((::PBYTE)hIl2Cpp + CONNECTIONGROUP_REMOVECONNECTION_OFFSET))(arg, nullptr);
		}

		::System::Void Cleanup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONNECTIONGROUP_CLEANUP_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONNECTIONGROUP_CLOSE_OFFSET))(nullptr);
		}

		::System::Void EnqueueOperation(::System::Net::WebOperation* arg)
		{
			((::System::Void(*)(::System::Net::WebOperation*, ::PVOID))((::PBYTE)hIl2Cpp + CONNECTIONGROUP_ENQUEUEOPERATION_OFFSET))(arg, nullptr);
		}

		::System::Net::WebOperation* GetNextOperation()
		{
			return (return (::System::Net::WebOperation*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONNECTIONGROUP_GETNEXTOPERATION_OFFSET))(nullptr);
		}

		::System::Net::WebConnection* FindIdleConnection(::System::Net::WebOperation* arg)
		{
			return (return (::System::Net::WebConnection*(*)(::System::Net::WebOperation*, ::PVOID))((::PBYTE)hIl2Cpp + CONNECTIONGROUP_FINDIDLECONNECTION_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CreateOrReuseConnection(::System::Net::WebOperation* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Net::WebOperation*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CONNECTIONGROUP_CREATEORREUSECONNECTION_OFFSET))(arg, arg, nullptr);
		}

	};

