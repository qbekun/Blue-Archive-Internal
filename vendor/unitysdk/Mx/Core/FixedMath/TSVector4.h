#pragma once
#include "../../../unitysdk.h"

namespace MX::Core::FixedMath { class Fix64; }
namespace MX::Core::FixedMath { class TSVector4; }
namespace MX::Core::FixedMath { class TSMatrix4x4; }
namespace MX::Core::FixedMath { class TSVector3; }
namespace MX::Core::FixedMath { class TSVector2; }

#define MX_CORE_FIXEDMATH_TSVECTOR4_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1067A40)
#define MX_CORE_FIXEDMATH_TSVECTOR4_ABS_OFFSET UNITYSDK_OFFSET(0x1067CF0)
#define MX_CORE_FIXEDMATH_TSVECTOR4_GET_SQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1067DB0)
#define MX_CORE_FIXEDMATH_TSVECTOR4_GET_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1067E70)
#define MX_CORE_FIXEDMATH_TSVECTOR4_CLAMPMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1067EF0)
#define MX_CORE_FIXEDMATH_TSVECTOR4_GET_NORMALIZED_OFFSET UNITYSDK_OFFSET(0x10681D0)
#define MX_CORE_FIXEDMATH_TSVECTOR4_.CTOR_OFFSET UNITYSDK_OFFSET(0x1067C50)
#define MX_CORE_FIXEDMATH_TSVECTOR4_.CTOR_OFFSET UNITYSDK_OFFSET(0x1067D90)
#define MX_CORE_FIXEDMATH_TSVECTOR4_SCALE_OFFSET UNITYSDK_OFFSET(0x1068390)
#define MX_CORE_FIXEDMATH_TSVECTOR4_SET_OFFSET UNITYSDK_OFFSET(0x1068430)
#define MX_CORE_FIXEDMATH_TSVECTOR4_.CTOR_OFFSET UNITYSDK_OFFSET(0x1067CE0)
#define MX_CORE_FIXEDMATH_TSVECTOR4_LERP_OFFSET UNITYSDK_OFFSET(0x1068450)
#define MX_CORE_FIXEDMATH_TSVECTOR4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x10688E0)
#define MX_CORE_FIXEDMATH_TSVECTOR4_EQUALS_OFFSET UNITYSDK_OFFSET(0x1068B10)
#define MX_CORE_FIXEDMATH_TSVECTOR4_SCALE_OFFSET UNITYSDK_OFFSET(0x1068C60)
#define MX_CORE_FIXEDMATH_TSVECTOR4_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1068D20)
#define MX_CORE_FIXEDMATH_TSVECTOR4_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1068E20)
#define MX_CORE_FIXEDMATH_TSVECTOR4_MIN_OFFSET UNITYSDK_OFFSET(0x1068F20)
#define MX_CORE_FIXEDMATH_TSVECTOR4_MIN_OFFSET UNITYSDK_OFFSET(0x1068FA0)
#define MX_CORE_FIXEDMATH_TSVECTOR4_MAX_OFFSET UNITYSDK_OFFSET(0x1069100)
#define MX_CORE_FIXEDMATH_TSVECTOR4_DISTANCE_OFFSET UNITYSDK_OFFSET(0x10692E0)
#define MX_CORE_FIXEDMATH_TSVECTOR4_MAX_OFFSET UNITYSDK_OFFSET(0x1069180)
#define MX_CORE_FIXEDMATH_TSVECTOR4_MAKEZERO_OFFSET UNITYSDK_OFFSET(0x1069430)
#define MX_CORE_FIXEDMATH_TSVECTOR4_ISZERO_OFFSET UNITYSDK_OFFSET(0x10694C0)
#define MX_CORE_FIXEDMATH_TSVECTOR4_ISNEARLYZERO_OFFSET UNITYSDK_OFFSET(0x1069550)
#define MX_CORE_FIXEDMATH_TSVECTOR4_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x10695E0)
#define MX_CORE_FIXEDMATH_TSVECTOR4_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1069890)
#define MX_CORE_FIXEDMATH_TSVECTOR4_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1069910)
#define MX_CORE_FIXEDMATH_TSVECTOR4_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1069660)
#define MX_CORE_FIXEDMATH_TSVECTOR4_DOT_OFFSET UNITYSDK_OFFSET(0x1069B00)
#define MX_CORE_FIXEDMATH_TSVECTOR4_DOT_OFFSET UNITYSDK_OFFSET(0x1069B50)
#define MX_CORE_FIXEDMATH_TSVECTOR4_ADD_OFFSET UNITYSDK_OFFSET(0x1069C10)
#define MX_CORE_FIXEDMATH_TSVECTOR4_ADD_OFFSET UNITYSDK_OFFSET(0x1069C90)
#define MX_CORE_FIXEDMATH_TSVECTOR4_DIVIDE_OFFSET UNITYSDK_OFFSET(0x1069D40)
#define MX_CORE_FIXEDMATH_TSVECTOR4_DIVIDE_OFFSET UNITYSDK_OFFSET(0x1069DC0)
#define MX_CORE_FIXEDMATH_TSVECTOR4_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x1069E60)
#define MX_CORE_FIXEDMATH_TSVECTOR4_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x1069EE0)
#define MX_CORE_FIXEDMATH_TSVECTOR4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1069F90)
#define MX_CORE_FIXEDMATH_TSVECTOR4_NEGATE_OFFSET UNITYSDK_OFFSET(0x106A010)
#define MX_CORE_FIXEDMATH_TSVECTOR4_NEGATE_OFFSET UNITYSDK_OFFSET(0x106A090)
#define MX_CORE_FIXEDMATH_TSVECTOR4_NEGATE_OFFSET UNITYSDK_OFFSET(0x106A1B0)
#define MX_CORE_FIXEDMATH_TSVECTOR4_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x10680D0)
#define MX_CORE_FIXEDMATH_TSVECTOR4_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x1068260)
#define MX_CORE_FIXEDMATH_TSVECTOR4_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x106A240)
#define MX_CORE_FIXEDMATH_TSVECTOR4_SWAP_OFFSET UNITYSDK_OFFSET(0x106A370)
#define MX_CORE_FIXEDMATH_TSVECTOR4_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x106A3B0)
#define MX_CORE_FIXEDMATH_TSVECTOR4_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x106A430)
#define MX_CORE_FIXEDMATH_TSVECTOR4_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x106A4D0)
#define MX_CORE_FIXEDMATH_TSVECTOR4_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1068150)
#define MX_CORE_FIXEDMATH_TSVECTOR4_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x106A520)
#define MX_CORE_FIXEDMATH_TSVECTOR4_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x10687E0)
#define MX_CORE_FIXEDMATH_TSVECTOR4_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1068860)
#define MX_CORE_FIXEDMATH_TSVECTOR4_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x106A5A0)
#define MX_CORE_FIXEDMATH_TSVECTOR4_TOTSVECTOR2_OFFSET UNITYSDK_OFFSET(0x106A620)
#define MX_CORE_FIXEDMATH_TSVECTOR4_TOTSVECTOR_OFFSET UNITYSDK_OFFSET(0x106A650)

namespace MX::Core::FixedMath
{
	inline static constexpr unsigned int TSVector4_TypeDefinitionIndex = 12872;

	class TSVector4 : public Il2CppObject
	{
	public:
		::MX::Core::FixedMath::Fix64* ZeroEpsilonSq; // 0x0
		::MX::Core::FixedMath::TSVector4* InternalZero; // 0x8
		::MX::Core::FixedMath::Fix64* x; // 0x10
		::MX::Core::FixedMath::Fix64* y; // 0x18
		::MX::Core::FixedMath::Fix64* z; // 0x20
		::MX::Core::FixedMath::Fix64* w; // 0x28
		::MX::Core::FixedMath::TSVector4* zero; // 0x28
		::MX::Core::FixedMath::TSVector4* one; // 0x48
		::MX::Core::FixedMath::TSVector4* MinValue; // 0x68
		::MX::Core::FixedMath::TSVector4* MaxValue; // 0x88

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_.CCTOR_OFFSET))(nullptr);
		}

		::MX::Core::FixedMath::TSVector4* Abs(::MX::Core::FixedMath::TSVector4* arg)
		{
			return ((::MX::Core::FixedMath::TSVector4*(*)(::MX::Core::FixedMath::TSVector4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_ABS_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* get_sqrMagnitude()
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_GET_SQRMAGNITUDE_OFFSET))(nullptr);
		}

		::MX::Core::FixedMath::Fix64* get_magnitude()
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_GET_MAGNITUDE_OFFSET))(nullptr);
		}

		::MX::Core::FixedMath::TSVector4* ClampMagnitude(::MX::Core::FixedMath::TSVector4* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector4*(*)(::MX::Core::FixedMath::TSVector4*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_CLAMPMAGNITUDE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector4* get_normalized()
		{
			return ((::MX::Core::FixedMath::TSVector4*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_GET_NORMALIZED_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg2, ::System::Int32 arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3, ::MX::Core::FixedMath::Fix64* arg4)
		{
			((::System::Void(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void Scale(::MX::Core::FixedMath::TSVector4* arg)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_SCALE_OFFSET))(arg, nullptr);
		}

		::System::Void Set(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3, ::MX::Core::FixedMath::Fix64* arg4)
		{
			((::System::Void(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_SET_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor(::MX::Core::FixedMath::Fix64* arg)
		{
			((::System::Void(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::TSVector4* Lerp(::MX::Core::FixedMath::TSVector4* arg, ::MX::Core::FixedMath::TSVector4* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::TSVector4*(*)(::MX::Core::FixedMath::TSVector4*, ::MX::Core::FixedMath::TSVector4*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_LERP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_EQUALS_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::TSVector4* Scale(::MX::Core::FixedMath::TSVector4* arg, ::MX::Core::FixedMath::TSVector4* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector4*(*)(::MX::Core::FixedMath::TSVector4*, ::MX::Core::FixedMath::TSVector4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_SCALE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Equality(::MX::Core::FixedMath::TSVector4* arg, ::MX::Core::FixedMath::TSVector4* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::FixedMath::TSVector4*, ::MX::Core::FixedMath::TSVector4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Core::FixedMath::TSVector4* arg, ::MX::Core::FixedMath::TSVector4* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::FixedMath::TSVector4*, ::MX::Core::FixedMath::TSVector4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector4* Min(::MX::Core::FixedMath::TSVector4* arg, ::MX::Core::FixedMath::TSVector4* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector4*(*)(::MX::Core::FixedMath::TSVector4*, ::MX::Core::FixedMath::TSVector4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_MIN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Min(::MX::Core::FixedMath::TSVector4&* arg, ::MX::Core::FixedMath::TSVector4&* arg2, ::MX::Core::FixedMath::TSVector4&* arg3)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector4&*, ::MX::Core::FixedMath::TSVector4&*, ::MX::Core::FixedMath::TSVector4&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_MIN_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::TSVector4* Max(::MX::Core::FixedMath::TSVector4* arg, ::MX::Core::FixedMath::TSVector4* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector4*(*)(::MX::Core::FixedMath::TSVector4*, ::MX::Core::FixedMath::TSVector4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_MAX_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Distance(::MX::Core::FixedMath::TSVector4* arg, ::MX::Core::FixedMath::TSVector4* arg2)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::TSVector4*, ::MX::Core::FixedMath::TSVector4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_DISTANCE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Max(::MX::Core::FixedMath::TSVector4&* arg, ::MX::Core::FixedMath::TSVector4&* arg2, ::MX::Core::FixedMath::TSVector4&* arg3)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector4&*, ::MX::Core::FixedMath::TSVector4&*, ::MX::Core::FixedMath::TSVector4&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_MAX_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void MakeZero()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_MAKEZERO_OFFSET))(nullptr);
		}

		::System::Boolean IsZero()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_ISZERO_OFFSET))(nullptr);
		}

		::System::Boolean IsNearlyZero()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_ISNEARLYZERO_OFFSET))(nullptr);
		}

		::MX::Core::FixedMath::TSVector4* Transform(::MX::Core::FixedMath::TSVector4* arg, ::MX::Core::FixedMath::TSMatrix4x4* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector4*(*)(::MX::Core::FixedMath::TSVector4*, ::MX::Core::FixedMath::TSMatrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_TRANSFORM_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector4* Transform(::MX::Core::FixedMath::TSVector3* arg, ::MX::Core::FixedMath::TSMatrix4x4* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector4*(*)(::MX::Core::FixedMath::TSVector3*, ::MX::Core::FixedMath::TSMatrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_TRANSFORM_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Transform(::MX::Core::FixedMath::TSVector3&* arg, ::MX::Core::FixedMath::TSMatrix4x4&* arg2, ::MX::Core::FixedMath::TSVector4&* arg3)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector3&*, ::MX::Core::FixedMath::TSMatrix4x4&*, ::MX::Core::FixedMath::TSVector4&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_TRANSFORM_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Transform(::MX::Core::FixedMath::TSVector4&* arg, ::MX::Core::FixedMath::TSMatrix4x4&* arg2, ::MX::Core::FixedMath::TSVector4&* arg3)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector4&*, ::MX::Core::FixedMath::TSMatrix4x4&*, ::MX::Core::FixedMath::TSVector4&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_TRANSFORM_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Dot(::MX::Core::FixedMath::TSVector4* arg, ::MX::Core::FixedMath::TSVector4* arg2)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::TSVector4*, ::MX::Core::FixedMath::TSVector4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_DOT_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Dot(::MX::Core::FixedMath::TSVector4&* arg, ::MX::Core::FixedMath::TSVector4&* arg2)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::TSVector4&*, ::MX::Core::FixedMath::TSVector4&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_DOT_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector4* Add(::MX::Core::FixedMath::TSVector4* arg, ::MX::Core::FixedMath::TSVector4* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector4*(*)(::MX::Core::FixedMath::TSVector4*, ::MX::Core::FixedMath::TSVector4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_ADD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Add(::MX::Core::FixedMath::TSVector4&* arg, ::MX::Core::FixedMath::TSVector4&* arg2, ::MX::Core::FixedMath::TSVector4&* arg3)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector4&*, ::MX::Core::FixedMath::TSVector4&*, ::MX::Core::FixedMath::TSVector4&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_ADD_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::TSVector4* Divide(::MX::Core::FixedMath::TSVector4* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector4*(*)(::MX::Core::FixedMath::TSVector4*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_DIVIDE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Divide(::MX::Core::FixedMath::TSVector4&* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::TSVector4&* arg3)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector4&*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::TSVector4&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_DIVIDE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::TSVector4* Subtract(::MX::Core::FixedMath::TSVector4* arg, ::MX::Core::FixedMath::TSVector4* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector4*(*)(::MX::Core::FixedMath::TSVector4*, ::MX::Core::FixedMath::TSVector4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_SUBTRACT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Subtract(::MX::Core::FixedMath::TSVector4&* arg, ::MX::Core::FixedMath::TSVector4&* arg2, ::MX::Core::FixedMath::TSVector4&* arg3)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector4&*, ::MX::Core::FixedMath::TSVector4&*, ::MX::Core::FixedMath::TSVector4&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_SUBTRACT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void Negate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_NEGATE_OFFSET))(nullptr);
		}

		::MX::Core::FixedMath::TSVector4* Negate(::MX::Core::FixedMath::TSVector4* arg)
		{
			return ((::MX::Core::FixedMath::TSVector4*(*)(::MX::Core::FixedMath::TSVector4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_NEGATE_OFFSET))(arg, nullptr);
		}

		::System::Void Negate(::MX::Core::FixedMath::TSVector4&* arg, ::MX::Core::FixedMath::TSVector4&* arg2)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector4&*, ::MX::Core::FixedMath::TSVector4&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_NEGATE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector4* Normalize(::MX::Core::FixedMath::TSVector4* arg)
		{
			return ((::MX::Core::FixedMath::TSVector4*(*)(::MX::Core::FixedMath::TSVector4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_NORMALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Normalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_NORMALIZE_OFFSET))(nullptr);
		}

		::System::Void Normalize(::MX::Core::FixedMath::TSVector4&* arg, ::MX::Core::FixedMath::TSVector4&* arg2)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector4&*, ::MX::Core::FixedMath::TSVector4&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_NORMALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Swap(::MX::Core::FixedMath::TSVector4&* arg, ::MX::Core::FixedMath::TSVector4&* arg2)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector4&*, ::MX::Core::FixedMath::TSVector4&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_SWAP_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector4* Multiply(::MX::Core::FixedMath::TSVector4* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector4*(*)(::MX::Core::FixedMath::TSVector4*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_MULTIPLY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Multiply(::MX::Core::FixedMath::TSVector4&* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::TSVector4&* arg3)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector4&*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::TSVector4&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_MULTIPLY_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::Fix64* op_Multiply(::MX::Core::FixedMath::TSVector4* arg, ::MX::Core::FixedMath::TSVector4* arg2)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::TSVector4*, ::MX::Core::FixedMath::TSVector4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_OP_MULTIPLY_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector4* op_Multiply(::MX::Core::FixedMath::TSVector4* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector4*(*)(::MX::Core::FixedMath::TSVector4*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_OP_MULTIPLY_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector4* op_Multiply(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::TSVector4* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector4*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::TSVector4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_OP_MULTIPLY_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector4* op_Subtraction(::MX::Core::FixedMath::TSVector4* arg, ::MX::Core::FixedMath::TSVector4* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector4*(*)(::MX::Core::FixedMath::TSVector4*, ::MX::Core::FixedMath::TSVector4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_OP_SUBTRACTION_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector4* op_Addition(::MX::Core::FixedMath::TSVector4* arg, ::MX::Core::FixedMath::TSVector4* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector4*(*)(::MX::Core::FixedMath::TSVector4*, ::MX::Core::FixedMath::TSVector4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_OP_ADDITION_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector4* op_Division(::MX::Core::FixedMath::TSVector4* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector4*(*)(::MX::Core::FixedMath::TSVector4*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_OP_DIVISION_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* ToTSVector2()
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_TOTSVECTOR2_OFFSET))(nullptr);
		}

		::MX::Core::FixedMath::TSVector3* ToTSVector()
		{
			return ((::MX::Core::FixedMath::TSVector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR4_TOTSVECTOR_OFFSET))(nullptr);
		}

	};
}

