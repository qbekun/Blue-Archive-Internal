#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
class Awaiter;

#define <EXECUTE>D__0_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x259A110)
#define <EXECUTE>D__0_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x259A540)

	inline static constexpr unsigned int <Execute>d__0_TypeDefinitionIndex = 284;

	class <Execute>d__0 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		Awaiter* __u__1; // 0x28

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <EXECUTE>D__0_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <EXECUTE>D__0_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

