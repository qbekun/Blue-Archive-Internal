#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Animations { class AnimationStream; }

#define UNITYENGINE_ANIMATIONS_RIGGING_RIGSYNCSCENETOSTREAMJOB_PROCESSANIMATION_OFFSET UNITYSDK_OFFSET(0x9E22130)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGSYNCSCENETOSTREAMJOB_PROCESSROOTMOTION_OFFSET UNITYSDK_OFFSET(0x9E228E0)

namespace UnityEngine::Animations::Rigging
{
	inline static constexpr unsigned int RigSyncSceneToStreamJob_TypeDefinitionIndex = 37158;

	class RigSyncSceneToStreamJob : public Il2CppObject
	{
	public:
		TransformSyncer* transformSyncer; // 0x10
		PropertySyncer* propertySyncer; // 0x30
		PropertySyncer* rigWeightSyncer; // 0x60
		PropertySyncer* constraintWeightSyncer; // 0x90
		Il2CppObject* rigStates; // 0xC0
		Il2CppObject* rigConstraintEndIdx; // 0xD0
		Il2CppObject* modulatedConstraintWeights; // 0xE0

		::System::Void ProcessAnimation(::UnityEngine::Animations::AnimationStream* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::AnimationStream*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGSYNCSCENETOSTREAMJOB_PROCESSANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessRootMotion(::UnityEngine::Animations::AnimationStream* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::AnimationStream*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGSYNCSCENETOSTREAMJOB_PROCESSROOTMOTION_OFFSET))(arg, nullptr);
		}

	};
}

