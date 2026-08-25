#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
class InteractiveWorldRaidCommandRandomExecute;
class Awaiter;

#define <EXECUTE>D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x259CBD0)
#define <EXECUTE>D__3_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x259D0A0)

	inline static constexpr unsigned int <Execute>d__3_TypeDefinitionIndex = 296;

	class <Execute>d__3 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		InteractiveWorldRaidCommandRandomExecute* __4__this; // 0x28
		::System::Threading::CancellationToken* cancelToken; // 0x30
		Awaiter* __u__1; // 0x38

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <EXECUTE>D__3_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <EXECUTE>D__3_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

