#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::MinigameCCG { class EventHealthChange; }
namespace MX::MinigameCCG::Visual { class VisualActionDamageStriker; }
namespace MX::MinigameCCG::Visual { class VFX; }
namespace MX::MinigameCCG::Procedures { class SkillVFXProjectileInfo; }

#define <PLAYDAMAGEEFFECTANDANIMATION>D__5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E617C0)
#define <PLAYDAMAGEEFFECTANDANIMATION>D__5_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E62F80)

	inline static constexpr unsigned int <PlayDamageEffectAndAnimation>d__5_TypeDefinitionIndex = 21081;

	class <PlayDamageEffectAndAnimation>d__5 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::MX::MinigameCCG::EventHealthChange* eventHealthChange; // 0x28
		::MX::MinigameCCG::Visual::VisualActionDamageStriker* __4__this; // 0x30
		<>c__DisplayClass5_0* __8__1; // 0x38
		::MX::MinigameCCG::Visual::VFX* _targetEffectData_5__2; // 0x40
		::MX::MinigameCCG::Procedures::SkillVFXProjectileInfo* _projectileInfo_5__3; // 0x48
		Awaiter* __u__1; // 0x50
		::System::Int32 _i_5__4; // 0x60

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYDAMAGEEFFECTANDANIMATION>D__5_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYDAMAGEEFFECTANDANIMATION>D__5_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

