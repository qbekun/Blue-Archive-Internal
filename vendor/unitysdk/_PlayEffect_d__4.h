#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::MinigameCCG::Visual { class VisualActionSpawnCard; }

#define <PLAYEFFECT>D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E7AFF0)
#define <PLAYEFFECT>D__4_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E7B760)

	inline static constexpr unsigned int <PlayEffect>d__4_TypeDefinitionIndex = 21133;

	class <PlayEffect>d__4 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		CCGVisualCard* card; // 0x28
		::MX::MinigameCCG::Visual::VisualActionSpawnCard* __4__this; // 0x30
		Awaiter* __u__1; // 0x38

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYEFFECT>D__4_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYEFFECT>D__4_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

