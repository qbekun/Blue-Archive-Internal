#pragma once
#include "../../../unitysdk.h"

#define MX_CORE_MATH_IRANDOMSERVICE_NEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_MATH_IRANDOMSERVICE_NEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_MATH_IRANDOMSERVICE_NEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_MATH_IRANDOMSERVICE_NEXTINCLUDEMAX_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_MATH_IRANDOMSERVICE_NEXTFLOAT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_MATH_IRANDOMSERVICE_NEXTDOUBLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_MATH_IRANDOMSERVICE_NEXTULONG_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Core::Math
{
	inline static constexpr unsigned int IRandomService_TypeDefinitionIndex = 12814;

	class IRandomService : public Il2CppObject
	{
	public:
		::System::Int32 Next()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_IRANDOMSERVICE_NEXT_OFFSET))(nullptr);
		}

		::System::Int32 Next(::System::Int32 arg)
		{
			return ((::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_IRANDOMSERVICE_NEXT_OFFSET))(arg, nullptr);
		}

		::System::Int32 Next(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_IRANDOMSERVICE_NEXT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 NextIncludeMax(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_IRANDOMSERVICE_NEXTINCLUDEMAX_OFFSET))(arg, arg2, nullptr);
		}

		::System::Single NextFloat()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_IRANDOMSERVICE_NEXTFLOAT_OFFSET))(nullptr);
		}

		::System::Double NextDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_IRANDOMSERVICE_NEXTDOUBLE_OFFSET))(nullptr);
		}

		::System::UInt64 NextULong()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_IRANDOMSERVICE_NEXTULONG_OFFSET))(nullptr);
		}

	};
}

