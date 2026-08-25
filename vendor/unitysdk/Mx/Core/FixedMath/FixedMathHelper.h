#pragma once
#include "../../../unitysdk.h"

namespace MX::Core::FixedMath { class Fix64; }
namespace MX::Core::FixedMath { class TSVector2; }
namespace MX::Core::FixedMath { class TSVector3; }
namespace MX::Core::Physics2D { class Direction; }
namespace UnityEngine { class Rect; }

#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_CLAMP_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_CLAMP_OFFSET UNITYSDK_OFFSET(0x10459A0)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_CLAMP_OFFSET UNITYSDK_OFFSET(0x1045AA0)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_CLAMP_OFFSET UNITYSDK_OFFSET(0x1045B00)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_DISTANCE_OFFSET UNITYSDK_OFFSET(0x1045B70)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_DISTANCE_OFFSET UNITYSDK_OFFSET(0x1045D70)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_DISTANCESQUARED_OFFSET UNITYSDK_OFFSET(0x1045F40)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_MIN_OFFSET UNITYSDK_OFFSET(0x1045FE0)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_MAX_OFFSET UNITYSDK_OFFSET(0x1046160)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_RADIANTODEGREE_OFFSET UNITYSDK_OFFSET(0x10461C0)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_DEGREETORADIAN_OFFSET UNITYSDK_OFFSET(0x10463E0)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_DEGREETORADIAN_OFFSET UNITYSDK_OFFSET(0x1046490)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_WRAPTOPI_OFFSET UNITYSDK_OFFSET(0x1046540)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_WRAPTO2PI_OFFSET UNITYSDK_OFFSET(0x10467A0)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_ANGLEDISTANCERADIAN_OFFSET UNITYSDK_OFFSET(0x1046880)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_ANGLEDISTANCEDEGREE_OFFSET UNITYSDK_OFFSET(0x1046A10)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_ANGLEDISTANCEDEGREE_OFFSET UNITYSDK_OFFSET(0x1046A60)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_ROTATEDEGREE_OFFSET UNITYSDK_OFFSET(0x1046AB0)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_ROTATEDEGREE_OFFSET UNITYSDK_OFFSET(0x1046C90)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_ROTATERADIAN_OFFSET UNITYSDK_OFFSET(0x1046B90)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_LOCALTOWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x1046DB0)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_POINTTOWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x1046F20)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_POINTTOWORLDSPACE_OFFSET UNITYSDK_OFFSET(0x1047270)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_POINTTOWORLDSPACE_OFFSET UNITYSDK_OFFSET(0x10473D0)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_POINTTOLOCALSPACE_OFFSET UNITYSDK_OFFSET(0x1047B60)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_POINTTOLOCALSPACE_OFFSET UNITYSDK_OFFSET(0x1047BF0)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_VECTORTOWORLDSPACE_OFFSET UNITYSDK_OFFSET(0x1047EA0)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_LERP_OFFSET UNITYSDK_OFFSET(0x10480D0)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_TOINT32_OFFSET UNITYSDK_OFFSET(0x1048300)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_ROUND_OFFSET UNITYSDK_OFFSET(0x1047AD0)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_ROUND_OFFSET UNITYSDK_OFFSET(0x1048670)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_ROUND_OFFSET UNITYSDK_OFFSET(0x1045C20)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_ROUND_OFFSET UNITYSDK_OFFSET(0x1048520)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_FLOOR_OFFSET UNITYSDK_OFFSET(0x1048700)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_FLOOR_OFFSET UNITYSDK_OFFSET(0x1048780)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_FLOOR_OFFSET UNITYSDK_OFFSET(0x1048940)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_FLOOR_OFFSET UNITYSDK_OFFSET(0x10489E0)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_ROUNDHALF_OFFSET UNITYSDK_OFFSET(0x1048AB0)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_ROUNDHALF_OFFSET UNITYSDK_OFFSET(0x1048B40)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_ALMOSTEQUAL_OFFSET UNITYSDK_OFFSET(0x1048BC0)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_ALMOSTGREATER_OFFSET UNITYSDK_OFFSET(0x1046040)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_ALMOSTGREATEROREQUAL_OFFSET UNITYSDK_OFFSET(0x1048D60)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_ALMOSTLESS_OFFSET UNITYSDK_OFFSET(0x1046680)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_ALMOSTLESSOREQUAL_OFFSET UNITYSDK_OFFSET(0x1048DE0)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_ALMOSTEQUAL_OFFSET UNITYSDK_OFFSET(0x1048E60)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_MAGNITUDEEQUAL_OFFSET UNITYSDK_OFFSET(0x1048F00)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_MAGNITUDEEQUAL_OFFSET UNITYSDK_OFFSET(0x1048F90)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_MAGNITUDEGREATER_OFFSET UNITYSDK_OFFSET(0x1049090)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_MAGNITUDEGREATEROREQUAL_OFFSET UNITYSDK_OFFSET(0x1049190)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_MAGNITUDELESS_OFFSET UNITYSDK_OFFSET(0x1049230)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_MAGNITUDELESSOREQUAL_OFFSET UNITYSDK_OFFSET(0x1049330)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_RADIANTOVECTOR2_OFFSET UNITYSDK_OFFSET(0x10494B0)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_ROUNDMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1045EC0)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_ROUNDSQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1049640)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_MIRROR_OFFSET UNITYSDK_OFFSET(0x10496C0)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_MIRROR_OFFSET UNITYSDK_OFFSET(0x1049810)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_BARYCENTRIC_OFFSET UNITYSDK_OFFSET(0x1049930)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_CATMULLROM_OFFSET UNITYSDK_OFFSET(0x10499D0)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_SMOOTHSTEP_OFFSET UNITYSDK_OFFSET(0x1049BC0)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_HERMITE_OFFSET UNITYSDK_OFFSET(0x1049C80)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_LERP_OFFSET UNITYSDK_OFFSET(0x1048290)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_ISPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0x1049ED0)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_TORADIAN_OFFSET UNITYSDK_OFFSET(0x1047300)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_TORADIANINFLOAT_OFFSET UNITYSDK_OFFSET(0x1049EE0)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_ANGLEDISTANCERADIAN_OFFSET UNITYSDK_OFFSET(0x1049F70)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_TRUNCATE_OFFSET UNITYSDK_OFFSET(0x104A120)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_RESIZE_OFFSET UNITYSDK_OFFSET(0x104A200)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_PERPLEFT_OFFSET UNITYSDK_OFFSET(0x104A2E0)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_PERPRIGHT_OFFSET UNITYSDK_OFFSET(0x104A3B0)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_HEADING_OFFSET UNITYSDK_OFFSET(0x104A470)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_INDEX_OFFSET UNITYSDK_OFFSET(0x104A5D0)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x104A630)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_COS_OFFSET UNITYSDK_OFFSET(0x104A6A0)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_SIN_OFFSET UNITYSDK_OFFSET(0x104A730)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_MAX_OFFSET UNITYSDK_OFFSET(0x104A7C0)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_MAX_OFFSET UNITYSDK_OFFSET(0x104AA90)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_MIN_OFFSET UNITYSDK_OFFSET(0x104AD70)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_MIN_OFFSET UNITYSDK_OFFSET(0x104B040)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_SUM_OFFSET UNITYSDK_OFFSET(0x104B320)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_SUM_OFFSET UNITYSDK_OFFSET(0x104B5F0)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_CONVERTTOVISUAL_OFFSET UNITYSDK_OFFSET(0x104B8B0)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_CONVERTTOVISUAL_OFFSET UNITYSDK_OFFSET(0x104B980)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_CONVERTTOLOGIC_OFFSET UNITYSDK_OFFSET(0x104B9C0)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_GETRIGHT_OFFSET UNITYSDK_OFFSET(0x104B9F0)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_GETFORWARD_OFFSET UNITYSDK_OFFSET(0x104BAB0)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_TOMETER_OFFSET UNITYSDK_OFFSET(0x104BB80)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_TOCENTIMETER_OFFSET UNITYSDK_OFFSET(0x104BBE0)
#define MX_CORE_FIXEDMATH_FIXEDMATHHELPER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x104BC40)

namespace MX::Core::FixedMath
{
	inline static constexpr unsigned int FixedMathHelper_TypeDefinitionIndex = 12863;

	class FixedMathHelper : public Il2CppObject
	{
	public:
		::MX::Core::FixedMath::Fix64* Epsilon; // 0x0
		::MX::Core::FixedMath::Fix64* fPi; // 0x8
		::MX::Core::FixedMath::Fix64* fPiOver2; // 0x10
		::MX::Core::FixedMath::Fix64* fTwoPi; // 0x18
		::MX::Core::FixedMath::Fix64* fPiOver180; // 0x20

		Il2CppObject* Clamp(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_CLAMP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Clamp(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_CLAMP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int32 Clamp(::System::Int32 arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_CLAMP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int64 Clamp(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			return ((::System::Int64(*)(::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_CLAMP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Distance(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_DISTANCE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Distance(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::TSVector2* arg2)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_DISTANCE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::Fix64* DistanceSquared(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::TSVector2* arg2)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_DISTANCESQUARED_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Min(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_MIN_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Max(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_MAX_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 RadianToDegree(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::System::Int32(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_RADIANTODEGREE_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* DegreeToRadian(::System::Int32 arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_DEGREETORADIAN_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* DegreeToRadian(::System::Int64 arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_DEGREETORADIAN_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* WrapToPi(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_WRAPTOPI_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* WrapTo2Pi(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_WRAPTO2PI_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* AngleDistanceRadian(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_ANGLEDISTANCERADIAN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 AngleDistanceDegree(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_ANGLEDISTANCEDEGREE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 AngleDistanceDegree(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((::System::Int64(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_ANGLEDISTANCEDEGREE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* RotateDegree(::MX::Core::FixedMath::TSVector2* arg, ::System::Int32 arg2)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector2*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_ROTATEDEGREE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* RotateDegree(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_ROTATEDEGREE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* RotateRadian(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_ROTATERADIAN_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* LocalToWorldPosition(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::TSVector2* arg2, ::MX::Core::FixedMath::TSVector2* arg3)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_LOCALTOWORLDPOSITION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::TSVector3* PointToWorldPosition(::MX::Core::FixedMath::TSVector3* arg, ::MX::Core::FixedMath::TSVector3* arg2, ::MX::Core::FixedMath::TSVector3* arg3)
		{
			return ((::MX::Core::FixedMath::TSVector3*(*)(::MX::Core::FixedMath::TSVector3*, ::MX::Core::FixedMath::TSVector3*, ::MX::Core::FixedMath::TSVector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_POINTTOWORLDPOSITION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* PointToWorldSpace(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::TSVector2* arg2, ::MX::Core::FixedMath::TSVector2* arg3)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_POINTTOWORLDSPACE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* PointToWorldSpace(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::TSVector2* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_POINTTOWORLDSPACE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* PointToLocalSpace(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::TSVector2* arg2, ::MX::Core::FixedMath::TSVector2* arg3)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_POINTTOLOCALSPACE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* PointToLocalSpace(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::TSVector2* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_POINTTOLOCALSPACE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* VectorToWorldSpace(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::TSVector2* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_VECTORTOWORLDSPACE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* Lerp(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::TSVector2* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_LERP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int32 ToInt32(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::System::Int32(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_TOINT32_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* Round(::MX::Core::FixedMath::TSVector2* arg)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_ROUND_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* Round(::MX::Core::FixedMath::TSVector2* arg, ::System::Int32 arg2)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector2*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_ROUND_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Round(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_ROUND_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Round(::MX::Core::FixedMath::Fix64* arg, ::System::Int32 arg2)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_ROUND_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* Floor(::MX::Core::FixedMath::TSVector2* arg)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_FLOOR_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Floor(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_FLOOR_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Floor(::MX::Core::FixedMath::Fix64* arg, ::System::Int32 arg2)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_FLOOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Double Floor(::System::Double arg, ::System::Int32 arg2)
		{
			return ((::System::Double(*)(::System::Double, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_FLOOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::Fix64* RoundHalf(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_ROUNDHALF_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* RoundHalf(::MX::Core::FixedMath::TSVector2* arg)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_ROUNDHALF_OFFSET))(arg, nullptr);
		}

		::System::Boolean AlmostEqual(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_ALMOSTEQUAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean AlmostGreater(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_ALMOSTGREATER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean AlmostGreaterOrEqual(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_ALMOSTGREATEROREQUAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean AlmostLess(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_ALMOSTLESS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean AlmostLessOrEqual(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_ALMOSTLESSOREQUAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean AlmostEqual(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::TSVector2* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_ALMOSTEQUAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean MagnitudeEqual(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::TSVector2* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_MAGNITUDEEQUAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean MagnitudeEqual(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_MAGNITUDEEQUAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean MagnitudeGreater(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_MAGNITUDEGREATER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean MagnitudeGreaterOrEqual(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_MAGNITUDEGREATEROREQUAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean MagnitudeLess(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_MAGNITUDELESS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean MagnitudeLessOrEqual(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_MAGNITUDELESSOREQUAL_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* RadianToVector2(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_RADIANTOVECTOR2_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* RoundMagnitude(::MX::Core::FixedMath::TSVector2* arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_ROUNDMAGNITUDE_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* RoundSqrMagnitude(::MX::Core::FixedMath::TSVector2* arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_ROUNDSQRMAGNITUDE_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* Mirror(::MX::Core::FixedMath::TSVector2* arg)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_MIRROR_OFFSET))(arg, nullptr);
		}

		::MX::Core::Physics2D::Direction* Mirror(::MX::Core::Physics2D::Direction* arg)
		{
			return ((::MX::Core::Physics2D::Direction*(*)(::MX::Core::Physics2D::Direction*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_MIRROR_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Barycentric(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3, ::MX::Core::FixedMath::Fix64* arg4, ::MX::Core::FixedMath::Fix64* arg5)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_BARYCENTRIC_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::MX::Core::FixedMath::Fix64* CatmullRom(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3, ::MX::Core::FixedMath::Fix64* arg4, ::MX::Core::FixedMath::Fix64* arg5)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_CATMULLROM_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::MX::Core::FixedMath::Fix64* SmoothStep(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_SMOOTHSTEP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Hermite(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3, ::MX::Core::FixedMath::Fix64* arg4, ::MX::Core::FixedMath::Fix64* arg5)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_HERMITE_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Lerp(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_LERP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean IsPowerOfTwo(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_ISPOWEROFTWO_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* ToRadian(::MX::Core::FixedMath::TSVector2* arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_TORADIAN_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* ToRadianInFloat(::MX::Core::FixedMath::TSVector2* arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_TORADIANINFLOAT_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* AngleDistanceRadian(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::TSVector2* arg2)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_ANGLEDISTANCERADIAN_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* Truncate(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_TRUNCATE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* Resize(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_RESIZE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* PerpLeft(::MX::Core::FixedMath::TSVector2* arg)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_PERPLEFT_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* PerpRight(::MX::Core::FixedMath::TSVector2* arg)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_PERPRIGHT_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* Heading(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::TSVector2* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_HEADING_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Index(::MX::Core::FixedMath::TSVector2* arg, ::System::Int32 arg2)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::TSVector2*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_INDEX_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsEmpty(::UnityEngine::Rect* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_ISEMPTY_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Cos(::System::Int32 arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_COS_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Sin(::System::Int32 arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_SIN_OFFSET))(arg, nullptr);
		}

		::System::Int32 Max(Il2CppObject* arg)
		{
			return ((::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_MAX_OFFSET))(arg, nullptr);
		}

		::System::Int64 Max(Il2CppObject* arg)
		{
			return ((::System::Int64(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_MAX_OFFSET))(arg, nullptr);
		}

		::System::Int32 Min(Il2CppObject* arg)
		{
			return ((::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_MIN_OFFSET))(arg, nullptr);
		}

		::System::Int64 Min(Il2CppObject* arg)
		{
			return ((::System::Int64(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_MIN_OFFSET))(arg, nullptr);
		}

		::System::Int64 Sum(Il2CppObject* arg)
		{
			return ((::System::Int64(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_SUM_OFFSET))(arg, nullptr);
		}

		::System::Int32 Sum(Il2CppObject* arg)
		{
			return ((::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_SUM_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::TSVector3* ConvertToVisual(::MX::Core::FixedMath::TSVector2* arg)
		{
			return ((::MX::Core::FixedMath::TSVector3*(*)(::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_CONVERTTOVISUAL_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::TSVector3* ConvertToVisual(::MX::Core::FixedMath::TSVector2* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::MX::Core::FixedMath::TSVector3*(*)(::MX::Core::FixedMath::TSVector2*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_CONVERTTOVISUAL_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* ConvertToLogic(::MX::Core::FixedMath::TSVector3* arg)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_CONVERTTOLOGIC_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* GetRight(::MX::Core::FixedMath::TSVector2* arg)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_GETRIGHT_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::TSVector2* GetForward(::MX::Core::FixedMath::TSVector2* arg)
		{
			return ((::MX::Core::FixedMath::TSVector2*(*)(::MX::Core::FixedMath::TSVector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_GETFORWARD_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* ToMeter(::System::Int64 arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_TOMETER_OFFSET))(arg, nullptr);
		}

		::System::Int64 ToCentiMeter(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::System::Int64(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_TOCENTIMETER_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIXEDMATHHELPER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

