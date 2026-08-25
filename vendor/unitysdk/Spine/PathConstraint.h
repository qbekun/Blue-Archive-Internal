#pragma once
#include "../unitysdk.h"

namespace Spine { class PathConstraintData; }
namespace Spine { class Slot; }
namespace Spine { class Skeleton; }
namespace Spine { class PathConstraint; }
namespace Spine { class PathAttachment; }

#define SPINE_PATHCONSTRAINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x95AEC60)
#define SPINE_PATHCONSTRAINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x95AF180)
#define SPINE_PATHCONSTRAINT_ARRAYSFILL_OFFSET UNITYSDK_OFFSET(0x95AF1E0)
#define SPINE_PATHCONSTRAINT_SETTOSETUPPOSE_OFFSET UNITYSDK_OFFSET(0x95AF240)
#define SPINE_PATHCONSTRAINT_UPDATE_OFFSET UNITYSDK_OFFSET(0x95AF290)
#define SPINE_PATHCONSTRAINT_COMPUTEWORLDPOSITIONS_OFFSET UNITYSDK_OFFSET(0x95B0480)
#define SPINE_PATHCONSTRAINT_ADDBEFOREPOSITION_OFFSET UNITYSDK_OFFSET(0x95B1FD0)
#define SPINE_PATHCONSTRAINT_ADDAFTERPOSITION_OFFSET UNITYSDK_OFFSET(0x95B2210)
#define SPINE_PATHCONSTRAINT_ADDCURVEPOSITION_OFFSET UNITYSDK_OFFSET(0x95B2460)
#define SPINE_PATHCONSTRAINT_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x95B27F0)
#define SPINE_PATHCONSTRAINT_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x95B2800)
#define SPINE_PATHCONSTRAINT_GET_SPACING_OFFSET UNITYSDK_OFFSET(0x95B2810)
#define SPINE_PATHCONSTRAINT_SET_SPACING_OFFSET UNITYSDK_OFFSET(0x95B2820)
#define SPINE_PATHCONSTRAINT_GET_MIXROTATE_OFFSET UNITYSDK_OFFSET(0x95B2830)
#define SPINE_PATHCONSTRAINT_SET_MIXROTATE_OFFSET UNITYSDK_OFFSET(0x95B2840)
#define SPINE_PATHCONSTRAINT_GET_MIXX_OFFSET UNITYSDK_OFFSET(0x95B2850)
#define SPINE_PATHCONSTRAINT_SET_MIXX_OFFSET UNITYSDK_OFFSET(0x95B2860)
#define SPINE_PATHCONSTRAINT_GET_MIXY_OFFSET UNITYSDK_OFFSET(0x95B2870)
#define SPINE_PATHCONSTRAINT_SET_MIXY_OFFSET UNITYSDK_OFFSET(0x95B2880)
#define SPINE_PATHCONSTRAINT_GET_BONES_OFFSET UNITYSDK_OFFSET(0x95B2890)
#define SPINE_PATHCONSTRAINT_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x95B28A0)
#define SPINE_PATHCONSTRAINT_SET_TARGET_OFFSET UNITYSDK_OFFSET(0x95B28B0)
#define SPINE_PATHCONSTRAINT_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x95B28C0)
#define SPINE_PATHCONSTRAINT_GET_DATA_OFFSET UNITYSDK_OFFSET(0x95B28D0)
#define SPINE_PATHCONSTRAINT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x95B28E0)

namespace Spine
{
	inline static constexpr unsigned int PathConstraint_TypeDefinitionIndex = 35046;

	class PathConstraint : public Il2CppObject
	{
	public:
		::System::Int32 NONE; // 0x0
		::System::Int32 BEFORE; // 0x0
		::System::Int32 AFTER; // 0x0
		::System::Single Epsilon; // 0x0
		::Spine::PathConstraintData* data; // 0x10
		Il2CppObject* bones; // 0x18
		::Spine::Slot* target; // 0x20
		::System::Single position; // 0x28
		::System::Single spacing; // 0x2C
		::System::Single mixRotate; // 0x30
		::System::Single mixX; // 0x34
		::System::Single mixY; // 0x38
		::System::Boolean active; // 0x3C
		Il2CppObject* spaces; // 0x40
		Il2CppObject* positions; // 0x48
		Il2CppObject* world; // 0x50
		Il2CppObject* curves; // 0x58
		Il2CppObject* lengths; // 0x60
		::Il2CppArray<::System::Object*>* segments; // 0x68

		::System::Void .ctor(::Spine::PathConstraintData* arg, ::Spine::Skeleton* arg)
		{
			((::System::Void(*)(::Spine::PathConstraintData*, ::Spine::Skeleton*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::Spine::PathConstraint* arg, ::Spine::Skeleton* arg)
		{
			((::System::Void(*)(::Spine::PathConstraint*, ::Spine::Skeleton*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ArraysFill(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_ARRAYSFILL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetToSetupPose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_SETTOSETUPPOSE_OFFSET))(nullptr);
		}

		::System::Void Update(Physics* arg)
		{
			((::System::Void(*)(Physics*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_UPDATE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ComputeWorldPositions(::Spine::PathAttachment* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Spine::PathAttachment*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_COMPUTEWORLDPOSITIONS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddBeforePosition(::System::Single arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Single, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_ADDBEFOREPOSITION_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void AddAfterPosition(::System::Single arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Single, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_ADDAFTERPOSITION_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void AddCurvePosition(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_ADDCURVEPOSITION_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Single get_Position()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void set_Position(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::System::Single get_Spacing()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_GET_SPACING_OFFSET))(nullptr);
		}

		::System::Void set_Spacing(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_SET_SPACING_OFFSET))(arg, nullptr);
		}

		::System::Single get_MixRotate()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_GET_MIXROTATE_OFFSET))(nullptr);
		}

		::System::Void set_MixRotate(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_SET_MIXROTATE_OFFSET))(arg, nullptr);
		}

		::System::Single get_MixX()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_GET_MIXX_OFFSET))(nullptr);
		}

		::System::Void set_MixX(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_SET_MIXX_OFFSET))(arg, nullptr);
		}

		::System::Single get_MixY()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_GET_MIXY_OFFSET))(nullptr);
		}

		::System::Void set_MixY(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_SET_MIXY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Bones()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_GET_BONES_OFFSET))(nullptr);
		}

		::Spine::Slot* get_Target()
		{
			return (return (::Spine::Slot*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_GET_TARGET_OFFSET))(nullptr);
		}

		::System::Void set_Target(::Spine::Slot* arg)
		{
			((::System::Void(*)(::Spine::Slot*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_SET_TARGET_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Active()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_GET_ACTIVE_OFFSET))(nullptr);
		}

		::Spine::PathConstraintData* get_Data()
		{
			return (return (::Spine::PathConstraintData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_GET_DATA_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_TOSTRING_OFFSET))(nullptr);
		}

	};
}

