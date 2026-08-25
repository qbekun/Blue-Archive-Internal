#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::MinigameCCG::Visual { class CCGEffectManager; }
namespace UnityEngine { class Transform; }

#define <RUNANDWAITVFX>D__39_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E8EA30)
#define <RUNANDWAITVFX>D__39_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E8EED0)

	inline static constexpr unsigned int <RunAndWaitVFX>d__39_TypeDefinitionIndex = 21181;

	class <RunAndWaitVFX>d__39 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::MX::MinigameCCG::Visual::CCGEffectManager* __4__this; // 0x28
		::System::String* key; // 0x30
		::UnityEngine::Transform* parent; // 0x38
		::System::Boolean isAlly; // 0x40
		::System::Action* callback; // 0x48
		Awaiter* __u__1; // 0x50

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <RUNANDWAITVFX>D__39_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <RUNANDWAITVFX>D__39_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

