#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_TASKAWAITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9228A00)
#define SYSTEM_RUNTIME_COMPILERSERVICES_TASKAWAITER_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9228A10)
#define SYSTEM_RUNTIME_COMPILERSERVICES_TASKAWAITER_UNSAFEONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9228820)
#define SYSTEM_RUNTIME_COMPILERSERVICES_TASKAWAITER_GETRESULT_OFFSET UNITYSDK_OFFSET(0x9228AF0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_TASKAWAITER_VALIDATEEND_OFFSET UNITYSDK_OFFSET(0x9228B00)
#define SYSTEM_RUNTIME_COMPILERSERVICES_TASKAWAITER_HANDLENONSUCCESSANDDEBUGGERNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x9228B80)
#define SYSTEM_RUNTIME_COMPILERSERVICES_TASKAWAITER_THROWFORNONSUCCESS_OFFSET UNITYSDK_OFFSET(0x9228BF0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_TASKAWAITER_ONCOMPLETEDINTERNAL_OFFSET UNITYSDK_OFFSET(0x9228A30)
#define SYSTEM_RUNTIME_COMPILERSERVICES_TASKAWAITER_OUTPUTWAITETWEVENTS_OFFSET UNITYSDK_OFFSET(0x9228D50)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int TaskAwaiter_TypeDefinitionIndex = 24772;

	class TaskAwaiter : public Il2CppObject
	{
	public:
		::System::Threading::Tasks::Task* m_task; // 0x10

		::System::Void .ctor(::System::Threading::Tasks::Task* arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::Task*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_TASKAWAITER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsCompleted()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_TASKAWAITER_GET_ISCOMPLETED_OFFSET))(nullptr);
		}

		::System::Void UnsafeOnCompleted(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_TASKAWAITER_UNSAFEONCOMPLETED_OFFSET))(arg, nullptr);
		}

		::System::Void GetResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_TASKAWAITER_GETRESULT_OFFSET))(nullptr);
		}

		::System::Void ValidateEnd(::System::Threading::Tasks::Task* arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::Task*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_TASKAWAITER_VALIDATEEND_OFFSET))(arg, nullptr);
		}

		::System::Void HandleNonSuccessAndDebuggerNotification(::System::Threading::Tasks::Task* arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::Task*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_TASKAWAITER_HANDLENONSUCCESSANDDEBUGGERNOTIFICATION_OFFSET))(arg, nullptr);
		}

		::System::Void ThrowForNonSuccess(::System::Threading::Tasks::Task* arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::Task*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_TASKAWAITER_THROWFORNONSUCCESS_OFFSET))(arg, nullptr);
		}

		::System::Void OnCompletedInternal(::System::Threading::Tasks::Task* arg, ::System::Action* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::Task*, ::System::Action*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_TASKAWAITER_ONCOMPLETEDINTERNAL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Action* OutputWaitEtwEvents(::System::Threading::Tasks::Task* arg, ::System::Action* arg)
		{
			return (return (::System::Action*(*)(::System::Threading::Tasks::Task*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_TASKAWAITER_OUTPUTWAITETWEVENTS_OFFSET))(arg, arg, nullptr);
		}

	};
}

