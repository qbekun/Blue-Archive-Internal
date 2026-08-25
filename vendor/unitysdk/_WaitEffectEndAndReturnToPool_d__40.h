#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::MinigameCCG::Visual { class CCGEffectManager; }
namespace UnityEngine { class ParticleSystem; }

#define <WAITEFFECTENDANDRETURNTOPOOL>D__40_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E8EF60)
#define <WAITEFFECTENDANDRETURNTOPOOL>D__40_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E8F800)

	inline static constexpr unsigned int <WaitEffectEndAndReturnToPool>d__40_TypeDefinitionIndex = 21183;

	class <WaitEffectEndAndReturnToPool>d__40 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::MX::MinigameCCG::Visual::CCGEffectManager* __4__this; // 0x28
		::UnityEngine::ParticleSystem* spawnVFX; // 0x30
		::System::Single time; // 0x38
		::System::Action* callback; // 0x40
		<>c__DisplayClass40_0* __8__1; // 0x48
		::System::String* key; // 0x50
		Awaiter* __u__1; // 0x58

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITEFFECTENDANDRETURNTOPOOL>D__40_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <WAITEFFECTENDANDRETURNTOPOOL>D__40_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

