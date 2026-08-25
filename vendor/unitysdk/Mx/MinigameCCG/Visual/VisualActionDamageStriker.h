#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGEvent_DamageStriker; }
namespace Cysharp::Threading::Tasks { class UniTask; }
namespace MX::MinigameCCG { class EventHealthChange; }
namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG::Visual { class CCGFlowProcessor; }
namespace MX::MinigameCCG::Visual { class VFX; }
namespace MX::MinigameCCG::Procedures { class SkillVFXProjectileInfo; }

#define MX_MINIGAMECCG_VISUAL_VISUALACTIONDAMAGESTRIKER_PLAYDAMAGEANIMATION_OFFSET UNITYSDK_OFFSET(0x1E5EC80)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONDAMAGESTRIKER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E5EE20)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONDAMAGESTRIKER__PLAYDAMAGEANIMATION_B__9_1_OFFSET UNITYSDK_OFFSET(0x1E5EF00)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONDAMAGESTRIKER_PLAYLAUNCHEFFECT_OFFSET UNITYSDK_OFFSET(0x1E5EF10)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONDAMAGESTRIKER_RUN_OFFSET UNITYSDK_OFFSET(0x1E5F090)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONDAMAGESTRIKER_PLAYDAMAGEEFFECTANDANIMATION_OFFSET UNITYSDK_OFFSET(0x1E5F210)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONDAMAGESTRIKER_PLAYAREADAMAGEEFFECTANDANIMATION_OFFSET UNITYSDK_OFFSET(0x1E5F3C0)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONDAMAGESTRIKER__PLAYDAMAGEANIMATION_B__9_0_OFFSET UNITYSDK_OFFSET(0x1E5F560)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONDAMAGESTRIKER_PLAYHITEFFECTCHAIN_OFFSET UNITYSDK_OFFSET(0x1E5F570)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONDAMAGESTRIKER_PLAYPROJECTILEEFFECT_OFFSET UNITYSDK_OFFSET(0x1E5F630)

namespace MX::MinigameCCG::Visual
{
	inline static constexpr unsigned int VisualActionDamageStriker_TypeDefinitionIndex = 21087;

	class VisualActionDamageStriker : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGEvent_DamageStriker* eventInput; // 0x90
		::System::Boolean isEndDirecting; // 0x98

		::Cysharp::Threading::Tasks::UniTask* PlayDamageAnimation(::MX::MinigameCCG::EventHealthChange* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::MX::MinigameCCG::EventHealthChange*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONDAMAGESTRIKER_PLAYDAMAGEANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::Visual::CCGFlowProcessor* arg, ::MX::MinigameCCG::CCGEvent_DamageStriker* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::Visual::CCGFlowProcessor*, ::MX::MinigameCCG::CCGEvent_DamageStriker*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONDAMAGESTRIKER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean _PlayDamageAnimation_b__9_1()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONDAMAGESTRIKER__PLAYDAMAGEANIMATION_B__9_1_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* PlayLaunchEffect()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONDAMAGESTRIKER_PLAYLAUNCHEFFECT_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* Run()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONDAMAGESTRIKER_RUN_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* PlayDamageEffectAndAnimation(::MX::MinigameCCG::EventHealthChange* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::MX::MinigameCCG::EventHealthChange*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONDAMAGESTRIKER_PLAYDAMAGEEFFECTANDANIMATION_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* PlayAreaDamageEffectAndAnimation(::MX::MinigameCCG::EventHealthChange* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::MX::MinigameCCG::EventHealthChange*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONDAMAGESTRIKER_PLAYAREADAMAGEEFFECTANDANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Void _PlayDamageAnimation_b__9_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONDAMAGESTRIKER__PLAYDAMAGEANIMATION_B__9_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* PlayHitEffectChain(::MX::MinigameCCG::Visual::VFX* arg, ::MX::MinigameCCG::EventHealthChange* arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::MX::MinigameCCG::Visual::VFX*, ::MX::MinigameCCG::EventHealthChange*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONDAMAGESTRIKER_PLAYHITEFFECTCHAIN_OFFSET))(arg, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* PlayProjectileEffect(::MX::MinigameCCG::Visual::VFX* arg, ::MX::MinigameCCG::Procedures::SkillVFXProjectileInfo* arg, CCGVisualEntity* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::MX::MinigameCCG::Visual::VFX*, ::MX::MinigameCCG::Procedures::SkillVFXProjectileInfo*, CCGVisualEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONDAMAGESTRIKER_PLAYPROJECTILEEFFECT_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

