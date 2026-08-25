#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }

#define <RUNONTHREADPOOL>D__99_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9DDDC60)
#define <RUNONTHREADPOOL>D__99_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9DDE5E0)

	inline static constexpr unsigned int <RunOnThreadPool>d__99_TypeDefinitionIndex = 35929;

	class <RunOnThreadPool>d__99 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::System::Threading::CancellationToken* cancellationToken; // 0x28
		::System::Boolean configureAwait; // 0x30
		Il2CppObject* action; // 0x38
		Awaiter* __u__1; // 0x40
		::System::Object* __7__wrap1; // 0x48
		::System::Int32 __7__wrap2; // 0x50
		Awaiter* __u__2; // 0x58
		Awaiter* __u__3; // 0x68

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <RUNONTHREADPOOL>D__99_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <RUNONTHREADPOOL>D__99_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

