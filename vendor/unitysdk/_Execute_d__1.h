#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
class InteractiveWorldRaidCommandWait;
class Awaiter;

#define <EXECUTE>D__1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x259EEA0)
#define <EXECUTE>D__1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x259F2A0)

	inline static constexpr unsigned int <Execute>d__1_TypeDefinitionIndex = 307;

	class <Execute>d__1 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		InteractiveWorldRaidCommandWait* __4__this; // 0x28
		::System::Threading::CancellationToken* cancelToken; // 0x30
		Awaiter* __u__1; // 0x38

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <EXECUTE>D__1_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <EXECUTE>D__1_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

