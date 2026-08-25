#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskVoidMethodBuilder; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define <RUNTASK>D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9DE0640)
#define <RUNTASK>D__6_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9DE0C60)

	inline static constexpr unsigned int <RunTask>d__6_TypeDefinitionIndex = 35953;

	class <RunTask>d__6 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder* __t__builder; // 0x18
		::Cysharp::Threading::Tasks::UniTask* task; // 0x20
		ToCoroutineEnumerator* __4__this; // 0x30
		Awaiter* __u__1; // 0x38

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <RUNTASK>D__6_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <RUNTASK>D__6_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

