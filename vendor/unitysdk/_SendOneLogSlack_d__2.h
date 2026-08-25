#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
class Awaiter;

#define <SENDONELOGSLACK>D__2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x211E9B0)
#define <SENDONELOGSLACK>D__2_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x211ED70)

	inline static constexpr unsigned int <SendOneLogSlack>d__2_TypeDefinitionIndex = 3884;

	class <SendOneLogSlack>d__2 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		Awaiter* __u__1; // 0x28

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SENDONELOGSLACK>D__2_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <SENDONELOGSLACK>D__2_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

