#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::MinigameCCG::Visual { class VisualActionDrawCard; }

#define <LOCATIONHAND>D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E689E0)
#define <LOCATIONHAND>D__6_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E691D0)

	inline static constexpr unsigned int <LocationHand>d__6_TypeDefinitionIndex = 21095;

	class <LocationHand>d__6 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::MX::MinigameCCG::Visual::VisualActionDrawCard* __4__this; // 0x28
		Awaiter* __u__1; // 0x30

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <LOCATIONHAND>D__6_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <LOCATIONHAND>D__6_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

