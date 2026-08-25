#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Animations::Rigging { class ReadWriteTransformHandle; }
namespace UnityEngine::Animations::Rigging { class ReadOnlyTransformHandle; }
namespace UnityEngine::Animations::Rigging { class Vector3Property; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine::Animations::Rigging { class FloatProperty; }
namespace UnityEngine::Animations { class AnimationStream; }

#define UNITYENGINE_ANIMATIONS_RIGGING_MULTIAIMCONSTRAINTJOB_SET_JOBWEIGHT_OFFSET UNITYSDK_OFFSET(0x9E1F1D0)
#define UNITYENGINE_ANIMATIONS_RIGGING_MULTIAIMCONSTRAINTJOB_PROCESSROOTMOTION_OFFSET UNITYSDK_OFFSET(0x9E1F1E0)
#define UNITYENGINE_ANIMATIONS_RIGGING_MULTIAIMCONSTRAINTJOB_COMPUTEWORLDUPVECTOR_OFFSET UNITYSDK_OFFSET(0x9E1F1F0)
#define UNITYENGINE_ANIMATIONS_RIGGING_MULTIAIMCONSTRAINTJOB_GET_JOBWEIGHT_OFFSET UNITYSDK_OFFSET(0x9E1F8F0)
#define UNITYENGINE_ANIMATIONS_RIGGING_MULTIAIMCONSTRAINTJOB_PROCESSANIMATION_OFFSET UNITYSDK_OFFSET(0x9E1F900)

namespace UnityEngine::Animations::Rigging
{
	inline static constexpr unsigned int MultiAimConstraintJob_TypeDefinitionIndex = 37153;

	class MultiAimConstraintJob : public Il2CppObject
	{
	public:
		::UnityEngine::Animations::Rigging::ReadWriteTransformHandle* driven; // 0x10
		::UnityEngine::Animations::Rigging::ReadOnlyTransformHandle* drivenParent; // 0x1C
		::UnityEngine::Animations::Rigging::Vector3Property* drivenOffset; // 0x34
		Il2CppObject* sourceTransforms; // 0x68
		Il2CppObject* sourceWeights; // 0x78
		Il2CppObject* sourceOffsets; // 0x88
		Il2CppObject* weightBuffer; // 0x98
		::UnityEngine::Vector3* aimAxis; // 0xA8
		::UnityEngine::Vector3* upAxis; // 0xB4
		WorldUpType* worldUpType; // 0xC0
		::UnityEngine::Vector3* worldUpAxis; // 0xC4
		::UnityEngine::Animations::Rigging::ReadOnlyTransformHandle* worldUpObject; // 0xD0
		::UnityEngine::Vector3* axesMask; // 0xE8
		::UnityEngine::Animations::Rigging::FloatProperty* minLimit; // 0xF4
		::UnityEngine::Animations::Rigging::FloatProperty* maxLimit; // 0x104
		::UnityEngine::Animations::Rigging::FloatProperty* _jobWeight_k__BackingField; // 0x114

		::System::Void set_jobWeight(::UnityEngine::Animations::Rigging::FloatProperty* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::Rigging::FloatProperty*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_MULTIAIMCONSTRAINTJOB_SET_JOBWEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessRootMotion(::UnityEngine::Animations::AnimationStream* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::AnimationStream*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_MULTIAIMCONSTRAINTJOB_PROCESSROOTMOTION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* ComputeWorldUpVector(::UnityEngine::Animations::AnimationStream* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Animations::AnimationStream*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_MULTIAIMCONSTRAINTJOB_COMPUTEWORLDUPVECTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Animations::Rigging::FloatProperty* get_jobWeight()
		{
			return (return (::UnityEngine::Animations::Rigging::FloatProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_MULTIAIMCONSTRAINTJOB_GET_JOBWEIGHT_OFFSET))(nullptr);
		}

		::System::Void ProcessAnimation(::UnityEngine::Animations::AnimationStream* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::AnimationStream*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_MULTIAIMCONSTRAINTJOB_PROCESSANIMATION_OFFSET))(arg, nullptr);
		}

	};
}

