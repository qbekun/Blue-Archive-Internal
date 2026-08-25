#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::MinigameCCG::Visual { class VFX; }
namespace MX::MinigameCCG::Visual { class CCGEffectManager; }
namespace UnityEngine { class ParticleSystem; }

#define <PLAYVFXWITHINTERVALASYNC>D__38_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E8E080)
#define <PLAYVFXWITHINTERVALASYNC>D__38_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E8EA20)

	inline static constexpr unsigned int <PlayVFXWithIntervalAsync>d__38_TypeDefinitionIndex = 21180;

	class <PlayVFXWithIntervalAsync>d__38 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::MX::MinigameCCG::Visual::VFX* vfx; // 0x28
		::MX::MinigameCCG::Visual::CCGEffectManager* __4__this; // 0x30
		::System::String* _addresskey_5__2; // 0x38
		Awaiter* __u__1; // 0x40
		::UnityEngine::ParticleSystem* _effect_5__3; // 0x50

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYVFXWITHINTERVALASYNC>D__38_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYVFXWITHINTERVALASYNC>D__38_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

