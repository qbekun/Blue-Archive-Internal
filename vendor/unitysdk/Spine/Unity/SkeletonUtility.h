#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Transform; }
namespace Spine::Unity { class SkeletonRenderer; }
namespace Spine::Unity { class SkeletonGraphic; }
namespace Spine::Unity { class ISkeletonAnimation; }
namespace Spine::Unity { class ISkeletonComponent; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class PolygonCollider2D; }
namespace Spine { class Skeleton; }
namespace Spine { class BoundingBoxAttachment; }
namespace Spine { class Slot; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Bounds; }
namespace UnityEngine { class Rigidbody2D; }
namespace Spine::Unity { class MeshGeneratorBuffers; }
namespace Spine::Unity { class SkeletonUtilityBone; }
namespace Spine::Unity { class SkeletonUtilityConstraint; }
namespace Spine { class Bone; }

#define SPINE_UNITY_SKELETONUTILITY_ADDBOUNDINGBOXGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x96143A0)
#define SPINE_UNITY_SKELETONUTILITY_ADDBOUNDINGBOXGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x96146E0)
#define SPINE_UNITY_SKELETONUTILITY_ADDBOUNDINGBOXASCOMPONENT_OFFSET UNITYSDK_OFFSET(0x9614900)
#define SPINE_UNITY_SKELETONUTILITY_SETCOLLIDERPOINTSLOCAL_OFFSET UNITYSDK_OFFSET(0x9614990)
#define SPINE_UNITY_SKELETONUTILITY_GETBOUNDINGBOXBOUNDS_OFFSET UNITYSDK_OFFSET(0x9614AA0)
#define SPINE_UNITY_SKELETONUTILITY_ADDBONERIGIDBODY2D_OFFSET UNITYSDK_OFFSET(0x9614C20)
#define SPINE_UNITY_SKELETONUTILITY_ADD_ONRESET_OFFSET UNITYSDK_OFFSET(0x9614CF0)
#define SPINE_UNITY_SKELETONUTILITY_REMOVE_ONRESET_OFFSET UNITYSDK_OFFSET(0x9614D90)
#define SPINE_UNITY_SKELETONUTILITY_UPDATE_OFFSET UNITYSDK_OFFSET(0x9614E30)
#define SPINE_UNITY_SKELETONUTILITY_UPDATETOMESHSCALEANDOFFSET_OFFSET UNITYSDK_OFFSET(0x9615190)
#define SPINE_UNITY_SKELETONUTILITY_GET_SKELETONCOMPONENT_OFFSET UNITYSDK_OFFSET(0x9615480)
#define SPINE_UNITY_SKELETONUTILITY_GET_SKELETON_OFFSET UNITYSDK_OFFSET(0x9615580)
#define SPINE_UNITY_SKELETONUTILITY_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x9615630)
#define SPINE_UNITY_SKELETONUTILITY_GET_POSITIONSCALE_OFFSET UNITYSDK_OFFSET(0x96156F0)
#define SPINE_UNITY_SKELETONUTILITY_GET_POSITIONOFFSET_OFFSET UNITYSDK_OFFSET(0x9615700)
#define SPINE_UNITY_SKELETONUTILITY_RESUBSCRIBEEVENTS_OFFSET UNITYSDK_OFFSET(0x9615710)
#define SPINE_UNITY_SKELETONUTILITY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9616050)
#define SPINE_UNITY_SKELETONUTILITY_START_OFFSET UNITYSDK_OFFSET(0x9616710)
#define SPINE_UNITY_SKELETONUTILITY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9616720)
#define SPINE_UNITY_SKELETONUTILITY_HANDLERENDERERRESET_OFFSET UNITYSDK_OFFSET(0x9616B50)
#define SPINE_UNITY_SKELETONUTILITY_HANDLERENDERERRESET_OFFSET UNITYSDK_OFFSET(0x9616B80)
#define SPINE_UNITY_SKELETONUTILITY_REGISTERBONE_OFFSET UNITYSDK_OFFSET(0x9616BB0)
#define SPINE_UNITY_SKELETONUTILITY_UNREGISTERBONE_OFFSET UNITYSDK_OFFSET(0x9616C80)
#define SPINE_UNITY_SKELETONUTILITY_REGISTERCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x9616CD0)
#define SPINE_UNITY_SKELETONUTILITY_UNREGISTERCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x9616DA0)
#define SPINE_UNITY_SKELETONUTILITY_COLLECTBONES_OFFSET UNITYSDK_OFFSET(0x96162E0)
#define SPINE_UNITY_SKELETONUTILITY_UPDATELOCAL_OFFSET UNITYSDK_OFFSET(0x9615310)
#define SPINE_UNITY_SKELETONUTILITY_UPDATEWORLD_OFFSET UNITYSDK_OFFSET(0x96153C0)
#define SPINE_UNITY_SKELETONUTILITY_UPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x9615470)
#define SPINE_UNITY_SKELETONUTILITY_UPDATEALLBONES_OFFSET UNITYSDK_OFFSET(0x9617C70)
#define SPINE_UNITY_SKELETONUTILITY_GETBONEROOT_OFFSET UNITYSDK_OFFSET(0x9617D40)
#define SPINE_UNITY_SKELETONUTILITY_SPAWNROOT_OFFSET UNITYSDK_OFFSET(0x9617F70)
#define SPINE_UNITY_SKELETONUTILITY_SPAWNHIERARCHY_OFFSET UNITYSDK_OFFSET(0x9618310)
#define SPINE_UNITY_SKELETONUTILITY_SPAWNBONERECURSIVELY_OFFSET UNITYSDK_OFFSET(0x9618410)
#define SPINE_UNITY_SKELETONUTILITY_SPAWNBONE_OFFSET UNITYSDK_OFFSET(0x9618070)
#define SPINE_UNITY_SKELETONUTILITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9618790)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonUtility_TypeDefinitionIndex = 35335;

	class SkeletonUtility : public Il2CppObject
	{
	public:
		SkeletonUtilityDelegate* OnReset; // 0x18
		::UnityEngine::Transform* boneRoot; // 0x20
		::System::Boolean flipBy180DegreeRotation; // 0x28
		::Spine::Unity::SkeletonRenderer* skeletonRenderer; // 0x30
		::Spine::Unity::SkeletonGraphic* skeletonGraphic; // 0x38
		::Spine::Unity::ISkeletonAnimation* skeletonAnimation; // 0x40
		::Spine::Unity::ISkeletonComponent* skeletonComponent; // 0x48
		Il2CppObject* boneComponents; // 0x50
		Il2CppObject* constraintComponents; // 0x58
		::System::Single positionScale; // 0x60
		::System::Single lastPositionScale; // 0x64
		::UnityEngine::Vector2* positionOffset; // 0x68
		::System::Boolean hasOverrideBones; // 0x70
		::System::Boolean hasConstraints; // 0x71
		::System::Boolean needToReprocessBones; // 0x72

		::UnityEngine::PolygonCollider2D* AddBoundingBoxGameObject(::Spine::Skeleton* arg, ::System::String* str, ::System::String* str, ::System::String* str, ::UnityEngine::Transform* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::PolygonCollider2D*(*)(::Spine::Skeleton*, ::System::String*, ::System::String*, ::System::String*, ::UnityEngine::Transform*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_ADDBOUNDINGBOXGAMEOBJECT_OFFSET))(arg, str, str, str, arg, arg, nullptr);
		}

		::UnityEngine::PolygonCollider2D* AddBoundingBoxGameObject(::System::String* str, ::Spine::BoundingBoxAttachment* arg, ::Spine::Slot* arg, ::UnityEngine::Transform* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::PolygonCollider2D*(*)(::System::String*, ::Spine::BoundingBoxAttachment*, ::Spine::Slot*, ::UnityEngine::Transform*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_ADDBOUNDINGBOXGAMEOBJECT_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::PolygonCollider2D* AddBoundingBoxAsComponent(::Spine::BoundingBoxAttachment* arg, ::Spine::Slot* arg, ::UnityEngine::GameObject* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::PolygonCollider2D*(*)(::Spine::BoundingBoxAttachment*, ::Spine::Slot*, ::UnityEngine::GameObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_ADDBOUNDINGBOXASCOMPONENT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetColliderPointsLocal(::UnityEngine::PolygonCollider2D* arg, ::Spine::Slot* arg, ::Spine::BoundingBoxAttachment* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::PolygonCollider2D*, ::Spine::Slot*, ::Spine::BoundingBoxAttachment*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_SETCOLLIDERPOINTSLOCAL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Bounds* GetBoundingBoxBounds(::Spine::BoundingBoxAttachment* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Bounds*(*)(::Spine::BoundingBoxAttachment*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_GETBOUNDINGBOXBOUNDS_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rigidbody2D* AddBoneRigidbody2D(::UnityEngine::GameObject* arg, ::System::Boolean arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Rigidbody2D*(*)(::UnityEngine::GameObject*, ::System::Boolean, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_ADDBONERIGIDBODY2D_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void add_OnReset(SkeletonUtilityDelegate* arg)
		{
			((::System::Void(*)(SkeletonUtilityDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_ADD_ONRESET_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnReset(SkeletonUtilityDelegate* arg)
		{
			((::System::Void(*)(SkeletonUtilityDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_REMOVE_ONRESET_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_UPDATE_OFFSET))(nullptr);
		}

		::System::Void UpdateToMeshScaleAndOffset(::Spine::Unity::MeshGeneratorBuffers* arg)
		{
			((::System::Void(*)(::Spine::Unity::MeshGeneratorBuffers*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_UPDATETOMESHSCALEANDOFFSET_OFFSET))(arg, nullptr);
		}

		::Spine::Unity::ISkeletonComponent* get_SkeletonComponent()
		{
			return (return (::Spine::Unity::ISkeletonComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_GET_SKELETONCOMPONENT_OFFSET))(nullptr);
		}

		::Spine::Skeleton* get_Skeleton()
		{
			return (return (::Spine::Skeleton*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_GET_SKELETON_OFFSET))(nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Single get_PositionScale()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_GET_POSITIONSCALE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_PositionOffset()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_GET_POSITIONOFFSET_OFFSET))(nullptr);
		}

		::System::Void ResubscribeEvents()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_RESUBSCRIBEEVENTS_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_START_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void HandleRendererReset(::Spine::Unity::SkeletonRenderer* arg)
		{
			((::System::Void(*)(::Spine::Unity::SkeletonRenderer*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_HANDLERENDERERRESET_OFFSET))(arg, nullptr);
		}

		::System::Void HandleRendererReset(::Spine::Unity::SkeletonGraphic* arg)
		{
			((::System::Void(*)(::Spine::Unity::SkeletonGraphic*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_HANDLERENDERERRESET_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterBone(::Spine::Unity::SkeletonUtilityBone* arg)
		{
			((::System::Void(*)(::Spine::Unity::SkeletonUtilityBone*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_REGISTERBONE_OFFSET))(arg, nullptr);
		}

		::System::Void UnregisterBone(::Spine::Unity::SkeletonUtilityBone* arg)
		{
			((::System::Void(*)(::Spine::Unity::SkeletonUtilityBone*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_UNREGISTERBONE_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterConstraint(::Spine::Unity::SkeletonUtilityConstraint* arg)
		{
			((::System::Void(*)(::Spine::Unity::SkeletonUtilityConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_REGISTERCONSTRAINT_OFFSET))(arg, nullptr);
		}

		::System::Void UnregisterConstraint(::Spine::Unity::SkeletonUtilityConstraint* arg)
		{
			((::System::Void(*)(::Spine::Unity::SkeletonUtilityConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_UNREGISTERCONSTRAINT_OFFSET))(arg, nullptr);
		}

		::System::Void CollectBones()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_COLLECTBONES_OFFSET))(nullptr);
		}

		::System::Void UpdateLocal(::Spine::Unity::ISkeletonAnimation* arg)
		{
			((::System::Void(*)(::Spine::Unity::ISkeletonAnimation*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_UPDATELOCAL_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateWorld(::Spine::Unity::ISkeletonAnimation* arg)
		{
			((::System::Void(*)(::Spine::Unity::ISkeletonAnimation*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_UPDATEWORLD_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateComplete(::Spine::Unity::ISkeletonAnimation* arg)
		{
			((::System::Void(*)(::Spine::Unity::ISkeletonAnimation*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_UPDATECOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateAllBones(UpdatePhase* arg)
		{
			((::System::Void(*)(UpdatePhase*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_UPDATEALLBONES_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Transform* GetBoneRoot()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_GETBONEROOT_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* SpawnRoot(Mode* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::GameObject*(*)(Mode*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_SPAWNROOT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::GameObject* SpawnHierarchy(Mode* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::GameObject*(*)(Mode*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_SPAWNHIERARCHY_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::GameObject* SpawnBoneRecursively(::Spine::Bone* arg, ::UnityEngine::Transform* arg, Mode* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::GameObject*(*)(::Spine::Bone*, ::UnityEngine::Transform*, Mode*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_SPAWNBONERECURSIVELY_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::GameObject* SpawnBone(::Spine::Bone* arg, ::UnityEngine::Transform* arg, Mode* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::GameObject*(*)(::Spine::Bone*, ::UnityEngine::Transform*, Mode*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_SPAWNBONE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUTILITY_.CTOR_OFFSET))(nullptr);
		}

	};
}

