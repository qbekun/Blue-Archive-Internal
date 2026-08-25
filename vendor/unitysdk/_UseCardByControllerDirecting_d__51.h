#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
class CCGHandManager;
class Awaiter;

#define <USECARDBYCONTROLLERDIRECTING>D__51_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x26F2C80)
#define <USECARDBYCONTROLLERDIRECTING>D__51_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x26F3570)

	inline static constexpr unsigned int <UseCardByControllerDirecting>d__51_TypeDefinitionIndex = 421;

	class <UseCardByControllerDirecting>d__51 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		CCGHandManager* __4__this; // 0x28
		Awaiter* __u__1; // 0x30

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <USECARDBYCONTROLLERDIRECTING>D__51_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <USECARDBYCONTROLLERDIRECTING>D__51_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

