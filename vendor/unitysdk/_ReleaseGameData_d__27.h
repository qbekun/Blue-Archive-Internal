#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::MinigameCCG::Visual { class CCGGameManager; }

#define <RELEASEGAMEDATA>D__27_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E97F50)
#define <RELEASEGAMEDATA>D__27_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E99100)

	inline static constexpr unsigned int <ReleaseGameData>d__27_TypeDefinitionIndex = 21208;

	class <ReleaseGameData>d__27 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::MX::MinigameCCG::Visual::CCGGameManager* __4__this; // 0x28
		Awaiter* __u__1; // 0x30

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <RELEASEGAMEDATA>D__27_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <RELEASEGAMEDATA>D__27_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

