#pragma once
#include "../unitysdk.h"

namespace Spine { class BoneData; }
namespace Spine { class Skeleton; }
namespace Spine { class Bone; }
namespace Spine { class Inherit; }

#define SPINE_BONE_GET_DATA_OFFSET UNITYSDK_OFFSET(0x95A9730)
#define SPINE_BONE_GET_SKELETON_OFFSET UNITYSDK_OFFSET(0x95A9740)
#define SPINE_BONE_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x95A9750)
#define SPINE_BONE_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x95A9760)
#define SPINE_BONE_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x95A9770)
#define SPINE_BONE_GET_X_OFFSET UNITYSDK_OFFSET(0x95A9780)
#define SPINE_BONE_SET_X_OFFSET UNITYSDK_OFFSET(0x95A9790)
#define SPINE_BONE_GET_Y_OFFSET UNITYSDK_OFFSET(0x95A97A0)
#define SPINE_BONE_SET_Y_OFFSET UNITYSDK_OFFSET(0x95A97B0)
#define SPINE_BONE_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x95A97C0)
#define SPINE_BONE_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x95A97D0)
#define SPINE_BONE_GET_SCALEX_OFFSET UNITYSDK_OFFSET(0x95A97E0)
#define SPINE_BONE_SET_SCALEX_OFFSET UNITYSDK_OFFSET(0x95A97F0)
#define SPINE_BONE_GET_SCALEY_OFFSET UNITYSDK_OFFSET(0x95A9800)
#define SPINE_BONE_SET_SCALEY_OFFSET UNITYSDK_OFFSET(0x95A9810)
#define SPINE_BONE_GET_SHEARX_OFFSET UNITYSDK_OFFSET(0x95A9820)
#define SPINE_BONE_SET_SHEARX_OFFSET UNITYSDK_OFFSET(0x95A9830)
#define SPINE_BONE_GET_SHEARY_OFFSET UNITYSDK_OFFSET(0x95A9840)
#define SPINE_BONE_SET_SHEARY_OFFSET UNITYSDK_OFFSET(0x95A9850)
#define SPINE_BONE_GET_INHERIT_OFFSET UNITYSDK_OFFSET(0x95A9860)
#define SPINE_BONE_SET_INHERIT_OFFSET UNITYSDK_OFFSET(0x95A9870)
#define SPINE_BONE_GET_APPLIEDROTATION_OFFSET UNITYSDK_OFFSET(0x95A9880)
#define SPINE_BONE_SET_APPLIEDROTATION_OFFSET UNITYSDK_OFFSET(0x95A9890)
#define SPINE_BONE_GET_AX_OFFSET UNITYSDK_OFFSET(0x95A98A0)
#define SPINE_BONE_SET_AX_OFFSET UNITYSDK_OFFSET(0x95A98B0)
#define SPINE_BONE_GET_AY_OFFSET UNITYSDK_OFFSET(0x95A98C0)
#define SPINE_BONE_SET_AY_OFFSET UNITYSDK_OFFSET(0x95A98D0)
#define SPINE_BONE_GET_ASCALEX_OFFSET UNITYSDK_OFFSET(0x95A98E0)
#define SPINE_BONE_SET_ASCALEX_OFFSET UNITYSDK_OFFSET(0x95A98F0)
#define SPINE_BONE_GET_ASCALEY_OFFSET UNITYSDK_OFFSET(0x95A9900)
#define SPINE_BONE_SET_ASCALEY_OFFSET UNITYSDK_OFFSET(0x95A9910)
#define SPINE_BONE_GET_ASHEARX_OFFSET UNITYSDK_OFFSET(0x95A9920)
#define SPINE_BONE_SET_ASHEARX_OFFSET UNITYSDK_OFFSET(0x95A9930)
#define SPINE_BONE_GET_ASHEARY_OFFSET UNITYSDK_OFFSET(0x95A9940)
#define SPINE_BONE_SET_ASHEARY_OFFSET UNITYSDK_OFFSET(0x95A9950)
#define SPINE_BONE_GET_A_OFFSET UNITYSDK_OFFSET(0x95A9960)
#define SPINE_BONE_SET_A_OFFSET UNITYSDK_OFFSET(0x95A9970)
#define SPINE_BONE_GET_B_OFFSET UNITYSDK_OFFSET(0x95A9980)
#define SPINE_BONE_SET_B_OFFSET UNITYSDK_OFFSET(0x95A9990)
#define SPINE_BONE_GET_C_OFFSET UNITYSDK_OFFSET(0x95A99A0)
#define SPINE_BONE_SET_C_OFFSET UNITYSDK_OFFSET(0x95A99B0)
#define SPINE_BONE_GET_D_OFFSET UNITYSDK_OFFSET(0x95A99C0)
#define SPINE_BONE_SET_D_OFFSET UNITYSDK_OFFSET(0x95A99D0)
#define SPINE_BONE_GET_WORLDX_OFFSET UNITYSDK_OFFSET(0x95A99E0)
#define SPINE_BONE_SET_WORLDX_OFFSET UNITYSDK_OFFSET(0x95A99F0)
#define SPINE_BONE_GET_WORLDY_OFFSET UNITYSDK_OFFSET(0x95A9A00)
#define SPINE_BONE_SET_WORLDY_OFFSET UNITYSDK_OFFSET(0x95A9A10)
#define SPINE_BONE_GET_WORLDROTATIONX_OFFSET UNITYSDK_OFFSET(0x95A9A20)
#define SPINE_BONE_GET_WORLDROTATIONY_OFFSET UNITYSDK_OFFSET(0x95A9AF0)
#define SPINE_BONE_GET_WORLDSCALEX_OFFSET UNITYSDK_OFFSET(0x95A9BC0)
#define SPINE_BONE_GET_WORLDSCALEY_OFFSET UNITYSDK_OFFSET(0x95A9C40)
#define SPINE_BONE_.CTOR_OFFSET UNITYSDK_OFFSET(0x95A9CC0)
#define SPINE_BONE_.CTOR_OFFSET UNITYSDK_OFFSET(0x95A9F00)
#define SPINE_BONE_UPDATE_OFFSET UNITYSDK_OFFSET(0x95AA0C0)
#define SPINE_BONE_UPDATEWORLDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x95AAD10)
#define SPINE_BONE_UPDATEWORLDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x95AA120)
#define SPINE_BONE_SETTOSETUPPOSE_OFFSET UNITYSDK_OFFSET(0x95A9E90)
#define SPINE_BONE_UPDATEAPPLIEDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x95AAE40)
#define SPINE_BONE_WORLDTOLOCAL_OFFSET UNITYSDK_OFFSET(0x95AB820)
#define SPINE_BONE_LOCALTOWORLD_OFFSET UNITYSDK_OFFSET(0x95A8400)
#define SPINE_BONE_WORLDTOPARENT_OFFSET UNITYSDK_OFFSET(0x95AB8B0)
#define SPINE_BONE_PARENTTOWORLD_OFFSET UNITYSDK_OFFSET(0x95AB950)
#define SPINE_BONE_WORLDTOLOCALROTATION_OFFSET UNITYSDK_OFFSET(0x95AB9B0)
#define SPINE_BONE_LOCALTOWORLDROTATION_OFFSET UNITYSDK_OFFSET(0x95ABB20)
#define SPINE_BONE_ROTATEWORLD_OFFSET UNITYSDK_OFFSET(0x95ABC90)
#define SPINE_BONE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x95ABD40)

namespace Spine
{
	inline static constexpr unsigned int Bone_TypeDefinitionIndex = 35029;

	class Bone : public Il2CppObject
	{
	public:
		::System::Boolean yDown; // 0x0
		::Spine::BoneData* data; // 0x10
		::Spine::Skeleton* skeleton; // 0x18
		::Spine::Bone* parent; // 0x20
		Il2CppObject* children; // 0x28
		::System::Single x; // 0x30
		::System::Single y; // 0x34
		::System::Single rotation; // 0x38
		::System::Single scaleX; // 0x3C
		::System::Single scaleY; // 0x40
		::System::Single shearX; // 0x44
		::System::Single shearY; // 0x48
		::System::Single ax; // 0x4C
		::System::Single ay; // 0x50
		::System::Single arotation; // 0x54
		::System::Single ascaleX; // 0x58
		::System::Single ascaleY; // 0x5C
		::System::Single ashearX; // 0x60
		::System::Single ashearY; // 0x64
		::System::Single a; // 0x68
		::System::Single b; // 0x6C
		::System::Single worldX; // 0x70
		::System::Single c; // 0x74
		::System::Single d; // 0x78
		::System::Single worldY; // 0x7C
		::Spine::Inherit* inherit; // 0x80
		::System::Boolean sorted; // 0x84
		::System::Boolean active; // 0x85

		::Spine::BoneData* get_Data()
		{
			return (return (::Spine::BoneData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_DATA_OFFSET))(nullptr);
		}

		::Spine::Skeleton* get_Skeleton()
		{
			return (return (::Spine::Skeleton*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_SKELETON_OFFSET))(nullptr);
		}

		::Spine::Bone* get_Parent()
		{
			return (return (::Spine::Bone*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_PARENT_OFFSET))(nullptr);
		}

		Il2CppObject* get_Children()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_CHILDREN_OFFSET))(nullptr);
		}

		::System::Boolean get_Active()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_ACTIVE_OFFSET))(nullptr);
		}

		::System::Single get_X()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_X_OFFSET))(nullptr);
		}

		::System::Void set_X(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_X_OFFSET))(arg, nullptr);
		}

		::System::Single get_Y()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_Y_OFFSET))(nullptr);
		}

		::System::Void set_Y(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_Y_OFFSET))(arg, nullptr);
		}

		::System::Single get_Rotation()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_ROTATION_OFFSET))(nullptr);
		}

		::System::Void set_Rotation(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_ROTATION_OFFSET))(arg, nullptr);
		}

		::System::Single get_ScaleX()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_SCALEX_OFFSET))(nullptr);
		}

		::System::Void set_ScaleX(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_SCALEX_OFFSET))(arg, nullptr);
		}

		::System::Single get_ScaleY()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_SCALEY_OFFSET))(nullptr);
		}

		::System::Void set_ScaleY(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_SCALEY_OFFSET))(arg, nullptr);
		}

		::System::Single get_ShearX()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_SHEARX_OFFSET))(nullptr);
		}

		::System::Void set_ShearX(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_SHEARX_OFFSET))(arg, nullptr);
		}

		::System::Single get_ShearY()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_SHEARY_OFFSET))(nullptr);
		}

		::System::Void set_ShearY(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_SHEARY_OFFSET))(arg, nullptr);
		}

		::Spine::Inherit* get_Inherit()
		{
			return (return (::Spine::Inherit*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_INHERIT_OFFSET))(nullptr);
		}

		::System::Void set_Inherit(::Spine::Inherit* arg)
		{
			((::System::Void(*)(::Spine::Inherit*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_INHERIT_OFFSET))(arg, nullptr);
		}

		::System::Single get_AppliedRotation()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_APPLIEDROTATION_OFFSET))(nullptr);
		}

		::System::Void set_AppliedRotation(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_APPLIEDROTATION_OFFSET))(arg, nullptr);
		}

		::System::Single get_AX()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_AX_OFFSET))(nullptr);
		}

		::System::Void set_AX(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_AX_OFFSET))(arg, nullptr);
		}

		::System::Single get_AY()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_AY_OFFSET))(nullptr);
		}

		::System::Void set_AY(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_AY_OFFSET))(arg, nullptr);
		}

		::System::Single get_AScaleX()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_ASCALEX_OFFSET))(nullptr);
		}

		::System::Void set_AScaleX(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_ASCALEX_OFFSET))(arg, nullptr);
		}

		::System::Single get_AScaleY()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_ASCALEY_OFFSET))(nullptr);
		}

		::System::Void set_AScaleY(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_ASCALEY_OFFSET))(arg, nullptr);
		}

		::System::Single get_AShearX()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_ASHEARX_OFFSET))(nullptr);
		}

		::System::Void set_AShearX(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_ASHEARX_OFFSET))(arg, nullptr);
		}

		::System::Single get_AShearY()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_ASHEARY_OFFSET))(nullptr);
		}

		::System::Void set_AShearY(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_ASHEARY_OFFSET))(arg, nullptr);
		}

		::System::Single get_A()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_A_OFFSET))(nullptr);
		}

		::System::Void set_A(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_A_OFFSET))(arg, nullptr);
		}

		::System::Single get_B()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_B_OFFSET))(nullptr);
		}

		::System::Void set_B(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_B_OFFSET))(arg, nullptr);
		}

		::System::Single get_C()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_C_OFFSET))(nullptr);
		}

		::System::Void set_C(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_C_OFFSET))(arg, nullptr);
		}

		::System::Single get_D()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_D_OFFSET))(nullptr);
		}

		::System::Void set_D(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_D_OFFSET))(arg, nullptr);
		}

		::System::Single get_WorldX()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_WORLDX_OFFSET))(nullptr);
		}

		::System::Void set_WorldX(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_WORLDX_OFFSET))(arg, nullptr);
		}

		::System::Single get_WorldY()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_WORLDY_OFFSET))(nullptr);
		}

		::System::Void set_WorldY(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_WORLDY_OFFSET))(arg, nullptr);
		}

		::System::Single get_WorldRotationX()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_WORLDROTATIONX_OFFSET))(nullptr);
		}

		::System::Single get_WorldRotationY()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_WORLDROTATIONY_OFFSET))(nullptr);
		}

		::System::Single get_WorldScaleX()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_WORLDSCALEX_OFFSET))(nullptr);
		}

		::System::Single get_WorldScaleY()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_WORLDSCALEY_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Spine::BoneData* arg, ::Spine::Skeleton* arg, ::Spine::Bone* arg)
		{
			((::System::Void(*)(::Spine::BoneData*, ::Spine::Skeleton*, ::Spine::Bone*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::Spine::Bone* arg, ::Spine::Skeleton* arg, ::Spine::Bone* arg)
		{
			((::System::Void(*)(::Spine::Bone*, ::Spine::Skeleton*, ::Spine::Bone*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Update(Physics* arg)
		{
			((::System::Void(*)(Physics*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateWorldTransform()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_UPDATEWORLDTRANSFORM_OFFSET))(nullptr);
		}

		::System::Void UpdateWorldTransform(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_UPDATEWORLDTRANSFORM_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetToSetupPose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_SETTOSETUPPOSE_OFFSET))(nullptr);
		}

		::System::Void UpdateAppliedTransform()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_UPDATEAPPLIEDTRANSFORM_OFFSET))(nullptr);
		}

		::System::Void WorldToLocal(::System::Single arg, ::System::Single arg, float&* arg, float&* arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, float&*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_WORLDTOLOCAL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void LocalToWorld(::System::Single arg, ::System::Single arg, float&* arg, float&* arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, float&*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_LOCALTOWORLD_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void WorldToParent(::System::Single arg, ::System::Single arg, float&* arg, float&* arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, float&*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_WORLDTOPARENT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ParentToWorld(::System::Single arg, ::System::Single arg, float&* arg, float&* arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, float&*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_PARENTTOWORLD_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Single WorldToLocalRotation(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_WORLDTOLOCALROTATION_OFFSET))(arg, nullptr);
		}

		::System::Single LocalToWorldRotation(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_LOCALTOWORLDROTATION_OFFSET))(arg, nullptr);
		}

		::System::Void RotateWorld(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_ROTATEWORLD_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_TOSTRING_OFFSET))(nullptr);
		}

	};
}

