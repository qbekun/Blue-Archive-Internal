#pragma once
#include "../../../unitysdk.h"

namespace MX::Core::FixedMath { class Fix64; }
namespace MX::Core::FixedMath { class TSVector3; }
namespace MX::Core::FixedMath { class TSMatrix; }
namespace UnityEngine { class Vector3; }
namespace MX::Core::FixedMath { class TSVector2; }
namespace MX::Core::FixedMath { class TSVector4; }

#define MX_CORE_FIXEDMATH_TSVECTOR3_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1064000)
#define MX_CORE_FIXEDMATH_TSVECTOR3_ABS_OFFSET UNITYSDK_OFFSET(0x10645B0)
#define MX_CORE_FIXEDMATH_TSVECTOR3_GET_SQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x105EC10)
#define MX_CORE_FIXEDMATH_TSVECTOR3_GET_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1064640)
#define MX_CORE_FIXEDMATH_TSVECTOR3_CLAMPMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x10646E0)
#define MX_CORE_FIXEDMATH_TSVECTOR3_GET_NORMALIZED_OFFSET UNITYSDK_OFFSET(0x1064830)
#define MX_CORE_FIXEDMATH_TSVECTOR3_.CTOR_OFFSET UNITYSDK_OFFSET(0x1064520)
#define MX_CORE_FIXEDMATH_TSVECTOR3_.CTOR_OFFSET UNITYSDK_OFFSET(0x10633E0)
#define MX_CORE_FIXEDMATH_TSVECTOR3_SCALE_OFFSET UNITYSDK_OFFSET(0x10648B0)
#define MX_CORE_FIXEDMATH_TSVECTOR3_SET_OFFSET UNITYSDK_OFFSET(0x1064940)
#define MX_CORE_FIXEDMATH_TSVECTOR3_.CTOR_OFFSET UNITYSDK_OFFSET(0x10645A0)
#define MX_CORE_FIXEDMATH_TSVECTOR3_LERP_OFFSET UNITYSDK_OFFSET(0x1064950)
#define MX_CORE_FIXEDMATH_TSVECTOR3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1064B20)
#define MX_CORE_FIXEDMATH_TSVECTOR3_EQUALS_OFFSET UNITYSDK_OFFSET(0x1064C10)
#define MX_CORE_FIXEDMATH_TSVECTOR3_SCALE_OFFSET UNITYSDK_OFFSET(0x1064D30)
#define MX_CORE_FIXEDMATH_TSVECTOR3_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1064DD0)
#define MX_CORE_FIXEDMATH_TSVECTOR3_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1064EA0)
#define MX_CORE_FIXEDMATH_TSVECTOR3_MIN_OFFSET UNITYSDK_OFFSET(0x1064F70)
#define MX_CORE_FIXEDMATH_TSVECTOR3_MIN_OFFSET UNITYSDK_OFFSET(0x1064FF0)
#define MX_CORE_FIXEDMATH_TSVECTOR3_MAX_OFFSET UNITYSDK_OFFSET(0x1065110)
#define MX_CORE_FIXEDMATH_TSVECTOR3_DISTANCE_OFFSET UNITYSDK_OFFSET(0x10652B0)
#define MX_CORE_FIXEDMATH_TSVECTOR3_MAX_OFFSET UNITYSDK_OFFSET(0x1065190)
#define MX_CORE_FIXEDMATH_TSVECTOR3_MAKEZERO_OFFSET UNITYSDK_OFFSET(0x10653C0)
#define MX_CORE_FIXEDMATH_TSVECTOR3_ISZERO_OFFSET UNITYSDK_OFFSET(0x1065440)
#define MX_CORE_FIXEDMATH_TSVECTOR3_ISNEARLYZERO_OFFSET UNITYSDK_OFFSET(0x10654D0)
#define MX_CORE_FIXEDMATH_TSVECTOR3_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1065560)
#define MX_CORE_FIXEDMATH_TSVECTOR3_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x10655E0)
#define MX_CORE_FIXEDMATH_TSVECTOR3_TRANSPOSEDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1065740)
#define MX_CORE_FIXEDMATH_TSVECTOR3_DOT_OFFSET UNITYSDK_OFFSET(0x105EBC0)
#define MX_CORE_FIXEDMATH_TSVECTOR3_DOT_OFFSET UNITYSDK_OFFSET(0x10658A0)
#define MX_CORE_FIXEDMATH_TSVECTOR3_PROJECT_OFFSET UNITYSDK_OFFSET(0x1065940)
#define MX_CORE_FIXEDMATH_TSVECTOR3_PROJECTONPLANE_OFFSET UNITYSDK_OFFSET(0x1065CE0)
#define MX_CORE_FIXEDMATH_TSVECTOR3_ANGLE_OFFSET UNITYSDK_OFFSET(0x1065D90)
#define MX_CORE_FIXEDMATH_TSVECTOR3_SIGNEDANGLE_OFFSET UNITYSDK_OFFSET(0x1066090)
#define MX_CORE_FIXEDMATH_TSVECTOR3_ADD_OFFSET UNITYSDK_OFFSET(0x10664D0)
#define MX_CORE_FIXEDMATH_TSVECTOR3_ADD_OFFSET UNITYSDK_OFFSET(0x10665D0)
#define MX_CORE_FIXEDMATH_TSVECTOR3_ADD_OFFSET UNITYSDK_OFFSET(0x1066670)
#define MX_CORE_FIXEDMATH_TSVECTOR3_DIVIDE_OFFSET UNITYSDK_OFFSET(0x1066720)
#define MX_CORE_FIXEDMATH_TSVECTOR3_DIVIDE_OFFSET UNITYSDK_OFFSET(0x1066840)
#define MX_CORE_FIXEDMATH_TSVECTOR3_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x10668D0)
#define MX_CORE_FIXEDMATH_TSVECTOR3_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x10669D0)
#define MX_CORE_FIXEDMATH_TSVECTOR3_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x1066A70)
#define MX_CORE_FIXEDMATH_TSVECTOR3_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x1066B20)
#define MX_CORE_FIXEDMATH_TSVECTOR3_CROSS_OFFSET UNITYSDK_OFFSET(0x1055320)
#define MX_CORE_FIXEDMATH_TSVECTOR3_CROSS_OFFSET UNITYSDK_OFFSET(0x1066BF0)
#define MX_CORE_FIXEDMATH_TSVECTOR3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1066CF0)
#define MX_CORE_FIXEDMATH_TSVECTOR3_NEGATE_OFFSET UNITYSDK_OFFSET(0x1066D60)
#define MX_CORE_FIXEDMATH_TSVECTOR3_NEGATE_OFFSET UNITYSDK_OFFSET(0x1066DD0)
#define MX_CORE_FIXEDMATH_TSVECTOR3_NEGATE_OFFSET UNITYSDK_OFFSET(0x1066ED0)
#define MX_CORE_FIXEDMATH_TSVECTOR3_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x10647B0)
#define MX_CORE_FIXEDMATH_TSVECTOR3_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x1055220)
#define MX_CORE_FIXEDMATH_TSVECTOR3_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x1066F50)
#define MX_CORE_FIXEDMATH_TSVECTOR3_SWAP_OFFSET UNITYSDK_OFFSET(0x1067050)
#define MX_CORE_FIXEDMATH_TSVECTOR3_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1067080)
#define MX_CORE_FIXEDMATH_TSVECTOR3_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x10671A0)
#define MX_CORE_FIXEDMATH_TSVECTOR3_OP_MODULUS_OFFSET UNITYSDK_OFFSET(0x1067230)
#define MX_CORE_FIXEDMATH_TSVECTOR3_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x10672B0)
#define MX_CORE_FIXEDMATH_TSVECTOR3_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1052CA0)
#define MX_CORE_FIXEDMATH_TSVECTOR3_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1067300)
#define MX_CORE_FIXEDMATH_TSVECTOR3_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1054E90)
#define MX_CORE_FIXEDMATH_TSVECTOR3_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x1067420)
#define MX_CORE_FIXEDMATH_TSVECTOR3_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x10674D0)
#define MX_CORE_FIXEDMATH_TSVECTOR3_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x10675F0)
#define MX_CORE_FIXEDMATH_TSVECTOR3_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1064A20)
#define MX_CORE_FIXEDMATH_TSVECTOR3_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1067740)
#define MX_CORE_FIXEDMATH_TSVECTOR3_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1065BC0)
#define MX_CORE_FIXEDMATH_TSVECTOR3_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1067860)
#define MX_CORE_FIXEDMATH_TSVECTOR3_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x10678F0)
#define MX_CORE_FIXEDMATH_TSVECTOR3_TOTSVECTOR2_OFFSET UNITYSDK_OFFSET(0x1067990)
#define MX_CORE_FIXEDMATH_TSVECTOR3_TOTSVECTOR4_OFFSET UNITYSDK_OFFSET(0x10679A0)

namespace MX::Core::FixedMath
{
	inline static constexpr unsigned int TSVector3_TypeDefinitionIndex = 12871;

	class TSVector3 : public Il2CppObject
	{
	public:
		::MX::Core::FixedMath::Fix64* ZeroEpsilonSq; // 0x0
		::MX::Core::FixedMath::TSVector3* InternalZero; // 0x8
		::MX::Core::FixedMath::TSVector3* Arbitrary; // 0x20
		::MX::Core::FixedMath::Fix64* x; // 0x10
		::MX::Core::FixedMath::Fix64* y; // 0x18
		::MX::Core::FixedMath::Fix64* z; // 0x20
		::MX::Core::FixedMath::TSVector3* zero; // 0x38
		::MX::Core::FixedMath::TSVector3* left; // 0x50
		::MX::Core::FixedMath::TSVector3* right; // 0x68
		::MX::Core::FixedMath::TSVector3* up; // 0x80
		::MX::Core::FixedMath::TSVector3* down; // 0x98
		::MX::Core::FixedMath::TSVector3* back; // 0xB0
		::MX::Core::FixedMath::TSVector3* forward; // 0xC8
		::MX::Core::FixedMath::TSVector3* one; // 0xE0
		::MX::Core::FixedMath::TSVector3* MinValue; // 0xF8
		::MX::Core::FixedMath::TSVector3* MaxValue; // 0x110

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_.CCTOR_OFFSET))(nullptr);
		}

		::MX::Core::FixedMath::TSVector3* Abs(::MX::Core::FixedMath::TSVector3* arg)
		{
			return ((::MX::Core::FixedMath::TSVector3*(*)(::MX::Core::FixedMath::TSVector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_ABS_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* get_sqrMagnitude()
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_GET_SQRMAGNITUDE_OFFSET))(nullptr);
		}

		::MX::Core::FixedMath::Fix64* get_magnitude()
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_GET_MAGNITUDE_OFFSET))(nullptr);
		}

		::MX::Core::FixedMath::TSVector3* ClampMagnitude(::MX::Core::FixedMath::TSVector3* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector3*(*)(::MX::Core::FixedMath::TSVector3*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_CLAMPMAGNITUDE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector3* get_normalized()
		{
			return ((::MX::Core::FixedMath::TSVector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_GET_NORMALIZED_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			((::System::Void(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Scale(::MX::Core::FixedMath::TSVector3* arg)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_SCALE_OFFSET))(arg, nullptr);
		}

		::System::Void Set(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			((::System::Void(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_SET_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::MX::Core::FixedMath::Fix64* arg)
		{
			((::System::Void(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::TSVector3* Lerp(::MX::Core::FixedMath::TSVector3* arg, ::MX::Core::FixedMath::TSVector3* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::TSVector3*(*)(::MX::Core::FixedMath::TSVector3*, ::MX::Core::FixedMath::TSVector3*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_LERP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_EQUALS_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::TSVector3* Scale(::MX::Core::FixedMath::TSVector3* arg, ::MX::Core::FixedMath::TSVector3* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector3*(*)(::MX::Core::FixedMath::TSVector3*, ::MX::Core::FixedMath::TSVector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_SCALE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Equality(::MX::Core::FixedMath::TSVector3* arg, ::MX::Core::FixedMath::TSVector3* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::FixedMath::TSVector3*, ::MX::Core::FixedMath::TSVector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Core::FixedMath::TSVector3* arg, ::MX::Core::FixedMath::TSVector3* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::FixedMath::TSVector3*, ::MX::Core::FixedMath::TSVector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector3* Min(::MX::Core::FixedMath::TSVector3* arg, ::MX::Core::FixedMath::TSVector3* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector3*(*)(::MX::Core::FixedMath::TSVector3*, ::MX::Core::FixedMath::TSVector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_MIN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Min(::MX::Core::FixedMath::TSVector3&* arg, ::MX::Core::FixedMath::TSVector3&* arg2, ::MX::Core::FixedMath::TSVector3&* arg3)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector3&*, ::MX::Core::FixedMath::TSVector3&*, ::MX::Core::FixedMath::TSVector3&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_MIN_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::TSVector3* Max(::MX::Core::FixedMath::TSVector3* arg, ::MX::Core::FixedMath::TSVector3* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector3*(*)(::MX::Core::FixedMath::TSVector3*, ::MX::Core::FixedMath::TSVector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_MAX_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Distance(::MX::Core::FixedMath::TSVector3* arg, ::MX::Core::FixedMath::TSVector3* arg2)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::TSVector3*, ::MX::Core::FixedMath::TSVector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_DISTANCE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Max(::MX::Core::FixedMath::TSVector3&* arg, ::MX::Core::FixedMath::TSVector3&* arg2, ::MX::Core::FixedMath::TSVector3&* arg3)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector3&*, ::MX::Core::FixedMath::TSVector3&*, ::MX::Core::FixedMath::TSVector3&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_MAX_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void MakeZero()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_MAKEZERO_OFFSET))(nullptr);
		}

		::System::Boolean IsZero()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_ISZERO_OFFSET))(nullptr);
		}

		::System::Boolean IsNearlyZero()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_ISNEARLYZERO_OFFSET))(nullptr);
		}

		::MX::Core::FixedMath::TSVector3* Transform(::MX::Core::FixedMath::TSVector3* arg, ::MX::Core::FixedMath::TSMatrix* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector3*(*)(::MX::Core::FixedMath::TSVector3*, ::MX::Core::FixedMath::TSMatrix*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_TRANSFORM_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Transform(::MX::Core::FixedMath::TSVector3&* arg, ::MX::Core::FixedMath::TSMatrix&* arg2, ::MX::Core::FixedMath::TSVector3&* arg3)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector3&*, ::MX::Core::FixedMath::TSMatrix&*, ::MX::Core::FixedMath::TSVector3&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_TRANSFORM_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void TransposedTransform(::MX::Core::FixedMath::TSVector3&* arg, ::MX::Core::FixedMath::TSMatrix&* arg2, ::MX::Core::FixedMath::TSVector3&* arg3)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector3&*, ::MX::Core::FixedMath::TSMatrix&*, ::MX::Core::FixedMath::TSVector3&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_TRANSPOSEDTRANSFORM_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Dot(::MX::Core::FixedMath::TSVector3* arg, ::MX::Core::FixedMath::TSVector3* arg2)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::TSVector3*, ::MX::Core::FixedMath::TSVector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_DOT_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Dot(::MX::Core::FixedMath::TSVector3&* arg, ::MX::Core::FixedMath::TSVector3&* arg2)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::TSVector3&*, ::MX::Core::FixedMath::TSVector3&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_DOT_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector3* Project(::MX::Core::FixedMath::TSVector3* arg, ::MX::Core::FixedMath::TSVector3* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector3*(*)(::MX::Core::FixedMath::TSVector3*, ::MX::Core::FixedMath::TSVector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_PROJECT_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector3* ProjectOnPlane(::MX::Core::FixedMath::TSVector3* arg, ::MX::Core::FixedMath::TSVector3* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector3*(*)(::MX::Core::FixedMath::TSVector3*, ::MX::Core::FixedMath::TSVector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_PROJECTONPLANE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Angle(::MX::Core::FixedMath::TSVector3* arg, ::MX::Core::FixedMath::TSVector3* arg2)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::TSVector3*, ::MX::Core::FixedMath::TSVector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_ANGLE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::Fix64* SignedAngle(::MX::Core::FixedMath::TSVector3* arg, ::MX::Core::FixedMath::TSVector3* arg2, ::MX::Core::FixedMath::TSVector3* arg3)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::TSVector3*, ::MX::Core::FixedMath::TSVector3*, ::MX::Core::FixedMath::TSVector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_SIGNEDANGLE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::TSVector3* Add(::MX::Core::FixedMath::TSVector3* arg, ::MX::Core::FixedMath::TSVector3* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector3*(*)(::MX::Core::FixedMath::TSVector3*, ::MX::Core::FixedMath::TSVector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_ADD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Add(::MX::Core::FixedMath::TSVector3&* arg, ::MX::Core::FixedMath::TSVector3&* arg2, ::MX::Core::FixedMath::TSVector3&* arg3)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector3&*, ::MX::Core::FixedMath::TSVector3&*, ::MX::Core::FixedMath::TSVector3&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_ADD_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Add(::MX::Core::FixedMath::TSVector3&* arg, ::UnityEngine::Vector3&* arg2, ::UnityEngine::Vector3&* arg3)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector3&*, ::UnityEngine::Vector3&*, ::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_ADD_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::TSVector3* Divide(::MX::Core::FixedMath::TSVector3* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector3*(*)(::MX::Core::FixedMath::TSVector3*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_DIVIDE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Divide(::MX::Core::FixedMath::TSVector3&* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::TSVector3&* arg3)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector3&*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::TSVector3&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_DIVIDE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::TSVector3* Subtract(::MX::Core::FixedMath::TSVector3* arg, ::MX::Core::FixedMath::TSVector3* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector3*(*)(::MX::Core::FixedMath::TSVector3*, ::MX::Core::FixedMath::TSVector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_SUBTRACT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Subtract(::MX::Core::FixedMath::TSVector3&* arg, ::MX::Core::FixedMath::TSVector3&* arg2, ::MX::Core::FixedMath::TSVector3&* arg3)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector3&*, ::MX::Core::FixedMath::TSVector3&*, ::MX::Core::FixedMath::TSVector3&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_SUBTRACT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Subtract(::MX::Core::FixedMath::TSVector3&* arg, ::UnityEngine::Vector3&* arg2, ::UnityEngine::Vector3&* arg3)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector3&*, ::UnityEngine::Vector3&*, ::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_SUBTRACT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Subtract(::UnityEngine::Vector3&* arg, ::MX::Core::FixedMath::TSVector3&* arg2, ::UnityEngine::Vector3&* arg3)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::MX::Core::FixedMath::TSVector3&*, ::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_SUBTRACT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::TSVector3* Cross(::MX::Core::FixedMath::TSVector3* arg, ::MX::Core::FixedMath::TSVector3* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector3*(*)(::MX::Core::FixedMath::TSVector3*, ::MX::Core::FixedMath::TSVector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_CROSS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Cross(::MX::Core::FixedMath::TSVector3&* arg, ::MX::Core::FixedMath::TSVector3&* arg2, ::MX::Core::FixedMath::TSVector3&* arg3)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector3&*, ::MX::Core::FixedMath::TSVector3&*, ::MX::Core::FixedMath::TSVector3&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_CROSS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void Negate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_NEGATE_OFFSET))(nullptr);
		}

		::MX::Core::FixedMath::TSVector3* Negate(::MX::Core::FixedMath::TSVector3* arg)
		{
			return ((::MX::Core::FixedMath::TSVector3*(*)(::MX::Core::FixedMath::TSVector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_NEGATE_OFFSET))(arg, nullptr);
		}

		::System::Void Negate(::MX::Core::FixedMath::TSVector3&* arg, ::MX::Core::FixedMath::TSVector3&* arg2)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector3&*, ::MX::Core::FixedMath::TSVector3&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_NEGATE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector3* Normalize(::MX::Core::FixedMath::TSVector3* arg)
		{
			return ((::MX::Core::FixedMath::TSVector3*(*)(::MX::Core::FixedMath::TSVector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_NORMALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Normalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_NORMALIZE_OFFSET))(nullptr);
		}

		::System::Void Normalize(::MX::Core::FixedMath::TSVector3&* arg, ::MX::Core::FixedMath::TSVector3&* arg2)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector3&*, ::MX::Core::FixedMath::TSVector3&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_NORMALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Swap(::MX::Core::FixedMath::TSVector3&* arg, ::MX::Core::FixedMath::TSVector3&* arg2)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector3&*, ::MX::Core::FixedMath::TSVector3&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_SWAP_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector3* Multiply(::MX::Core::FixedMath::TSVector3* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector3*(*)(::MX::Core::FixedMath::TSVector3*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_MULTIPLY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Multiply(::MX::Core::FixedMath::TSVector3&* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::TSVector3&* arg3)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector3&*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::TSVector3&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_MULTIPLY_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::TSVector3* op_Modulus(::MX::Core::FixedMath::TSVector3* arg, ::MX::Core::FixedMath::TSVector3* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector3*(*)(::MX::Core::FixedMath::TSVector3*, ::MX::Core::FixedMath::TSVector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_OP_MODULUS_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::Fix64* op_Multiply(::MX::Core::FixedMath::TSVector3* arg, ::MX::Core::FixedMath::TSVector3* arg2)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::TSVector3*, ::MX::Core::FixedMath::TSVector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_OP_MULTIPLY_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector3* op_Multiply(::MX::Core::FixedMath::TSVector3* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector3*(*)(::MX::Core::FixedMath::TSVector3*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_OP_MULTIPLY_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector3* op_Multiply(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::TSVector3* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector3*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::TSVector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_OP_MULTIPLY_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector3* op_Subtraction(::MX::Core::FixedMath::TSVector3* arg, ::MX::Core::FixedMath::TSVector3* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector3*(*)(::MX::Core::FixedMath::TSVector3*, ::MX::Core::FixedMath::TSVector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_OP_SUBTRACTION_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector3* op_UnaryNegation(::MX::Core::FixedMath::TSVector3* arg)
		{
			return ((::MX::Core::FixedMath::TSVector3*(*)(::MX::Core::FixedMath::TSVector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_OP_UNARYNEGATION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* op_Subtraction(::MX::Core::FixedMath::TSVector3* arg, ::UnityEngine::Vector3* arg2)
		{
			return ((::UnityEngine::Vector3*(*)(::MX::Core::FixedMath::TSVector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_OP_SUBTRACTION_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector3* op_Subtraction(::UnityEngine::Vector3* arg, ::MX::Core::FixedMath::TSVector3* arg2)
		{
			return ((::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::MX::Core::FixedMath::TSVector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_OP_SUBTRACTION_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector3* op_Addition(::MX::Core::FixedMath::TSVector3* arg, ::MX::Core::FixedMath::TSVector3* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector3*(*)(::MX::Core::FixedMath::TSVector3*, ::MX::Core::FixedMath::TSVector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_OP_ADDITION_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector3* op_Addition(::MX::Core::FixedMath::TSVector3* arg, ::UnityEngine::Vector3* arg2)
		{
			return ((::UnityEngine::Vector3*(*)(::MX::Core::FixedMath::TSVector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_OP_ADDITION_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector3* op_Division(::MX::Core::FixedMath::TSVector3* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector3*(*)(::MX::Core::FixedMath::TSVector3*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_OP_DIVISION_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector3* op_Implicit(::UnityEngine::Vector3* arg)
		{
			return ((::MX::Core::FixedMath::TSVector3*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* op_Implicit(::MX::Core::FixedMath::TSVector3* arg)
		{
			return ((::UnityEngine::Vector3*(*)(::MX::Core::FixedMath::TSVector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* ToTSVector2()
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_TOTSVECTOR2_OFFSET))(nullptr);
		}

		::MX::Core::FixedMath::TSVector4* ToTSVector4()
		{
			return ((::MX::Core::FixedMath::TSVector4*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR3_TOTSVECTOR4_OFFSET))(nullptr);
		}

	};
}

