#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
class CCGHandManager;
class CCGVisualCard;
class Awaiter;

#define <PROCESS>D__25_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x26EF840)
#define <PROCESS>D__25_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x26F0160)

	inline static constexpr unsigned int <Process>d__25_TypeDefinitionIndex = 415;

	class <Process>d__25 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		CCGHandManager* __4__this; // 0x28
		CCGVisualCard* selectedCard; // 0x30
		Awaiter* __u__1; // 0x38

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESS>D__25_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <PROCESS>D__25_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

