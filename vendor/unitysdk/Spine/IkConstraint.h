#pragma once
#include "../unitysdk.h"

namespace Spine { class IkConstraintData; }
namespace Spine { class Bone; }
namespace Spine { class Skeleton; }
namespace Spine { class IkConstraint; }

#define SPINE_IKCONSTRAINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x95AC4A0)
#define SPINE_IKCONSTRAINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x95AC880)
#define SPINE_IKCONSTRAINT_SETTOSETUPPOSE_OFFSET UNITYSDK_OFFSET(0x95AC8D0)
#define SPINE_IKCONSTRAINT_UPDATE_OFFSET UNITYSDK_OFFSET(0x95AC910)
#define SPINE_IKCONSTRAINT_GET_BONES_OFFSET UNITYSDK_OFFSET(0x95AE090)
#define SPINE_IKCONSTRAINT_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x95AE0A0)
#define SPINE_IKCONSTRAINT_SET_TARGET_OFFSET UNITYSDK_OFFSET(0x95AE0B0)
#define SPINE_IKCONSTRAINT_GET_MIX_OFFSET UNITYSDK_OFFSET(0x95AE0C0)
#define SPINE_IKCONSTRAINT_SET_MIX_OFFSET UNITYSDK_OFFSET(0x95AE0D0)
#define SPINE_IKCONSTRAINT_GET_SOFTNESS_OFFSET UNITYSDK_OFFSET(0x95AE0E0)
#define SPINE_IKCONSTRAINT_SET_SOFTNESS_OFFSET UNITYSDK_OFFSET(0x95AE0F0)
#define SPINE_IKCONSTRAINT_GET_BENDDIRECTION_OFFSET UNITYSDK_OFFSET(0x95AE100)
#define SPINE_IKCONSTRAINT_SET_BENDDIRECTION_OFFSET UNITYSDK_OFFSET(0x95AE110)
#define SPINE_IKCONSTRAINT_GET_COMPRESS_OFFSET UNITYSDK_OFFSET(0x95AE120)
#define SPINE_IKCONSTRAINT_SET_COMPRESS_OFFSET UNITYSDK_OFFSET(0x95AE130)
#define SPINE_IKCONSTRAINT_GET_STRETCH_OFFSET UNITYSDK_OFFSET(0x95AE140)
#define SPINE_IKCONSTRAINT_SET_STRETCH_OFFSET UNITYSDK_OFFSET(0x95AE150)
#define SPINE_IKCONSTRAINT_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x95AE160)
#define SPINE_IKCONSTRAINT_GET_DATA_OFFSET UNITYSDK_OFFSET(0x95AE170)
#define SPINE_IKCONSTRAINT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x95AE180)
#define SPINE_IKCONSTRAINT_APPLY_OFFSET UNITYSDK_OFFSET(0x95ACA30)
#define SPINE_IKCONSTRAINT_APPLY_OFFSET UNITYSDK_OFFSET(0x95AD130)

namespace Spine
{
	inline static constexpr unsigned int IkConstraint_TypeDefinitionIndex = 35038;

	class IkConstraint : public Il2CppObject
	{
	public:
		::Spine::IkConstraintData* data; // 0x10
		Il2CppObject* bones; // 0x18
		::Spine::Bone* target; // 0x20
		::System::Int32 bendDirection; // 0x28
		::System::Boolean compress; // 0x2C
		::System::Boolean stretch; // 0x2D
		::System::Single mix; // 0x30
		::System::Single softness; // 0x34
		::System::Boolean active; // 0x38

		::System::Void .ctor(::Spine::IkConstraintData* arg, ::Spine::Skeleton* arg)
		{
			((::System::Void(*)(::Spine::IkConstraintData*, ::Spine::Skeleton*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::Spine::IkConstraint* arg, ::Spine::Skeleton* arg)
		{
			((::System::Void(*)(::Spine::IkConstraint*, ::Spine::Skeleton*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetToSetupPose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT_SETTOSETUPPOSE_OFFSET))(nullptr);
		}

		::System::Void Update(Physics* arg)
		{
			((::System::Void(*)(Physics*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT_UPDATE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Bones()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT_GET_BONES_OFFSET))(nullptr);
		}

		::Spine::Bone* get_Target()
		{
			return (return (::Spine::Bone*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT_GET_TARGET_OFFSET))(nullptr);
		}

		::System::Void set_Target(::Spine::Bone* arg)
		{
			((::System::Void(*)(::Spine::Bone*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT_SET_TARGET_OFFSET))(arg, nullptr);
		}

		::System::Single get_Mix()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT_GET_MIX_OFFSET))(nullptr);
		}

		::System::Void set_Mix(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT_SET_MIX_OFFSET))(arg, nullptr);
		}

		::System::Single get_Softness()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT_GET_SOFTNESS_OFFSET))(nullptr);
		}

		::System::Void set_Softness(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT_SET_SOFTNESS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BendDirection()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT_GET_BENDDIRECTION_OFFSET))(nullptr);
		}

		::System::Void set_BendDirection(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT_SET_BENDDIRECTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Compress()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT_GET_COMPRESS_OFFSET))(nullptr);
		}

		::System::Void set_Compress(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT_SET_COMPRESS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Stretch()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT_GET_STRETCH_OFFSET))(nullptr);
		}

		::System::Void set_Stretch(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT_SET_STRETCH_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Active()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT_GET_ACTIVE_OFFSET))(nullptr);
		}

		::Spine::IkConstraintData* get_Data()
		{
			return (return (::Spine::IkConstraintData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT_GET_DATA_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void Apply(::Spine::Bone* arg, ::System::Single arg, ::System::Single arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Single arg)
		{
			((::System::Void(*)(::Spine::Bone*, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT_APPLY_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Apply(::Spine::Bone* arg, ::Spine::Bone* arg, ::System::Single arg, ::System::Single arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::Spine::Bone*, ::Spine::Bone*, ::System::Single, ::System::Single, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT_APPLY_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

