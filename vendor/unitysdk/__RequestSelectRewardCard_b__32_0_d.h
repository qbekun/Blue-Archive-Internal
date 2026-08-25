#pragma once
#include "unitysdk.h"

namespace MX::MinigameCCG::UI { class UICardGame_CardReward; }
namespace MX::NetworkProtocol { class MiniGameCCGSelectRewardCardResponse; }

#define <<REQUESTSELECTREWARDCARD>B__32_0>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E1A960)
#define <<REQUESTSELECTREWARDCARD>B__32_0>D_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E1B330)

	inline static constexpr unsigned int <<RequestSelectRewardCard>b__32_0>d_TypeDefinitionIndex = 20831;

	class <<RequestSelectRewardCard>b__32_0>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder* __t__builder; // 0x18
		::MX::MinigameCCG::UI::UICardGame_CardReward* __4__this; // 0x38
		::MX::NetworkProtocol::MiniGameCCGSelectRewardCardResponse* response; // 0x40
		Awaiter* __u__1; // 0x48

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<REQUESTSELECTREWARDCARD>B__32_0>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <<REQUESTSELECTREWARDCARD>B__32_0>D_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

