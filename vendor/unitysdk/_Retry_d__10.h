#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::MinigameCCG::UI { class UICardGame_InGame_Pause; }

#define <RETRY>D__10_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1DF9000)
#define <RETRY>D__10_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1DF93D0)

	inline static constexpr unsigned int <Retry>d__10_TypeDefinitionIndex = 20728;

	class <Retry>d__10 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::MX::MinigameCCG::UI::UICardGame_InGame_Pause* __4__this; // 0x28
		Awaiter* __u__1; // 0x30

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <RETRY>D__10_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <RETRY>D__10_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

