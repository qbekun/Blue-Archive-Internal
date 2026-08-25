#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::MinigameCCG::Visual { class CCGGameManager; }

#define <PRELOADPOOLOBJECT>D__21_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E95970)
#define <PRELOADPOOLOBJECT>D__21_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E961F0)

	inline static constexpr unsigned int <PreloadPoolObject>d__21_TypeDefinitionIndex = 21197;

	class <PreloadPoolObject>d__21 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::MX::MinigameCCG::Visual::CCGGameManager* __4__this; // 0x28
		<>c__DisplayClass21_0* __8__1; // 0x30
		Il2CppObject* __u__1; // 0x38
		Awaiter* __u__2; // 0x50

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PRELOADPOOLOBJECT>D__21_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <PRELOADPOOLOBJECT>D__21_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

