#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::MinigameCCG::Visual { class CCGGameManager; }

#define <PRELOADUI>D__20_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E94AE0)
#define <PRELOADUI>D__20_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E957F0)

	inline static constexpr unsigned int <PreloadUI>d__20_TypeDefinitionIndex = 21195;

	class <PreloadUI>d__20 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::MX::MinigameCCG::Visual::CCGGameManager* __4__this; // 0x28
		::System::Action* callback; // 0x30
		Awaiter* __u__1; // 0x38

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PRELOADUI>D__20_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <PRELOADUI>D__20_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

