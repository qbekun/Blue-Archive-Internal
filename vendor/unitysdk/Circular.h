#pragma once
#include "unitysdk.h"

#define CIRCULAR_IN_OFFSET UNITYSDK_OFFSET(0x4B8D90)
#define CIRCULAR_OUT_OFFSET UNITYSDK_OFFSET(0x4B8DD0)
#define CIRCULAR_INOUT_OFFSET UNITYSDK_OFFSET(0x4B8E00)
#define CIRCULAR_INDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x4B8E80)
#define CIRCULAR_OUTDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x4B8ED0)
#define CIRCULAR_INOUTDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x4B8F30)
#define CIRCULAR_IN_OFFSET UNITYSDK_OFFSET(0x4B8FD0)
#define CIRCULAR_OUT_OFFSET UNITYSDK_OFFSET(0x4B9050)
#define CIRCULAR_INOUT_OFFSET UNITYSDK_OFFSET(0x4B90D0)
#define CIRCULAR_INDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x4B91A0)
#define CIRCULAR_OUTDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x4B9210)
#define CIRCULAR_INOUTDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x4B9290)

	inline static constexpr unsigned int Circular_TypeDefinitionIndex = 35188;

	class Circular : public Il2CppObject
	{
	public:
		::System::Single In(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CIRCULAR_IN_OFFSET))(arg, nullptr);
		}

		::System::Single Out(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CIRCULAR_OUT_OFFSET))(arg, nullptr);
		}

		::System::Single InOut(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CIRCULAR_INOUT_OFFSET))(arg, nullptr);
		}

		::System::Single InDerivative(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CIRCULAR_INDERIVATIVE_OFFSET))(arg, nullptr);
		}

		::System::Single OutDerivative(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CIRCULAR_OUTDERIVATIVE_OFFSET))(arg, nullptr);
		}

		::System::Single InOutDerivative(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CIRCULAR_INOUTDERIVATIVE_OFFSET))(arg, nullptr);
		}

		::System::Single In(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CIRCULAR_IN_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single Out(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CIRCULAR_OUT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single InOut(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CIRCULAR_INOUT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single InDerivative(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CIRCULAR_INDERIVATIVE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single OutDerivative(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CIRCULAR_OUTDERIVATIVE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single InOutDerivative(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CIRCULAR_INOUTDERIVATIVE_OFFSET))(arg, arg, arg, nullptr);
		}

	};

