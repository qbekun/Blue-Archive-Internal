#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::MinigameCCG::UI { class UICardGame_InGame_Tooltip_Card; }

#define <REPOSITIONDELAYFRAME>D__12_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1DF36A0)
#define <REPOSITIONDELAYFRAME>D__12_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1DF3B40)

	inline static constexpr unsigned int <RepositionDelayFrame>d__12_TypeDefinitionIndex = 20712;

	class <RepositionDelayFrame>d__12 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::System::Int32 frame; // 0x28
		::MX::MinigameCCG::UI::UICardGame_InGame_Tooltip_Card* __4__this; // 0x30
		Awaiter* __u__1; // 0x38

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <REPOSITIONDELAYFRAME>D__12_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <REPOSITIONDELAYFRAME>D__12_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

