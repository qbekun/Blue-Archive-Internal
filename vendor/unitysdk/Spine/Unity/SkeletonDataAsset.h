#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class TextAsset; }
namespace Spine::Unity { class BlendModeMaterials; }
namespace UnityEngine { class RuntimeAnimatorController; }
namespace Spine { class SkeletonData; }
namespace Spine { class AnimationStateData; }
namespace Spine::Unity { class SkeletonDataAsset; }
namespace Spine::Unity { class AtlasAssetBase; }
namespace Spine { class AttachmentLoader; }

#define SPINE_UNITY_SKELETONDATAASSET_GET_ISLOADED_OFFSET UNITYSDK_OFFSET(0x95EBDC0)
#define SPINE_UNITY_SKELETONDATAASSET_RESET_OFFSET UNITYSDK_OFFSET(0x95EBDD0)
#define SPINE_UNITY_SKELETONDATAASSET_CREATERUNTIMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x95EBE10)
#define SPINE_UNITY_SKELETONDATAASSET_CREATERUNTIMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x95EBED0)
#define SPINE_UNITY_SKELETONDATAASSET_SETUPRUNTIMEBLENDMODEMATERIALS_OFFSET UNITYSDK_OFFSET(0x95EBF90)
#define SPINE_UNITY_SKELETONDATAASSET_CLEAR_OFFSET UNITYSDK_OFFSET(0x95EA4F0)
#define SPINE_UNITY_SKELETONDATAASSET_GETANIMATIONSTATEDATA_OFFSET UNITYSDK_OFFSET(0x95EC020)
#define SPINE_UNITY_SKELETONDATAASSET_GETSKELETONDATA_OFFSET UNITYSDK_OFFSET(0x95E7430)
#define SPINE_UNITY_SKELETONDATAASSET_INITIALIZEWITHDATA_OFFSET UNITYSDK_OFFSET(0x95EC4A0)
#define SPINE_UNITY_SKELETONDATAASSET_FILLSTATEDATA_OFFSET UNITYSDK_OFFSET(0x95EC530)
#define SPINE_UNITY_SKELETONDATAASSET_GETATLASARRAY_OFFSET UNITYSDK_OFFSET(0x95EC050)
#define SPINE_UNITY_SKELETONDATAASSET_READSKELETONDATA_OFFSET UNITYSDK_OFFSET(0x95EC1F0)
#define SPINE_UNITY_SKELETONDATAASSET_READSKELETONDATA_OFFSET UNITYSDK_OFFSET(0x95EC3F0)
#define SPINE_UNITY_SKELETONDATAASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x95EC600)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonDataAsset_TypeDefinitionIndex = 35278;

	class SkeletonDataAsset : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* atlasAssets; // 0x18
		::System::Single scale; // 0x20
		::UnityEngine::TextAsset* skeletonJSON; // 0x28
		::System::Boolean isUpgradingBlendModeMaterials; // 0x30
		::Spine::Unity::BlendModeMaterials* blendModeMaterials; // 0x38
		Il2CppObject* skeletonDataModifiers; // 0x40
		::Il2CppArray<::System::Object*>* fromAnimation; // 0x48
		::Il2CppArray<::System::Object*>* toAnimation; // 0x50
		::Il2CppArray<::System::Object*>* duration; // 0x58
		::System::Single defaultMix; // 0x60
		::UnityEngine::RuntimeAnimatorController* controller; // 0x68
		::Spine::SkeletonData* skeletonData; // 0x70
		::Spine::AnimationStateData* stateData; // 0x78

		::System::Boolean get_IsLoaded()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONDATAASSET_GET_ISLOADED_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONDATAASSET_RESET_OFFSET))(nullptr);
		}

		::Spine::Unity::SkeletonDataAsset* CreateRuntimeInstance(::UnityEngine::TextAsset* arg, ::Spine::Unity::AtlasAssetBase* arg, ::System::Boolean arg, ::System::Single arg)
		{
			return (return (::Spine::Unity::SkeletonDataAsset*(*)(::UnityEngine::TextAsset*, ::Spine::Unity::AtlasAssetBase*, ::System::Boolean, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONDATAASSET_CREATERUNTIMEINSTANCE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Spine::Unity::SkeletonDataAsset* CreateRuntimeInstance(::UnityEngine::TextAsset* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg, ::System::Single arg)
		{
			return (return (::Spine::Unity::SkeletonDataAsset*(*)(::UnityEngine::TextAsset*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONDATAASSET_CREATERUNTIMEINSTANCE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetupRuntimeBlendModeMaterials(::System::Boolean arg, TemplateMaterials* arg)
		{
			((::System::Void(*)(::System::Boolean, TemplateMaterials*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONDATAASSET_SETUPRUNTIMEBLENDMODEMATERIALS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONDATAASSET_CLEAR_OFFSET))(nullptr);
		}

		::Spine::AnimationStateData* GetAnimationStateData()
		{
			return (return (::Spine::AnimationStateData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONDATAASSET_GETANIMATIONSTATEDATA_OFFSET))(nullptr);
		}

		::Spine::SkeletonData* GetSkeletonData(::System::Boolean arg)
		{
			return (return (::Spine::SkeletonData*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONDATAASSET_GETSKELETONDATA_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeWithData(::Spine::SkeletonData* arg)
		{
			((::System::Void(*)(::Spine::SkeletonData*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONDATAASSET_INITIALIZEWITHDATA_OFFSET))(arg, nullptr);
		}

		::System::Void FillStateData(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONDATAASSET_FILLSTATEDATA_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetAtlasArray()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONDATAASSET_GETATLASARRAY_OFFSET))(nullptr);
		}

		::Spine::SkeletonData* ReadSkeletonData(::Il2CppArray<::System::Object*>* arg, ::Spine::AttachmentLoader* arg, ::System::Single arg)
		{
			return (return (::Spine::SkeletonData*(*)(::Il2CppArray<::System::Object*>*, ::Spine::AttachmentLoader*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONDATAASSET_READSKELETONDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::Spine::SkeletonData* ReadSkeletonData(::System::String* str, ::Spine::AttachmentLoader* arg, ::System::Single arg)
		{
			return (return (::Spine::SkeletonData*(*)(::System::String*, ::Spine::AttachmentLoader*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONDATAASSET_READSKELETONDATA_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONDATAASSET_.CTOR_OFFSET))(nullptr);
		}

	};
}

