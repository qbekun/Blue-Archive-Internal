#pragma once
#include "../../unitysdk.h"

namespace Spine::Unity { class SkeletonDataAsset; }
namespace Spine::Unity { class UpdateMode; }
namespace UnityEngine { class SpriteMaskInteraction; }
namespace UnityEngine::Rendering { class CompareFunction; }
namespace Spine::Unity { class MeshGeneratorDelegate; }
namespace Spine::Unity { class SkeletonRendererInstruction; }
namespace Spine::Unity { class MeshGenerator; }
namespace Spine::Unity { class MeshRendererBuffers; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class MeshFilter; }
namespace Spine { class Skeleton; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace Spine { class SkeletonClipping; }
namespace UnityEngine { class GameObject; }

#define SPINE_UNITY_SKELETONRENDERER_GET_UPDATEMODE_OFFSET UNITYSDK_OFFSET(0x9608920)
#define SPINE_UNITY_SKELETONRENDERER_SET_UPDATEMODE_OFFSET UNITYSDK_OFFSET(0x9608930)
#define SPINE_UNITY_SKELETONRENDERER_ADD_GENERATEMESHOVERRIDE_OFFSET UNITYSDK_OFFSET(0x9608940)
#define SPINE_UNITY_SKELETONRENDERER_REMOVE_GENERATEMESHOVERRIDE_OFFSET UNITYSDK_OFFSET(0x96089E0)
#define SPINE_UNITY_SKELETONRENDERER_ADD_GENERATEMESHOVERRIDE_OFFSET UNITYSDK_OFFSET(0x9608A80)
#define SPINE_UNITY_SKELETONRENDERER_REMOVE_GENERATEMESHOVERRIDE_OFFSET UNITYSDK_OFFSET(0x9608BB0)
#define SPINE_UNITY_SKELETONRENDERER_ADD_ONPOSTPROCESSVERTICES_OFFSET UNITYSDK_OFFSET(0x9608CE0)
#define SPINE_UNITY_SKELETONRENDERER_REMOVE_ONPOSTPROCESSVERTICES_OFFSET UNITYSDK_OFFSET(0x9608D80)
#define SPINE_UNITY_SKELETONRENDERER_GET_CUSTOMMATERIALOVERRIDE_OFFSET UNITYSDK_OFFSET(0x9608E20)
#define SPINE_UNITY_SKELETONRENDERER_GET_CUSTOMSLOTMATERIALS_OFFSET UNITYSDK_OFFSET(0x9608E30)
#define SPINE_UNITY_SKELETONRENDERER_GET_SKELETONCLIPPING_OFFSET UNITYSDK_OFFSET(0x9608E40)
#define SPINE_UNITY_SKELETONRENDERER_GET_SKELETON_OFFSET UNITYSDK_OFFSET(0x9608E60)
#define SPINE_UNITY_SKELETONRENDERER_GET_PHYSICSPOSITIONINHERITANCEFACTOR_OFFSET UNITYSDK_OFFSET(0x9608E90)
#define SPINE_UNITY_SKELETONRENDERER_SET_PHYSICSPOSITIONINHERITANCEFACTOR_OFFSET UNITYSDK_OFFSET(0x9608EA0)
#define SPINE_UNITY_SKELETONRENDERER_GET_PHYSICSROTATIONINHERITANCEFACTOR_OFFSET UNITYSDK_OFFSET(0x9608FC0)
#define SPINE_UNITY_SKELETONRENDERER_SET_PHYSICSROTATIONINHERITANCEFACTOR_OFFSET UNITYSDK_OFFSET(0x9608FD0)
#define SPINE_UNITY_SKELETONRENDERER_GET_PHYSICSMOVEMENTRELATIVETO_OFFSET UNITYSDK_OFFSET(0x9609040)
#define SPINE_UNITY_SKELETONRENDERER_SET_PHYSICSMOVEMENTRELATIVETO_OFFSET UNITYSDK_OFFSET(0x9609050)
#define SPINE_UNITY_SKELETONRENDERER_RESETLASTPOSITION_OFFSET UNITYSDK_OFFSET(0x9608FA0)
#define SPINE_UNITY_SKELETONRENDERER_RESETLASTROTATION_OFFSET UNITYSDK_OFFSET(0x9609020)
#define SPINE_UNITY_SKELETONRENDERER_RESETLASTPOSITIONANDROTATION_OFFSET UNITYSDK_OFFSET(0x96094E0)
#define SPINE_UNITY_SKELETONRENDERER_ADD_ONREBUILD_OFFSET UNITYSDK_OFFSET(0x9609510)
#define SPINE_UNITY_SKELETONRENDERER_REMOVE_ONREBUILD_OFFSET UNITYSDK_OFFSET(0x96095B0)
#define SPINE_UNITY_SKELETONRENDERER_ADD_ONMESHANDMATERIALSUPDATED_OFFSET UNITYSDK_OFFSET(0x9609650)
#define SPINE_UNITY_SKELETONRENDERER_REMOVE_ONMESHANDMATERIALSUPDATED_OFFSET UNITYSDK_OFFSET(0x96096F0)
#define SPINE_UNITY_SKELETONRENDERER_GET_SKELETONDATAASSET_OFFSET UNITYSDK_OFFSET(0x9609790)
#define SPINE_UNITY_SKELETONRENDERER_NEWSPINEGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_UNITY_SKELETONRENDERER_ADDSPINECOMPONENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_UNITY_SKELETONRENDERER_SETMESHSETTINGS_OFFSET UNITYSDK_OFFSET(0x96097A0)
#define SPINE_UNITY_SKELETONRENDERER_AWAKE_OFFSET UNITYSDK_OFFSET(0x9609800)
#define SPINE_UNITY_SKELETONRENDERER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9609840)
#define SPINE_UNITY_SKELETONRENDERER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9609870)
#define SPINE_UNITY_SKELETONRENDERER_CLEARSTATE_OFFSET UNITYSDK_OFFSET(0x96098A0)
#define SPINE_UNITY_SKELETONRENDERER_ENSUREMESHGENERATORCAPACITY_OFFSET UNITYSDK_OFFSET(0x9609960)
#define SPINE_UNITY_SKELETONRENDERER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9604410)
#define SPINE_UNITY_SKELETONRENDERER_APPLYTRANSFORMMOVEMENTTOPHYSICS_OFFSET UNITYSDK_OFFSET(0x9609CF0)
#define SPINE_UNITY_SKELETONRENDERER_GETPHYSICSTRANSFORMPOSITION_OFFSET UNITYSDK_OFFSET(0x9609100)
#define SPINE_UNITY_SKELETONRENDERER_GETPHYSICSTRANSFORMROTATION_OFFSET UNITYSDK_OFFSET(0x9609260)
#define SPINE_UNITY_SKELETONRENDERER_UPDATEWORLDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x9609F10)
#define SPINE_UNITY_SKELETONRENDERER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x9606750)
#define SPINE_UNITY_SKELETONRENDERER_LATEUPDATEMESH_OFFSET UNITYSDK_OFFSET(0x9609F40)
#define SPINE_UNITY_SKELETONRENDERER_ONBECAMEVISIBLE_OFFSET UNITYSDK_OFFSET(0x960F500)
#define SPINE_UNITY_SKELETONRENDERER_ONBECAMEINVISIBLE_OFFSET UNITYSDK_OFFSET(0x960F530)
#define SPINE_UNITY_SKELETONRENDERER_FINDANDAPPLYSEPARATORSLOTS_OFFSET UNITYSDK_OFFSET(0x960F540)
#define SPINE_UNITY_SKELETONRENDERER_FINDANDAPPLYSEPARATORSLOTS_OFFSET UNITYSDK_OFFSET(0x960F630)
#define SPINE_UNITY_SKELETONRENDERER_REAPPLYSEPARATORSLOTNAMES_OFFSET UNITYSDK_OFFSET(0x960FC20)
#define SPINE_UNITY_SKELETONRENDERER_ASSIGNSPRITEMASKMATERIALS_OFFSET UNITYSDK_OFFSET(0x960EE10)
#define SPINE_UNITY_SKELETONRENDERER_INITSPRITEMASKMATERIALSINSIDEMASK_OFFSET UNITYSDK_OFFSET(0x960FD60)
#define SPINE_UNITY_SKELETONRENDERER_INITSPRITEMASKMATERIALSOUTSIDEMASK_OFFSET UNITYSDK_OFFSET(0x960FD90)
#define SPINE_UNITY_SKELETONRENDERER_INITSPRITEMASKMATERIALSFORMASKTYPE_OFFSET UNITYSDK_OFFSET(0x960FDC0)
#define SPINE_UNITY_SKELETONRENDERER_HANDLEONDEMANDLOADING_OFFSET UNITYSDK_OFFSET(0x960F070)
#define SPINE_UNITY_SKELETONRENDERER_SETMATERIALSETTINGSTOFIXDRAWORDER_OFFSET UNITYSDK_OFFSET(0x960F2B0)
#define SPINE_UNITY_SKELETONRENDERER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9606840)
#define SPINE_UNITY_SKELETONRENDERER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9610270)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonRenderer_TypeDefinitionIndex = 35320;

	class SkeletonRenderer : public Il2CppObject
	{
	public:
		::Spine::Unity::SkeletonDataAsset* skeletonDataAsset; // 0x18
		::System::String* initialSkinName; // 0x20
		::System::Boolean initialFlipX; // 0x28
		::System::Boolean initialFlipY; // 0x29
		::Spine::Unity::UpdateMode* updateMode; // 0x2C
		::Spine::Unity::UpdateMode* updateWhenInvisible; // 0x30
		::Il2CppArray<::System::Object*>* separatorSlotNames; // 0x38
		Il2CppObject* separatorSlots; // 0x40
		::System::Single zSpacing; // 0x48
		::System::Boolean useClipping; // 0x4C
		::System::Boolean immutableTriangles; // 0x4D
		::System::Boolean pmaVertexColors; // 0x4E
		::System::Boolean clearStateOnDisable; // 0x4F
		::System::Boolean tintBlack; // 0x50
		::System::Boolean singleSubmesh; // 0x51
		::System::Boolean fixDrawOrder; // 0x52
		::System::Boolean addNormals; // 0x53
		::System::Boolean calculateTangents; // 0x54
		::UnityEngine::SpriteMaskInteraction* maskInteraction; // 0x58
		SpriteMaskInteractionMaterials* maskMaterials; // 0x60
		::System::Int32 STENCIL_COMP_PARAM_ID; // 0x0
		::UnityEngine::Rendering::CompareFunction* STENCIL_COMP_MASKINTERACTION_NONE; // 0x0
		::UnityEngine::Rendering::CompareFunction* STENCIL_COMP_MASKINTERACTION_VISIBLE_INSIDE; // 0x0
		::UnityEngine::Rendering::CompareFunction* STENCIL_COMP_MASKINTERACTION_VISIBLE_OUTSIDE; // 0x0
		::System::Boolean disableRenderingOnOverride; // 0x68
		InstructionDelegate* generateMeshOverride; // 0x70
		::Spine::Unity::MeshGeneratorDelegate* OnPostProcessVertices; // 0x78
		Il2CppObject* customMaterialOverride; // 0x80
		Il2CppObject* customSlotMaterials; // 0x88
		::Spine::Unity::SkeletonRendererInstruction* currentInstructions; // 0x90
		::Spine::Unity::MeshGenerator* meshGenerator; // 0x98
		::Spine::Unity::MeshRendererBuffers* rendererBuffers; // 0xA0
		::UnityEngine::MeshRenderer* meshRenderer; // 0xA8
		::UnityEngine::MeshFilter* meshFilter; // 0xB0
		::System::Boolean valid; // 0xB8
		::Spine::Skeleton* skeleton; // 0xC0
		::UnityEngine::Vector2* physicsPositionInheritanceFactor; // 0xC8
		::System::Single physicsRotationInheritanceFactor; // 0xD0
		::UnityEngine::Transform* physicsMovementRelativeTo; // 0xD8
		::UnityEngine::Vector2* lastPosition; // 0xE0
		::System::Single lastRotation; // 0xE8
		SkeletonRendererDelegate* OnRebuild; // 0xF0
		SkeletonRendererDelegate* OnMeshAndMaterialsUpdated; // 0xF8
		::UnityEngine::MaterialPropertyBlock* reusedPropertyBlock; // 0x100
		::System::Int32 SUBMESH_DUMMY_PARAM_ID; // 0x4

		::Spine::Unity::UpdateMode* get_UpdateMode()
		{
			return (return (::Spine::Unity::UpdateMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_UPDATEMODE_OFFSET))(nullptr);
		}

		::System::Void set_UpdateMode(::Spine::Unity::UpdateMode* arg)
		{
			((::System::Void(*)(::Spine::Unity::UpdateMode*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_SET_UPDATEMODE_OFFSET))(arg, nullptr);
		}

		::System::Void add_generateMeshOverride(InstructionDelegate* arg)
		{
			((::System::Void(*)(InstructionDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_ADD_GENERATEMESHOVERRIDE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_generateMeshOverride(InstructionDelegate* arg)
		{
			((::System::Void(*)(InstructionDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_REMOVE_GENERATEMESHOVERRIDE_OFFSET))(arg, nullptr);
		}

		::System::Void add_GenerateMeshOverride(InstructionDelegate* arg)
		{
			((::System::Void(*)(InstructionDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_ADD_GENERATEMESHOVERRIDE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_GenerateMeshOverride(InstructionDelegate* arg)
		{
			((::System::Void(*)(InstructionDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_REMOVE_GENERATEMESHOVERRIDE_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnPostProcessVertices(::Spine::Unity::MeshGeneratorDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::MeshGeneratorDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_ADD_ONPOSTPROCESSVERTICES_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnPostProcessVertices(::Spine::Unity::MeshGeneratorDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::MeshGeneratorDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_REMOVE_ONPOSTPROCESSVERTICES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_CustomMaterialOverride()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_CUSTOMMATERIALOVERRIDE_OFFSET))(nullptr);
		}

		Il2CppObject* get_CustomSlotMaterials()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_CUSTOMSLOTMATERIALS_OFFSET))(nullptr);
		}

		::Spine::SkeletonClipping* get_SkeletonClipping()
		{
			return (return (::Spine::SkeletonClipping*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_SKELETONCLIPPING_OFFSET))(nullptr);
		}

		::Spine::Skeleton* get_Skeleton()
		{
			return (return (::Spine::Skeleton*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_SKELETON_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_PhysicsPositionInheritanceFactor()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_PHYSICSPOSITIONINHERITANCEFACTOR_OFFSET))(nullptr);
		}

		::System::Void set_PhysicsPositionInheritanceFactor(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_SET_PHYSICSPOSITIONINHERITANCEFACTOR_OFFSET))(arg, nullptr);
		}

		::System::Single get_PhysicsRotationInheritanceFactor()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_PHYSICSROTATIONINHERITANCEFACTOR_OFFSET))(nullptr);
		}

		::System::Void set_PhysicsRotationInheritanceFactor(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_SET_PHYSICSROTATIONINHERITANCEFACTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Transform* get_PhysicsMovementRelativeTo()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_PHYSICSMOVEMENTRELATIVETO_OFFSET))(nullptr);
		}

		::System::Void set_PhysicsMovementRelativeTo(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_SET_PHYSICSMOVEMENTRELATIVETO_OFFSET))(arg, nullptr);
		}

		::System::Void ResetLastPosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_RESETLASTPOSITION_OFFSET))(nullptr);
		}

		::System::Void ResetLastRotation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_RESETLASTROTATION_OFFSET))(nullptr);
		}

		::System::Void ResetLastPositionAndRotation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_RESETLASTPOSITIONANDROTATION_OFFSET))(nullptr);
		}

		::System::Void add_OnRebuild(SkeletonRendererDelegate* arg)
		{
			((::System::Void(*)(SkeletonRendererDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_ADD_ONREBUILD_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnRebuild(SkeletonRendererDelegate* arg)
		{
			((::System::Void(*)(SkeletonRendererDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_REMOVE_ONREBUILD_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnMeshAndMaterialsUpdated(SkeletonRendererDelegate* arg)
		{
			((::System::Void(*)(SkeletonRendererDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_ADD_ONMESHANDMATERIALSUPDATED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnMeshAndMaterialsUpdated(SkeletonRendererDelegate* arg)
		{
			((::System::Void(*)(SkeletonRendererDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_REMOVE_ONMESHANDMATERIALSUPDATED_OFFSET))(arg, nullptr);
		}

		::Spine::Unity::SkeletonDataAsset* get_SkeletonDataAsset()
		{
			return (return (::Spine::Unity::SkeletonDataAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_SKELETONDATAASSET_OFFSET))(nullptr);
		}

		Il2CppObject* NewSpineGameObject(::Spine::Unity::SkeletonDataAsset* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::Spine::Unity::SkeletonDataAsset*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_NEWSPINEGAMEOBJECT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* AddSpineComponent(::UnityEngine::GameObject* arg, ::Spine::Unity::SkeletonDataAsset* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::GameObject*, ::Spine::Unity::SkeletonDataAsset*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_ADDSPINECOMPONENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetMeshSettings(Settings* arg)
		{
			((::System::Void(*)(Settings*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_SETMESHSETTINGS_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void ClearState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_CLEARSTATE_OFFSET))(nullptr);
		}

		::System::Void EnsureMeshGeneratorCapacity(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_ENSUREMESHGENERATORCAPACITY_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_INITIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ApplyTransformMovementToPhysics()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_APPLYTRANSFORMMOVEMENTTOPHYSICS_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* GetPhysicsTransformPosition()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GETPHYSICSTRANSFORMPOSITION_OFFSET))(nullptr);
		}

		::System::Single GetPhysicsTransformRotation()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GETPHYSICSTRANSFORMROTATION_OFFSET))(nullptr);
		}

		::System::Void UpdateWorldTransform(Physics* arg)
		{
			((::System::Void(*)(Physics*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_UPDATEWORLDTRANSFORM_OFFSET))(arg, nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void LateUpdateMesh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_LATEUPDATEMESH_OFFSET))(nullptr);
		}

		::System::Void OnBecameVisible()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_ONBECAMEVISIBLE_OFFSET))(nullptr);
		}

		::System::Void OnBecameInvisible()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_ONBECAMEINVISIBLE_OFFSET))(nullptr);
		}

		::System::Void FindAndApplySeparatorSlots(::System::String* str, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_FINDANDAPPLYSEPARATORSLOTS_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void FindAndApplySeparatorSlots(Il2CppObject* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_FINDANDAPPLYSEPARATORSLOTS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ReapplySeparatorSlotNames()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_REAPPLYSEPARATORSLOTNAMES_OFFSET))(nullptr);
		}

		::System::Void AssignSpriteMaskMaterials()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_ASSIGNSPRITEMASKMATERIALS_OFFSET))(nullptr);
		}

		::System::Boolean InitSpriteMaskMaterialsInsideMask()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_INITSPRITEMASKMATERIALSINSIDEMASK_OFFSET))(nullptr);
		}

		::System::Boolean InitSpriteMaskMaterialsOutsideMask()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_INITSPRITEMASKMATERIALSOUTSIDEMASK_OFFSET))(nullptr);
		}

		::System::Boolean InitSpriteMaskMaterialsForMaskType(::UnityEngine::Rendering::CompareFunction* arg, ::System::Object[]&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::CompareFunction*, ::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_INITSPRITEMASKMATERIALSFORMASKTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void HandleOnDemandLoading()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_HANDLEONDEMANDLOADING_OFFSET))(nullptr);
		}

		::System::Void SetMaterialSettingsToFixDrawOrder()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_SETMATERIALSETTINGSTOFIXDRAWORDER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

