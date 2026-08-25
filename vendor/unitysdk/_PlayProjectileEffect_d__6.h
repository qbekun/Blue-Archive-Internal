#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::MinigameCCG::Visual { class VFX; }
namespace MX::MinigameCCG::Visual { class VisualActionDamageStriker; }
namespace MX::MinigameCCG::Procedures { class SkillVFXProjectileInfo; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Vector3; }

#define <PLAYPROJECTILEEFFECT>D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E62F90)
#define <PLAYPROJECTILEEFFECT>D__6_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E63A50)

	inline static constexpr unsigned int <PlayProjectileEffect>d__6_TypeDefinitionIndex = 21082;

	class <PlayProjectileEffect>d__6 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::MX::MinigameCCG::Visual::VFX* projectileVFX; // 0x28
		::MX::MinigameCCG::Visual::VisualActionDamageStriker* __4__this; // 0x30
		CCGVisualEntity* target; // 0x38
		::MX::MinigameCCG::Procedures::SkillVFXProjectileInfo* projectileInfo; // 0x40
		::System::String* _projectileAddresskey_5__2; // 0x48
		::UnityEngine::ParticleSystem* _effect_5__3; // 0x50
		::UnityEngine::Vector3* _startPos_5__4; // 0x58
		::UnityEngine::Vector3* _adjustedTargetPos_5__5; // 0x64
		::System::Single _elapsedTime_5__6; // 0x70
		Awaiter* __u__1; // 0x78

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYPROJECTILEEFFECT>D__6_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYPROJECTILEEFFECT>D__6_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

