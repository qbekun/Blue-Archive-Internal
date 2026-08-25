#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Rigidbody2D; }
namespace UnityEngine { class Rigidbody; }
namespace Spine::Unity { class ISkeletonComponent; }
namespace Spine { class Bone; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }
namespace Spine::Unity { class ISkeletonAnimation; }
namespace Spine { class Animation; }
namespace Spine { class TransformConstraint; }
namespace UnityEngine { class Vector2&; }
namespace Spine { class TranslateXTimeline; }
namespace Spine { class TranslateYTimeline; }

#define SPINE_UNITY_SKELETONROOTMOTIONBASE_ADD_PROCESSROOTMOTIONOVERRIDE_OFFSET UNITYSDK_OFFSET(0x95F6850)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_REMOVE_PROCESSROOTMOTIONOVERRIDE_OFFSET UNITYSDK_OFFSET(0x95F68F0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_ADD_PHYSICSUPDATEROOTMOTIONOVERRIDE_OFFSET UNITYSDK_OFFSET(0x95F6990)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_REMOVE_PHYSICSUPDATEROOTMOTIONOVERRIDE_OFFSET UNITYSDK_OFFSET(0x95F6A30)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GET_ROOTMOTIONBONE_OFFSET UNITYSDK_OFFSET(0x95F6AD0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GET_USESRIGIDBODY_OFFSET UNITYSDK_OFFSET(0x95F6AE0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GET_PREVIOUSRIGIDBODYROOTMOTION2D_OFFSET UNITYSDK_OFFSET(0x95F6B70)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GET_PREVIOUSRIGIDBODYROOTMOTION3D_OFFSET UNITYSDK_OFFSET(0x95F6B80)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GET_ADDITIONALRIGIDBODY2DMOVEMENT_OFFSET UNITYSDK_OFFSET(0x95F6BA0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_SET_ADDITIONALRIGIDBODY2DMOVEMENT_OFFSET UNITYSDK_OFFSET(0x95F6BB0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GET_SKELETONANIMATIONUSESFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x95F6BC0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_RESET_OFFSET UNITYSDK_OFFSET(0x95F5E20)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_START_OFFSET UNITYSDK_OFFSET(0x95F6E00)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_INITIALIZEONREBUILD_OFFSET UNITYSDK_OFFSET(0x95F6E20)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x95F4E30)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x95F7270)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_PHYSICSUPDATE_OFFSET UNITYSDK_OFFSET(0x95F7350)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x95F7CE0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_FINDRIGIDBODYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x95F6C70)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GET_ADDITIONALSCALE_OFFSET UNITYSDK_OFFSET(0x95F7DB0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_CALCULATEANIMATIONSMOVEMENTDELTA_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_CALCULATEANIMATIONSROTATIONDELTA_OFFSET UNITYSDK_OFFSET(0x95F7DC0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GETREMAININGROOTMOTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GETROOTMOTIONINFO_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GET_TARGETSKELETONCOMPONENT_OFFSET UNITYSDK_OFFSET(0x95F7DD0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GET_TARGETSKELETONANIMATIONCOMPONENT_OFFSET UNITYSDK_OFFSET(0x95F7E30)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_SETROOTMOTIONBONE_OFFSET UNITYSDK_OFFSET(0x95F70F0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_ADJUSTROOTMOTIONTODISTANCE_OFFSET UNITYSDK_OFFSET(0x95F8170)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GETANIMATIONROOTMOTION_OFFSET UNITYSDK_OFFSET(0x95F84C0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GETANIMATIONROOTMOTION_OFFSET UNITYSDK_OFFSET(0x95F4480)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GETANIMATIONROOTMOTIONROTATION_OFFSET UNITYSDK_OFFSET(0x95F8800)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GETANIMATIONROOTMOTIONROTATION_OFFSET UNITYSDK_OFFSET(0x95F5390)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_APPLYCONSTRAINTTOPOS_OFFSET UNITYSDK_OFFSET(0x95F84F0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_APPLYCONSTRAINTTOROTATION_OFFSET UNITYSDK_OFFSET(0x95F8830)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_UPDATELASTCONSTRAINTPOS_OFFSET UNITYSDK_OFFSET(0x95F8600)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_UPDATELASTCONSTRAINTROTATION_OFFSET UNITYSDK_OFFSET(0x95F8930)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GETANIMATIONROOTMOTIONINFO_OFFSET UNITYSDK_OFFSET(0x95F5C10)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GETCONSTRAINTLASTPOSINDEX_OFFSET UNITYSDK_OFFSET(0x95F8B10)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_FINDTRANSFORMCONSTRAINTSAFFECTINGBONE_OFFSET UNITYSDK_OFFSET(0x95F7ED0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GETTIMELINEMOVEMENTDELTA_OFFSET UNITYSDK_OFFSET(0x95F8C60)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GATHERTOPLEVELBONES_OFFSET UNITYSDK_OFFSET(0x95F6E40)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_HANDLEUPDATELOCAL_OFFSET UNITYSDK_OFFSET(0x95F8E30)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_APPLYROOTMOTION_OFFSET UNITYSDK_OFFSET(0x95F9190)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_APPLYTRANSFORMCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x95F9E80)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GETSCALEAFFECTINGROOTMOTION_OFFSET UNITYSDK_OFFSET(0x95F84A0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GETSCALEAFFECTINGROOTMOTION_OFFSET UNITYSDK_OFFSET(0x95F79E0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GETSKELETONSPACEMOVEMENTDELTA_OFFSET UNITYSDK_OFFSET(0x95F90B0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GETSKELETONSPACEROTATIONDELTA_OFFSET UNITYSDK_OFFSET(0x95F9160)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_SETEFFECTIVEBONEOFFSETSTO_OFFSET UNITYSDK_OFFSET(0x95F97A0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_CLEAREFFECTIVEBONEOFFSETS_OFFSET UNITYSDK_OFFSET(0x95F7BB0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_CLEARRIGIDBODYTEMPMOVEMENT_OFFSET UNITYSDK_OFFSET(0x95F7C10)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x95F4100)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonRootMotionBase_TypeDefinitionIndex = 35301;

	class SkeletonRootMotionBase : public Il2CppObject
	{
	public:
		::System::String* rootMotionBoneName; // 0x18
		::System::Boolean transformPositionX; // 0x20
		::System::Boolean transformPositionY; // 0x21
		::System::Boolean transformRotation; // 0x22
		::System::Single rootMotionScaleX; // 0x24
		::System::Single rootMotionScaleY; // 0x28
		::System::Single rootMotionScaleRotation; // 0x2C
		::System::Single rootMotionTranslateXPerY; // 0x30
		::System::Single rootMotionTranslateYPerX; // 0x34
		::UnityEngine::Rigidbody2D* rigidBody2D; // 0x38
		::System::Boolean applyRigidbody2DGravity; // 0x40
		::UnityEngine::Rigidbody* rigidBody; // 0x48
		RootMotionDelegate* ProcessRootMotionOverride; // 0x50
		RootMotionDelegate* PhysicsUpdateRootMotionOverride; // 0x58
		::System::Boolean disableOnOverride; // 0x60
		::Spine::Unity::ISkeletonComponent* skeletonComponent; // 0x68
		::Spine::Bone* rootMotionBone; // 0x70
		::System::Int32 rootMotionBoneIndex; // 0x78
		Il2CppObject* transformConstraintIndices; // 0x80
		Il2CppObject* transformConstraintLastPos; // 0x88
		Il2CppObject* transformConstraintLastRotation; // 0x90
		Il2CppObject* topLevelBones; // 0x98
		::UnityEngine::Vector2* initialOffset; // 0xA0
		::System::Boolean accumulatedUntilFixedUpdate; // 0xA8
		::UnityEngine::Vector2* tempSkeletonDisplacement; // 0xAC
		::UnityEngine::Vector3* rigidbodyDisplacement; // 0xB4
		::UnityEngine::Vector3* previousRigidbodyRootMotion; // 0xC0
		::UnityEngine::Vector2* additionalRigidbody2DMovement; // 0xCC
		::UnityEngine::Quaternion* rigidbodyLocalRotation; // 0xD4
		::System::Single rigidbody2DRotation; // 0xE4
		::System::Single initialOffsetRotation; // 0xE8
		::System::Single tempSkeletonRotation; // 0xEC

		::System::Void add_ProcessRootMotionOverride(RootMotionDelegate* arg)
		{
			((::System::Void(*)(RootMotionDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_ADD_PROCESSROOTMOTIONOVERRIDE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_ProcessRootMotionOverride(RootMotionDelegate* arg)
		{
			((::System::Void(*)(RootMotionDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_REMOVE_PROCESSROOTMOTIONOVERRIDE_OFFSET))(arg, nullptr);
		}

		::System::Void add_PhysicsUpdateRootMotionOverride(RootMotionDelegate* arg)
		{
			((::System::Void(*)(RootMotionDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_ADD_PHYSICSUPDATEROOTMOTIONOVERRIDE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_PhysicsUpdateRootMotionOverride(RootMotionDelegate* arg)
		{
			((::System::Void(*)(RootMotionDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_REMOVE_PHYSICSUPDATEROOTMOTIONOVERRIDE_OFFSET))(arg, nullptr);
		}

		::Spine::Bone* get_RootMotionBone()
		{
			return (return (::Spine::Bone*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GET_ROOTMOTIONBONE_OFFSET))(nullptr);
		}

		::System::Boolean get_UsesRigidbody()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GET_USESRIGIDBODY_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_PreviousRigidbodyRootMotion2D()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GET_PREVIOUSRIGIDBODYROOTMOTION2D_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_PreviousRigidbodyRootMotion3D()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GET_PREVIOUSRIGIDBODYROOTMOTION3D_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_AdditionalRigidbody2DMovement()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GET_ADDITIONALRIGIDBODY2DMOVEMENT_OFFSET))(nullptr);
		}

		::System::Void set_AdditionalRigidbody2DMovement(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_SET_ADDITIONALRIGIDBODY2DMOVEMENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_SkeletonAnimationUsesFixedUpdate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GET_SKELETONANIMATIONUSESFIXEDUPDATE_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_RESET_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_START_OFFSET))(nullptr);
		}

		::System::Void InitializeOnRebuild(::Spine::Unity::ISkeletonAnimation* arg)
		{
			((::System::Void(*)(::Spine::Unity::ISkeletonAnimation*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_INITIALIZEONREBUILD_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void FixedUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_FIXEDUPDATE_OFFSET))(nullptr);
		}

		::System::Void PhysicsUpdate(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_PHYSICSUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void FindRigidbodyComponent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_FINDRIGIDBODYCOMPONENT_OFFSET))(nullptr);
		}

		::System::Single get_AdditionalScale()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GET_ADDITIONALSCALE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* CalculateAnimationsMovementDelta()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_CALCULATEANIMATIONSMOVEMENTDELTA_OFFSET))(nullptr);
		}

		::System::Single CalculateAnimationsRotationDelta()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_CALCULATEANIMATIONSROTATIONDELTA_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* GetRemainingRootMotion(::System::Int32 arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GETREMAININGROOTMOTION_OFFSET))(arg, nullptr);
		}

		RootMotionInfo* GetRootMotionInfo(::System::Int32 arg)
		{
			return (return (RootMotionInfo*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GETROOTMOTIONINFO_OFFSET))(arg, nullptr);
		}

		::Spine::Unity::ISkeletonComponent* get_TargetSkeletonComponent()
		{
			return (return (::Spine::Unity::ISkeletonComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GET_TARGETSKELETONCOMPONENT_OFFSET))(nullptr);
		}

		::Spine::Unity::ISkeletonAnimation* get_TargetSkeletonAnimationComponent()
		{
			return (return (::Spine::Unity::ISkeletonAnimation*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GET_TARGETSKELETONANIMATIONCOMPONENT_OFFSET))(nullptr);
		}

		::System::Void SetRootMotionBone(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_SETROOTMOTIONBONE_OFFSET))(str, nullptr);
		}

		::System::Void AdjustRootMotionToDistance(::UnityEngine::Vector2* arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_ADJUSTROOTMOTIONTODISTANCE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector2* GetAnimationRootMotion(::Spine::Animation* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::Spine::Animation*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GETANIMATIONROOTMOTION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* GetAnimationRootMotion(::System::Single arg, ::System::Single arg, ::Spine::Animation* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::System::Single, ::System::Single, ::Spine::Animation*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GETANIMATIONROOTMOTION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single GetAnimationRootMotionRotation(::Spine::Animation* arg)
		{
			return (return (::System::Single(*)(::Spine::Animation*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GETANIMATIONROOTMOTIONROTATION_OFFSET))(arg, nullptr);
		}

		::System::Single GetAnimationRootMotionRotation(::System::Single arg, ::System::Single arg, ::Spine::Animation* arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::Spine::Animation*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GETANIMATIONROOTMOTIONROTATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ApplyConstraintToPos(::Spine::Animation* arg, ::Spine::TransformConstraint* arg, ::System::Int32 arg, ::System::Single arg, ::System::Boolean arg, ::UnityEngine::Vector2&* arg)
		{
			((::System::Void(*)(::Spine::Animation*, ::Spine::TransformConstraint*, ::System::Int32, ::System::Single, ::System::Boolean, ::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_APPLYCONSTRAINTTOPOS_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ApplyConstraintToRotation(::Spine::Animation* arg, ::Spine::TransformConstraint* arg, ::System::Int32 arg, ::System::Single arg, ::System::Boolean arg, float&* arg)
		{
			((::System::Void(*)(::Spine::Animation*, ::Spine::TransformConstraint*, ::System::Int32, ::System::Single, ::System::Boolean, float&*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_APPLYCONSTRAINTTOROTATION_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void UpdateLastConstraintPos(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_UPDATELASTCONSTRAINTPOS_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateLastConstraintRotation(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_UPDATELASTCONSTRAINTROTATION_OFFSET))(arg, nullptr);
		}

		RootMotionInfo* GetAnimationRootMotionInfo(::Spine::Animation* arg, ::System::Single arg)
		{
			return (return (RootMotionInfo*(*)(::Spine::Animation*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GETANIMATIONROOTMOTIONINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetConstraintLastPosIndex(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GETCONSTRAINTLASTPOSINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void FindTransformConstraintsAffectingBone()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_FINDTRANSFORMCONSTRAINTSAFFECTINGBONE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* GetTimelineMovementDelta(::System::Single arg, ::System::Single arg, ::Spine::TranslateXTimeline* arg, ::Spine::TranslateYTimeline* arg, ::Spine::Animation* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::System::Single, ::System::Single, ::Spine::TranslateXTimeline*, ::Spine::TranslateYTimeline*, ::Spine::Animation*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GETTIMELINEMOVEMENTDELTA_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void GatherTopLevelBones()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GATHERTOPLEVELBONES_OFFSET))(nullptr);
		}

		::System::Void HandleUpdateLocal(::Spine::Unity::ISkeletonAnimation* arg)
		{
			((::System::Void(*)(::Spine::Unity::ISkeletonAnimation*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_HANDLEUPDATELOCAL_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyRootMotion(::UnityEngine::Vector2* arg, ::System::Single arg, ::UnityEngine::Vector2* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::System::Single, ::UnityEngine::Vector2*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_APPLYROOTMOTION_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ApplyTransformConstraints()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_APPLYTRANSFORMCONSTRAINTS_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* GetScaleAffectingRootMotion()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GETSCALEAFFECTINGROOTMOTION_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* GetScaleAffectingRootMotion(::UnityEngine::Vector2&* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GETSCALEAFFECTINGROOTMOTION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* GetSkeletonSpaceMovementDelta(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2&* arg, ::UnityEngine::Vector2&* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2&*, ::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GETSKELETONSPACEMOVEMENTDELTA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single GetSkeletonSpaceRotationDelta(::System::Single arg, ::UnityEngine::Vector2* arg)
		{
			return (return (::System::Single(*)(::System::Single, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GETSKELETONSPACEROTATIONDELTA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetEffectiveBoneOffsetsTo(::UnityEngine::Vector2* arg, ::System::Single arg, ::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::System::Single, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_SETEFFECTIVEBONEOFFSETSTO_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ClearEffectiveBoneOffsets(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_CLEAREFFECTIVEBONEOFFSETS_OFFSET))(arg, nullptr);
		}

		::System::Void ClearRigidbodyTempMovement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_CLEARRIGIDBODYTEMPMOVEMENT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_.CTOR_OFFSET))(nullptr);
		}

	};
}

