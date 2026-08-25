#pragma once
#include "../unitysdk.h"

namespace Spine { class SkeletonData; }
namespace Spine { class Skin; }
namespace Spine { class Bone; }
namespace Spine { class Skeleton; }
namespace Spine { class IkConstraint; }
namespace Spine { class TransformConstraint; }
namespace Spine { class PathConstraint; }
namespace Spine { class Attachment; }
namespace Spine { class PhysicsConstraint; }
namespace Spine { class Slot; }
namespace Spine { class SkeletonClipping; }

#define SPINE_SKELETON_GET_DATA_OFFSET UNITYSDK_OFFSET(0x95B4190)
#define SPINE_SKELETON_GET_BONES_OFFSET UNITYSDK_OFFSET(0x95B41A0)
#define SPINE_SKELETON_GET_UPDATECACHELIST_OFFSET UNITYSDK_OFFSET(0x95B41B0)
#define SPINE_SKELETON_GET_SLOTS_OFFSET UNITYSDK_OFFSET(0x95B41C0)
#define SPINE_SKELETON_GET_DRAWORDER_OFFSET UNITYSDK_OFFSET(0x95B41D0)
#define SPINE_SKELETON_GET_IKCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x95B41E0)
#define SPINE_SKELETON_GET_PATHCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x95B41F0)
#define SPINE_SKELETON_GET_PHYSICSCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x95B4200)
#define SPINE_SKELETON_GET_TRANSFORMCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x95B4210)
#define SPINE_SKELETON_GET_SKIN_OFFSET UNITYSDK_OFFSET(0x95B4220)
#define SPINE_SKELETON_SET_SKIN_OFFSET UNITYSDK_OFFSET(0x95B4230)
#define SPINE_SKELETON_GET_R_OFFSET UNITYSDK_OFFSET(0x95B4340)
#define SPINE_SKELETON_SET_R_OFFSET UNITYSDK_OFFSET(0x95B4350)
#define SPINE_SKELETON_GET_G_OFFSET UNITYSDK_OFFSET(0x95B4360)
#define SPINE_SKELETON_SET_G_OFFSET UNITYSDK_OFFSET(0x95B4370)
#define SPINE_SKELETON_GET_B_OFFSET UNITYSDK_OFFSET(0x95B4380)
#define SPINE_SKELETON_SET_B_OFFSET UNITYSDK_OFFSET(0x95B4390)
#define SPINE_SKELETON_GET_A_OFFSET UNITYSDK_OFFSET(0x95B43A0)
#define SPINE_SKELETON_SET_A_OFFSET UNITYSDK_OFFSET(0x95B43B0)
#define SPINE_SKELETON_GET_X_OFFSET UNITYSDK_OFFSET(0x95B43C0)
#define SPINE_SKELETON_SET_X_OFFSET UNITYSDK_OFFSET(0x95B43D0)
#define SPINE_SKELETON_GET_Y_OFFSET UNITYSDK_OFFSET(0x95B43E0)
#define SPINE_SKELETON_SET_Y_OFFSET UNITYSDK_OFFSET(0x95B43F0)
#define SPINE_SKELETON_GET_SCALEX_OFFSET UNITYSDK_OFFSET(0x95B4400)
#define SPINE_SKELETON_SET_SCALEX_OFFSET UNITYSDK_OFFSET(0x95B4410)
#define SPINE_SKELETON_GET_SCALEY_OFFSET UNITYSDK_OFFSET(0x95AAD70)
#define SPINE_SKELETON_SET_SCALEY_OFFSET UNITYSDK_OFFSET(0x95B4420)
#define SPINE_SKELETON_GET_FLIPX_OFFSET UNITYSDK_OFFSET(0x95B4430)
#define SPINE_SKELETON_SET_FLIPX_OFFSET UNITYSDK_OFFSET(0x95B4440)
#define SPINE_SKELETON_GET_FLIPY_OFFSET UNITYSDK_OFFSET(0x95B4480)
#define SPINE_SKELETON_SET_FLIPY_OFFSET UNITYSDK_OFFSET(0x95B4490)
#define SPINE_SKELETON_GET_TIME_OFFSET UNITYSDK_OFFSET(0x95B44D0)
#define SPINE_SKELETON_SET_TIME_OFFSET UNITYSDK_OFFSET(0x95B44E0)
#define SPINE_SKELETON_GET_ROOTBONE_OFFSET UNITYSDK_OFFSET(0x95B44F0)
#define SPINE_SKELETON_.CTOR_OFFSET UNITYSDK_OFFSET(0x95B4530)
#define SPINE_SKELETON_.CTOR_OFFSET UNITYSDK_OFFSET(0x95B59C0)
#define SPINE_SKELETON_UPDATECACHE_OFFSET UNITYSDK_OFFSET(0x95B5600)
#define SPINE_SKELETON_SORTIKCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x95B6DE0)
#define SPINE_SKELETON_SORTTRANSFORMCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x95B6FF0)
#define SPINE_SKELETON_SORTPATHCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x95B7260)
#define SPINE_SKELETON_SORTPATHCONSTRAINTATTACHMENT_OFFSET UNITYSDK_OFFSET(0x95B77D0)
#define SPINE_SKELETON_SORTPATHCONSTRAINTATTACHMENT_OFFSET UNITYSDK_OFFSET(0x95B7B30)
#define SPINE_SKELETON_SORTPHYSICSCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x95B7540)
#define SPINE_SKELETON_SORTBONE_OFFSET UNITYSDK_OFFSET(0x95B7680)
#define SPINE_SKELETON_SORTRESET_OFFSET UNITYSDK_OFFSET(0x95B7710)
#define SPINE_SKELETON_UPDATEWORLDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x95B7CE0)
#define SPINE_SKELETON_UPDATEWORLDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x95B7E50)
#define SPINE_SKELETON_PHYSICSTRANSLATE_OFFSET UNITYSDK_OFFSET(0x95B8200)
#define SPINE_SKELETON_PHYSICSROTATE_OFFSET UNITYSDK_OFFSET(0x95B8270)
#define SPINE_SKELETON_UPDATE_OFFSET UNITYSDK_OFFSET(0x95B83E0)
#define SPINE_SKELETON_SETTOSETUPPOSE_OFFSET UNITYSDK_OFFSET(0x95B83F0)
#define SPINE_SKELETON_SETBONESTOSETUPPOSE_OFFSET UNITYSDK_OFFSET(0x95B8410)
#define SPINE_SKELETON_SETSLOTSTOSETUPPOSE_OFFSET UNITYSDK_OFFSET(0x95B8720)
#define SPINE_SKELETON_FINDBONE_OFFSET UNITYSDK_OFFSET(0x95B87B0)
#define SPINE_SKELETON_FINDSLOT_OFFSET UNITYSDK_OFFSET(0x95B88C0)
#define SPINE_SKELETON_SETSKIN_OFFSET UNITYSDK_OFFSET(0x95B89D0)
#define SPINE_SKELETON_SETSKIN_OFFSET UNITYSDK_OFFSET(0x95B4240)
#define SPINE_SKELETON_GETATTACHMENT_OFFSET UNITYSDK_OFFSET(0x95B8A80)
#define SPINE_SKELETON_GETATTACHMENT_OFFSET UNITYSDK_OFFSET(0x95B8AC0)
#define SPINE_SKELETON_SETATTACHMENT_OFFSET UNITYSDK_OFFSET(0x95B8BA0)
#define SPINE_SKELETON_FINDIKCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x95B8D80)
#define SPINE_SKELETON_FINDTRANSFORMCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x95B8E90)
#define SPINE_SKELETON_FINDPATHCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x95B8FA0)
#define SPINE_SKELETON_FINDPHYSICSCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x95B90B0)
#define SPINE_SKELETON_GETBOUNDS_OFFSET UNITYSDK_OFFSET(0x95B91C0)
#define SPINE_SKELETON_TOSTRING_OFFSET UNITYSDK_OFFSET(0x95B96D0)
#define SPINE_SKELETON_.CCTOR_OFFSET UNITYSDK_OFFSET(0x95B96F0)

namespace Spine
{
	inline static constexpr unsigned int Skeleton_TypeDefinitionIndex = 35054;

	class Skeleton : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* quadTriangles; // 0x0
		::Spine::SkeletonData* data; // 0x10
		Il2CppObject* bones; // 0x18
		Il2CppObject* slots; // 0x20
		Il2CppObject* drawOrder; // 0x28
		Il2CppObject* ikConstraints; // 0x30
		Il2CppObject* transformConstraints; // 0x38
		Il2CppObject* pathConstraints; // 0x40
		Il2CppObject* physicsConstraints; // 0x48
		Il2CppObject* updateCache; // 0x50
		::Spine::Skin* skin; // 0x58
		::System::Single r; // 0x60
		::System::Single g; // 0x64
		::System::Single b; // 0x68
		::System::Single a; // 0x6C
		::System::Single x; // 0x70
		::System::Single y; // 0x74
		::System::Single scaleX; // 0x78
		::System::Single time; // 0x7C
		::System::Single scaleY; // 0x80

		::Spine::SkeletonData* get_Data()
		{
			return (return (::Spine::SkeletonData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_DATA_OFFSET))(nullptr);
		}

		Il2CppObject* get_Bones()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_BONES_OFFSET))(nullptr);
		}

		Il2CppObject* get_UpdateCacheList()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_UPDATECACHELIST_OFFSET))(nullptr);
		}

		Il2CppObject* get_Slots()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_SLOTS_OFFSET))(nullptr);
		}

		Il2CppObject* get_DrawOrder()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_DRAWORDER_OFFSET))(nullptr);
		}

		Il2CppObject* get_IkConstraints()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_IKCONSTRAINTS_OFFSET))(nullptr);
		}

		Il2CppObject* get_PathConstraints()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_PATHCONSTRAINTS_OFFSET))(nullptr);
		}

		Il2CppObject* get_PhysicsConstraints()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_PHYSICSCONSTRAINTS_OFFSET))(nullptr);
		}

		Il2CppObject* get_TransformConstraints()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_TRANSFORMCONSTRAINTS_OFFSET))(nullptr);
		}

		::Spine::Skin* get_Skin()
		{
			return (return (::Spine::Skin*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_SKIN_OFFSET))(nullptr);
		}

		::System::Void set_Skin(::Spine::Skin* arg)
		{
			((::System::Void(*)(::Spine::Skin*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SET_SKIN_OFFSET))(arg, nullptr);
		}

		::System::Single get_R()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_R_OFFSET))(nullptr);
		}

		::System::Void set_R(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SET_R_OFFSET))(arg, nullptr);
		}

		::System::Single get_G()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_G_OFFSET))(nullptr);
		}

		::System::Void set_G(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SET_G_OFFSET))(arg, nullptr);
		}

		::System::Single get_B()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_B_OFFSET))(nullptr);
		}

		::System::Void set_B(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SET_B_OFFSET))(arg, nullptr);
		}

		::System::Single get_A()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_A_OFFSET))(nullptr);
		}

		::System::Void set_A(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SET_A_OFFSET))(arg, nullptr);
		}

		::System::Single get_X()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_X_OFFSET))(nullptr);
		}

		::System::Void set_X(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SET_X_OFFSET))(arg, nullptr);
		}

		::System::Single get_Y()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_Y_OFFSET))(nullptr);
		}

		::System::Void set_Y(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SET_Y_OFFSET))(arg, nullptr);
		}

		::System::Single get_ScaleX()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_SCALEX_OFFSET))(nullptr);
		}

		::System::Void set_ScaleX(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SET_SCALEX_OFFSET))(arg, nullptr);
		}

		::System::Single get_ScaleY()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_SCALEY_OFFSET))(nullptr);
		}

		::System::Void set_ScaleY(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SET_SCALEY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_FlipX()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_FLIPX_OFFSET))(nullptr);
		}

		::System::Void set_FlipX(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SET_FLIPX_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_FlipY()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_FLIPY_OFFSET))(nullptr);
		}

		::System::Void set_FlipY(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SET_FLIPY_OFFSET))(arg, nullptr);
		}

		::System::Single get_Time()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_TIME_OFFSET))(nullptr);
		}

		::System::Void set_Time(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SET_TIME_OFFSET))(arg, nullptr);
		}

		::Spine::Bone* get_RootBone()
		{
			return (return (::Spine::Bone*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_ROOTBONE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Spine::SkeletonData* arg)
		{
			((::System::Void(*)(::Spine::SkeletonData*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Spine::Skeleton* arg)
		{
			((::System::Void(*)(::Spine::Skeleton*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateCache()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_UPDATECACHE_OFFSET))(nullptr);
		}

		::System::Void SortIkConstraint(::Spine::IkConstraint* arg)
		{
			((::System::Void(*)(::Spine::IkConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SORTIKCONSTRAINT_OFFSET))(arg, nullptr);
		}

		::System::Void SortTransformConstraint(::Spine::TransformConstraint* arg)
		{
			((::System::Void(*)(::Spine::TransformConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SORTTRANSFORMCONSTRAINT_OFFSET))(arg, nullptr);
		}

		::System::Void SortPathConstraint(::Spine::PathConstraint* arg)
		{
			((::System::Void(*)(::Spine::PathConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SORTPATHCONSTRAINT_OFFSET))(arg, nullptr);
		}

		::System::Void SortPathConstraintAttachment(::Spine::Skin* arg, ::System::Int32 arg, ::Spine::Bone* arg)
		{
			((::System::Void(*)(::Spine::Skin*, ::System::Int32, ::Spine::Bone*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SORTPATHCONSTRAINTATTACHMENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SortPathConstraintAttachment(::Spine::Attachment* arg, ::Spine::Bone* arg)
		{
			((::System::Void(*)(::Spine::Attachment*, ::Spine::Bone*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SORTPATHCONSTRAINTATTACHMENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SortPhysicsConstraint(::Spine::PhysicsConstraint* arg)
		{
			((::System::Void(*)(::Spine::PhysicsConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SORTPHYSICSCONSTRAINT_OFFSET))(arg, nullptr);
		}

		::System::Void SortBone(::Spine::Bone* arg)
		{
			((::System::Void(*)(::Spine::Bone*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SORTBONE_OFFSET))(arg, nullptr);
		}

		::System::Void SortReset(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SORTRESET_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateWorldTransform(Physics* arg)
		{
			((::System::Void(*)(Physics*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_UPDATEWORLDTRANSFORM_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateWorldTransform(Physics* arg, ::Spine::Bone* arg)
		{
			((::System::Void(*)(Physics*, ::Spine::Bone*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_UPDATEWORLDTRANSFORM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PhysicsTranslate(::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_PHYSICSTRANSLATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PhysicsRotate(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_PHYSICSROTATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Update(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void SetToSetupPose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SETTOSETUPPOSE_OFFSET))(nullptr);
		}

		::System::Void SetBonesToSetupPose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SETBONESTOSETUPPOSE_OFFSET))(nullptr);
		}

		::System::Void SetSlotsToSetupPose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SETSLOTSTOSETUPPOSE_OFFSET))(nullptr);
		}

		::Spine::Bone* FindBone(::System::String* str)
		{
			return (return (::Spine::Bone*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_FINDBONE_OFFSET))(str, nullptr);
		}

		::Spine::Slot* FindSlot(::System::String* str)
		{
			return (return (::Spine::Slot*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_FINDSLOT_OFFSET))(str, nullptr);
		}

		::System::Void SetSkin(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SETSKIN_OFFSET))(str, nullptr);
		}

		::System::Void SetSkin(::Spine::Skin* arg)
		{
			((::System::Void(*)(::Spine::Skin*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SETSKIN_OFFSET))(arg, nullptr);
		}

		::Spine::Attachment* GetAttachment(::System::String* str, ::System::String* str)
		{
			return (return (::Spine::Attachment*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GETATTACHMENT_OFFSET))(str, str, nullptr);
		}

		::Spine::Attachment* GetAttachment(::System::Int32 arg, ::System::String* str)
		{
			return (return (::Spine::Attachment*(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GETATTACHMENT_OFFSET))(arg, str, nullptr);
		}

		::System::Void SetAttachment(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SETATTACHMENT_OFFSET))(str, str, nullptr);
		}

		::Spine::IkConstraint* FindIkConstraint(::System::String* str)
		{
			return (return (::Spine::IkConstraint*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_FINDIKCONSTRAINT_OFFSET))(str, nullptr);
		}

		::Spine::TransformConstraint* FindTransformConstraint(::System::String* str)
		{
			return (return (::Spine::TransformConstraint*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_FINDTRANSFORMCONSTRAINT_OFFSET))(str, nullptr);
		}

		::Spine::PathConstraint* FindPathConstraint(::System::String* str)
		{
			return (return (::Spine::PathConstraint*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_FINDPATHCONSTRAINT_OFFSET))(str, nullptr);
		}

		::Spine::PhysicsConstraint* FindPhysicsConstraint(::System::String* str)
		{
			return (return (::Spine::PhysicsConstraint*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_FINDPHYSICSCONSTRAINT_OFFSET))(str, nullptr);
		}

		::System::Void GetBounds(float&* arg, float&* arg, float&* arg, float&* arg, ::System::Object[]&* arg, ::Spine::SkeletonClipping* arg)
		{
			((::System::Void(*)(float&*, float&*, float&*, float&*, ::System::Object[]&*, ::Spine::SkeletonClipping*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GETBOUNDS_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_.CCTOR_OFFSET))(nullptr);
		}

	};
}

