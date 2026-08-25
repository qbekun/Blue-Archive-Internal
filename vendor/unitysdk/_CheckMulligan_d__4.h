#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::MinigameCCG::Visual { class VisualActionMulliganDrawCard; }

#define <CHECKMULLIGAN>D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E70CD0)
#define <CHECKMULLIGAN>D__4_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E72840)

	inline static constexpr unsigned int <CheckMulligan>d__4_TypeDefinitionIndex = 21116;

	class <CheckMulligan>d__4 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::MX::MinigameCCG::Visual::VisualActionMulliganDrawCard* __4__this; // 0x28
		Il2CppObject* visualCards; // 0x30
		<>c__DisplayClass4_0* __8__1; // 0x38
		Awaiter* __u__1; // 0x40
		Il2CppObject* _task_5__2; // 0x50

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CHECKMULLIGAN>D__4_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <CHECKMULLIGAN>D__4_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

