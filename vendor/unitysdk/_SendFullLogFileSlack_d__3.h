#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
class Awaiter;

#define <SENDFULLLOGFILESLACK>D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x211ED80)
#define <SENDFULLLOGFILESLACK>D__3_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x211F140)

	inline static constexpr unsigned int <SendFullLogFileSlack>d__3_TypeDefinitionIndex = 3885;

	class <SendFullLogFileSlack>d__3 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		Awaiter* __u__1; // 0x28

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SENDFULLLOGFILESLACK>D__3_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <SENDFULLLOGFILESLACK>D__3_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

