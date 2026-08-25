#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
class UIBattlePass;

#define <SETTEXTURES>D__26_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x224F290)
#define <SETTEXTURES>D__26_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x224F890)

	inline static constexpr unsigned int <SetTextures>d__26_TypeDefinitionIndex = 4529;

	class <SetTextures>d__26 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		UIBattlePass* __4__this; // 0x28
		Il2CppObject* __u__1; // 0x30

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SETTEXTURES>D__26_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <SETTEXTURES>D__26_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

