#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x93F5AA0)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_SHOULDFAILFASTONUNOBSERVEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x93FD910)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x93FD920)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_GET_CONTAINSFAULTLIST_OFFSET UNITYSDK_OFFSET(0x93F5580)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_ADD_OFFSET UNITYSDK_OFFSET(0x93F5AD0)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_SETCANCELLATIONEXCEPTION_OFFSET UNITYSDK_OFFSET(0x93FDDC0)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_ADDFAULTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x93FDEB0)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_MARKASUNHANDLED_OFFSET UNITYSDK_OFFSET(0x93FE3F0)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_MARKASHANDLED_OFFSET UNITYSDK_OFFSET(0x93F4900)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_CREATEEXCEPTIONOBJECT_OFFSET UNITYSDK_OFFSET(0x93F5AE0)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_GETEXCEPTIONDISPATCHINFOS_OFFSET UNITYSDK_OFFSET(0x93F5EB0)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_GETCANCELLATIONEXCEPTIONDISPATCHINFO_OFFSET UNITYSDK_OFFSET(0x93FE460)
#define SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x93FE470)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskExceptionHolder_TypeDefinitionIndex = 24200;

	class TaskExceptionHolder : public Il2CppObject
	{
	public:
		::System::Boolean s_failFastOnUnobservedException; // 0x0
		::System::Threading::Tasks::Task* m_task; // 0x10
		Il2CppObject* m_faultExceptions; // 0x18
		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* m_cancellationException; // 0x20
		::System::Boolean m_isHandled; // 0x28

		::System::Void .ctor(::System::Threading::Tasks::Task* arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::Task*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShouldFailFastOnUnobservedException()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_SHOULDFAILFASTONUNOBSERVEDEXCEPTION_OFFSET))(nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_FINALIZE_OFFSET))(nullptr);
		}

		::System::Boolean get_ContainsFaultList()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_GET_CONTAINSFAULTLIST_OFFSET))(nullptr);
		}

		::System::Void Add(::System::Object* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_ADD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetCancellationException(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_SETCANCELLATIONEXCEPTION_OFFSET))(arg, nullptr);
		}

		::System::Void AddFaultException(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_ADDFAULTEXCEPTION_OFFSET))(arg, nullptr);
		}

		::System::Void MarkAsUnhandled()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_MARKASUNHANDLED_OFFSET))(nullptr);
		}

		::System::Void MarkAsHandled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_MARKASHANDLED_OFFSET))(arg, nullptr);
		}

		::System::AggregateException* CreateExceptionObject(::System::Boolean arg, ::System::Exception* arg)
		{
			return (return (::System::AggregateException*(*)(::System::Boolean, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_CREATEEXCEPTIONOBJECT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetExceptionDispatchInfos()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_GETEXCEPTIONDISPATCHINFOS_OFFSET))(nullptr);
		}

		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* GetCancellationExceptionDispatchInfo()
		{
			return (return (::System::Runtime::ExceptionServices::ExceptionDispatchInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_GETCANCELLATIONEXCEPTIONDISPATCHINFO_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKEXCEPTIONHOLDER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

