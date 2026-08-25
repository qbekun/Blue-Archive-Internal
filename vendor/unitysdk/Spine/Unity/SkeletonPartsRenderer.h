#pragma once
#include "../../unitysdk.h"

namespace Spine::Unity { class MeshGenerator; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class MeshFilter; }
namespace Spine::Unity { class MeshRendererBuffers; }
namespace Spine::Unity { class SkeletonRendererInstruction; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace Spine::Unity { class SkeletonPartsRenderer; }
namespace UnityEngine { class Transform; }

#define SPINE_UNITY_SKELETONPARTSRENDERER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9611AB0)
#define SPINE_UNITY_SKELETONPARTSRENDERER_LAZYINTIALIZE_OFFSET UNITYSDK_OFFSET(0x9611AD0)
#define SPINE_UNITY_SKELETONPARTSRENDERER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9611C10)
#define SPINE_UNITY_SKELETONPARTSRENDERER_ADD_ONMESHANDMATERIALSUPDATED_OFFSET UNITYSDK_OFFSET(0x9611C80)
#define SPINE_UNITY_SKELETONPARTSRENDERER_GET_MESHFILTER_OFFSET UNITYSDK_OFFSET(0x9611D20)
#define SPINE_UNITY_SKELETONPARTSRENDERER_REMOVE_ONMESHANDMATERIALSUPDATED_OFFSET UNITYSDK_OFFSET(0x9611D40)
#define SPINE_UNITY_SKELETONPARTSRENDERER_RENDERPARTS_OFFSET UNITYSDK_OFFSET(0x9611DE0)
#define SPINE_UNITY_SKELETONPARTSRENDERER_CLEARMESH_OFFSET UNITYSDK_OFFSET(0x96120B0)
#define SPINE_UNITY_SKELETONPARTSRENDERER_GET_MESHGENERATOR_OFFSET UNITYSDK_OFFSET(0x96120E0)
#define SPINE_UNITY_SKELETONPARTSRENDERER_GET_MESHRENDERER_OFFSET UNITYSDK_OFFSET(0x9612100)
#define SPINE_UNITY_SKELETONPARTSRENDERER_SETPROPERTYBLOCK_OFFSET UNITYSDK_OFFSET(0x9612120)
#define SPINE_UNITY_SKELETONPARTSRENDERER_NEWPARTSRENDERERGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x9612160)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonPartsRenderer_TypeDefinitionIndex = 35328;

	class SkeletonPartsRenderer : public Il2CppObject
	{
	public:
		::Spine::Unity::MeshGenerator* meshGenerator; // 0x18
		::UnityEngine::MeshRenderer* meshRenderer; // 0x20
		::UnityEngine::MeshFilter* meshFilter; // 0x28
		SkeletonPartsRendererDelegate* OnMeshAndMaterialsUpdated; // 0x30
		::Spine::Unity::MeshRendererBuffers* buffers; // 0x38
		::Spine::Unity::SkeletonRendererInstruction* currentInstructions; // 0x40

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONPARTSRENDERER_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void LazyIntialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONPARTSRENDERER_LAZYINTIALIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONPARTSRENDERER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void add_OnMeshAndMaterialsUpdated(SkeletonPartsRendererDelegate* arg)
		{
			((::System::Void(*)(SkeletonPartsRendererDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONPARTSRENDERER_ADD_ONMESHANDMATERIALSUPDATED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::MeshFilter* get_MeshFilter()
		{
			return (return (::UnityEngine::MeshFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONPARTSRENDERER_GET_MESHFILTER_OFFSET))(nullptr);
		}

		::System::Void remove_OnMeshAndMaterialsUpdated(SkeletonPartsRendererDelegate* arg)
		{
			((::System::Void(*)(SkeletonPartsRendererDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONPARTSRENDERER_REMOVE_ONMESHANDMATERIALSUPDATED_OFFSET))(arg, nullptr);
		}

		::System::Void RenderParts(Il2CppObject* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONPARTSRENDERER_RENDERPARTS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ClearMesh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONPARTSRENDERER_CLEARMESH_OFFSET))(nullptr);
		}

		::Spine::Unity::MeshGenerator* get_MeshGenerator()
		{
			return (return (::Spine::Unity::MeshGenerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONPARTSRENDERER_GET_MESHGENERATOR_OFFSET))(nullptr);
		}

		::UnityEngine::MeshRenderer* get_MeshRenderer()
		{
			return (return (::UnityEngine::MeshRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONPARTSRENDERER_GET_MESHRENDERER_OFFSET))(nullptr);
		}

		::System::Void SetPropertyBlock(::UnityEngine::MaterialPropertyBlock* arg)
		{
			((::System::Void(*)(::UnityEngine::MaterialPropertyBlock*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONPARTSRENDERER_SETPROPERTYBLOCK_OFFSET))(arg, nullptr);
		}

		::Spine::Unity::SkeletonPartsRenderer* NewPartsRendererGameObject(::UnityEngine::Transform* arg, ::System::String* str, ::System::Int32 arg)
		{
			return (return (::Spine::Unity::SkeletonPartsRenderer*(*)(::UnityEngine::Transform*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONPARTSRENDERER_NEWPARTSRENDERERGAMEOBJECT_OFFSET))(arg, str, arg, nullptr);
		}

	};
}

