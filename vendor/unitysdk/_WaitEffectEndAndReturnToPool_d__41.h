#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::MinigameCCG::Visual { class CCGEffectManager; }
namespace UnityEngine { class ParticleSystem; }

#define <WAITEFFECTENDANDRETURNTOPOOL>D__41_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E8F890)
#define <WAITEFFECTENDANDRETURNTOPOOL>D__41_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E8FE60)

	inline static constexpr unsigned int <WaitEffectEndAndReturnToPool>d__41_TypeDefinitionIndex = 21185;

	class <WaitEffectEndAndReturnToPool>d__41 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::MX::MinigameCCG::Visual::CCGEffectManager* __4__this; // 0x28
		::UnityEngine::ParticleSystem* spawnVFX; // 0x30
		::System::Boolean isReturnPool; // 0x38
		::System::String* key; // 0x40
		::System::Action* callback; // 0x48
		Awaiter* __u__1; // 0x50

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITEFFECTENDANDRETURNTOPOOL>D__41_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <WAITEFFECTENDANDRETURNTOPOOL>D__41_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

