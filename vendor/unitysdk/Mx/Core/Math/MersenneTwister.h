#pragma once
#include "../../../unitysdk.h"

#define MX_CORE_MATH_MERSENNETWISTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x102D6B0)
#define MX_CORE_MATH_MERSENNETWISTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x102D840)
#define MX_CORE_MATH_MERSENNETWISTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x102D8F0)
#define MX_CORE_MATH_MERSENNETWISTER_GET_MAXRANDOMINT_OFFSET UNITYSDK_OFFSET(0x102DC20)
#define MX_CORE_MATH_MERSENNETWISTER_GET_SEED_OFFSET UNITYSDK_OFFSET(0x102DC30)
#define MX_CORE_MATH_MERSENNETWISTER_NEXT_OFFSET UNITYSDK_OFFSET(0x102DC40)
#define MX_CORE_MATH_MERSENNETWISTER_NEXT_OFFSET UNITYSDK_OFFSET(0x102DC60)
#define MX_CORE_MATH_MERSENNETWISTER_NEXT_OFFSET UNITYSDK_OFFSET(0x102DD00)
#define MX_CORE_MATH_MERSENNETWISTER_NEXTBYTES_OFFSET UNITYSDK_OFFSET(0x102DDC0)
#define MX_CORE_MATH_MERSENNETWISTER_NEXTINCLUDEMAX_OFFSET UNITYSDK_OFFSET(0x102DF30)
#define MX_CORE_MATH_MERSENNETWISTER_NEXTFLOAT_OFFSET UNITYSDK_OFFSET(0x102DFD0)
#define MX_CORE_MATH_MERSENNETWISTER_NEXTFLOAT_OFFSET UNITYSDK_OFFSET(0x102E000)
#define MX_CORE_MATH_MERSENNETWISTER_NEXTFLOATPOSITIVE_OFFSET UNITYSDK_OFFSET(0x102E060)
#define MX_CORE_MATH_MERSENNETWISTER_NEXTDOUBLE_OFFSET UNITYSDK_OFFSET(0x102E0C0)
#define MX_CORE_MATH_MERSENNETWISTER_NEXTDOUBLE_OFFSET UNITYSDK_OFFSET(0x102E0E0)
#define MX_CORE_MATH_MERSENNETWISTER_NEXTDOUBLEPOSITIVE_OFFSET UNITYSDK_OFFSET(0x102E120)
#define MX_CORE_MATH_MERSENNETWISTER_NEXT53BITRES_OFFSET UNITYSDK_OFFSET(0x102E150)
#define MX_CORE_MATH_MERSENNETWISTER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x102E1F0)
#define MX_CORE_MATH_MERSENNETWISTER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x102E260)
#define MX_CORE_MATH_MERSENNETWISTER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x102E270)
#define MX_CORE_MATH_MERSENNETWISTER_INIT_GENRAND_OFFSET UNITYSDK_OFFSET(0x102D7A0)
#define MX_CORE_MATH_MERSENNETWISTER_INIT_BY_ARRAY_OFFSET UNITYSDK_OFFSET(0x102DA50)
#define MX_CORE_MATH_MERSENNETWISTER_GENRAND_INT32_OFFSET UNITYSDK_OFFSET(0x102E360)
#define MX_CORE_MATH_MERSENNETWISTER_GENRAND_INT31_OFFSET UNITYSDK_OFFSET(0x102DC50)
#define MX_CORE_MATH_MERSENNETWISTER_GENRAND_REAL1_OFFSET UNITYSDK_OFFSET(0x102E040)
#define MX_CORE_MATH_MERSENNETWISTER_GENRAND_REAL2_OFFSET UNITYSDK_OFFSET(0x102DDA0)
#define MX_CORE_MATH_MERSENNETWISTER_GENRAND_REAL3_OFFSET UNITYSDK_OFFSET(0x102E090)
#define MX_CORE_MATH_MERSENNETWISTER_GENRAND_RES53_OFFSET UNITYSDK_OFFSET(0x102E1A0)

namespace MX::Core::Math
{
	inline static constexpr unsigned int MersenneTwister_TypeDefinitionIndex = 12817;

	class MersenneTwister : public Il2CppObject
	{
	public:
		::System::Int32 N; // 0x0
		::System::Int32 M; // 0x0
		::System::UInt32 MATRIX_A; // 0x0
		::System::UInt32 UPPER_MASK; // 0x0
		::System::UInt32 LOWER_MASK; // 0x0
		::System::Int32 MAX_RAND_INT; // 0x0
		::Il2CppArray<::System::Object*>* mag01; // 0x10
		::Il2CppArray<::System::Object*>* mt; // 0x18
		::System::Int32 mti; // 0x20
		::System::Int32 _Seed_k__BackingField; // 0x24

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MERSENNETWISTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MERSENNETWISTER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MERSENNETWISTER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MaxRandomInt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MERSENNETWISTER_GET_MAXRANDOMINT_OFFSET))(nullptr);
		}

		::System::Int32 get_Seed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MERSENNETWISTER_GET_SEED_OFFSET))(nullptr);
		}

		::System::Int32 Next()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MERSENNETWISTER_NEXT_OFFSET))(nullptr);
		}

		::System::Int32 Next(::System::Int32 arg)
		{
			return ((::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MERSENNETWISTER_NEXT_OFFSET))(arg, nullptr);
		}

		::System::Int32 Next(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MERSENNETWISTER_NEXT_OFFSET))(arg, arg2, nullptr);
		}

		::Il2CppArray<::System::Object*>* NextBytes(::System::Int32 arg)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MERSENNETWISTER_NEXTBYTES_OFFSET))(arg, nullptr);
		}

		::System::Int32 NextIncludeMax(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MERSENNETWISTER_NEXTINCLUDEMAX_OFFSET))(arg, arg2, nullptr);
		}

		::System::Single NextFloat()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MERSENNETWISTER_NEXTFLOAT_OFFSET))(nullptr);
		}

		::System::Single NextFloat(::System::Boolean arg)
		{
			return ((::System::Single(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MERSENNETWISTER_NEXTFLOAT_OFFSET))(arg, nullptr);
		}

		::System::Single NextFloatPositive()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MERSENNETWISTER_NEXTFLOATPOSITIVE_OFFSET))(nullptr);
		}

		::System::Double NextDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MERSENNETWISTER_NEXTDOUBLE_OFFSET))(nullptr);
		}

		::System::Double NextDouble(::System::Boolean arg)
		{
			return ((::System::Double(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MERSENNETWISTER_NEXTDOUBLE_OFFSET))(arg, nullptr);
		}

		::System::Double NextDoublePositive()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MERSENNETWISTER_NEXTDOUBLEPOSITIVE_OFFSET))(nullptr);
		}

		::System::Double Next53BitRes()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MERSENNETWISTER_NEXT53BITRES_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MERSENNETWISTER_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MERSENNETWISTER_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MERSENNETWISTER_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void init_genrand(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MERSENNETWISTER_INIT_GENRAND_OFFSET))(arg, nullptr);
		}

		::System::Void init_by_array(::Il2CppArray<::System::Object*>* arg, ::System::UInt32 arg2)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MERSENNETWISTER_INIT_BY_ARRAY_OFFSET))(arg, arg2, nullptr);
		}

		::System::UInt32 genrand_int32()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MERSENNETWISTER_GENRAND_INT32_OFFSET))(nullptr);
		}

		::System::Int32 genrand_int31()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MERSENNETWISTER_GENRAND_INT31_OFFSET))(nullptr);
		}

		::System::Double genrand_real1()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MERSENNETWISTER_GENRAND_REAL1_OFFSET))(nullptr);
		}

		::System::Double genrand_real2()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MERSENNETWISTER_GENRAND_REAL2_OFFSET))(nullptr);
		}

		::System::Double genrand_real3()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MERSENNETWISTER_GENRAND_REAL3_OFFSET))(nullptr);
		}

		::System::Double genrand_res53()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_MERSENNETWISTER_GENRAND_RES53_OFFSET))(nullptr);
		}

	};
}

