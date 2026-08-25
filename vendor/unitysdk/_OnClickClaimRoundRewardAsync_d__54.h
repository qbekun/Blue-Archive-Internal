#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
class UIEventContentClueViewModel;

#define <ONCLICKCLAIMROUNDREWARDASYNC>D__54_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x249D6D0)
#define <ONCLICKCLAIMROUNDREWARDASYNC>D__54_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x249DC80)

	inline static constexpr unsigned int <OnClickClaimRoundRewardAsync>d__54_TypeDefinitionIndex = 5769;

	class <OnClickClaimRoundRewardAsync>d__54 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		UIEventContentClueViewModel* __4__this; // 0x28
		Il2CppObject* __u__1; // 0x30

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ONCLICKCLAIMROUNDREWARDASYNC>D__54_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <ONCLICKCLAIMROUNDREWARDASYNC>D__54_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

