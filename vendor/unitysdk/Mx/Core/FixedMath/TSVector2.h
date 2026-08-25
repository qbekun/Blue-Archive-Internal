#pragma once
#include "../../../unitysdk.h"

namespace MX::Core::FixedMath { class TSVector2; }
namespace MX::Core::FixedMath { class Fix64; }
namespace MX::Core::FixedMath { class TSVector3; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Vector3; }

#define MX_CORE_FIXEDMATH_TSVECTOR2_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x1060320)
#define MX_CORE_FIXEDMATH_TSVECTOR2_GET_ONE_OFFSET UNITYSDK_OFFSET(0x1060380)
#define MX_CORE_FIXEDMATH_TSVECTOR2_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x10603E0)
#define MX_CORE_FIXEDMATH_TSVECTOR2_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x1060440)
#define MX_CORE_FIXEDMATH_TSVECTOR2_GET_UP_OFFSET UNITYSDK_OFFSET(0x10604A0)
#define MX_CORE_FIXEDMATH_TSVECTOR2_GET_DOWN_OFFSET UNITYSDK_OFFSET(0x1060500)
#define MX_CORE_FIXEDMATH_TSVECTOR2_GET_POSITIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x1060560)
#define MX_CORE_FIXEDMATH_TSVECTOR2_GET_NEGATIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x10605C0)
#define MX_CORE_FIXEDMATH_TSVECTOR2_.CTOR_OFFSET UNITYSDK_OFFSET(0x1060620)
#define MX_CORE_FIXEDMATH_TSVECTOR2_.CTOR_OFFSET UNITYSDK_OFFSET(0x1060630)
#define MX_CORE_FIXEDMATH_TSVECTOR2_SET_OFFSET UNITYSDK_OFFSET(0x1060640)
#define MX_CORE_FIXEDMATH_TSVECTOR2_REFLECT_OFFSET UNITYSDK_OFFSET(0x1060650)
#define MX_CORE_FIXEDMATH_TSVECTOR2_REFLECT_OFFSET UNITYSDK_OFFSET(0x1060880)
#define MX_CORE_FIXEDMATH_TSVECTOR2_ADD_OFFSET UNITYSDK_OFFSET(0x10608F0)
#define MX_CORE_FIXEDMATH_TSVECTOR2_ADD_OFFSET UNITYSDK_OFFSET(0x1060980)
#define MX_CORE_FIXEDMATH_TSVECTOR2_BARYCENTRIC_OFFSET UNITYSDK_OFFSET(0x1060A00)
#define MX_CORE_FIXEDMATH_TSVECTOR2_BARYCENTRIC_OFFSET UNITYSDK_OFFSET(0x1060AC0)
#define MX_CORE_FIXEDMATH_TSVECTOR2_CATMULLROM_OFFSET UNITYSDK_OFFSET(0x1060B70)
#define MX_CORE_FIXEDMATH_TSVECTOR2_CATMULLROM_OFFSET UNITYSDK_OFFSET(0x1060C40)
#define MX_CORE_FIXEDMATH_TSVECTOR2_CLAMP_OFFSET UNITYSDK_OFFSET(0x1060D00)
#define MX_CORE_FIXEDMATH_TSVECTOR2_CLAMP_OFFSET UNITYSDK_OFFSET(0x1060E90)
#define MX_CORE_FIXEDMATH_TSVECTOR2_DISTANCE_OFFSET UNITYSDK_OFFSET(0x1061020)
#define MX_CORE_FIXEDMATH_TSVECTOR2_DISTANCE_OFFSET UNITYSDK_OFFSET(0x1061400)
#define MX_CORE_FIXEDMATH_TSVECTOR2_DISTANCESQUARED_OFFSET UNITYSDK_OFFSET(0x10614F0)
#define MX_CORE_FIXEDMATH_TSVECTOR2_DISTANCESQUARED_OFFSET UNITYSDK_OFFSET(0x10610F0)
#define MX_CORE_FIXEDMATH_TSVECTOR2_DIVIDE_OFFSET UNITYSDK_OFFSET(0x1061600)
#define MX_CORE_FIXEDMATH_TSVECTOR2_DIVIDE_OFFSET UNITYSDK_OFFSET(0x1061690)
#define MX_CORE_FIXEDMATH_TSVECTOR2_DIVIDE_OFFSET UNITYSDK_OFFSET(0x1061710)
#define MX_CORE_FIXEDMATH_TSVECTOR2_DIVIDE_OFFSET UNITYSDK_OFFSET(0x10617B0)
#define MX_CORE_FIXEDMATH_TSVECTOR2_DOT_OFFSET UNITYSDK_OFFSET(0x1060800)
#define MX_CORE_FIXEDMATH_TSVECTOR2_DOT_OFFSET UNITYSDK_OFFSET(0x1061840)
#define MX_CORE_FIXEDMATH_TSVECTOR2_EQUALS_OFFSET UNITYSDK_OFFSET(0x10618D0)
#define MX_CORE_FIXEDMATH_TSVECTOR2_EQUALS_OFFSET UNITYSDK_OFFSET(0x10619E0)
#define MX_CORE_FIXEDMATH_TSVECTOR2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1061AD0)
#define MX_CORE_FIXEDMATH_TSVECTOR2_HERMITE_OFFSET UNITYSDK_OFFSET(0x1061B30)
#define MX_CORE_FIXEDMATH_TSVECTOR2_HERMITE_OFFSET UNITYSDK_OFFSET(0x1061C70)
#define MX_CORE_FIXEDMATH_TSVECTOR2_GET_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1061D30)
#define MX_CORE_FIXEDMATH_TSVECTOR2_GET_SQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1061E20)
#define MX_CORE_FIXEDMATH_TSVECTOR2_CLAMPMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1061E90)
#define MX_CORE_FIXEDMATH_TSVECTOR2_SQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x10620B0)
#define MX_CORE_FIXEDMATH_TSVECTOR2_LERP_OFFSET UNITYSDK_OFFSET(0x1062120)
#define MX_CORE_FIXEDMATH_TSVECTOR2_LERPUNCLAMPED_OFFSET UNITYSDK_OFFSET(0x1062280)
#define MX_CORE_FIXEDMATH_TSVECTOR2_LERPUNCLAMPED_OFFSET UNITYSDK_OFFSET(0x1062310)
#define MX_CORE_FIXEDMATH_TSVECTOR2_MAX_OFFSET UNITYSDK_OFFSET(0x10623A0)
#define MX_CORE_FIXEDMATH_TSVECTOR2_MAX_OFFSET UNITYSDK_OFFSET(0x10624D0)
#define MX_CORE_FIXEDMATH_TSVECTOR2_MIN_OFFSET UNITYSDK_OFFSET(0x1062600)
#define MX_CORE_FIXEDMATH_TSVECTOR2_MIN_OFFSET UNITYSDK_OFFSET(0x1062730)
#define MX_CORE_FIXEDMATH_TSVECTOR2_SCALE_OFFSET UNITYSDK_OFFSET(0x1062860)
#define MX_CORE_FIXEDMATH_TSVECTOR2_SCALE_OFFSET UNITYSDK_OFFSET(0x10628E0)
#define MX_CORE_FIXEDMATH_TSVECTOR2_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1062970)
#define MX_CORE_FIXEDMATH_TSVECTOR2_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1062A00)
#define MX_CORE_FIXEDMATH_TSVECTOR2_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1062A90)
#define MX_CORE_FIXEDMATH_TSVECTOR2_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1062B10)
#define MX_CORE_FIXEDMATH_TSVECTOR2_NEGATE_OFFSET UNITYSDK_OFFSET(0x1062B90)
#define MX_CORE_FIXEDMATH_TSVECTOR2_NEGATE_OFFSET UNITYSDK_OFFSET(0x1062C10)
#define MX_CORE_FIXEDMATH_TSVECTOR2_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x1062C80)
#define MX_CORE_FIXEDMATH_TSVECTOR2_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x1061FC0)
#define MX_CORE_FIXEDMATH_TSVECTOR2_GET_NORMALIZED_OFFSET UNITYSDK_OFFSET(0x1062DB0)
#define MX_CORE_FIXEDMATH_TSVECTOR2_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x1062CD0)
#define MX_CORE_FIXEDMATH_TSVECTOR2_SMOOTHSTEP_OFFSET UNITYSDK_OFFSET(0x1062E20)
#define MX_CORE_FIXEDMATH_TSVECTOR2_SMOOTHSTEP_OFFSET UNITYSDK_OFFSET(0x1062EB0)
#define MX_CORE_FIXEDMATH_TSVECTOR2_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x1062F40)
#define MX_CORE_FIXEDMATH_TSVECTOR2_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x1062FD0)
#define MX_CORE_FIXEDMATH_TSVECTOR2_ANGLE_OFFSET UNITYSDK_OFFSET(0x1063050)
#define MX_CORE_FIXEDMATH_TSVECTOR2_SIGNEDANGLE_OFFSET UNITYSDK_OFFSET(0x1063280)
#define MX_CORE_FIXEDMATH_TSVECTOR2_TOTSVECTOR3_OFFSET UNITYSDK_OFFSET(0x1063370)
#define MX_CORE_FIXEDMATH_TSVECTOR2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x10633F0)
#define MX_CORE_FIXEDMATH_TSVECTOR2_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x10634B0)
#define MX_CORE_FIXEDMATH_TSVECTOR2_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1061560)
#define MX_CORE_FIXEDMATH_TSVECTOR2_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1063530)
#define MX_CORE_FIXEDMATH_TSVECTOR2_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x10635D0)
#define MX_CORE_FIXEDMATH_TSVECTOR2_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1063660)
#define MX_CORE_FIXEDMATH_TSVECTOR2_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1063800)
#define MX_CORE_FIXEDMATH_TSVECTOR2_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1063890)
#define MX_CORE_FIXEDMATH_TSVECTOR2_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1063960)
#define MX_CORE_FIXEDMATH_TSVECTOR2_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1063A00)
#define MX_CORE_FIXEDMATH_TSVECTOR2_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1062020)
#define MX_CORE_FIXEDMATH_TSVECTOR2_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1063A90)
#define MX_CORE_FIXEDMATH_TSVECTOR2_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1063B20)
#define MX_CORE_FIXEDMATH_TSVECTOR2_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1063BB0)
#define MX_CORE_FIXEDMATH_TSVECTOR2_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1063C50)
#define MX_CORE_FIXEDMATH_TSVECTOR2_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1063C60)
#define MX_CORE_FIXEDMATH_TSVECTOR2_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1063CD0)
#define MX_CORE_FIXEDMATH_TSVECTOR2_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1063780)
#define MX_CORE_FIXEDMATH_TSVECTOR2_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1063D60)
#define MX_CORE_FIXEDMATH_TSVECTOR2_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1063DE0)
#define MX_CORE_FIXEDMATH_TSVECTOR2_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1063E60)

namespace MX::Core::FixedMath
{
	inline static constexpr unsigned int TSVector2_TypeDefinitionIndex = 12870;

	class TSVector2 : public Il2CppObject
	{
	public:
		::MX::Core::FixedMath::TSVector2* zeroVector; // 0x0
		::MX::Core::FixedMath::TSVector2* oneVector; // 0x10
		::MX::Core::FixedMath::TSVector2* rightVector; // 0x20
		::MX::Core::FixedMath::TSVector2* leftVector; // 0x30
		::MX::Core::FixedMath::TSVector2* upVector; // 0x40
		::MX::Core::FixedMath::TSVector2* downVector; // 0x50
		::MX::Core::FixedMath::TSVector2* positiveInfinityVector; // 0x60
		::MX::Core::FixedMath::TSVector2* negativeInfinityVector; // 0x70
		::MX::Core::FixedMath::Fix64* x; // 0x10
		::MX::Core::FixedMath::Fix64* y; // 0x18

		::MX::Core::FixedMath::TSVector2* get_zero()
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_GET_ZERO_OFFSET))(nullptr);
		}

		::MX::Core::FixedMath::TSVector2* get_one()
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_GET_ONE_OFFSET))(nullptr);
		}

		::MX::Core::FixedMath::TSVector2* get_right()
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_GET_RIGHT_OFFSET))(nullptr);
		}

		::MX::Core::FixedMath::TSVector2* get_left()
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_GET_LEFT_OFFSET))(nullptr);
		}

		::MX::Core::FixedMath::TSVector2* get_up()
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_GET_UP_OFFSET))(nullptr);
		}

		::MX::Core::FixedMath::TSVector2* get_down()
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_GET_DOWN_OFFSET))(nullptr);
		}

		::MX::Core::FixedMath::TSVector2* get_positiveInfinity()
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_GET_POSITIVEINFINITY_OFFSET))(nullptr);
		}

		::MX::Core::FixedMath::TSVector2* get_negativeInfinity()
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_GET_NEGATIVEINFINITY_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			((::System::Void(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::MX::Core::FixedMath::Fix64* arg)
		{
			((::System::Void(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Set(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			((::System::Void(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_SET_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Reflect(::MX::Core::FixedMath::TSVector2&* arg, ::MX::Core::FixedMath::TSVector2&* arg2, ::MX::Core::FixedMath::TSVector2&* arg3)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector2&*, ::MX::Core::FixedMath::TSVector2&*, ::MX::Core::FixedMath::TSVector2&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_REFLECT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* Reflect(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::TSVector2* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_REFLECT_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* Add(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::TSVector2* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_ADD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Add(::MX::Core::FixedMath::TSVector2&* arg, ::MX::Core::FixedMath::TSVector2&* arg2, ::MX::Core::FixedMath::TSVector2&* arg3)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector2&*, ::MX::Core::FixedMath::TSVector2&*, ::MX::Core::FixedMath::TSVector2&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_ADD_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* Barycentric(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::TSVector2* arg2, ::MX::Core::FixedMath::TSVector2* arg3, ::MX::Core::FixedMath::Fix64* arg4, ::MX::Core::FixedMath::Fix64* arg5)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_BARYCENTRIC_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void Barycentric(::MX::Core::FixedMath::TSVector2&* arg, ::MX::Core::FixedMath::TSVector2&* arg2, ::MX::Core::FixedMath::TSVector2&* arg3, ::MX::Core::FixedMath::Fix64* arg4, ::MX::Core::FixedMath::Fix64* arg5, ::MX::Core::FixedMath::TSVector2&* arg6)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector2&*, ::MX::Core::FixedMath::TSVector2&*, ::MX::Core::FixedMath::TSVector2&*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::TSVector2&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_BARYCENTRIC_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* CatmullRom(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::TSVector2* arg2, ::MX::Core::FixedMath::TSVector2* arg3, ::MX::Core::FixedMath::TSVector2* arg4, ::MX::Core::FixedMath::Fix64* arg5)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_CATMULLROM_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void CatmullRom(::MX::Core::FixedMath::TSVector2&* arg, ::MX::Core::FixedMath::TSVector2&* arg2, ::MX::Core::FixedMath::TSVector2&* arg3, ::MX::Core::FixedMath::TSVector2&* arg4, ::MX::Core::FixedMath::Fix64* arg5, ::MX::Core::FixedMath::TSVector2&* arg6)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector2&*, ::MX::Core::FixedMath::TSVector2&*, ::MX::Core::FixedMath::TSVector2&*, ::MX::Core::FixedMath::TSVector2&*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::TSVector2&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_CATMULLROM_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* Clamp(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::TSVector2* arg2, ::MX::Core::FixedMath::TSVector2* arg3)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_CLAMP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Clamp(::MX::Core::FixedMath::TSVector2&* arg, ::MX::Core::FixedMath::TSVector2&* arg2, ::MX::Core::FixedMath::TSVector2&* arg3, ::MX::Core::FixedMath::TSVector2&* arg4)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector2&*, ::MX::Core::FixedMath::TSVector2&*, ::MX::Core::FixedMath::TSVector2&*, ::MX::Core::FixedMath::TSVector2&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_CLAMP_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Distance(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::TSVector2* arg2)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_DISTANCE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Distance(::MX::Core::FixedMath::TSVector2&* arg, ::MX::Core::FixedMath::TSVector2&* arg2, ::MX::Core::FixedMath::Fix64&* arg3)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector2&*, ::MX::Core::FixedMath::TSVector2&*, ::MX::Core::FixedMath::Fix64&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_DISTANCE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::Fix64* DistanceSquared(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::TSVector2* arg2)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_DISTANCESQUARED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void DistanceSquared(::MX::Core::FixedMath::TSVector2&* arg, ::MX::Core::FixedMath::TSVector2&* arg2, ::MX::Core::FixedMath::Fix64&* arg3)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector2&*, ::MX::Core::FixedMath::TSVector2&*, ::MX::Core::FixedMath::Fix64&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_DISTANCESQUARED_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* Divide(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::TSVector2* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_DIVIDE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Divide(::MX::Core::FixedMath::TSVector2&* arg, ::MX::Core::FixedMath::TSVector2&* arg2, ::MX::Core::FixedMath::TSVector2&* arg3)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector2&*, ::MX::Core::FixedMath::TSVector2&*, ::MX::Core::FixedMath::TSVector2&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_DIVIDE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* Divide(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_DIVIDE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Divide(::MX::Core::FixedMath::TSVector2&* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::TSVector2&* arg3)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector2&*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::TSVector2&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_DIVIDE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Dot(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::TSVector2* arg2)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_DOT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Dot(::MX::Core::FixedMath::TSVector2&* arg, ::MX::Core::FixedMath::TSVector2&* arg2, ::MX::Core::FixedMath::Fix64&* arg3)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector2&*, ::MX::Core::FixedMath::TSVector2&*, ::MX::Core::FixedMath::Fix64&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_DOT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::Core::FixedMath::TSVector2* arg)
		{
			return ((::System::Boolean(*)(::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_GETHASHCODE_OFFSET))(nullptr);
		}

		::MX::Core::FixedMath::TSVector2* Hermite(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::TSVector2* arg2, ::MX::Core::FixedMath::TSVector2* arg3, ::MX::Core::FixedMath::TSVector2* arg4, ::MX::Core::FixedMath::Fix64* arg5)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_HERMITE_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void Hermite(::MX::Core::FixedMath::TSVector2&* arg, ::MX::Core::FixedMath::TSVector2&* arg2, ::MX::Core::FixedMath::TSVector2&* arg3, ::MX::Core::FixedMath::TSVector2&* arg4, ::MX::Core::FixedMath::Fix64* arg5, ::MX::Core::FixedMath::TSVector2&* arg6)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector2&*, ::MX::Core::FixedMath::TSVector2&*, ::MX::Core::FixedMath::TSVector2&*, ::MX::Core::FixedMath::TSVector2&*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::TSVector2&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_HERMITE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::MX::Core::FixedMath::Fix64* get_magnitude()
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_GET_MAGNITUDE_OFFSET))(nullptr);
		}

		::MX::Core::FixedMath::Fix64* get_sqrMagnitude()
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_GET_SQRMAGNITUDE_OFFSET))(nullptr);
		}

		::MX::Core::FixedMath::TSVector2* ClampMagnitude(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_CLAMPMAGNITUDE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::Fix64* SqrMagnitude(::MX::Core::FixedMath::TSVector2* arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_SQRMAGNITUDE_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* Lerp(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::TSVector2* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_LERP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* LerpUnclamped(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::TSVector2* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_LERPUNCLAMPED_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void LerpUnclamped(::MX::Core::FixedMath::TSVector2&* arg, ::MX::Core::FixedMath::TSVector2&* arg2, ::MX::Core::FixedMath::Fix64* arg3, ::MX::Core::FixedMath::TSVector2&* arg4)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector2&*, ::MX::Core::FixedMath::TSVector2&*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::TSVector2&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_LERPUNCLAMPED_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* Max(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::TSVector2* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_MAX_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Max(::MX::Core::FixedMath::TSVector2&* arg, ::MX::Core::FixedMath::TSVector2&* arg2, ::MX::Core::FixedMath::TSVector2&* arg3)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector2&*, ::MX::Core::FixedMath::TSVector2&*, ::MX::Core::FixedMath::TSVector2&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_MAX_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* Min(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::TSVector2* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_MIN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Min(::MX::Core::FixedMath::TSVector2&* arg, ::MX::Core::FixedMath::TSVector2&* arg2, ::MX::Core::FixedMath::TSVector2&* arg3)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector2&*, ::MX::Core::FixedMath::TSVector2&*, ::MX::Core::FixedMath::TSVector2&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_MIN_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Scale(::MX::Core::FixedMath::TSVector2* arg)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_SCALE_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* Scale(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::TSVector2* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_SCALE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* Multiply(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::TSVector2* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_MULTIPLY_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* Multiply(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_MULTIPLY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Multiply(::MX::Core::FixedMath::TSVector2&* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::TSVector2&* arg3)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector2&*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::TSVector2&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_MULTIPLY_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Multiply(::MX::Core::FixedMath::TSVector2&* arg, ::MX::Core::FixedMath::TSVector2&* arg2, ::MX::Core::FixedMath::TSVector2&* arg3)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector2&*, ::MX::Core::FixedMath::TSVector2&*, ::MX::Core::FixedMath::TSVector2&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_MULTIPLY_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* Negate(::MX::Core::FixedMath::TSVector2* arg)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_NEGATE_OFFSET))(arg, nullptr);
		}

		::System::Void Negate(::MX::Core::FixedMath::TSVector2&* arg, ::MX::Core::FixedMath::TSVector2&* arg2)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector2&*, ::MX::Core::FixedMath::TSVector2&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_NEGATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Normalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_NORMALIZE_OFFSET))(nullptr);
		}

		::MX::Core::FixedMath::TSVector2* Normalize(::MX::Core::FixedMath::TSVector2* arg)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_NORMALIZE_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* get_normalized()
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_GET_NORMALIZED_OFFSET))(nullptr);
		}

		::System::Void Normalize(::MX::Core::FixedMath::TSVector2&* arg, ::MX::Core::FixedMath::TSVector2&* arg2)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector2&*, ::MX::Core::FixedMath::TSVector2&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_NORMALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* SmoothStep(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::TSVector2* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_SMOOTHSTEP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SmoothStep(::MX::Core::FixedMath::TSVector2&* arg, ::MX::Core::FixedMath::TSVector2&* arg2, ::MX::Core::FixedMath::Fix64* arg3, ::MX::Core::FixedMath::TSVector2&* arg4)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector2&*, ::MX::Core::FixedMath::TSVector2&*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::TSVector2&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_SMOOTHSTEP_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* Subtract(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::TSVector2* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_SUBTRACT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Subtract(::MX::Core::FixedMath::TSVector2&* arg, ::MX::Core::FixedMath::TSVector2&* arg2, ::MX::Core::FixedMath::TSVector2&* arg3)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSVector2&*, ::MX::Core::FixedMath::TSVector2&*, ::MX::Core::FixedMath::TSVector2&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_SUBTRACT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Angle(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::TSVector2* arg2)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_ANGLE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::Fix64* SignedAngle(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::TSVector2* arg2)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_SIGNEDANGLE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector3* ToTSVector3()
		{
			return ((::MX::Core::FixedMath::TSVector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_TOTSVECTOR3_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_TOSTRING_OFFSET))(nullptr);
		}

		::MX::Core::FixedMath::TSVector2* op_UnaryNegation(::MX::Core::FixedMath::TSVector2* arg)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_OP_UNARYNEGATION_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::TSVector2* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::TSVector2* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* op_Addition(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::TSVector2* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_OP_ADDITION_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* op_Addition(::MX::Core::FixedMath::TSVector2* arg, ::UnityEngine::Vector2* arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Core::FixedMath::TSVector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_OP_ADDITION_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* op_Subtraction(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::TSVector2* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_OP_SUBTRACTION_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* op_Subtraction(::MX::Core::FixedMath::TSVector2* arg, ::UnityEngine::Vector2* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_OP_SUBTRACTION_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* op_Subtraction(::UnityEngine::Vector2* arg, ::MX::Core::FixedMath::TSVector2* arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_OP_SUBTRACTION_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* op_Multiply(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::TSVector2* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_OP_MULTIPLY_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* op_Multiply(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_OP_MULTIPLY_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* op_Multiply(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::TSVector2* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_OP_MULTIPLY_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* op_Division(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::TSVector2* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_OP_DIVISION_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* op_Division(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_OP_DIVISION_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* op_Implicit(::MX::Core::FixedMath::TSVector3* arg)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::TSVector3* op_Implicit(::MX::Core::FixedMath::TSVector2* arg)
		{
			return ((::MX::Core::FixedMath::TSVector3*(*)(::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* op_Implicit(::UnityEngine::Vector2* arg)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* op_Implicit(::MX::Core::FixedMath::TSVector2* arg)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* op_Implicit(::MX::Core::FixedMath::TSVector2* arg)
		{
			return ((::UnityEngine::Vector3*(*)(::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* op_Explicit(::UnityEngine::Vector3* arg)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSVECTOR2_.CCTOR_OFFSET))(nullptr);
		}

	};
}

