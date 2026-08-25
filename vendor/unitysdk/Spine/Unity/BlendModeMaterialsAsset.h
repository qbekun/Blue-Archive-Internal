#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Material; }
namespace Spine { class SkeletonData; }

#define SPINE_UNITY_BLENDMODEMATERIALSASSET_APPLYMATERIALS_OFFSET UNITYSDK_OFFSET(0x961D590)
#define SPINE_UNITY_BLENDMODEMATERIALSASSET_APPLY_OFFSET UNITYSDK_OFFSET(0x961DEE0)
#define SPINE_UNITY_BLENDMODEMATERIALSASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x961DF10)

namespace Spine::Unity
{
	inline static constexpr unsigned int BlendModeMaterialsAsset_TypeDefinitionIndex = 35363;

	class BlendModeMaterialsAsset : public Il2CppObject
	{
	public:
		::UnityEngine::Material* multiplyMaterialTemplate; // 0x18
		::UnityEngine::Material* screenMaterialTemplate; // 0x20
		::UnityEngine::Material* additiveMaterialTemplate; // 0x28
		::System::Boolean applyAdditiveMaterial; // 0x30

		::System::Void ApplyMaterials(::Spine::SkeletonData* arg, ::UnityEngine::Material* arg, ::UnityEngine::Material* arg, ::UnityEngine::Material* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Spine::SkeletonData*, ::UnityEngine::Material*, ::UnityEngine::Material*, ::UnityEngine::Material*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALSASSET_APPLYMATERIALS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Apply(::Spine::SkeletonData* arg)
		{
			((::System::Void(*)(::Spine::SkeletonData*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALSASSET_APPLY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALSASSET_.CTOR_OFFSET))(nullptr);
		}

	};
}

