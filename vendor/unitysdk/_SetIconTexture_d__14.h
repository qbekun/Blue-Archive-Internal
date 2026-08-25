#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
class UILobbyBattlePassButton;

#define <SETICONTEXTURE>D__14_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x266BD80)
#define <SETICONTEXTURE>D__14_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x266C350)

	inline static constexpr unsigned int <SetIconTexture>d__14_TypeDefinitionIndex = 6687;

	class <SetIconTexture>d__14 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		UILobbyBattlePassButton* __4__this; // 0x28
		Il2CppObject* __u__1; // 0x30

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SETICONTEXTURE>D__14_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <SETICONTEXTURE>D__14_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

