#pragma once
#include "unitysdk.h"

#define AWAITER_CALLBACK_OFFSET UNITYSDK_OFFSET(0x9DDEA90)
#define AWAITER_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9DDE590)
#define AWAITER_GETRESULT_OFFSET UNITYSDK_OFFSET(0x9DDE5A0)
#define AWAITER_UNSAFEONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9DDEAF0)
#define AWAITER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9DDEB50)

	inline static constexpr unsigned int Awaiter_TypeDefinitionIndex = 35942;

	class Awaiter : public Il2CppObject
	{
	public:
		::System::Threading::WaitCallback* switchToCallback; // 0x0

		::System::Void Callback(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + AWAITER_CALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsCompleted()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AWAITER_GET_ISCOMPLETED_OFFSET))(nullptr);
		}

		::System::Void GetResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AWAITER_GETRESULT_OFFSET))(nullptr);
		}

		::System::Void UnsafeOnCompleted(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + AWAITER_UNSAFEONCOMPLETED_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AWAITER_.CCTOR_OFFSET))(nullptr);
		}

	};

