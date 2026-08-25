#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
class VisualActionSelectEntities;
namespace MX::MinigameCCG { class CCGPlayer; }
namespace UnityEngine { class ParticleSystem; }
class Awaiter;

#define <PROGRESSCHARACTERENTITY>D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x26E4E20)
#define <PROGRESSCHARACTERENTITY>D__8_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x26E6200)

	inline static constexpr unsigned int <ProgressCharacterEntity>d__8_TypeDefinitionIndex = 392;

	class <ProgressCharacterEntity>d__8 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		VisualActionSelectEntities* __4__this; // 0x28
		::MX::MinigameCCG::CCGPlayer* player; // 0x30
		::UnityEngine::ParticleSystem* _checkMarkVFX_5__2; // 0x38
		::System::String* _targetAllText_5__3; // 0x40
		::System::String* _targetSelectText_5__4; // 0x48
		Awaiter* __u__1; // 0x50

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROGRESSCHARACTERENTITY>D__8_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <PROGRESSCHARACTERENTITY>D__8_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

