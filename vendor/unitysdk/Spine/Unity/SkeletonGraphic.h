#pragma once
#include "../../unitysdk.h"

namespace Spine::Unity { class SkeletonDataAsset; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Color; }
namespace UnityEngine { class Vector2; }
namespace Spine::Unity { class UpdateMode; }
namespace UnityEngine { class Texture; }
namespace Spine { class Skeleton; }
namespace Spine { class AnimationState; }
namespace UnityEngine { class Transform; }
namespace Spine::Unity { class MeshGenerator; }
namespace Spine::Unity { class SkeletonRendererInstruction; }
namespace Spine::Unity { class ISkeletonAnimationDelegate; }
namespace Spine::Unity { class UpdateBonesDelegate; }
namespace Spine::Unity { class UpdateTiming; }
namespace Spine::Unity { class MeshGeneratorDelegate; }
namespace Spine::Unity { class SkeletonGraphic; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class CanvasUpdate; }
namespace Spine { class SkeletonData; }
namespace Spine { class SkeletonClipping; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Bounds; }
namespace UnityEngine::UI { class Graphic; }
namespace UnityEngine { class RectTransform; }

#define SPINE_UNITY_SKELETONGRAPHIC_GET_SKELETONDATAASSET_OFFSET UNITYSDK_OFFSET(0x95FBA00)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_COLOR_OFFSET UNITYSDK_OFFSET(0x95FBA10)
#define SPINE_UNITY_SKELETONGRAPHIC_SET_COLOR_OFFSET UNITYSDK_OFFSET(0x95FBA20)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_MESHSCALE_OFFSET UNITYSDK_OFFSET(0x95FBA30)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_MESHOFFSET_OFFSET UNITYSDK_OFFSET(0x95FBA40)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_UPDATEMODE_OFFSET UNITYSDK_OFFSET(0x95FBA50)
#define SPINE_UNITY_SKELETONGRAPHIC_SET_UPDATEMODE_OFFSET UNITYSDK_OFFSET(0x95FBA60)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_SEPARATORPARTS_OFFSET UNITYSDK_OFFSET(0x95FBA70)
#define SPINE_UNITY_SKELETONGRAPHIC_NEWSKELETONGRAPHICGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x95FBA80)
#define SPINE_UNITY_SKELETONGRAPHIC_ADDSKELETONGRAPHICCOMPONENT_OFFSET UNITYSDK_OFFSET(0x95FBB60)
#define SPINE_UNITY_SKELETONGRAPHIC_ADD_ASSIGNMESHOVERRIDESINGLE_OFFSET UNITYSDK_OFFSET(0x95FBC90)
#define SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ASSIGNMESHOVERRIDESINGLE_OFFSET UNITYSDK_OFFSET(0x95FBD30)
#define SPINE_UNITY_SKELETONGRAPHIC_ADD_ASSIGNMESHOVERRIDEMULTIPLE_OFFSET UNITYSDK_OFFSET(0x95FBDD0)
#define SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ASSIGNMESHOVERRIDEMULTIPLE_OFFSET UNITYSDK_OFFSET(0x95FBE70)
#define SPINE_UNITY_SKELETONGRAPHIC_ADD_ASSIGNMESHOVERRIDESINGLERENDERER_OFFSET UNITYSDK_OFFSET(0x95FBF10)
#define SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ASSIGNMESHOVERRIDESINGLERENDERER_OFFSET UNITYSDK_OFFSET(0x95FBFD0)
#define SPINE_UNITY_SKELETONGRAPHIC_ADD_ASSIGNMESHOVERRIDEMULTIPLERENDERERS_OFFSET UNITYSDK_OFFSET(0x95FC090)
#define SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ASSIGNMESHOVERRIDEMULTIPLERENDERERS_OFFSET UNITYSDK_OFFSET(0x95FC150)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_CUSTOMTEXTUREOVERRIDE_OFFSET UNITYSDK_OFFSET(0x95FC210)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_CUSTOMMATERIALOVERRIDE_OFFSET UNITYSDK_OFFSET(0x95FC220)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_OVERRIDETEXTURE_OFFSET UNITYSDK_OFFSET(0x95FC230)
#define SPINE_UNITY_SKELETONGRAPHIC_SET_OVERRIDETEXTURE_OFFSET UNITYSDK_OFFSET(0x95FC240)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x95FC2A0)
#define SPINE_UNITY_SKELETONGRAPHIC_AWAKE_OFFSET UNITYSDK_OFFSET(0x95FC310)
#define SPINE_UNITY_SKELETONGRAPHIC_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x95FC710)
#define SPINE_UNITY_SKELETONGRAPHIC_REBUILD_OFFSET UNITYSDK_OFFSET(0x95FC840)
#define SPINE_UNITY_SKELETONGRAPHIC_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x95FCB80)
#define SPINE_UNITY_SKELETONGRAPHIC_UPDATE_OFFSET UNITYSDK_OFFSET(0x95FCCF0)
#define SPINE_UNITY_SKELETONGRAPHIC_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x95FCD60)
#define SPINE_UNITY_SKELETONGRAPHIC_UPDATE_OFFSET UNITYSDK_OFFSET(0x95FCDD0)
#define SPINE_UNITY_SKELETONGRAPHIC_SYNCSUBMESHGRAPHICSWITHCANVASRENDERERS_OFFSET UNITYSDK_OFFSET(0x95FC400)
#define SPINE_UNITY_SKELETONGRAPHIC_UPDATEANIMATIONSTATUS_OFFSET UNITYSDK_OFFSET(0x95FCE30)
#define SPINE_UNITY_SKELETONGRAPHIC_APPLYTRANSFORMMOVEMENTTOPHYSICS_OFFSET UNITYSDK_OFFSET(0x95FCED0)
#define SPINE_UNITY_SKELETONGRAPHIC_GETPHYSICSTRANSFORMPOSITION_OFFSET UNITYSDK_OFFSET(0x95FD120)
#define SPINE_UNITY_SKELETONGRAPHIC_GETPHYSICSTRANSFORMROTATION_OFFSET UNITYSDK_OFFSET(0x95FD280)
#define SPINE_UNITY_SKELETONGRAPHIC_APPLYANIMATION_OFFSET UNITYSDK_OFFSET(0x95FD500)
#define SPINE_UNITY_SKELETONGRAPHIC_AFTERANIMATIONAPPLIED_OFFSET UNITYSDK_OFFSET(0x95FD580)
#define SPINE_UNITY_SKELETONGRAPHIC_UPDATEWORLDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x95FD630)
#define SPINE_UNITY_SKELETONGRAPHIC_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x95FD660)
#define SPINE_UNITY_SKELETONGRAPHIC_ONCULLSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x95FD740)
#define SPINE_UNITY_SKELETONGRAPHIC_ONBECAMEVISIBLE_OFFSET UNITYSDK_OFFSET(0x95FD770)
#define SPINE_UNITY_SKELETONGRAPHIC_ONBECAMEINVISIBLE_OFFSET UNITYSDK_OFFSET(0x95FD760)
#define SPINE_UNITY_SKELETONGRAPHIC_REAPPLYSEPARATORSLOTNAMES_OFFSET UNITYSDK_OFFSET(0x95FD780)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_SKELETON_OFFSET UNITYSDK_OFFSET(0x95EFB90)
#define SPINE_UNITY_SKELETONGRAPHIC_SET_SKELETON_OFFSET UNITYSDK_OFFSET(0x95FDB60)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_SKELETONDATA_OFFSET UNITYSDK_OFFSET(0x95FDB80)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x95EFB80)
#define SPINE_UNITY_SKELETONGRAPHIC_ADD_ONREBUILD_OFFSET UNITYSDK_OFFSET(0x95F3480)
#define SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ONREBUILD_OFFSET UNITYSDK_OFFSET(0x95F33E0)
#define SPINE_UNITY_SKELETONGRAPHIC_ADD_ONINSTRUCTIONSPREPARED_OFFSET UNITYSDK_OFFSET(0x95FDBB0)
#define SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ONINSTRUCTIONSPREPARED_OFFSET UNITYSDK_OFFSET(0x95FDC50)
#define SPINE_UNITY_SKELETONGRAPHIC_ADD_ONMESHANDMATERIALSUPDATED_OFFSET UNITYSDK_OFFSET(0x95FDCF0)
#define SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ONMESHANDMATERIALSUPDATED_OFFSET UNITYSDK_OFFSET(0x95FDD90)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_ANIMATIONSTATE_OFFSET UNITYSDK_OFFSET(0x95FDE30)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_PHYSICSPOSITIONINHERITANCEFACTOR_OFFSET UNITYSDK_OFFSET(0x95FDE50)
#define SPINE_UNITY_SKELETONGRAPHIC_SET_PHYSICSPOSITIONINHERITANCEFACTOR_OFFSET UNITYSDK_OFFSET(0x95FDE60)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_PHYSICSROTATIONINHERITANCEFACTOR_OFFSET UNITYSDK_OFFSET(0x95FDF80)
#define SPINE_UNITY_SKELETONGRAPHIC_SET_PHYSICSROTATIONINHERITANCEFACTOR_OFFSET UNITYSDK_OFFSET(0x95FDF90)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_PHYSICSMOVEMENTRELATIVETO_OFFSET UNITYSDK_OFFSET(0x95FE000)
#define SPINE_UNITY_SKELETONGRAPHIC_SET_PHYSICSMOVEMENTRELATIVETO_OFFSET UNITYSDK_OFFSET(0x95FE010)
#define SPINE_UNITY_SKELETONGRAPHIC_RESETLASTPOSITION_OFFSET UNITYSDK_OFFSET(0x95FDF60)
#define SPINE_UNITY_SKELETONGRAPHIC_RESETLASTROTATION_OFFSET UNITYSDK_OFFSET(0x95FDFE0)
#define SPINE_UNITY_SKELETONGRAPHIC_RESETLASTPOSITIONANDROTATION_OFFSET UNITYSDK_OFFSET(0x95FE0C0)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_MESHGENERATOR_OFFSET UNITYSDK_OFFSET(0x95FE0F0)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_SKELETONCLIPPING_OFFSET UNITYSDK_OFFSET(0x95FE100)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_MESHESMULTIPLECANVASRENDERERS_OFFSET UNITYSDK_OFFSET(0x95FE120)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_MATERIALSMULTIPLECANVASRENDERERS_OFFSET UNITYSDK_OFFSET(0x95FE130)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_TEXTURESMULTIPLECANVASRENDERERS_OFFSET UNITYSDK_OFFSET(0x95FE140)
#define SPINE_UNITY_SKELETONGRAPHIC_GETLASTMESH_OFFSET UNITYSDK_OFFSET(0x95FE150)
#define SPINE_UNITY_SKELETONGRAPHIC_MATCHRECTTRANSFORMWITHBOUNDS_OFFSET UNITYSDK_OFFSET(0x95FE1B0)
#define SPINE_UNITY_SKELETONGRAPHIC_MATCHRECTTRANSFORMSINGLERENDERER_OFFSET UNITYSDK_OFFSET(0x95FE210)
#define SPINE_UNITY_SKELETONGRAPHIC_MATCHRECTTRANSFORMMULTIPLERENDERERS_OFFSET UNITYSDK_OFFSET(0x95FE460)
#define SPINE_UNITY_SKELETONGRAPHIC_SETRECTTRANSFORMBOUNDS_OFFSET UNITYSDK_OFFSET(0x95FE790)
#define SPINE_UNITY_SKELETONGRAPHIC_SETRECTTRANSFORMSIZE_OFFSET UNITYSDK_OFFSET(0x95FED00)
#define SPINE_UNITY_SKELETONGRAPHIC_SETRECTTRANSFORMSIZE_OFFSET UNITYSDK_OFFSET(0x95FED30)
#define SPINE_UNITY_SKELETONGRAPHIC_ADD_ONANIMATIONREBUILD_OFFSET UNITYSDK_OFFSET(0x95FEF00)
#define SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ONANIMATIONREBUILD_OFFSET UNITYSDK_OFFSET(0x95FEFA0)
#define SPINE_UNITY_SKELETONGRAPHIC_ADD_BEFOREAPPLY_OFFSET UNITYSDK_OFFSET(0x95FF040)
#define SPINE_UNITY_SKELETONGRAPHIC_REMOVE_BEFOREAPPLY_OFFSET UNITYSDK_OFFSET(0x95FF0E0)
#define SPINE_UNITY_SKELETONGRAPHIC_ADD_UPDATELOCAL_OFFSET UNITYSDK_OFFSET(0x95FF180)
#define SPINE_UNITY_SKELETONGRAPHIC_REMOVE_UPDATELOCAL_OFFSET UNITYSDK_OFFSET(0x95FF220)
#define SPINE_UNITY_SKELETONGRAPHIC_ADD_UPDATEWORLD_OFFSET UNITYSDK_OFFSET(0x95FF2C0)
#define SPINE_UNITY_SKELETONGRAPHIC_REMOVE_UPDATEWORLD_OFFSET UNITYSDK_OFFSET(0x95FF360)
#define SPINE_UNITY_SKELETONGRAPHIC_ADD_UPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x95FF400)
#define SPINE_UNITY_SKELETONGRAPHIC_REMOVE_UPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x95FF4A0)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_UPDATETIMING_OFFSET UNITYSDK_OFFSET(0x95FF540)
#define SPINE_UNITY_SKELETONGRAPHIC_SET_UPDATETIMING_OFFSET UNITYSDK_OFFSET(0x95FF550)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_UNSCALEDTIME_OFFSET UNITYSDK_OFFSET(0x95FF560)
#define SPINE_UNITY_SKELETONGRAPHIC_SET_UNSCALEDTIME_OFFSET UNITYSDK_OFFSET(0x95FF570)
#define SPINE_UNITY_SKELETONGRAPHIC_ADD_ONPOSTPROCESSVERTICES_OFFSET UNITYSDK_OFFSET(0x95FF580)
#define SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ONPOSTPROCESSVERTICES_OFFSET UNITYSDK_OFFSET(0x95FF620)
#define SPINE_UNITY_SKELETONGRAPHIC_CLEAR_OFFSET UNITYSDK_OFFSET(0x95FC730)
#define SPINE_UNITY_SKELETONGRAPHIC_TRIMRENDERERS_OFFSET UNITYSDK_OFFSET(0x95FF930)
#define SPINE_UNITY_SKELETONGRAPHIC_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x95F2250)
#define SPINE_UNITY_SKELETONGRAPHIC_PREPAREINSTRUCTIONSANDRENDERERS_OFFSET UNITYSDK_OFFSET(0x95FC8D0)
#define SPINE_UNITY_SKELETONGRAPHIC_UPDATEMESH_OFFSET UNITYSDK_OFFSET(0x95FD720)
#define SPINE_UNITY_SKELETONGRAPHIC_UPDATEMESHTOINSTRUCTIONS_OFFSET UNITYSDK_OFFSET(0x95FCAB0)
#define SPINE_UNITY_SKELETONGRAPHIC_HASMULTIPLESUBMESHINSTRUCTIONS_OFFSET UNITYSDK_OFFSET(0x9602640)
#define SPINE_UNITY_SKELETONGRAPHIC_INITMESHBUFFERS_OFFSET UNITYSDK_OFFSET(0x95FFC60)
#define SPINE_UNITY_SKELETONGRAPHIC_DISPOSEMESHBUFFERS_OFFSET UNITYSDK_OFFSET(0x95FF890)
#define SPINE_UNITY_SKELETONGRAPHIC_UPDATEMESHSINGLECANVASRENDERER_OFFSET UNITYSDK_OFFSET(0x96011A0)
#define SPINE_UNITY_SKELETONGRAPHIC_UPDATEMATERIALSMULTIPLECANVASRENDERERS_OFFSET UNITYSDK_OFFSET(0x9601760)
#define SPINE_UNITY_SKELETONGRAPHIC_UPDATEMESHMULTIPLECANVASRENDERERS_OFFSET UNITYSDK_OFFSET(0x9601E40)
#define SPINE_UNITY_SKELETONGRAPHIC_HANDLEONDEMANDLOADING_OFFSET UNITYSDK_OFFSET(0x96027A0)
#define SPINE_UNITY_SKELETONGRAPHIC_ENSURECANVASRENDERERCOUNT_OFFSET UNITYSDK_OFFSET(0x95FFE50)
#define SPINE_UNITY_SKELETONGRAPHIC_PREPARERENDERERGAMEOBJECTS_OFFSET UNITYSDK_OFFSET(0x96008A0)
#define SPINE_UNITY_SKELETONGRAPHIC_DISABLEUNUSEDCANVASRENDERERS_OFFSET UNITYSDK_OFFSET(0x95FFD40)
#define SPINE_UNITY_SKELETONGRAPHIC_ENSUREMESHESCOUNT_OFFSET UNITYSDK_OFFSET(0x9600320)
#define SPINE_UNITY_SKELETONGRAPHIC_ENSUREUSEDTEXTURESANDMATERIALSCOUNT_OFFSET UNITYSDK_OFFSET(0x96003C0)
#define SPINE_UNITY_SKELETONGRAPHIC_DESTROYMESHES_OFFSET UNITYSDK_OFFSET(0x95FF6C0)
#define SPINE_UNITY_SKELETONGRAPHIC_ENSURESEPARATORPARTCOUNT_OFFSET UNITYSDK_OFFSET(0x96004A0)
#define SPINE_UNITY_SKELETONGRAPHIC_UPDATESEPARATORPARTPARENTS_OFFSET UNITYSDK_OFFSET(0x95FD920)
#define SPINE_UNITY_SKELETONGRAPHIC_GETLAYOUTSCALE_OFFSET UNITYSDK_OFFSET(0x96026A0)
#define SPINE_UNITY_SKELETONGRAPHIC_GETEFFECTIVELAYOUTMODE_OFFSET UNITYSDK_OFFSET(0x9602AF0)
#define SPINE_UNITY_SKELETONGRAPHIC_GETCURRENTRECTSIZE_OFFSET UNITYSDK_OFFSET(0x9602AA0)
#define SPINE_UNITY_SKELETONGRAPHIC_.CTOR_OFFSET UNITYSDK_OFFSET(0x9602B80)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonGraphic_TypeDefinitionIndex = 35308;

	class SkeletonGraphic : public Il2CppObject
	{
	public:
		::Spine::Unity::SkeletonDataAsset* skeletonDataAsset; // 0xD8
		::UnityEngine::Material* additiveMaterial; // 0xE0
		::UnityEngine::Material* multiplyMaterial; // 0xE8
		::UnityEngine::Material* screenMaterial; // 0xF0
		::UnityEngine::Color* m_SkeletonColor; // 0xF8
		::System::String* initialSkinName; // 0x108
		::System::Boolean initialFlipX; // 0x110
		::System::Boolean initialFlipY; // 0x111
		::System::String* startingAnimation; // 0x118
		::System::Boolean startingLoop; // 0x120
		::System::Single timeScale; // 0x124
		::System::Boolean freeze; // 0x128
		::System::Single meshScale; // 0x12C
		::UnityEngine::Vector2* meshOffset; // 0x130
		LayoutMode* layoutScaleMode; // 0x138
		::UnityEngine::Vector2* referenceSize; // 0x13C
		::UnityEngine::Vector2* pivotOffset; // 0x144
		::System::Single referenceScale; // 0x14C
		::System::Single layoutScale; // 0x150
		::System::Boolean EditReferenceRect; // 0x0
		::Spine::Unity::UpdateMode* updateMode; // 0x154
		::Spine::Unity::UpdateMode* updateWhenInvisible; // 0x158
		::System::Boolean allowMultipleCanvasRenderers; // 0x15C
		Il2CppObject* canvasRenderers; // 0x160
		Il2CppObject* submeshGraphics; // 0x168
		::System::Int32 usedRenderersCount; // 0x170
		::System::String* SeparatorPartGameObjectName; // 0x0
		::Il2CppArray<::System::Object*>* separatorSlotNames; // 0x178
		Il2CppObject* separatorSlots; // 0x180
		::System::Boolean enableSeparatorSlots; // 0x188
		Il2CppObject* separatorParts; // 0x190
		::System::Boolean updateSeparatorPartLocation; // 0x198
		::System::Boolean updateSeparatorPartScale; // 0x199
		::System::Boolean wasUpdatedAfterInit; // 0x19A
		::UnityEngine::Texture* baseTexture; // 0x1A0
		::System::Boolean disableMeshAssignmentOnOverride; // 0x1A8
		MeshAssignmentDelegateSingle* assignMeshOverrideSingle; // 0x1B0
		MeshAssignmentDelegateMultiple* assignMeshOverrideMultiple; // 0x1B8
		Il2CppObject* customTextureOverride; // 0x1C0
		Il2CppObject* customMaterialOverride; // 0x1C8
		::UnityEngine::Texture* overrideTexture; // 0x1D0
		::Spine::Skeleton* skeleton; // 0x1D8
		SkeletonRendererDelegate* OnRebuild; // 0x1E0
		InstructionDelegate* OnInstructionsPrepared; // 0x1E8
		SkeletonRendererDelegate* OnMeshAndMaterialsUpdated; // 0x1F0
		::Spine::AnimationState* state; // 0x1F8
		::UnityEngine::Vector2* physicsPositionInheritanceFactor; // 0x200
		::System::Single physicsRotationInheritanceFactor; // 0x208
		::UnityEngine::Transform* physicsMovementRelativeTo; // 0x210
		::UnityEngine::Vector2* lastPosition; // 0x218
		::System::Single lastRotation; // 0x220
		::Spine::Unity::MeshGenerator* meshGenerator; // 0x228
		Il2CppObject* meshBuffers; // 0x230
		::Spine::Unity::SkeletonRendererInstruction* currentInstructions; // 0x238
		Il2CppObject* meshes; // 0x240
		Il2CppObject* usedMaterials; // 0x248
		Il2CppObject* usedTextures; // 0x250
		::Spine::Unity::ISkeletonAnimationDelegate* OnAnimationRebuild; // 0x258
		::Spine::Unity::UpdateBonesDelegate* BeforeApply; // 0x260
		::Spine::Unity::UpdateBonesDelegate* UpdateLocal; // 0x268
		::Spine::Unity::UpdateBonesDelegate* UpdateWorld; // 0x270
		::Spine::Unity::UpdateBonesDelegate* UpdateComplete; // 0x278
		::Spine::Unity::UpdateTiming* updateTiming; // 0x280
		::System::Boolean unscaledTime; // 0x284
		::Spine::Unity::MeshGeneratorDelegate* OnPostProcessVertices; // 0x288

		::Spine::Unity::SkeletonDataAsset* get_SkeletonDataAsset()
		{
			return (return (::Spine::Unity::SkeletonDataAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_SKELETONDATAASSET_OFFSET))(nullptr);
		}

		::UnityEngine::Color* get_color()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_COLOR_OFFSET))(nullptr);
		}

		::System::Void set_color(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_SET_COLOR_OFFSET))(arg, nullptr);
		}

		::System::Single get_MeshScale()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_MESHSCALE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_MeshOffset()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_MESHOFFSET_OFFSET))(nullptr);
		}

		::Spine::Unity::UpdateMode* get_UpdateMode()
		{
			return (return (::Spine::Unity::UpdateMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_UPDATEMODE_OFFSET))(nullptr);
		}

		::System::Void set_UpdateMode(::Spine::Unity::UpdateMode* arg)
		{
			((::System::Void(*)(::Spine::Unity::UpdateMode*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_SET_UPDATEMODE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_SeparatorParts()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_SEPARATORPARTS_OFFSET))(nullptr);
		}

		::Spine::Unity::SkeletonGraphic* NewSkeletonGraphicGameObject(::Spine::Unity::SkeletonDataAsset* arg, ::UnityEngine::Transform* arg, ::UnityEngine::Material* arg)
		{
			return (return (::Spine::Unity::SkeletonGraphic*(*)(::Spine::Unity::SkeletonDataAsset*, ::UnityEngine::Transform*, ::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_NEWSKELETONGRAPHICGAMEOBJECT_OFFSET))(arg, arg, arg, nullptr);
		}

		::Spine::Unity::SkeletonGraphic* AddSkeletonGraphicComponent(::UnityEngine::GameObject* arg, ::Spine::Unity::SkeletonDataAsset* arg, ::UnityEngine::Material* arg)
		{
			return (return (::Spine::Unity::SkeletonGraphic*(*)(::UnityEngine::GameObject*, ::Spine::Unity::SkeletonDataAsset*, ::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ADDSKELETONGRAPHICCOMPONENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void add_assignMeshOverrideSingle(MeshAssignmentDelegateSingle* arg)
		{
			((::System::Void(*)(MeshAssignmentDelegateSingle*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ADD_ASSIGNMESHOVERRIDESINGLE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_assignMeshOverrideSingle(MeshAssignmentDelegateSingle* arg)
		{
			((::System::Void(*)(MeshAssignmentDelegateSingle*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ASSIGNMESHOVERRIDESINGLE_OFFSET))(arg, nullptr);
		}

		::System::Void add_assignMeshOverrideMultiple(MeshAssignmentDelegateMultiple* arg)
		{
			((::System::Void(*)(MeshAssignmentDelegateMultiple*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ADD_ASSIGNMESHOVERRIDEMULTIPLE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_assignMeshOverrideMultiple(MeshAssignmentDelegateMultiple* arg)
		{
			((::System::Void(*)(MeshAssignmentDelegateMultiple*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ASSIGNMESHOVERRIDEMULTIPLE_OFFSET))(arg, nullptr);
		}

		::System::Void add_AssignMeshOverrideSingleRenderer(MeshAssignmentDelegateSingle* arg)
		{
			((::System::Void(*)(MeshAssignmentDelegateSingle*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ADD_ASSIGNMESHOVERRIDESINGLERENDERER_OFFSET))(arg, nullptr);
		}

		::System::Void remove_AssignMeshOverrideSingleRenderer(MeshAssignmentDelegateSingle* arg)
		{
			((::System::Void(*)(MeshAssignmentDelegateSingle*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ASSIGNMESHOVERRIDESINGLERENDERER_OFFSET))(arg, nullptr);
		}

		::System::Void add_AssignMeshOverrideMultipleRenderers(MeshAssignmentDelegateMultiple* arg)
		{
			((::System::Void(*)(MeshAssignmentDelegateMultiple*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ADD_ASSIGNMESHOVERRIDEMULTIPLERENDERERS_OFFSET))(arg, nullptr);
		}

		::System::Void remove_AssignMeshOverrideMultipleRenderers(MeshAssignmentDelegateMultiple* arg)
		{
			((::System::Void(*)(MeshAssignmentDelegateMultiple*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ASSIGNMESHOVERRIDEMULTIPLERENDERERS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_CustomTextureOverride()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_CUSTOMTEXTUREOVERRIDE_OFFSET))(nullptr);
		}

		Il2CppObject* get_CustomMaterialOverride()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_CUSTOMMATERIALOVERRIDE_OFFSET))(nullptr);
		}

		::UnityEngine::Texture* get_OverrideTexture()
		{
			return (return (::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_OVERRIDETEXTURE_OFFSET))(nullptr);
		}

		::System::Void set_OverrideTexture(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_SET_OVERRIDETEXTURE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Texture* get_mainTexture()
		{
			return (return (::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_MAINTEXTURE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void Rebuild(::UnityEngine::UI::CanvasUpdate* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::CanvasUpdate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_REBUILD_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_UPDATE_OFFSET))(nullptr);
		}

		::System::Void FixedUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_FIXEDUPDATE_OFFSET))(nullptr);
		}

		::System::Void Update(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void SyncSubmeshGraphicsWithCanvasRenderers()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_SYNCSUBMESHGRAPHICSWITHCANVASRENDERERS_OFFSET))(nullptr);
		}

		::System::Void UpdateAnimationStatus(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_UPDATEANIMATIONSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyTransformMovementToPhysics()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_APPLYTRANSFORMMOVEMENTTOPHYSICS_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* GetPhysicsTransformPosition()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GETPHYSICSTRANSFORMPOSITION_OFFSET))(nullptr);
		}

		::System::Single GetPhysicsTransformRotation()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GETPHYSICSTRANSFORMROTATION_OFFSET))(nullptr);
		}

		::System::Void ApplyAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_APPLYANIMATION_OFFSET))(nullptr);
		}

		::System::Void AfterAnimationApplied()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_AFTERANIMATIONAPPLIED_OFFSET))(nullptr);
		}

		::System::Void UpdateWorldTransform(Physics* arg)
		{
			((::System::Void(*)(Physics*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_UPDATEWORLDTRANSFORM_OFFSET))(arg, nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void OnCullStateChanged(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ONCULLSTATECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void OnBecameVisible()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ONBECAMEVISIBLE_OFFSET))(nullptr);
		}

		::System::Void OnBecameInvisible()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ONBECAMEINVISIBLE_OFFSET))(nullptr);
		}

		::System::Void ReapplySeparatorSlotNames()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_REAPPLYSEPARATORSLOTNAMES_OFFSET))(nullptr);
		}

		::Spine::Skeleton* get_Skeleton()
		{
			return (return (::Spine::Skeleton*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_SKELETON_OFFSET))(nullptr);
		}

		::System::Void set_Skeleton(::Spine::Skeleton* arg)
		{
			((::System::Void(*)(::Spine::Skeleton*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_SET_SKELETON_OFFSET))(arg, nullptr);
		}

		::Spine::SkeletonData* get_SkeletonData()
		{
			return (return (::Spine::SkeletonData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_SKELETONDATA_OFFSET))(nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Void add_OnRebuild(SkeletonRendererDelegate* arg)
		{
			((::System::Void(*)(SkeletonRendererDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ADD_ONREBUILD_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnRebuild(SkeletonRendererDelegate* arg)
		{
			((::System::Void(*)(SkeletonRendererDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ONREBUILD_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnInstructionsPrepared(InstructionDelegate* arg)
		{
			((::System::Void(*)(InstructionDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ADD_ONINSTRUCTIONSPREPARED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnInstructionsPrepared(InstructionDelegate* arg)
		{
			((::System::Void(*)(InstructionDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ONINSTRUCTIONSPREPARED_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnMeshAndMaterialsUpdated(SkeletonRendererDelegate* arg)
		{
			((::System::Void(*)(SkeletonRendererDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ADD_ONMESHANDMATERIALSUPDATED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnMeshAndMaterialsUpdated(SkeletonRendererDelegate* arg)
		{
			((::System::Void(*)(SkeletonRendererDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ONMESHANDMATERIALSUPDATED_OFFSET))(arg, nullptr);
		}

		::Spine::AnimationState* get_AnimationState()
		{
			return (return (::Spine::AnimationState*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_ANIMATIONSTATE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_PhysicsPositionInheritanceFactor()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_PHYSICSPOSITIONINHERITANCEFACTOR_OFFSET))(nullptr);
		}

		::System::Void set_PhysicsPositionInheritanceFactor(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_SET_PHYSICSPOSITIONINHERITANCEFACTOR_OFFSET))(arg, nullptr);
		}

		::System::Single get_PhysicsRotationInheritanceFactor()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_PHYSICSROTATIONINHERITANCEFACTOR_OFFSET))(nullptr);
		}

		::System::Void set_PhysicsRotationInheritanceFactor(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_SET_PHYSICSROTATIONINHERITANCEFACTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Transform* get_PhysicsMovementRelativeTo()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_PHYSICSMOVEMENTRELATIVETO_OFFSET))(nullptr);
		}

		::System::Void set_PhysicsMovementRelativeTo(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_SET_PHYSICSMOVEMENTRELATIVETO_OFFSET))(arg, nullptr);
		}

		::System::Void ResetLastPosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_RESETLASTPOSITION_OFFSET))(nullptr);
		}

		::System::Void ResetLastRotation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_RESETLASTROTATION_OFFSET))(nullptr);
		}

		::System::Void ResetLastPositionAndRotation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_RESETLASTPOSITIONANDROTATION_OFFSET))(nullptr);
		}

		::Spine::Unity::MeshGenerator* get_MeshGenerator()
		{
			return (return (::Spine::Unity::MeshGenerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_MESHGENERATOR_OFFSET))(nullptr);
		}

		::Spine::SkeletonClipping* get_SkeletonClipping()
		{
			return (return (::Spine::SkeletonClipping*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_SKELETONCLIPPING_OFFSET))(nullptr);
		}

		Il2CppObject* get_MeshesMultipleCanvasRenderers()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_MESHESMULTIPLECANVASRENDERERS_OFFSET))(nullptr);
		}

		Il2CppObject* get_MaterialsMultipleCanvasRenderers()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_MATERIALSMULTIPLECANVASRENDERERS_OFFSET))(nullptr);
		}

		Il2CppObject* get_TexturesMultipleCanvasRenderers()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_TEXTURESMULTIPLECANVASRENDERERS_OFFSET))(nullptr);
		}

		::UnityEngine::Mesh* GetLastMesh()
		{
			return (return (::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GETLASTMESH_OFFSET))(nullptr);
		}

		::System::Boolean MatchRectTransformWithBounds()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_MATCHRECTTRANSFORMWITHBOUNDS_OFFSET))(nullptr);
		}

		::System::Boolean MatchRectTransformSingleRenderer()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_MATCHRECTTRANSFORMSINGLERENDERER_OFFSET))(nullptr);
		}

		::System::Boolean MatchRectTransformMultipleRenderers()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_MATCHRECTTRANSFORMMULTIPLERENDERERS_OFFSET))(nullptr);
		}

		::System::Void SetRectTransformBounds(::UnityEngine::Bounds* arg)
		{
			((::System::Void(*)(::UnityEngine::Bounds*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_SETRECTTRANSFORMBOUNDS_OFFSET))(arg, nullptr);
		}

		::System::Void SetRectTransformSize(::UnityEngine::UI::Graphic* arg, ::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::Graphic*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_SETRECTTRANSFORMSIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetRectTransformSize(::UnityEngine::RectTransform* arg, ::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_SETRECTTRANSFORMSIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void add_OnAnimationRebuild(::Spine::Unity::ISkeletonAnimationDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::ISkeletonAnimationDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ADD_ONANIMATIONREBUILD_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnAnimationRebuild(::Spine::Unity::ISkeletonAnimationDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::ISkeletonAnimationDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ONANIMATIONREBUILD_OFFSET))(arg, nullptr);
		}

		::System::Void add_BeforeApply(::Spine::Unity::UpdateBonesDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::UpdateBonesDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ADD_BEFOREAPPLY_OFFSET))(arg, nullptr);
		}

		::System::Void remove_BeforeApply(::Spine::Unity::UpdateBonesDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::UpdateBonesDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_REMOVE_BEFOREAPPLY_OFFSET))(arg, nullptr);
		}

		::System::Void add_UpdateLocal(::Spine::Unity::UpdateBonesDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::UpdateBonesDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ADD_UPDATELOCAL_OFFSET))(arg, nullptr);
		}

		::System::Void remove_UpdateLocal(::Spine::Unity::UpdateBonesDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::UpdateBonesDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_REMOVE_UPDATELOCAL_OFFSET))(arg, nullptr);
		}

		::System::Void add_UpdateWorld(::Spine::Unity::UpdateBonesDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::UpdateBonesDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ADD_UPDATEWORLD_OFFSET))(arg, nullptr);
		}

		::System::Void remove_UpdateWorld(::Spine::Unity::UpdateBonesDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::UpdateBonesDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_REMOVE_UPDATEWORLD_OFFSET))(arg, nullptr);
		}

		::System::Void add_UpdateComplete(::Spine::Unity::UpdateBonesDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::UpdateBonesDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ADD_UPDATECOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_UpdateComplete(::Spine::Unity::UpdateBonesDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::UpdateBonesDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_REMOVE_UPDATECOMPLETE_OFFSET))(arg, nullptr);
		}

		::Spine::Unity::UpdateTiming* get_UpdateTiming()
		{
			return (return (::Spine::Unity::UpdateTiming*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_UPDATETIMING_OFFSET))(nullptr);
		}

		::System::Void set_UpdateTiming(::Spine::Unity::UpdateTiming* arg)
		{
			((::System::Void(*)(::Spine::Unity::UpdateTiming*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_SET_UPDATETIMING_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UnscaledTime()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_UNSCALEDTIME_OFFSET))(nullptr);
		}

		::System::Void set_UnscaledTime(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_SET_UNSCALEDTIME_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnPostProcessVertices(::Spine::Unity::MeshGeneratorDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::MeshGeneratorDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ADD_ONPOSTPROCESSVERTICES_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnPostProcessVertices(::Spine::Unity::MeshGeneratorDelegate* arg)
		{
			((::System::Void(*)(::Spine::Unity::MeshGeneratorDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ONPOSTPROCESSVERTICES_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_CLEAR_OFFSET))(nullptr);
		}

		::System::Void TrimRenderers()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_TRIMRENDERERS_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void PrepareInstructionsAndRenderers(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_PREPAREINSTRUCTIONSANDRENDERERS_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateMesh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_UPDATEMESH_OFFSET))(nullptr);
		}

		::System::Void UpdateMeshToInstructions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_UPDATEMESHTOINSTRUCTIONS_OFFSET))(nullptr);
		}

		::System::Boolean HasMultipleSubmeshInstructions()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_HASMULTIPLESUBMESHINSTRUCTIONS_OFFSET))(nullptr);
		}

		::System::Void InitMeshBuffers()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_INITMESHBUFFERS_OFFSET))(nullptr);
		}

		::System::Void DisposeMeshBuffers()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_DISPOSEMESHBUFFERS_OFFSET))(nullptr);
		}

		::System::Void UpdateMeshSingleCanvasRenderer(::Spine::Unity::SkeletonRendererInstruction* arg)
		{
			((::System::Void(*)(::Spine::Unity::SkeletonRendererInstruction*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_UPDATEMESHSINGLECANVASRENDERER_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateMaterialsMultipleCanvasRenderers(::Spine::Unity::SkeletonRendererInstruction* arg)
		{
			((::System::Void(*)(::Spine::Unity::SkeletonRendererInstruction*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_UPDATEMATERIALSMULTIPLECANVASRENDERERS_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateMeshMultipleCanvasRenderers(::Spine::Unity::SkeletonRendererInstruction* arg)
		{
			((::System::Void(*)(::Spine::Unity::SkeletonRendererInstruction*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_UPDATEMESHMULTIPLECANVASRENDERERS_OFFSET))(arg, nullptr);
		}

		::System::Void HandleOnDemandLoading()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_HANDLEONDEMANDLOADING_OFFSET))(nullptr);
		}

		::System::Void EnsureCanvasRendererCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ENSURECANVASRENDERERCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void PrepareRendererGameObjects(::Spine::Unity::SkeletonRendererInstruction* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Spine::Unity::SkeletonRendererInstruction*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_PREPARERENDERERGAMEOBJECTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DisableUnusedCanvasRenderers(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_DISABLEUNUSEDCANVASRENDERERS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EnsureMeshesCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ENSUREMESHESCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void EnsureUsedTexturesAndMaterialsCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ENSUREUSEDTEXTURESANDMATERIALSCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void DestroyMeshes()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_DESTROYMESHES_OFFSET))(nullptr);
		}

		::System::Void EnsureSeparatorPartCount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ENSURESEPARATORPARTCOUNT_OFFSET))(nullptr);
		}

		::System::Void UpdateSeparatorPartParents()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_UPDATESEPARATORPARTPARENTS_OFFSET))(nullptr);
		}

		::System::Single GetLayoutScale(LayoutMode* arg)
		{
			return (return (::System::Single(*)(LayoutMode*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GETLAYOUTSCALE_OFFSET))(arg, nullptr);
		}

		LayoutMode* GetEffectiveLayoutMode(LayoutMode* arg)
		{
			return (return (LayoutMode*(*)(LayoutMode*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GETEFFECTIVELAYOUTMODE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* GetCurrentRectSize()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GETCURRENTRECTSIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_.CTOR_OFFSET))(nullptr);
		}

	};
}

