#pragma once
#include "../../unitysdk.h"

namespace Unity::Mathematics { class float2; }
namespace Unity::Mathematics { class float3; }
namespace Unity::Mathematics { class float3x3; }
namespace Unity::Mathematics { class float4; }
namespace Unity::Mathematics { class float4x4; }
namespace Unity::Mathematics { class int2; }
namespace Unity::Mathematics { class uint2; }
namespace Unity::Mathematics { class uint3; }
namespace Unity::Mathematics { class uint4; }
namespace Unity::Mathematics { class float3&; }
namespace Unity::Mathematics { class quaternion; }

#define UNITY_MATHEMATICS_MATH_FLOAT2_OFFSET UNITYSDK_OFFSET(0x9F74B30)
#define UNITY_MATHEMATICS_MATH_HASH_OFFSET UNITYSDK_OFFSET(0x9F74B40)
#define UNITY_MATHEMATICS_MATH_FLOAT3_OFFSET UNITYSDK_OFFSET(0x9F74B60)
#define UNITY_MATHEMATICS_MATH_HASH_OFFSET UNITYSDK_OFFSET(0x9F74B80)
#define UNITY_MATHEMATICS_MATH_FLOAT3X3_OFFSET UNITYSDK_OFFSET(0x9F74BA0)
#define UNITY_MATHEMATICS_MATH_HASH_OFFSET UNITYSDK_OFFSET(0x9F74BD0)
#define UNITY_MATHEMATICS_MATH_FLOAT4_OFFSET UNITYSDK_OFFSET(0x9F74C50)
#define UNITY_MATHEMATICS_MATH_FLOAT4_OFFSET UNITYSDK_OFFSET(0x9F74C70)
#define UNITY_MATHEMATICS_MATH_HASH_OFFSET UNITYSDK_OFFSET(0x9F74C90)
#define UNITY_MATHEMATICS_MATH_FLOAT4X4_OFFSET UNITYSDK_OFFSET(0x9F74CE0)
#define UNITY_MATHEMATICS_MATH_HASH_OFFSET UNITYSDK_OFFSET(0x9F74D10)
#define UNITY_MATHEMATICS_MATH_INT2_OFFSET UNITYSDK_OFFSET(0x9F74DE0)
#define UNITY_MATHEMATICS_MATH_HASH_OFFSET UNITYSDK_OFFSET(0x9F74DF0)
#define UNITY_MATHEMATICS_MATH_ASINT_OFFSET UNITYSDK_OFFSET(0x9F74E10)
#define UNITY_MATHEMATICS_MATH_ASUINT_OFFSET UNITYSDK_OFFSET(0x9F74E20)
#define UNITY_MATHEMATICS_MATH_ASUINT_OFFSET UNITYSDK_OFFSET(0x9F74E30)
#define UNITY_MATHEMATICS_MATH_ASUINT_OFFSET UNITYSDK_OFFSET(0x9F74E40)
#define UNITY_MATHEMATICS_MATH_ASUINT_OFFSET UNITYSDK_OFFSET(0x9F74E50)
#define UNITY_MATHEMATICS_MATH_ASUINT_OFFSET UNITYSDK_OFFSET(0x9F74E70)
#define UNITY_MATHEMATICS_MATH_ASFLOAT_OFFSET UNITYSDK_OFFSET(0x9F74E80)
#define UNITY_MATHEMATICS_MATH_ASFLOAT_OFFSET UNITYSDK_OFFSET(0x9F74E90)
#define UNITY_MATHEMATICS_MATH_ASFLOAT_OFFSET UNITYSDK_OFFSET(0x9F74EA0)
#define UNITY_MATHEMATICS_MATH_ASFLOAT_OFFSET UNITYSDK_OFFSET(0x9F74EB0)
#define UNITY_MATHEMATICS_MATH_ASFLOAT_OFFSET UNITYSDK_OFFSET(0x9F74EC0)
#define UNITY_MATHEMATICS_MATH_ISFINITE_OFFSET UNITYSDK_OFFSET(0x9F74ED0)
#define UNITY_MATHEMATICS_MATH_MIN_OFFSET UNITYSDK_OFFSET(0x9F74EF0)
#define UNITY_MATHEMATICS_MATH_MIN_OFFSET UNITYSDK_OFFSET(0x9F74F00)
#define UNITY_MATHEMATICS_MATH_MIN_OFFSET UNITYSDK_OFFSET(0x9F74F10)
#define UNITY_MATHEMATICS_MATH_MIN_OFFSET UNITYSDK_OFFSET(0x9F74FA0)
#define UNITY_MATHEMATICS_MATH_MAX_OFFSET UNITYSDK_OFFSET(0x9F75170)
#define UNITY_MATHEMATICS_MATH_MAX_OFFSET UNITYSDK_OFFSET(0x9F75180)
#define UNITY_MATHEMATICS_MATH_MAX_OFFSET UNITYSDK_OFFSET(0x9F75190)
#define UNITY_MATHEMATICS_MATH_MAX_OFFSET UNITYSDK_OFFSET(0x9F751A0)
#define UNITY_MATHEMATICS_MATH_MAX_OFFSET UNITYSDK_OFFSET(0x9F75230)
#define UNITY_MATHEMATICS_MATH_LERP_OFFSET UNITYSDK_OFFSET(0x9F75430)
#define UNITY_MATHEMATICS_MATH_CLAMP_OFFSET UNITYSDK_OFFSET(0x9F75470)
#define UNITY_MATHEMATICS_MATH_CLAMP_OFFSET UNITYSDK_OFFSET(0x9F75480)
#define UNITY_MATHEMATICS_MATH_ABS_OFFSET UNITYSDK_OFFSET(0x9F75590)
#define UNITY_MATHEMATICS_MATH_ABS_OFFSET UNITYSDK_OFFSET(0x9F755A0)
#define UNITY_MATHEMATICS_MATH_DOT_OFFSET UNITYSDK_OFFSET(0x9F755C0)
#define UNITY_MATHEMATICS_MATH_DOT_OFFSET UNITYSDK_OFFSET(0x9F755F0)
#define UNITY_MATHEMATICS_MATH_TAN_OFFSET UNITYSDK_OFFSET(0x9F75620)
#define UNITY_MATHEMATICS_MATH_COS_OFFSET UNITYSDK_OFFSET(0x9F75680)
#define UNITY_MATHEMATICS_MATH_COS_OFFSET UNITYSDK_OFFSET(0x9F756E0)
#define UNITY_MATHEMATICS_MATH_SIN_OFFSET UNITYSDK_OFFSET(0x9F75800)
#define UNITY_MATHEMATICS_MATH_SIN_OFFSET UNITYSDK_OFFSET(0x9F75860)
#define UNITY_MATHEMATICS_MATH_SQRT_OFFSET UNITYSDK_OFFSET(0x9F75980)
#define UNITY_MATHEMATICS_MATH_RSQRT_OFFSET UNITYSDK_OFFSET(0x9F75A10)
#define UNITY_MATHEMATICS_MATH_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x9F75AB0)
#define UNITY_MATHEMATICS_MATH_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x9F75B70)
#define UNITY_MATHEMATICS_MATH_LENGTH_OFFSET UNITYSDK_OFFSET(0x9F75C30)
#define UNITY_MATHEMATICS_MATH_LENGTH_OFFSET UNITYSDK_OFFSET(0x9F75CB0)
#define UNITY_MATHEMATICS_MATH_LENGTHSQ_OFFSET UNITYSDK_OFFSET(0x9F75D40)
#define UNITY_MATHEMATICS_MATH_LENGTHSQ_OFFSET UNITYSDK_OFFSET(0x9F75D60)
#define UNITY_MATHEMATICS_MATH_DISTANCESQ_OFFSET UNITYSDK_OFFSET(0x9F75D90)
#define UNITY_MATHEMATICS_MATH_DISTANCESQ_OFFSET UNITYSDK_OFFSET(0x9F75DD0)
#define UNITY_MATHEMATICS_MATH_CROSS_OFFSET UNITYSDK_OFFSET(0x9F75E10)
#define UNITY_MATHEMATICS_MATH_SELECT_OFFSET UNITYSDK_OFFSET(0x9F75E60)
#define UNITY_MATHEMATICS_MATH_SELECT_OFFSET UNITYSDK_OFFSET(0x9F75E70)
#define UNITY_MATHEMATICS_MATH_PROJECT_OFFSET UNITYSDK_OFFSET(0x9F75E90)
#define UNITY_MATHEMATICS_MATH_SINCOS_OFFSET UNITYSDK_OFFSET(0x9F75F00)
#define UNITY_MATHEMATICS_MATH_LZCNT_OFFSET UNITYSDK_OFFSET(0x9F76110)
#define UNITY_MATHEMATICS_MATH_LZCNT_OFFSET UNITYSDK_OFFSET(0x9F76150)
#define UNITY_MATHEMATICS_MATH_TZCNT_OFFSET UNITYSDK_OFFSET(0x9F76190)
#define UNITY_MATHEMATICS_MATH_TZCNT_OFFSET UNITYSDK_OFFSET(0x9F761D0)
#define UNITY_MATHEMATICS_MATH_CEILPOW2_OFFSET UNITYSDK_OFFSET(0x9F76210)
#define UNITY_MATHEMATICS_MATH_CEILPOW2_OFFSET UNITYSDK_OFFSET(0x9F76240)
#define UNITY_MATHEMATICS_MATH_RADIANS_OFFSET UNITYSDK_OFFSET(0x9F76290)
#define UNITY_MATHEMATICS_MATH_CSUM_OFFSET UNITYSDK_OFFSET(0x9F762A0)
#define UNITY_MATHEMATICS_MATH_CSUM_OFFSET UNITYSDK_OFFSET(0x9F762B0)
#define UNITY_MATHEMATICS_MATH_CSUM_OFFSET UNITYSDK_OFFSET(0x9F762C0)
#define UNITY_MATHEMATICS_MATH_F16TOF32_OFFSET UNITYSDK_OFFSET(0x9F762E0)
#define UNITY_MATHEMATICS_MATH_FLOAT3X3_OFFSET UNITYSDK_OFFSET(0x9F76340)
#define UNITY_MATHEMATICS_MATH_MUL_OFFSET UNITYSDK_OFFSET(0x9F76580)
#define UNITY_MATHEMATICS_MATH_MUL_OFFSET UNITYSDK_OFFSET(0x9F765F0)
#define UNITY_MATHEMATICS_MATH_QUATERNION_OFFSET UNITYSDK_OFFSET(0x9F76AB0)
#define UNITY_MATHEMATICS_MATH_QUATERNION_OFFSET UNITYSDK_OFFSET(0x9F76AC0)
#define UNITY_MATHEMATICS_MATH_MUL_OFFSET UNITYSDK_OFFSET(0x9F76CB0)
#define UNITY_MATHEMATICS_MATH_HASH_OFFSET UNITYSDK_OFFSET(0x9F76D30)
#define UNITY_MATHEMATICS_MATH_UINT2_OFFSET UNITYSDK_OFFSET(0x9F76D80)
#define UNITY_MATHEMATICS_MATH_HASH_OFFSET UNITYSDK_OFFSET(0x9F76D90)
#define UNITY_MATHEMATICS_MATH_UINT3_OFFSET UNITYSDK_OFFSET(0x9F76DB0)
#define UNITY_MATHEMATICS_MATH_HASH_OFFSET UNITYSDK_OFFSET(0x9F76DC0)
#define UNITY_MATHEMATICS_MATH_UINT4_OFFSET UNITYSDK_OFFSET(0x9F76DE0)
#define UNITY_MATHEMATICS_MATH_UINT4_OFFSET UNITYSDK_OFFSET(0x9F76E00)
#define UNITY_MATHEMATICS_MATH_HASH_OFFSET UNITYSDK_OFFSET(0x9F76E20)

namespace Unity::Mathematics
{
	inline static constexpr unsigned int math_TypeDefinitionIndex = 37563;

	class math : public Il2CppObject
	{
	public:
		::Unity::Mathematics::float2* float2(::System::Single arg, ::System::Single arg)
		{
			return (return (::Unity::Mathematics::float2*(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_FLOAT2_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 hash(::Unity::Mathematics::float2* arg)
		{
			return (return (::System::UInt32(*)(::Unity::Mathematics::float2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_HASH_OFFSET))(arg, nullptr);
		}

		::Unity::Mathematics::float3* float3(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::Unity::Mathematics::float3*(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_FLOAT3_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::UInt32 hash(::Unity::Mathematics::float3* arg)
		{
			return (return (::System::UInt32(*)(::Unity::Mathematics::float3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_HASH_OFFSET))(arg, nullptr);
		}

		::Unity::Mathematics::float3x3* float3x3(::Unity::Mathematics::float3* arg, ::Unity::Mathematics::float3* arg, ::Unity::Mathematics::float3* arg)
		{
			return (return (::Unity::Mathematics::float3x3*(*)(::Unity::Mathematics::float3*, ::Unity::Mathematics::float3*, ::Unity::Mathematics::float3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_FLOAT3X3_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::UInt32 hash(::Unity::Mathematics::float3x3* arg)
		{
			return (return (::System::UInt32(*)(::Unity::Mathematics::float3x3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_HASH_OFFSET))(arg, nullptr);
		}

		::Unity::Mathematics::float4* float4(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::Unity::Mathematics::float4*(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_FLOAT4_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Unity::Mathematics::float4* float4(::Unity::Mathematics::float3* arg, ::System::Single arg)
		{
			return (return (::Unity::Mathematics::float4*(*)(::Unity::Mathematics::float3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_FLOAT4_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 hash(::Unity::Mathematics::float4* arg)
		{
			return (return (::System::UInt32(*)(::Unity::Mathematics::float4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_HASH_OFFSET))(arg, nullptr);
		}

		::Unity::Mathematics::float4x4* float4x4(::Unity::Mathematics::float4* arg, ::Unity::Mathematics::float4* arg, ::Unity::Mathematics::float4* arg, ::Unity::Mathematics::float4* arg)
		{
			return (return (::Unity::Mathematics::float4x4*(*)(::Unity::Mathematics::float4*, ::Unity::Mathematics::float4*, ::Unity::Mathematics::float4*, ::Unity::Mathematics::float4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_FLOAT4X4_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::UInt32 hash(::Unity::Mathematics::float4x4* arg)
		{
			return (return (::System::UInt32(*)(::Unity::Mathematics::float4x4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_HASH_OFFSET))(arg, nullptr);
		}

		::Unity::Mathematics::int2* int2(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Unity::Mathematics::int2*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_INT2_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 hash(::Unity::Mathematics::int2* arg)
		{
			return (return (::System::UInt32(*)(::Unity::Mathematics::int2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_HASH_OFFSET))(arg, nullptr);
		}

		::System::Int32 asint(::System::Single arg)
		{
			return (return (::System::Int32(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_ASINT_OFFSET))(arg, nullptr);
		}

		::Unity::Mathematics::uint2* asuint(::Unity::Mathematics::int2* arg)
		{
			return (return (::Unity::Mathematics::uint2*(*)(::Unity::Mathematics::int2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_ASUINT_OFFSET))(arg, nullptr);
		}

		::System::UInt32 asuint(::System::Single arg)
		{
			return (return (::System::UInt32(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_ASUINT_OFFSET))(arg, nullptr);
		}

		::Unity::Mathematics::uint2* asuint(::Unity::Mathematics::float2* arg)
		{
			return (return (::Unity::Mathematics::uint2*(*)(::Unity::Mathematics::float2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_ASUINT_OFFSET))(arg, nullptr);
		}

		::Unity::Mathematics::uint3* asuint(::Unity::Mathematics::float3* arg)
		{
			return (return (::Unity::Mathematics::uint3*(*)(::Unity::Mathematics::float3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_ASUINT_OFFSET))(arg, nullptr);
		}

		::Unity::Mathematics::uint4* asuint(::Unity::Mathematics::float4* arg)
		{
			return (return (::Unity::Mathematics::uint4*(*)(::Unity::Mathematics::float4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_ASUINT_OFFSET))(arg, nullptr);
		}

		::System::Single asfloat(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_ASFLOAT_OFFSET))(arg, nullptr);
		}

		::System::Single asfloat(::System::UInt32 arg)
		{
			return (return (::System::Single(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_ASFLOAT_OFFSET))(arg, nullptr);
		}

		::Unity::Mathematics::float2* asfloat(::Unity::Mathematics::uint2* arg)
		{
			return (return (::Unity::Mathematics::float2*(*)(::Unity::Mathematics::uint2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_ASFLOAT_OFFSET))(arg, nullptr);
		}

		::Unity::Mathematics::float3* asfloat(::Unity::Mathematics::uint3* arg)
		{
			return (return (::Unity::Mathematics::float3*(*)(::Unity::Mathematics::uint3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_ASFLOAT_OFFSET))(arg, nullptr);
		}

		::Unity::Mathematics::float4* asfloat(::Unity::Mathematics::uint4* arg)
		{
			return (return (::Unity::Mathematics::float4*(*)(::Unity::Mathematics::uint4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_ASFLOAT_OFFSET))(arg, nullptr);
		}

		::System::Boolean isfinite(::System::Single arg)
		{
			return (return (::System::Boolean(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_ISFINITE_OFFSET))(arg, nullptr);
		}

		::System::Int32 min(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_MIN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 min(::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_MIN_OFFSET))(arg, arg, nullptr);
		}

		::System::Single min(::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_MIN_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Mathematics::float3* min(::Unity::Mathematics::float3* arg, ::Unity::Mathematics::float3* arg)
		{
			return (return (::Unity::Mathematics::float3*(*)(::Unity::Mathematics::float3*, ::Unity::Mathematics::float3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_MIN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 max(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_MAX_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 max(::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_MAX_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 max(::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_MAX_OFFSET))(arg, arg, nullptr);
		}

		::System::Single max(::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_MAX_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Mathematics::float3* max(::Unity::Mathematics::float3* arg, ::Unity::Mathematics::float3* arg)
		{
			return (return (::Unity::Mathematics::float3*(*)(::Unity::Mathematics::float3*, ::Unity::Mathematics::float3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_MAX_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Mathematics::float3* lerp(::Unity::Mathematics::float3* arg, ::Unity::Mathematics::float3* arg, ::System::Single arg)
		{
			return (return (::Unity::Mathematics::float3*(*)(::Unity::Mathematics::float3*, ::Unity::Mathematics::float3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_LERP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 clamp(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_CLAMP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single clamp(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_CLAMP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single abs(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_ABS_OFFSET))(arg, nullptr);
		}

		::Unity::Mathematics::float2* abs(::Unity::Mathematics::float2* arg)
		{
			return (return (::Unity::Mathematics::float2*(*)(::Unity::Mathematics::float2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_ABS_OFFSET))(arg, nullptr);
		}

		::System::Single dot(::Unity::Mathematics::float3* arg, ::Unity::Mathematics::float3* arg)
		{
			return (return (::System::Single(*)(::Unity::Mathematics::float3*, ::Unity::Mathematics::float3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_DOT_OFFSET))(arg, arg, nullptr);
		}

		::System::Single dot(::Unity::Mathematics::float4* arg, ::Unity::Mathematics::float4* arg)
		{
			return (return (::System::Single(*)(::Unity::Mathematics::float4*, ::Unity::Mathematics::float4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_DOT_OFFSET))(arg, arg, nullptr);
		}

		::System::Single tan(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_TAN_OFFSET))(arg, nullptr);
		}

		::System::Single cos(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_COS_OFFSET))(arg, nullptr);
		}

		::Unity::Mathematics::float3* cos(::Unity::Mathematics::float3* arg)
		{
			return (return (::Unity::Mathematics::float3*(*)(::Unity::Mathematics::float3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_COS_OFFSET))(arg, nullptr);
		}

		::System::Single sin(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_SIN_OFFSET))(arg, nullptr);
		}

		::Unity::Mathematics::float3* sin(::Unity::Mathematics::float3* arg)
		{
			return (return (::Unity::Mathematics::float3*(*)(::Unity::Mathematics::float3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_SIN_OFFSET))(arg, nullptr);
		}

		::System::Single sqrt(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_SQRT_OFFSET))(arg, nullptr);
		}

		::System::Single rsqrt(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_RSQRT_OFFSET))(arg, nullptr);
		}

		::Unity::Mathematics::float3* normalize(::Unity::Mathematics::float3* arg)
		{
			return (return (::Unity::Mathematics::float3*(*)(::Unity::Mathematics::float3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_NORMALIZE_OFFSET))(arg, nullptr);
		}

		::Unity::Mathematics::float4* normalize(::Unity::Mathematics::float4* arg)
		{
			return (return (::Unity::Mathematics::float4*(*)(::Unity::Mathematics::float4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_NORMALIZE_OFFSET))(arg, nullptr);
		}

		::System::Single length(::Unity::Mathematics::float3* arg)
		{
			return (return (::System::Single(*)(::Unity::Mathematics::float3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_LENGTH_OFFSET))(arg, nullptr);
		}

		::System::Single length(::Unity::Mathematics::float4* arg)
		{
			return (return (::System::Single(*)(::Unity::Mathematics::float4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_LENGTH_OFFSET))(arg, nullptr);
		}

		::System::Single lengthsq(::Unity::Mathematics::float3* arg)
		{
			return (return (::System::Single(*)(::Unity::Mathematics::float3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_LENGTHSQ_OFFSET))(arg, nullptr);
		}

		::System::Single lengthsq(::Unity::Mathematics::float4* arg)
		{
			return (return (::System::Single(*)(::Unity::Mathematics::float4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_LENGTHSQ_OFFSET))(arg, nullptr);
		}

		::System::Single distancesq(::Unity::Mathematics::float3* arg, ::Unity::Mathematics::float3* arg)
		{
			return (return (::System::Single(*)(::Unity::Mathematics::float3*, ::Unity::Mathematics::float3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_DISTANCESQ_OFFSET))(arg, arg, nullptr);
		}

		::System::Single distancesq(::Unity::Mathematics::float4* arg, ::Unity::Mathematics::float4* arg)
		{
			return (return (::System::Single(*)(::Unity::Mathematics::float4*, ::Unity::Mathematics::float4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_DISTANCESQ_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Mathematics::float3* cross(::Unity::Mathematics::float3* arg, ::Unity::Mathematics::float3* arg)
		{
			return (return (::Unity::Mathematics::float3*(*)(::Unity::Mathematics::float3*, ::Unity::Mathematics::float3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_CROSS_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 select(::System::UInt32 arg, ::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_SELECT_OFFSET))(arg, arg, arg, nullptr);
		}

		::Unity::Mathematics::float4* select(::Unity::Mathematics::float4* arg, ::Unity::Mathematics::float4* arg, ::System::Boolean arg)
		{
			return (return (::Unity::Mathematics::float4*(*)(::Unity::Mathematics::float4*, ::Unity::Mathematics::float4*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_SELECT_OFFSET))(arg, arg, arg, nullptr);
		}

		::Unity::Mathematics::float3* project(::Unity::Mathematics::float3* arg, ::Unity::Mathematics::float3* arg)
		{
			return (return (::Unity::Mathematics::float3*(*)(::Unity::Mathematics::float3*, ::Unity::Mathematics::float3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_PROJECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void sincos(::Unity::Mathematics::float3* arg, ::Unity::Mathematics::float3&* arg, ::Unity::Mathematics::float3&* arg)
		{
			((::System::Void(*)(::Unity::Mathematics::float3*, ::Unity::Mathematics::float3&*, ::Unity::Mathematics::float3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_SINCOS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 lzcnt(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_LZCNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 lzcnt(::System::UInt32 arg)
		{
			return (return (::System::Int32(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_LZCNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 tzcnt(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_TZCNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 tzcnt(::System::UInt32 arg)
		{
			return (return (::System::Int32(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_TZCNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 ceilpow2(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_CEILPOW2_OFFSET))(arg, nullptr);
		}

		::System::Int64 ceilpow2(::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_CEILPOW2_OFFSET))(arg, nullptr);
		}

		::System::Single radians(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_RADIANS_OFFSET))(arg, nullptr);
		}

		::System::UInt32 csum(::Unity::Mathematics::uint2* arg)
		{
			return (return (::System::UInt32(*)(::Unity::Mathematics::uint2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_CSUM_OFFSET))(arg, nullptr);
		}

		::System::UInt32 csum(::Unity::Mathematics::uint3* arg)
		{
			return (return (::System::UInt32(*)(::Unity::Mathematics::uint3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_CSUM_OFFSET))(arg, nullptr);
		}

		::System::UInt32 csum(::Unity::Mathematics::uint4* arg)
		{
			return (return (::System::UInt32(*)(::Unity::Mathematics::uint4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_CSUM_OFFSET))(arg, nullptr);
		}

		::System::Single f16tof32(::System::UInt32 arg)
		{
			return (return (::System::Single(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_F16TOF32_OFFSET))(arg, nullptr);
		}

		::Unity::Mathematics::float3x3* float3x3(::Unity::Mathematics::quaternion* arg)
		{
			return (return (::Unity::Mathematics::float3x3*(*)(::Unity::Mathematics::quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_FLOAT3X3_OFFSET))(arg, nullptr);
		}

		::Unity::Mathematics::float4* mul(::Unity::Mathematics::float4x4* arg, ::Unity::Mathematics::float4* arg)
		{
			return (return (::Unity::Mathematics::float4*(*)(::Unity::Mathematics::float4x4*, ::Unity::Mathematics::float4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_MUL_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Mathematics::float4x4* mul(::Unity::Mathematics::float4x4* arg, ::Unity::Mathematics::float4x4* arg)
		{
			return (return (::Unity::Mathematics::float4x4*(*)(::Unity::Mathematics::float4x4*, ::Unity::Mathematics::float4x4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_MUL_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Mathematics::quaternion* quaternion(::Unity::Mathematics::float4* arg)
		{
			return (return (::Unity::Mathematics::quaternion*(*)(::Unity::Mathematics::float4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_QUATERNION_OFFSET))(arg, nullptr);
		}

		::Unity::Mathematics::quaternion* quaternion(::Unity::Mathematics::float3x3* arg)
		{
			return (return (::Unity::Mathematics::quaternion*(*)(::Unity::Mathematics::float3x3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_QUATERNION_OFFSET))(arg, nullptr);
		}

		::Unity::Mathematics::quaternion* mul(::Unity::Mathematics::quaternion* arg, ::Unity::Mathematics::quaternion* arg)
		{
			return (return (::Unity::Mathematics::quaternion*(*)(::Unity::Mathematics::quaternion*, ::Unity::Mathematics::quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_MUL_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 hash(::Unity::Mathematics::quaternion* arg)
		{
			return (return (::System::UInt32(*)(::Unity::Mathematics::quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_HASH_OFFSET))(arg, nullptr);
		}

		::Unity::Mathematics::uint2* uint2(::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::Unity::Mathematics::uint2*(*)(::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_UINT2_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 hash(::Unity::Mathematics::uint2* arg)
		{
			return (return (::System::UInt32(*)(::Unity::Mathematics::uint2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_HASH_OFFSET))(arg, nullptr);
		}

		::Unity::Mathematics::uint3* uint3(::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::Unity::Mathematics::uint3*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_UINT3_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::UInt32 hash(::Unity::Mathematics::uint3* arg)
		{
			return (return (::System::UInt32(*)(::Unity::Mathematics::uint3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_HASH_OFFSET))(arg, nullptr);
		}

		::Unity::Mathematics::uint4* uint4(::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::Unity::Mathematics::uint4*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_UINT4_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Unity::Mathematics::uint4* uint4(::System::Int32 arg)
		{
			return (return (::Unity::Mathematics::uint4*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_UINT4_OFFSET))(arg, nullptr);
		}

		::System::UInt32 hash(::Unity::Mathematics::uint4* arg)
		{
			return (return (::System::UInt32(*)(::Unity::Mathematics::uint4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_MATH_HASH_OFFSET))(arg, nullptr);
		}

	};
}

