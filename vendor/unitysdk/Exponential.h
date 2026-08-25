#pragma once
#include "unitysdk.h"

#define EXPONENTIAL_IN_OFFSET UNITYSDK_OFFSET(0x4B8920)
#define EXPONENTIAL_OUT_OFFSET UNITYSDK_OFFSET(0x4B8940)
#define EXPONENTIAL_INOUT_OFFSET UNITYSDK_OFFSET(0x4B8970)
#define EXPONENTIAL_INDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x4B89E0)
#define EXPONENTIAL_OUTDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x4B8A20)
#define EXPONENTIAL_INOUTDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x4B8A60)
#define EXPONENTIAL_IN_OFFSET UNITYSDK_OFFSET(0x4B8AC0)
#define EXPONENTIAL_OUT_OFFSET UNITYSDK_OFFSET(0x4B8B30)
#define EXPONENTIAL_INOUT_OFFSET UNITYSDK_OFFSET(0x4B8BA0)
#define EXPONENTIAL_INDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x4B8C50)
#define EXPONENTIAL_OUTDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x4B8CB0)
#define EXPONENTIAL_INOUTDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x4B8D10)

	inline static constexpr unsigned int Exponential_TypeDefinitionIndex = 35187;

	class Exponential : public Il2CppObject
	{
	public:
		::System::Single In(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + EXPONENTIAL_IN_OFFSET))(arg, nullptr);
		}

		::System::Single Out(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + EXPONENTIAL_OUT_OFFSET))(arg, nullptr);
		}

		::System::Single InOut(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + EXPONENTIAL_INOUT_OFFSET))(arg, nullptr);
		}

		::System::Single InDerivative(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + EXPONENTIAL_INDERIVATIVE_OFFSET))(arg, nullptr);
		}

		::System::Single OutDerivative(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + EXPONENTIAL_OUTDERIVATIVE_OFFSET))(arg, nullptr);
		}

		::System::Single InOutDerivative(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + EXPONENTIAL_INOUTDERIVATIVE_OFFSET))(arg, nullptr);
		}

		::System::Single In(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + EXPONENTIAL_IN_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single Out(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + EXPONENTIAL_OUT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single InOut(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + EXPONENTIAL_INOUT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single InDerivative(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + EXPONENTIAL_INDERIVATIVE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single OutDerivative(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + EXPONENTIAL_OUTDERIVATIVE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single InOutDerivative(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + EXPONENTIAL_INOUTDERIVATIVE_OFFSET))(arg, arg, arg, nullptr);
		}

	};

