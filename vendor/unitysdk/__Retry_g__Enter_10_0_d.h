#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::MinigameCCG::UI { class UICardGame_InGame_Pause; }

#define <<RETRY>G__ENTER|10_0>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1DF93E0)
#define <<RETRY>G__ENTER|10_0>D_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1DF99A0)

	inline static constexpr unsigned int <<Retry>g__Enter|10_0>d_TypeDefinitionIndex = 20729;

	class <<Retry>g__Enter|10_0>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::MX::MinigameCCG::UI::UICardGame_InGame_Pause* __4__this; // 0x28
		Awaiter* __u__1; // 0x30

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<RETRY>G__ENTER|10_0>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <<RETRY>G__ENTER|10_0>D_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

