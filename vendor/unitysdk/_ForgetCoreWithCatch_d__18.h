#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskVoidMethodBuilder; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define <FORGETCOREWITHCATCH>D__18_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9DE0FF0)
#define <FORGETCOREWITHCATCH>D__18_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9DE1840)

	inline static constexpr unsigned int <ForgetCoreWithCatch>d__18_TypeDefinitionIndex = 35959;

	class <ForgetCoreWithCatch>d__18 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder* __t__builder; // 0x18
		::Cysharp::Threading::Tasks::UniTask* task; // 0x20
		::System::Boolean handleExceptionOnMainThread; // 0x30
		Il2CppObject* exceptionHandler; // 0x38
		::System::Object* __7__wrap1; // 0x40
		::System::Int32 __7__wrap2; // 0x48
		Awaiter* __u__1; // 0x50
		::System::Exception* _ex_5__4; // 0x60
		Awaiter* __u__2; // 0x68

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <FORGETCOREWITHCATCH>D__18_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <FORGETCOREWITHCATCH>D__18_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

