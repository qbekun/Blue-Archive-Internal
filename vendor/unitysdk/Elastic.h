#pragma once
#include "unitysdk.h"

#define ELASTIC_IN_OFFSET UNITYSDK_OFFSET(0x4BA340)
#define ELASTIC_OUT_OFFSET UNITYSDK_OFFSET(0x4BA3D0)
#define ELASTIC_INOUT_OFFSET UNITYSDK_OFFSET(0x4BA450)
#define ELASTIC_INDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x4BA570)
#define ELASTIC_OUTDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x4BA620)
#define ELASTIC_INOUTDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x4BA6E0)
#define ELASTIC_IN_OFFSET UNITYSDK_OFFSET(0x4BA7C0)
#define ELASTIC_OUT_OFFSET UNITYSDK_OFFSET(0x4BA890)
#define ELASTIC_INOUT_OFFSET UNITYSDK_OFFSET(0x4BA960)
#define ELASTIC_INDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x4BAAC0)
#define ELASTIC_OUTDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x4BABA0)
#define ELASTIC_INOUTDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x4BAC90)

	inline static constexpr unsigned int Elastic_TypeDefinitionIndex = 35191;

	class Elastic : public Il2CppObject
	{
	public:
		::System::Single TwoThirdsPi; // 0x0

		::System::Single In(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ELASTIC_IN_OFFSET))(arg, nullptr);
		}

		::System::Single Out(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ELASTIC_OUT_OFFSET))(arg, nullptr);
		}

		::System::Single InOut(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ELASTIC_INOUT_OFFSET))(arg, nullptr);
		}

		::System::Single InDerivative(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ELASTIC_INDERIVATIVE_OFFSET))(arg, nullptr);
		}

		::System::Single OutDerivative(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ELASTIC_OUTDERIVATIVE_OFFSET))(arg, nullptr);
		}

		::System::Single InOutDerivative(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ELASTIC_INOUTDERIVATIVE_OFFSET))(arg, nullptr);
		}

		::System::Single In(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ELASTIC_IN_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single Out(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ELASTIC_OUT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single InOut(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ELASTIC_INOUT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single InDerivative(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ELASTIC_INDERIVATIVE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single OutDerivative(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ELASTIC_OUTDERIVATIVE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single InOutDerivative(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ELASTIC_INOUTDERIVATIVE_OFFSET))(arg, arg, arg, nullptr);
		}

	};

