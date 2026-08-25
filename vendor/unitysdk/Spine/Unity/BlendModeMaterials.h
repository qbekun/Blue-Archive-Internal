#pragma once
#include "../../unitysdk.h"

namespace Spine { class BlendMode; }
namespace UnityEngine { class Material; }
namespace Spine { class SkeletonData; }
namespace Spine::Unity { class SkeletonDataAsset; }
namespace Spine { class AtlasRegion; }

#define SPINE_UNITY_BLENDMODEMATERIALS_GET_REQUIRESBLENDMODEMATERIALS_OFFSET UNITYSDK_OFFSET(0x95E7E00)
#define SPINE_UNITY_BLENDMODEMATERIALS_SET_REQUIRESBLENDMODEMATERIALS_OFFSET UNITYSDK_OFFSET(0x95E7E10)
#define SPINE_UNITY_BLENDMODEMATERIALS_BLENDMODEFORMATERIAL_OFFSET UNITYSDK_OFFSET(0x95E7E20)
#define SPINE_UNITY_BLENDMODEMATERIALS_UPDATEBLENDMODEMATERIALSREQUIREDSTATE_OFFSET UNITYSDK_OFFSET(0x95E82C0)
#define SPINE_UNITY_BLENDMODEMATERIALS_CREATEANDASSIGNMATERIALS_OFFSET UNITYSDK_OFFSET(0x95E8720)
#define SPINE_UNITY_BLENDMODEMATERIALS_CREATEANDASSIGNMATERIALS_OFFSET UNITYSDK_OFFSET(0x95E8970)
#define SPINE_UNITY_BLENDMODEMATERIALS_CREATEFORREGION_OFFSET UNITYSDK_OFFSET(0x95E92D0)
#define SPINE_UNITY_BLENDMODEMATERIALS_CREATEREPLACEMENTMATERIAL_OFFSET UNITYSDK_OFFSET(0x95E9530)
#define SPINE_UNITY_BLENDMODEMATERIALS_APPLYMATERIALS_OFFSET UNITYSDK_OFFSET(0x95E9700)
#define SPINE_UNITY_BLENDMODEMATERIALS_CLONEATLASREGIONWITHMATERIAL_OFFSET UNITYSDK_OFFSET(0x95E9FB0)
#define SPINE_UNITY_BLENDMODEMATERIALS_.CTOR_OFFSET UNITYSDK_OFFSET(0x95EA1D0)

namespace Spine::Unity
{
	inline static constexpr unsigned int BlendModeMaterials_TypeDefinitionIndex = 35273;

	class BlendModeMaterials : public Il2CppObject
	{
	public:
		::System::String* MATERIAL_SUFFIX_MULTIPLY; // 0x0
		::System::String* MATERIAL_SUFFIX_SCREEN; // 0x0
		::System::String* MATERIAL_SUFFIX_ADDITIVE; // 0x0
		::System::Boolean requiresBlendModeMaterials; // 0x10
		::System::Boolean applyAdditiveMaterial; // 0x11
		Il2CppObject* additiveMaterials; // 0x18
		Il2CppObject* multiplyMaterials; // 0x20
		Il2CppObject* screenMaterials; // 0x28

		::System::Boolean get_RequiresBlendModeMaterials()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALS_GET_REQUIRESBLENDMODEMATERIALS_OFFSET))(nullptr);
		}

		::System::Void set_RequiresBlendModeMaterials(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALS_SET_REQUIRESBLENDMODEMATERIALS_OFFSET))(arg, nullptr);
		}

		::Spine::BlendMode* BlendModeForMaterial(::UnityEngine::Material* arg)
		{
			return (return (::Spine::BlendMode*(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALS_BLENDMODEFORMATERIAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean UpdateBlendmodeMaterialsRequiredState(::Spine::SkeletonData* arg)
		{
			return (return (::System::Boolean(*)(::Spine::SkeletonData*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALS_UPDATEBLENDMODEMATERIALSREQUIREDSTATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CreateAndAssignMaterials(::Spine::Unity::SkeletonDataAsset* arg, TemplateMaterials* arg, bool&* arg)
		{
			return (return (::System::Boolean(*)(::Spine::Unity::SkeletonDataAsset*, TemplateMaterials*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALS_CREATEANDASSIGNMATERIALS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean CreateAndAssignMaterials(::Spine::Unity::SkeletonDataAsset* arg, TemplateMaterials* arg, bool&* arg, Il2CppObject* arg, Il2CppObject* arg, CreateForRegionDelegate* arg)
		{
			return (return (::System::Boolean(*)(::Spine::Unity::SkeletonDataAsset*, TemplateMaterials*, bool&*, Il2CppObject*, Il2CppObject*, CreateForRegionDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALS_CREATEANDASSIGNMATERIALS_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean CreateForRegion(Il2CppObject&* arg, bool&* arg, ::Spine::AtlasRegion* arg, ::UnityEngine::Material* arg, ::System::String* str, ::Spine::Unity::SkeletonDataAsset* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, bool&*, ::Spine::AtlasRegion*, ::UnityEngine::Material*, ::System::String*, ::Spine::Unity::SkeletonDataAsset*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALS_CREATEFORREGION_OFFSET))(arg, arg, arg, arg, str, arg, nullptr);
		}

		ReplacementMaterial* CreateReplacementMaterial(::Spine::AtlasRegion* arg, ::UnityEngine::Material* arg, ::System::String* str)
		{
			return (return (ReplacementMaterial*(*)(::Spine::AtlasRegion*, ::UnityEngine::Material*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALS_CREATEREPLACEMENTMATERIAL_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void ApplyMaterials(::Spine::SkeletonData* arg)
		{
			((::System::Void(*)(::Spine::SkeletonData*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALS_APPLYMATERIALS_OFFSET))(arg, nullptr);
		}

		::Spine::AtlasRegion* CloneAtlasRegionWithMaterial(::Spine::AtlasRegion* arg, Il2CppObject* arg)
		{
			return (return (::Spine::AtlasRegion*(*)(::Spine::AtlasRegion*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALS_CLONEATLASREGIONWITHMATERIAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALS_.CTOR_OFFSET))(nullptr);
		}

	};
}

