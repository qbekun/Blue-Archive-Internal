#pragma once
#include "../unitysdk.h"

#define SYSTEM_RANDOM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9370AD0)
#define SYSTEM_RANDOM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9370D80)
#define SYSTEM_RANDOM_SAMPLE_OFFSET UNITYSDK_OFFSET(0x93710E0)
#define SYSTEM_RANDOM_INTERNALSAMPLE_OFFSET UNITYSDK_OFFSET(0x9371190)
#define SYSTEM_RANDOM_GENERATESEED_OFFSET UNITYSDK_OFFSET(0x9370B20)
#define SYSTEM_RANDOM_GENERATEGLOBALSEED_OFFSET UNITYSDK_OFFSET(0x9371230)
#define SYSTEM_RANDOM_NEXT_OFFSET UNITYSDK_OFFSET(0x9371260)
#define SYSTEM_RANDOM_GETSAMPLEFORLARGERANGE_OFFSET UNITYSDK_OFFSET(0x9371300)
#define SYSTEM_RANDOM_NEXT_OFFSET UNITYSDK_OFFSET(0x9371450)
#define SYSTEM_RANDOM_NEXT_OFFSET UNITYSDK_OFFSET(0x9371540)
#define SYSTEM_RANDOM_NEXTDOUBLE_OFFSET UNITYSDK_OFFSET(0x93715F0)
#define SYSTEM_RANDOM_NEXTBYTES_OFFSET UNITYSDK_OFFSET(0x9371610)
#define SYSTEM_RANDOM_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9371740)

namespace System
{
	inline static constexpr unsigned int Random_TypeDefinitionIndex = 23820;

	class Random : public Il2CppObject
	{
	public:
		::System::Int32 MBIG; // 0x0
		::System::Int32 MSEED; // 0x0
		::System::Int32 MZ; // 0x0
		::System::Int32 _inext; // 0x10
		::System::Int32 _inextp; // 0x14
		::Il2CppArray<::System::Object*>* _seedArray; // 0x18
		::System::Random* t_threadRandom;
		::System::Random* s_globalRandom; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RANDOM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RANDOM_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Double Sample()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RANDOM_SAMPLE_OFFSET))(nullptr);
		}

		::System::Int32 InternalSample()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RANDOM_INTERNALSAMPLE_OFFSET))(nullptr);
		}

		::System::Int32 GenerateSeed()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RANDOM_GENERATESEED_OFFSET))(nullptr);
		}

		::System::Int32 GenerateGlobalSeed()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RANDOM_GENERATEGLOBALSEED_OFFSET))(nullptr);
		}

		::System::Int32 Next()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RANDOM_NEXT_OFFSET))(nullptr);
		}

		::System::Double GetSampleForLargeRange()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RANDOM_GETSAMPLEFORLARGERANGE_OFFSET))(nullptr);
		}

		::System::Int32 Next(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RANDOM_NEXT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Next(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RANDOM_NEXT_OFFSET))(arg, nullptr);
		}

		::System::Double NextDouble()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RANDOM_NEXTDOUBLE_OFFSET))(nullptr);
		}

		::System::Void NextBytes(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RANDOM_NEXTBYTES_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RANDOM_.CCTOR_OFFSET))(nullptr);
		}

	};
}

