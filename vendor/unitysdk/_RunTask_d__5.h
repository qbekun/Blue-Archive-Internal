#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskVoidMethodBuilder; }

#define <RUNTASK>D__5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define <RUNTASK>D__5_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int <RunTask>d__5_TypeDefinitionIndex = 35951;

	class <RunTask>d__5 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder* __t__builder; // 0x0
		Il2CppObject* task; // 0x0
		Il2CppObject* __4__this; // 0x0
		Il2CppObject* __u__1; // 0x0

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <RUNTASK>D__5_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <RUNTASK>D__5_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

