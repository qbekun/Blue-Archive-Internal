#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector2; }
namespace MX::Core::Physics2D { class Direction; }
namespace UnityEngine { class Rect; }
namespace UnityEngine { class Collider; }

#define MX_CORE_MATH_MATHHELPER_CUSTOMEQUALS_OFFSET UNITYSDK_OFFSET(0x10284E0)
#define MX_CORE_MATH_MATHHELPER_CLAMP_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_MATH_MATHHELPER_CLAMP_OFFSET UNITYSDK_OFFSET(0x101B3B0)
#define MX_CORE_MATH_MATHHELPER_CLAMP_OFFSET UNITYSDK_OFFSET(0x1028530)
#define MX_CORE_MATH_MATHHELPER_CLAMP_OFFSET UNITYSDK_OFFSET(0x1028590)
#define MX_CORE_MATH_MATHHELPER_DISTANCE_OFFSET UNITYSDK_OFFSET(0x1028600)
#define MX_CORE_MATH_MATHHELPER_DISTANCE_OFFSET UNITYSDK_OFFSET(0x101ED20)
#define MX_CORE_MATH_MATHHELPER_DISTANCESQUARED_OFFSET UNITYSDK_OFFSET(0x10287B0)
#define MX_CORE_MATH_MATHHELPER_MIN_OFFSET UNITYSDK_OFFSET(0x1026C70)
#define MX_CORE_MATH_MATHHELPER_MIN_OFFSET UNITYSDK_OFFSET(0x10287D0)
#define MX_CORE_MATH_MATHHELPER_MAX_OFFSET UNITYSDK_OFFSET(0x1028950)
#define MX_CORE_MATH_MATHHELPER_RADIANTODEGREE_OFFSET UNITYSDK_OFFSET(0x10186C0)
#define MX_CORE_MATH_MATHHELPER_RADIANTODEGREE_OFFSET UNITYSDK_OFFSET(0x1028990)
#define MX_CORE_MATH_MATHHELPER_DEGREETORADIAN_OFFSET UNITYSDK_OFFSET(0x1018830)
#define MX_CORE_MATH_MATHHELPER_DEGREETORADIAN_OFFSET UNITYSDK_OFFSET(0x10289A0)
#define MX_CORE_MATH_MATHHELPER_WRAPTOPI_OFFSET UNITYSDK_OFFSET(0x10289B0)
#define MX_CORE_MATH_MATHHELPER_WRAPTO2PI_OFFSET UNITYSDK_OFFSET(0x1018130)
#define MX_CORE_MATH_MATHHELPER_ANGLEDISTANCERADIAN_OFFSET UNITYSDK_OFFSET(0x1018B70)
#define MX_CORE_MATH_MATHHELPER_ANGLEDISTANCERADIAN_OFFSET UNITYSDK_OFFSET(0x1028A20)
#define MX_CORE_MATH_MATHHELPER_ANGLEDISTANCEDEGREE_OFFSET UNITYSDK_OFFSET(0x1028A80)
#define MX_CORE_MATH_MATHHELPER_ANGLEDISTANCEDEGREE_OFFSET UNITYSDK_OFFSET(0x1028AD0)
#define MX_CORE_MATH_MATHHELPER_ROTATEDEGREE_OFFSET UNITYSDK_OFFSET(0x1028B20)
#define MX_CORE_MATH_MATHHELPER_ROTATEDEGREE_OFFSET UNITYSDK_OFFSET(0x1028BD0)
#define MX_CORE_MATH_MATHHELPER_ROTATERADIAN_OFFSET UNITYSDK_OFFSET(0x101BF00)
#define MX_CORE_MATH_MATHHELPER_LOCALTOWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x1028C80)
#define MX_CORE_MATH_MATHHELPER_POINTTOWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x1028CE0)
#define MX_CORE_MATH_MATHHELPER_POINTTOWORLDSPACE_OFFSET UNITYSDK_OFFSET(0x10267C0)
#define MX_CORE_MATH_MATHHELPER_POINTTOWORLDSPACE_OFFSET UNITYSDK_OFFSET(0x101DE20)
#define MX_CORE_MATH_MATHHELPER_POINTTOLOCALSPACE_OFFSET UNITYSDK_OFFSET(0x10215D0)
#define MX_CORE_MATH_MATHHELPER_POINTTOLOCALSPACE_OFFSET UNITYSDK_OFFSET(0x101D8D0)
#define MX_CORE_MATH_MATHHELPER_VECTORTOWORLDSPACE_OFFSET UNITYSDK_OFFSET(0x10294B0)
#define MX_CORE_MATH_MATHHELPER_LERP_OFFSET UNITYSDK_OFFSET(0x1029800)
#define MX_CORE_MATH_MATHHELPER_TOINT32_OFFSET UNITYSDK_OFFSET(0x1029860)
#define MX_CORE_MATH_MATHHELPER_ROUND_OFFSET UNITYSDK_OFFSET(0x10292D0)
#define MX_CORE_MATH_MATHHELPER_ROUND_OFFSET UNITYSDK_OFFSET(0x1029B40)
#define MX_CORE_MATH_MATHHELPER_ROUND_OFFSET UNITYSDK_OFFSET(0x10286E0)
#define MX_CORE_MATH_MATHHELPER_ROUND_OFFSET UNITYSDK_OFFSET(0x1029A70)
#define MX_CORE_MATH_MATHHELPER_ROUND_OFFSET UNITYSDK_OFFSET(0x1029D20)
#define MX_CORE_MATH_MATHHELPER_FLOOR_OFFSET UNITYSDK_OFFSET(0x1029DE0)
#define MX_CORE_MATH_MATHHELPER_FLOOR_OFFSET UNITYSDK_OFFSET(0x1029F20)
#define MX_CORE_MATH_MATHHELPER_FLOOR_OFFSET UNITYSDK_OFFSET(0x1029FB0)
#define MX_CORE_MATH_MATHHELPER_FLOOR_OFFSET UNITYSDK_OFFSET(0x102A0A0)
#define MX_CORE_MATH_MATHHELPER_FLOOR_OFFSET UNITYSDK_OFFSET(0x1029FD0)
#define MX_CORE_MATH_MATHHELPER_ROUNDHALF_OFFSET UNITYSDK_OFFSET(0x102A130)
#define MX_CORE_MATH_MATHHELPER_ROUNDHALF_OFFSET UNITYSDK_OFFSET(0x102A200)
#define MX_CORE_MATH_MATHHELPER_ALMOSTEQUAL_OFFSET UNITYSDK_OFFSET(0x10191B0)
#define MX_CORE_MATH_MATHHELPER_ALMOSTEQUAL_OFFSET UNITYSDK_OFFSET(0x102A3B0)
#define MX_CORE_MATH_MATHHELPER_ALMOSTGREATER_OFFSET UNITYSDK_OFFSET(0x10198F0)
#define MX_CORE_MATH_MATHHELPER_ALMOSTGREATER_OFFSET UNITYSDK_OFFSET(0x102A490)
#define MX_CORE_MATH_MATHHELPER_ALMOSTGREATEROREQUAL_OFFSET UNITYSDK_OFFSET(0x101DB90)
#define MX_CORE_MATH_MATHHELPER_ALMOSTGREATEROREQUAL_OFFSET UNITYSDK_OFFSET(0x102A540)
#define MX_CORE_MATH_MATHHELPER_ALMOSTLESS_OFFSET UNITYSDK_OFFSET(0x10203A0)
#define MX_CORE_MATH_MATHHELPER_ALMOSTLESS_OFFSET UNITYSDK_OFFSET(0x10288A0)
#define MX_CORE_MATH_MATHHELPER_ALMOSTLESSOREQUAL_OFFSET UNITYSDK_OFFSET(0x101DC10)
#define MX_CORE_MATH_MATHHELPER_ALMOSTLESSOREQUAL_OFFSET UNITYSDK_OFFSET(0x102A670)
#define MX_CORE_MATH_MATHHELPER_ALMOSTEQUAL_OFFSET UNITYSDK_OFFSET(0x101A8F0)
#define MX_CORE_MATH_MATHHELPER_MAGNITUDEEQUAL_OFFSET UNITYSDK_OFFSET(0x102A7B0)
#define MX_CORE_MATH_MATHHELPER_MAGNITUDEEQUAL_OFFSET UNITYSDK_OFFSET(0x102A840)
#define MX_CORE_MATH_MATHHELPER_MAGNITUDEGREATER_OFFSET UNITYSDK_OFFSET(0x1021570)
#define MX_CORE_MATH_MATHHELPER_MAGNITUDEGREATEROREQUAL_OFFSET UNITYSDK_OFFSET(0x102A8C0)
#define MX_CORE_MATH_MATHHELPER_MAGNITUDELESS_OFFSET UNITYSDK_OFFSET(0x1021890)
#define MX_CORE_MATH_MATHHELPER_MAGNITUDELESSOREQUAL_OFFSET UNITYSDK_OFFSET(0x1019620)
#define MX_CORE_MATH_MATHHELPER_MAGNITUDEEQUAL_OFFSET UNITYSDK_OFFSET(0x102A960)
#define MX_CORE_MATH_MATHHELPER_MAGNITUDEGREATER_OFFSET UNITYSDK_OFFSET(0x102AA50)
#define MX_CORE_MATH_MATHHELPER_MAGNITUDEGREATEROREQUAL_OFFSET UNITYSDK_OFFSET(0x102AB30)
#define MX_CORE_MATH_MATHHELPER_RADIANTOVECTOR2_OFFSET UNITYSDK_OFFSET(0x10182B0)
#define MX_CORE_MATH_MATHHELPER_ROUNDMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x10197B0)
#define MX_CORE_MATH_MATHHELPER_ROUNDSQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x101EA80)
#define MX_CORE_MATH_MATHHELPER_MIRROR_OFFSET UNITYSDK_OFFSET(0x102ACA0)
#define MX_CORE_MATH_MATHHELPER_MIRROR_OFFSET UNITYSDK_OFFSET(0x102ACC0)
#define MX_CORE_MATH_MATHHELPER_BARYCENTRIC_OFFSET UNITYSDK_OFFSET(0x102AD60)
#define MX_CORE_MATH_MATHHELPER_CATMULLROM_OFFSET UNITYSDK_OFFSET(0x102AD80)
#define MX_CORE_MATH_MATHHELPER_SMOOTHSTEP_OFFSET UNITYSDK_OFFSET(0x102AE50)
#define MX_CORE_MATH_MATHHELPER_HERMITE_OFFSET UNITYSDK_OFFSET(0x102AF80)
#define MX_CORE_MATH_MATHHELPER_HERMITE_OFFSET UNITYSDK_OFFSET(0x102B0D0)
#define MX_CORE_MATH_MATHHELPER_LERP_OFFSET UNITYSDK_OFFSET(0x1029850)
#define MX_CORE_MATH_MATHHELPER_ISPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0x102B1C0)
#define MX_CORE_MATH_MATHHELPER_TORADIAN_OFFSET UNITYSDK_OFFSET(0x1018460)
#define MX_CORE_MATH_MATHHELPER_TORADIANINFLOAT_OFFSET UNITYSDK_OFFSET(0x102B1D0)
#define MX_CORE_MATH_MATHHELPER_ANGLEDISTANCERADIAN_OFFSET UNITYSDK_OFFSET(0x10257F0)
#define MX_CORE_MATH_MATHHELPER_TRUNCATE_OFFSET UNITYSDK_OFFSET(0x102B290)
#define MX_CORE_MATH_MATHHELPER_RESIZE_OFFSET UNITYSDK_OFFSET(0x1024700)
#define MX_CORE_MATH_MATHHELPER_PERPLEFT_OFFSET UNITYSDK_OFFSET(0x102B3F0)
#define MX_CORE_MATH_MATHHELPER_PERPRIGHT_OFFSET UNITYSDK_OFFSET(0x102B410)
#define MX_CORE_MATH_MATHHELPER_HEADING_OFFSET UNITYSDK_OFFSET(0x102B420)
#define MX_CORE_MATH_MATHHELPER_INDEX_OFFSET UNITYSDK_OFFSET(0x1022870)
#define MX_CORE_MATH_MATHHELPER_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x102B4C0)
#define MX_CORE_MATH_MATHHELPER_COS_OFFSET UNITYSDK_OFFSET(0x102B530)
#define MX_CORE_MATH_MATHHELPER_SIN_OFFSET UNITYSDK_OFFSET(0x102B550)
#define MX_CORE_MATH_MATHHELPER_STDDEV_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_MATH_MATHHELPER_MAX_OFFSET UNITYSDK_OFFSET(0x102B570)
#define MX_CORE_MATH_MATHHELPER_MAX_OFFSET UNITYSDK_OFFSET(0x102B840)
#define MX_CORE_MATH_MATHHELPER_MIN_OFFSET UNITYSDK_OFFSET(0x102BB20)
#define MX_CORE_MATH_MATHHELPER_MIN_OFFSET UNITYSDK_OFFSET(0x102BDF0)
#define MX_CORE_MATH_MATHHELPER_SUM_OFFSET UNITYSDK_OFFSET(0x102C0D0)
#define MX_CORE_MATH_MATHHELPER_SUM_OFFSET UNITYSDK_OFFSET(0x102C3A0)
#define MX_CORE_MATH_MATHHELPER_SUM_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_MATH_MATHHELPER_CONVERTTOVISUAL_OFFSET UNITYSDK_OFFSET(0x102C660)
#define MX_CORE_MATH_MATHHELPER_CONVERTTOVISUAL_OFFSET UNITYSDK_OFFSET(0x102C680)
#define MX_CORE_MATH_MATHHELPER_CONVERTTOLOGIC_OFFSET UNITYSDK_OFFSET(0x102C6A0)
#define MX_CORE_MATH_MATHHELPER_GETRIGHT_OFFSET UNITYSDK_OFFSET(0x1019400)
#define MX_CORE_MATH_MATHHELPER_GETFORWARD_OFFSET UNITYSDK_OFFSET(0x1019430)
#define MX_CORE_MATH_MATHHELPER_TOMETER_OFFSET UNITYSDK_OFFSET(0x1023A50)
#define MX_CORE_MATH_MATHHELPER_TOCENTIMETER_OFFSET UNITYSDK_OFFSET(0x102C6B0)
#define MX_CORE_MATH_MATHHELPER_GETWORLDCORNERS_OFFSET UNITYSDK_OFFSET(0x102C6D0)

namespace MX::Core::Math
{
	inline static constexpr unsigned int MathHelper_TypeDefinitionIndex = 12815;

	class MathHelper : public Il2CppObject
	{
	public:
		::System::Single Epsilon; // 0x0
		::System::Double dEpsilon; // 0x0
		::System::Single E; // 0x0
		::System::Single Log10E; // 0x0
		::System::Single Log2E; // 0x0
		::System::Single fPi; // 0x0
		::System::Single fPiOver2; // 0x0
		::System::Single fPiOver4; // 0x0
		::System::Single fTwoPi; // 0x0
		::System::Single fPiOver180; // 0x0
		::System::Double Pi; // 0x0
		::System::Double PiOver2; // 0x0
		::System::Double PiOver4; // 0x0
		::System::Double PiOver180; // 0x0
		::System::Double TwoPi; // 0x0

		::System::Boolean CustomEquals(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_CUSTOMEQUALS_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* Clamp(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_CLAMP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Single Clamp(::System::Single arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_CLAMP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int32 Clamp(::System::Int32 arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_CLAMP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int64 Clamp(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			return ((::System::Int64(*)(::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_CLAMP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Single Distance(::System::Single arg, ::System::Single arg2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_DISTANCE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Single Distance(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_DISTANCE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Single DistanceSquared(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_DISTANCESQUARED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Single Min(::System::Single arg, ::System::Single arg2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_MIN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Double Min(::System::Double arg, ::System::Double arg2)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_MIN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Single Max(::System::Single arg, ::System::Single arg2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_MAX_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 RadianToDegree(::System::Single arg)
		{
			return ((::System::Int32(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_RADIANTODEGREE_OFFSET))(arg, nullptr);
		}

		::System::Int64 RadianToDegree(::System::Double arg)
		{
			return ((::System::Int64(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_RADIANTODEGREE_OFFSET))(arg, nullptr);
		}

		::System::Single DegreeToRadian(::System::Int32 arg)
		{
			return ((::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_DEGREETORADIAN_OFFSET))(arg, nullptr);
		}

		::System::Double DegreeToRadian(::System::Int64 arg)
		{
			return ((::System::Double(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_DEGREETORADIAN_OFFSET))(arg, nullptr);
		}

		::System::Single WrapToPi(::System::Single arg)
		{
			return ((::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_WRAPTOPI_OFFSET))(arg, nullptr);
		}

		::System::Single WrapTo2Pi(::System::Single arg)
		{
			return ((::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_WRAPTO2PI_OFFSET))(arg, nullptr);
		}

		::System::Single AngleDistanceRadian(::System::Single arg, ::System::Single arg2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_ANGLEDISTANCERADIAN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Double AngleDistanceRadian(::System::Double arg, ::System::Double arg2)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_ANGLEDISTANCERADIAN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 AngleDistanceDegree(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_ANGLEDISTANCEDEGREE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 AngleDistanceDegree(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((::System::Int64(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_ANGLEDISTANCEDEGREE_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* RotateDegree(::UnityEngine::Vector2* arg, ::System::Int32 arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_ROTATEDEGREE_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* RotateDegree(::UnityEngine::Vector2* arg, ::System::Single arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_ROTATEDEGREE_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* RotateRadian(::UnityEngine::Vector2* arg, ::System::Single arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_ROTATERADIAN_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* LocalToWorldPosition(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2, ::UnityEngine::Vector2* arg3)
		{
			return ((::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_LOCALTOWORLDPOSITION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::UnityEngine::Vector3* PointToWorldPosition(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg2, ::UnityEngine::Vector3* arg3)
		{
			return ((::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_POINTTOWORLDPOSITION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::UnityEngine::Vector2* PointToWorldSpace(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2, ::UnityEngine::Vector2* arg3)
		{
			return ((::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_POINTTOWORLDSPACE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::UnityEngine::Vector2* PointToWorldSpace(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2, ::System::Single arg3)
		{
			return ((::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_POINTTOWORLDSPACE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::UnityEngine::Vector2* PointToLocalSpace(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2, ::UnityEngine::Vector2* arg3)
		{
			return ((::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_POINTTOLOCALSPACE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::UnityEngine::Vector2* PointToLocalSpace(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2, ::System::Single arg3)
		{
			return ((::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_POINTTOLOCALSPACE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::UnityEngine::Vector2* VectorToWorldSpace(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_VECTORTOWORLDSPACE_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* Lerp(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2, ::System::Single arg3)
		{
			return ((::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_LERP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int32 ToInt32(::System::Single arg)
		{
			return ((::System::Int32(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_TOINT32_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* Round(::UnityEngine::Vector2* arg)
		{
			return ((::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_ROUND_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* Round(::UnityEngine::Vector2* arg, ::System::Int32 arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_ROUND_OFFSET))(arg, arg2, nullptr);
		}

		::System::Single Round(::System::Single arg)
		{
			return ((::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_ROUND_OFFSET))(arg, nullptr);
		}

		::System::Single Round(::System::Single arg, ::System::Int32 arg2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_ROUND_OFFSET))(arg, arg2, nullptr);
		}

		::System::Double Round(::System::Double arg)
		{
			return ((::System::Double(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_ROUND_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* Floor(::UnityEngine::Vector2* arg)
		{
			return ((::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_FLOOR_OFFSET))(arg, nullptr);
		}

		::System::Single Floor(::System::Single arg)
		{
			return ((::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_FLOOR_OFFSET))(arg, nullptr);
		}

		::System::Single Floor(::System::Single arg, ::System::Int32 arg2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_FLOOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Double Floor(::System::Double arg)
		{
			return ((::System::Double(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_FLOOR_OFFSET))(arg, nullptr);
		}

		::System::Double Floor(::System::Double arg, ::System::Int32 arg2)
		{
			return ((::System::Double(*)(::System::Double, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_FLOOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Single RoundHalf(::System::Single arg)
		{
			return ((::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_ROUNDHALF_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* RoundHalf(::UnityEngine::Vector2* arg)
		{
			return ((::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_ROUNDHALF_OFFSET))(arg, nullptr);
		}

		::System::Boolean AlmostEqual(::System::Single arg, ::System::Single arg2)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_ALMOSTEQUAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean AlmostEqual(::System::Double arg, ::System::Double arg2)
		{
			return ((::System::Boolean(*)(::System::Double, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_ALMOSTEQUAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean AlmostGreater(::System::Single arg, ::System::Single arg2)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_ALMOSTGREATER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean AlmostGreater(::System::Double arg, ::System::Double arg2)
		{
			return ((::System::Boolean(*)(::System::Double, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_ALMOSTGREATER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean AlmostGreaterOrEqual(::System::Single arg, ::System::Single arg2)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_ALMOSTGREATEROREQUAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean AlmostGreaterOrEqual(::System::Double arg, ::System::Double arg2)
		{
			return ((::System::Boolean(*)(::System::Double, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_ALMOSTGREATEROREQUAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean AlmostLess(::System::Single arg, ::System::Single arg2)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_ALMOSTLESS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean AlmostLess(::System::Double arg, ::System::Double arg2)
		{
			return ((::System::Boolean(*)(::System::Double, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_ALMOSTLESS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean AlmostLessOrEqual(::System::Single arg, ::System::Single arg2)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_ALMOSTLESSOREQUAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean AlmostLessOrEqual(::System::Double arg, ::System::Double arg2)
		{
			return ((::System::Boolean(*)(::System::Double, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_ALMOSTLESSOREQUAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean AlmostEqual(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_ALMOSTEQUAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean MagnitudeEqual(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_MAGNITUDEEQUAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean MagnitudeEqual(::UnityEngine::Vector2* arg, ::System::Single arg2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_MAGNITUDEEQUAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean MagnitudeGreater(::UnityEngine::Vector2* arg, ::System::Single arg2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_MAGNITUDEGREATER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean MagnitudeGreaterOrEqual(::UnityEngine::Vector2* arg, ::System::Single arg2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_MAGNITUDEGREATEROREQUAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean MagnitudeLess(::UnityEngine::Vector2* arg, ::System::Single arg2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_MAGNITUDELESS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean MagnitudeLessOrEqual(::UnityEngine::Vector2* arg, ::System::Single arg2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_MAGNITUDELESSOREQUAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean MagnitudeEqual(::UnityEngine::Vector2* arg, ::System::Double arg2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2*, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_MAGNITUDEEQUAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean MagnitudeGreater(::UnityEngine::Vector2* arg, ::System::Double arg2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2*, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_MAGNITUDEGREATER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean MagnitudeGreaterOrEqual(::UnityEngine::Vector2* arg, ::System::Double arg2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2*, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_MAGNITUDEGREATEROREQUAL_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* RadianToVector2(::System::Single arg)
		{
			return ((::UnityEngine::Vector2*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_RADIANTOVECTOR2_OFFSET))(arg, nullptr);
		}

		::System::Single RoundMagnitude(::UnityEngine::Vector2* arg)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_ROUNDMAGNITUDE_OFFSET))(arg, nullptr);
		}

		::System::Single RoundSqrMagnitude(::UnityEngine::Vector2* arg)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_ROUNDSQRMAGNITUDE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* Mirror(::UnityEngine::Vector2* arg)
		{
			return ((::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_MIRROR_OFFSET))(arg, nullptr);
		}

		::MX::Core::Physics2D::Direction* Mirror(::MX::Core::Physics2D::Direction* arg)
		{
			return ((::MX::Core::Physics2D::Direction*(*)(::MX::Core::Physics2D::Direction*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_MIRROR_OFFSET))(arg, nullptr);
		}

		::System::Single Barycentric(::System::Single arg, ::System::Single arg2, ::System::Single arg3, ::System::Single arg4, ::System::Single arg5)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_BARYCENTRIC_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Single CatmullRom(::System::Single arg, ::System::Single arg2, ::System::Single arg3, ::System::Single arg4, ::System::Single arg5)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_CATMULLROM_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Single SmoothStep(::System::Single arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_SMOOTHSTEP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Single Hermite(::System::Single arg, ::System::Single arg2, ::System::Single arg3, ::System::Single arg4, ::System::Single arg5)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_HERMITE_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Double Hermite(::System::Double arg, ::System::Double arg2, ::System::Double arg3, ::System::Double arg4, ::System::Double arg5)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_HERMITE_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Single Lerp(::System::Single arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_LERP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean IsPowerOfTwo(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_ISPOWEROFTWO_OFFSET))(arg, nullptr);
		}

		::System::Single ToRadian(::UnityEngine::Vector2* arg)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_TORADIAN_OFFSET))(arg, nullptr);
		}

		::System::Single ToRadianInFloat(::UnityEngine::Vector2* arg)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_TORADIANINFLOAT_OFFSET))(arg, nullptr);
		}

		::System::Single AngleDistanceRadian(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_ANGLEDISTANCERADIAN_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* Truncate(::UnityEngine::Vector2* arg, ::System::Single arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_TRUNCATE_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* Resize(::UnityEngine::Vector2* arg, ::System::Single arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_RESIZE_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* PerpLeft(::UnityEngine::Vector2* arg)
		{
			return ((::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_PERPLEFT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* PerpRight(::UnityEngine::Vector2* arg)
		{
			return ((::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_PERPRIGHT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* Heading(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_HEADING_OFFSET))(arg, arg2, nullptr);
		}

		::System::Single Index(::UnityEngine::Vector2* arg, ::System::Int32 arg2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_INDEX_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsEmpty(::UnityEngine::Rect* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_ISEMPTY_OFFSET))(arg, nullptr);
		}

		::System::Single Cos(::System::Int32 arg)
		{
			return ((::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_COS_OFFSET))(arg, nullptr);
		}

		::System::Single Sin(::System::Int32 arg)
		{
			return ((::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_SIN_OFFSET))(arg, nullptr);
		}

		::System::Double StdDev(Il2CppObject* arg, Il2CppObject* arg2)
		{
			return ((::System::Double(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_STDDEV_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 Max(Il2CppObject* arg)
		{
			return ((::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_MAX_OFFSET))(arg, nullptr);
		}

		::System::Int64 Max(Il2CppObject* arg)
		{
			return ((::System::Int64(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_MAX_OFFSET))(arg, nullptr);
		}

		::System::Int32 Min(Il2CppObject* arg)
		{
			return ((::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_MIN_OFFSET))(arg, nullptr);
		}

		::System::Int64 Min(Il2CppObject* arg)
		{
			return ((::System::Int64(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_MIN_OFFSET))(arg, nullptr);
		}

		::System::Int64 Sum(Il2CppObject* arg)
		{
			return ((::System::Int64(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_SUM_OFFSET))(arg, nullptr);
		}

		::System::Int32 Sum(Il2CppObject* arg)
		{
			return ((::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_SUM_OFFSET))(arg, nullptr);
		}

		::System::Int64 Sum(Il2CppObject* arg, Il2CppObject* arg2)
		{
			return ((::System::Int64(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_SUM_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector3* ConvertToVisual(::UnityEngine::Vector2* arg)
		{
			return ((::UnityEngine::Vector3*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_CONVERTTOVISUAL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* ConvertToVisual(::UnityEngine::Vector2* arg, ::System::Single arg2)
		{
			return ((::UnityEngine::Vector3*(*)(::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_CONVERTTOVISUAL_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* ConvertToLogic(::UnityEngine::Vector3* arg)
		{
			return ((::UnityEngine::Vector2*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_CONVERTTOLOGIC_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* GetRight(::UnityEngine::Vector2* arg)
		{
			return ((::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_GETRIGHT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* GetForward(::UnityEngine::Vector2* arg)
		{
			return ((::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_GETFORWARD_OFFSET))(arg, nullptr);
		}

		::System::Single ToMeter(::System::Int64 arg)
		{
			return ((::System::Single(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_TOMETER_OFFSET))(arg, nullptr);
		}

		::System::Int64 ToCentiMeter(::System::Single arg)
		{
			return ((::System::Int64(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_TOCENTIMETER_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetWorldCorners(::UnityEngine::Collider* arg)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::UnityEngine::Collider*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MATHHELPER_GETWORLDCORNERS_OFFSET))(arg, nullptr);
		}

	};
}

