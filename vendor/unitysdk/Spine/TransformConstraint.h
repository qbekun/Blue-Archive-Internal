#pragma once
#include "../unitysdk.h"

namespace Spine { class TransformConstraintData; }
namespace Spine { class Bone; }
namespace Spine { class Skeleton; }
namespace Spine { class TransformConstraint; }

#define SPINE_TRANSFORMCONSTRAINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x95E0380)
#define SPINE_TRANSFORMCONSTRAINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x95E0730)
#define SPINE_TRANSFORMCONSTRAINT_SETTOSETUPPOSE_OFFSET UNITYSDK_OFFSET(0x95E07A0)
#define SPINE_TRANSFORMCONSTRAINT_UPDATE_OFFSET UNITYSDK_OFFSET(0x95E0800)
#define SPINE_TRANSFORMCONSTRAINT_APPLYABSOLUTEWORLD_OFFSET UNITYSDK_OFFSET(0x95E13A0)
#define SPINE_TRANSFORMCONSTRAINT_APPLYRELATIVEWORLD_OFFSET UNITYSDK_OFFSET(0x95E0D40)
#define SPINE_TRANSFORMCONSTRAINT_APPLYABSOLUTELOCAL_OFFSET UNITYSDK_OFFSET(0x95E0AB0)
#define SPINE_TRANSFORMCONSTRAINT_APPLYRELATIVELOCAL_OFFSET UNITYSDK_OFFSET(0x95E08A0)
#define SPINE_TRANSFORMCONSTRAINT_GET_BONES_OFFSET UNITYSDK_OFFSET(0x95E1B40)
#define SPINE_TRANSFORMCONSTRAINT_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x95E1B50)
#define SPINE_TRANSFORMCONSTRAINT_SET_TARGET_OFFSET UNITYSDK_OFFSET(0x95E1B60)
#define SPINE_TRANSFORMCONSTRAINT_GET_MIXROTATE_OFFSET UNITYSDK_OFFSET(0x95E1B70)
#define SPINE_TRANSFORMCONSTRAINT_SET_MIXROTATE_OFFSET UNITYSDK_OFFSET(0x95E1B80)
#define SPINE_TRANSFORMCONSTRAINT_GET_MIXX_OFFSET UNITYSDK_OFFSET(0x95E1B90)
#define SPINE_TRANSFORMCONSTRAINT_SET_MIXX_OFFSET UNITYSDK_OFFSET(0x95E1BA0)
#define SPINE_TRANSFORMCONSTRAINT_GET_MIXY_OFFSET UNITYSDK_OFFSET(0x95E1BB0)
#define SPINE_TRANSFORMCONSTRAINT_SET_MIXY_OFFSET UNITYSDK_OFFSET(0x95E1BC0)
#define SPINE_TRANSFORMCONSTRAINT_GET_MIXSCALEX_OFFSET UNITYSDK_OFFSET(0x95E1BD0)
#define SPINE_TRANSFORMCONSTRAINT_SET_MIXSCALEX_OFFSET UNITYSDK_OFFSET(0x95E1BE0)
#define SPINE_TRANSFORMCONSTRAINT_GET_MIXSCALEY_OFFSET UNITYSDK_OFFSET(0x95E1BF0)
#define SPINE_TRANSFORMCONSTRAINT_SET_MIXSCALEY_OFFSET UNITYSDK_OFFSET(0x95E1C00)
#define SPINE_TRANSFORMCONSTRAINT_GET_MIXSHEARY_OFFSET UNITYSDK_OFFSET(0x95E1C10)
#define SPINE_TRANSFORMCONSTRAINT_SET_MIXSHEARY_OFFSET UNITYSDK_OFFSET(0x95E1C20)
#define SPINE_TRANSFORMCONSTRAINT_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x95E1C30)
#define SPINE_TRANSFORMCONSTRAINT_GET_DATA_OFFSET UNITYSDK_OFFSET(0x95E1C40)
#define SPINE_TRANSFORMCONSTRAINT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x95E1C50)

namespace Spine
{
	inline static constexpr unsigned int TransformConstraint_TypeDefinitionIndex = 35073;

	class TransformConstraint : public Il2CppObject
	{
	public:
		::Spine::TransformConstraintData* data; // 0x10
		Il2CppObject* bones; // 0x18
		::Spine::Bone* target; // 0x20
		::System::Single mixRotate; // 0x28
		::System::Single mixX; // 0x2C
		::System::Single mixY; // 0x30
		::System::Single mixScaleX; // 0x34
		::System::Single mixScaleY; // 0x38
		::System::Single mixShearY; // 0x3C
		::System::Boolean active; // 0x40

		::System::Void .ctor(::Spine::TransformConstraintData* arg, ::Spine::Skeleton* arg)
		{
			((::System::Void(*)(::Spine::TransformConstraintData*, ::Spine::Skeleton*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::Spine::TransformConstraint* arg, ::Spine::Skeleton* arg)
		{
			((::System::Void(*)(::Spine::TransformConstraint*, ::Spine::Skeleton*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetToSetupPose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_SETTOSETUPPOSE_OFFSET))(nullptr);
		}

		::System::Void Update(Physics* arg)
		{
			((::System::Void(*)(Physics*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyAbsoluteWorld()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_APPLYABSOLUTEWORLD_OFFSET))(nullptr);
		}

		::System::Void ApplyRelativeWorld()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_APPLYRELATIVEWORLD_OFFSET))(nullptr);
		}

		::System::Void ApplyAbsoluteLocal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_APPLYABSOLUTELOCAL_OFFSET))(nullptr);
		}

		::System::Void ApplyRelativeLocal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_APPLYRELATIVELOCAL_OFFSET))(nullptr);
		}

		Il2CppObject* get_Bones()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_GET_BONES_OFFSET))(nullptr);
		}

		::Spine::Bone* get_Target()
		{
			return (return (::Spine::Bone*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_GET_TARGET_OFFSET))(nullptr);
		}

		::System::Void set_Target(::Spine::Bone* arg)
		{
			((::System::Void(*)(::Spine::Bone*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_SET_TARGET_OFFSET))(arg, nullptr);
		}

		::System::Single get_MixRotate()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_GET_MIXROTATE_OFFSET))(nullptr);
		}

		::System::Void set_MixRotate(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_SET_MIXROTATE_OFFSET))(arg, nullptr);
		}

		::System::Single get_MixX()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_GET_MIXX_OFFSET))(nullptr);
		}

		::System::Void set_MixX(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_SET_MIXX_OFFSET))(arg, nullptr);
		}

		::System::Single get_MixY()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_GET_MIXY_OFFSET))(nullptr);
		}

		::System::Void set_MixY(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_SET_MIXY_OFFSET))(arg, nullptr);
		}

		::System::Single get_MixScaleX()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_GET_MIXSCALEX_OFFSET))(nullptr);
		}

		::System::Void set_MixScaleX(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_SET_MIXSCALEX_OFFSET))(arg, nullptr);
		}

		::System::Single get_MixScaleY()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_GET_MIXSCALEY_OFFSET))(nullptr);
		}

		::System::Void set_MixScaleY(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_SET_MIXSCALEY_OFFSET))(arg, nullptr);
		}

		::System::Single get_MixShearY()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_GET_MIXSHEARY_OFFSET))(nullptr);
		}

		::System::Void set_MixShearY(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_SET_MIXSHEARY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Active()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_GET_ACTIVE_OFFSET))(nullptr);
		}

		::Spine::TransformConstraintData* get_Data()
		{
			return (return (::Spine::TransformConstraintData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_GET_DATA_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_TOSTRING_OFFSET))(nullptr);
		}

	};
}

