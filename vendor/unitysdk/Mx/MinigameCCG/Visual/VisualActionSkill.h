#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class AnimationState; }
namespace UnityEngine { class Quaternion; }
namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG::Visual { class CCGFlowProcessor; }

#define MX_MINIGAMECCG_VISUAL_VISUALACTIONSKILL_CALCULATEEXSKILLLOOKDIRECTION_OFFSET UNITYSDK_OFFSET(0x1E74520)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONSKILL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E65220)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONSKILL_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1E75060)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONSKILL_ISQUATERNIONVALID_OFFSET UNITYSDK_OFFSET(0x1E746B0)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONSKILL_GET_ISCHARACTER_OFFSET UNITYSDK_OFFSET(0x1E65E80)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONSKILL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E5EE60)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONSKILL_ISACTIVESKILL_OFFSET UNITYSDK_OFFSET(0x1E65F20)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONSKILL__CALCULATEEXSKILLLOOKDIRECTION_G__CALCULATELOOKDIRECTION|16_0_OFFSET UNITYSDK_OFFSET(0x1E74A70)

namespace MX::MinigameCCG::Visual
{
	inline static constexpr unsigned int VisualActionSkill_TypeDefinitionIndex = 21126;

	class VisualActionSkill : public Il2CppObject
	{
	public:
		CCGVisualEntity* sourceTarget; // 0x28
		::UnityEngine::AnimationState* animationState; // 0x30
		::System::String* curPhaseAnim; // 0x38
		::UnityEngine::Quaternion* startRot; // 0x40
		::UnityEngine::Quaternion* endRot; // 0x50
		::System::Boolean faceToTarget; // 0x60
		Il2CppObject* targetEntitise; // 0x68
		::System::String* startPhaseAnim; // 0x70
		::System::String* loopPhaseAnim; // 0x78
		::System::String* endPhaseAnim; // 0x80
		CCGVisualCharacter* sourceCharacter; // 0x88

		::System::Void CalculateEXSkillLookDirection(CCGVisualCharacter* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(CCGVisualCharacter*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONSKILL_CALCULATEEXSKILLLOOKDIRECTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Initialize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONSKILL_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONSKILL_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Boolean IsQuaternionValid(::UnityEngine::Quaternion* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONSKILL_ISQUATERNIONVALID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isCharacter()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONSKILL_GET_ISCHARACTER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::Visual::CCGFlowProcessor* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::Visual::CCGFlowProcessor*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONSKILL_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsActiveSkill(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONSKILL_ISACTIVESKILL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Quaternion* _CalculateEXSkillLookDirection_g__CalculateLookDirection|16_0(CCGVisualCharacter* arg, Il2CppObject* arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(CCGVisualCharacter*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONSKILL__CALCULATEEXSKILLLOOKDIRECTION_G__CALCULATELOOKDIRECTION|16_0_OFFSET))(arg, arg, nullptr);
		}

	};
}

