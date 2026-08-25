#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::MinigameCCG::UI { class UICardGame_ToastElement; }

#define <DELAYREVERSE>D__16_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E27110)
#define <DELAYREVERSE>D__16_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E27560)

	inline static constexpr unsigned int <DelayReverse>d__16_TypeDefinitionIndex = 20877;

	class <DelayReverse>d__16 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::MX::MinigameCCG::UI::UICardGame_ToastElement* __4__this; // 0x28
		Awaiter* __u__1; // 0x30

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <DELAYREVERSE>D__16_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <DELAYREVERSE>D__16_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

