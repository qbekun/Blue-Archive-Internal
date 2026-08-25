#pragma once
#include "../../unitysdk.h"

namespace Spine::Unity { class SkeletonRenderer; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace Spine::Unity { class SkeletonPartsRenderer; }
namespace Spine::Unity { class SkeletonRendererInstruction; }
namespace Spine::Unity { class SkeletonRenderSeparator; }

#define SPINE_UNITY_SKELETONRENDERSEPARATOR_GET_SKELETONRENDERER_OFFSET UNITYSDK_OFFSET(0x96124A0)
#define SPINE_UNITY_SKELETONRENDERSEPARATOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x96124B0)
#define SPINE_UNITY_SKELETONRENDERSEPARATOR_REMOVE_ONMESHANDMATERIALSUPDATED_OFFSET UNITYSDK_OFFSET(0x9612750)
#define SPINE_UNITY_SKELETONRENDERSEPARATOR_SET_SKELETONRENDERER_OFFSET UNITYSDK_OFFSET(0x96127F0)
#define SPINE_UNITY_SKELETONRENDERSEPARATOR_CLEARPARTSRENDERERMESHES_OFFSET UNITYSDK_OFFSET(0x9612590)
#define SPINE_UNITY_SKELETONRENDERSEPARATOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9612900)
#define SPINE_UNITY_SKELETONRENDERSEPARATOR_ADDPARTSRENDERER_OFFSET UNITYSDK_OFFSET(0x9612C60)
#define SPINE_UNITY_SKELETONRENDERSEPARATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9612E20)
#define SPINE_UNITY_SKELETONRENDERSEPARATOR_HANDLERENDER_OFFSET UNITYSDK_OFFSET(0x9612EB0)
#define SPINE_UNITY_SKELETONRENDERSEPARATOR_ADD_ONMESHANDMATERIALSUPDATED_OFFSET UNITYSDK_OFFSET(0x9613260)
#define SPINE_UNITY_SKELETONRENDERSEPARATOR_UPDATEVISIBILITY_OFFSET UNITYSDK_OFFSET(0x9613300)
#define SPINE_UNITY_SKELETONRENDERSEPARATOR_ADDTOSKELETONRENDERER_OFFSET UNITYSDK_OFFSET(0x9613540)
#define SPINE_UNITY_SKELETONRENDERSEPARATOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x9613820)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonRenderSeparator_TypeDefinitionIndex = 35329;

	class SkeletonRenderSeparator : public Il2CppObject
	{
	public:
		::System::Int32 DefaultSortingOrderIncrement; // 0x0
		::Spine::Unity::SkeletonRenderer* skeletonRenderer; // 0x18
		::UnityEngine::MeshRenderer* mainMeshRenderer; // 0x20
		::System::Boolean copyPropertyBlock; // 0x28
		::System::Boolean copyMeshRendererFlags; // 0x29
		Il2CppObject* partsRenderers; // 0x30
		::System::Boolean isVisible; // 0x38
		SkeletonRendererDelegate* OnMeshAndMaterialsUpdated; // 0x40
		::UnityEngine::MaterialPropertyBlock* copiedBlock; // 0x48

		::Spine::Unity::SkeletonRenderer* get_SkeletonRenderer()
		{
			return (return (::Spine::Unity::SkeletonRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERSEPARATOR_GET_SKELETONRENDERER_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERSEPARATOR_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void remove_OnMeshAndMaterialsUpdated(SkeletonRendererDelegate* arg)
		{
			((::System::Void(*)(SkeletonRendererDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERSEPARATOR_REMOVE_ONMESHANDMATERIALSUPDATED_OFFSET))(arg, nullptr);
		}

		::System::Void set_SkeletonRenderer(::Spine::Unity::SkeletonRenderer* arg)
		{
			((::System::Void(*)(::Spine::Unity::SkeletonRenderer*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERSEPARATOR_SET_SKELETONRENDERER_OFFSET))(arg, nullptr);
		}

		::System::Void ClearPartsRendererMeshes()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERSEPARATOR_CLEARPARTSRENDERERMESHES_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERSEPARATOR_ONENABLE_OFFSET))(nullptr);
		}

		::Spine::Unity::SkeletonPartsRenderer* AddPartsRenderer(::System::Int32 arg, ::System::String* str)
		{
			return (return (::Spine::Unity::SkeletonPartsRenderer*(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERSEPARATOR_ADDPARTSRENDERER_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERSEPARATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void HandleRender(::Spine::Unity::SkeletonRendererInstruction* arg)
		{
			((::System::Void(*)(::Spine::Unity::SkeletonRendererInstruction*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERSEPARATOR_HANDLERENDER_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnMeshAndMaterialsUpdated(SkeletonRendererDelegate* arg)
		{
			((::System::Void(*)(SkeletonRendererDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERSEPARATOR_ADD_ONMESHANDMATERIALSUPDATED_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateVisibility()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERSEPARATOR_UPDATEVISIBILITY_OFFSET))(nullptr);
		}

		::Spine::Unity::SkeletonRenderSeparator* AddToSkeletonRenderer(::Spine::Unity::SkeletonRenderer* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::Spine::Unity::SkeletonRenderSeparator*(*)(::Spine::Unity::SkeletonRenderer*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERSEPARATOR_ADDTOSKELETONRENDERER_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERSEPARATOR_UPDATE_OFFSET))(nullptr);
		}

	};
}

