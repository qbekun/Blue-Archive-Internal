#pragma once
#include "unitysdk.h"

#define YIELDAWAITER_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x922ABA0)
#define YIELDAWAITER_UNSAFEONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x922ABB0)
#define YIELDAWAITER_QUEUECONTINUATION_OFFSET UNITYSDK_OFFSET(0x922AC00)
#define YIELDAWAITER_RUNACTION_OFFSET UNITYSDK_OFFSET(0x922AF40)
#define YIELDAWAITER_GETRESULT_OFFSET UNITYSDK_OFFSET(0x922AFA0)
#define YIELDAWAITER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x922AFB0)

	inline static constexpr unsigned int YieldAwaiter_TypeDefinitionIndex = 24788;

	class YieldAwaiter : public Il2CppObject
	{
	public:
		::System::Threading::WaitCallback* s_waitCallbackRunAction; // 0x0
		::System::Threading::SendOrPostCallback* s_sendOrPostCallbackRunAction; // 0x8

		::System::Boolean get_IsCompleted()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + YIELDAWAITER_GET_ISCOMPLETED_OFFSET))(nullptr);
		}

		::System::Void UnsafeOnCompleted(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + YIELDAWAITER_UNSAFEONCOMPLETED_OFFSET))(arg, nullptr);
		}

		::System::Void QueueContinuation(::System::Action* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Action*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + YIELDAWAITER_QUEUECONTINUATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RunAction(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + YIELDAWAITER_RUNACTION_OFFSET))(arg, nullptr);
		}

		::System::Void GetResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + YIELDAWAITER_GETRESULT_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + YIELDAWAITER_.CCTOR_OFFSET))(nullptr);
		}

	};

