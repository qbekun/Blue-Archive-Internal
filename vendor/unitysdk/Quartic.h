#pragma once
#include "unitysdk.h"

#define QUARTIC_IN_OFFSET UNITYSDK_OFFSET(0x4B7F90)
#define QUARTIC_OUT_OFFSET UNITYSDK_OFFSET(0x4B7FA0)
#define QUARTIC_INOUT_OFFSET UNITYSDK_OFFSET(0x4B7FD0)
#define QUARTIC_INDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x4B8030)
#define QUARTIC_OUTDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x4B8050)
#define QUARTIC_INOUTDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x4B8070)
#define QUARTIC_IN_OFFSET UNITYSDK_OFFSET(0x4B80B0)
#define QUARTIC_OUT_OFFSET UNITYSDK_OFFSET(0x4B80F0)
#define QUARTIC_INOUT_OFFSET UNITYSDK_OFFSET(0x4B8140)
#define QUARTIC_INDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x4B81C0)
#define QUARTIC_OUTDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x4B8200)
#define QUARTIC_INOUTDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x4B8240)

	inline static constexpr unsigned int Quartic_TypeDefinitionIndex = 35184;

	class Quartic : public Il2CppObject
	{
	public:
		::System::Single In(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + QUARTIC_IN_OFFSET))(arg, nullptr);
		}

		::System::Single Out(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + QUARTIC_OUT_OFFSET))(arg, nullptr);
		}

		::System::Single InOut(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + QUARTIC_INOUT_OFFSET))(arg, nullptr);
		}

		::System::Single InDerivative(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + QUARTIC_INDERIVATIVE_OFFSET))(arg, nullptr);
		}

		::System::Single OutDerivative(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + QUARTIC_OUTDERIVATIVE_OFFSET))(arg, nullptr);
		}

		::System::Single InOutDerivative(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + QUARTIC_INOUTDERIVATIVE_OFFSET))(arg, nullptr);
		}

		::System::Single In(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + QUARTIC_IN_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single Out(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + QUARTIC_OUT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single InOut(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + QUARTIC_INOUT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single InDerivative(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + QUARTIC_INDERIVATIVE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single OutDerivative(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + QUARTIC_OUTDERIVATIVE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single InOutDerivative(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + QUARTIC_INOUTDERIVATIVE_OFFSET))(arg, arg, arg, nullptr);
		}

	};

