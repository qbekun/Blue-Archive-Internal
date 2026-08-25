#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
class <>c__DisplayClass8_0;
class UIPopup_WelcomeCampaignItem;
class Awaiter;

#define <SENDENTERREWARDREQUEST>D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xBD2B10)
#define <SENDENTERREWARDREQUEST>D__8_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0xBD3230)

	inline static constexpr unsigned int <SendEnterRewardRequest>d__8_TypeDefinitionIndex = 8671;

	class <SendEnterRewardRequest>d__8 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		<>c__DisplayClass8_0* __8__1; // 0x28
		UIPopup_WelcomeCampaignItem* __4__this; // 0x30
		Awaiter* __u__1; // 0x38

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SENDENTERREWARDREQUEST>D__8_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <SENDENTERREWARDREQUEST>D__8_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

