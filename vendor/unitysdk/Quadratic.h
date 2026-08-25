#pragma once
#include "unitysdk.h"

#define QUADRATIC_IN_OFFSET UNITYSDK_OFFSET(0x4B7A20)
#define QUADRATIC_OUT_OFFSET UNITYSDK_OFFSET(0x4B7A30)
#define QUADRATIC_INOUT_OFFSET UNITYSDK_OFFSET(0x4B7A50)
#define QUADRATIC_INDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x4B7AA0)
#define QUADRATIC_OUTDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x4B7AB0)
#define QUADRATIC_INOUTDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x4B7AD0)
#define QUADRATIC_IN_OFFSET UNITYSDK_OFFSET(0x4B7B10)
#define QUADRATIC_OUT_OFFSET UNITYSDK_OFFSET(0x4B7B40)
#define QUADRATIC_INOUT_OFFSET UNITYSDK_OFFSET(0x4B7B80)
#define QUADRATIC_INDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x4B7BF0)
#define QUADRATIC_OUTDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x4B7C20)
#define QUADRATIC_INOUTDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x4B7C60)

	inline static constexpr unsigned int Quadratic_TypeDefinitionIndex = 35182;

	class Quadratic : public Il2CppObject
	{
	public:
		::System::Single In(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + QUADRATIC_IN_OFFSET))(arg, nullptr);
		}

		::System::Single Out(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + QUADRATIC_OUT_OFFSET))(arg, nullptr);
		}

		::System::Single InOut(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + QUADRATIC_INOUT_OFFSET))(arg, nullptr);
		}

		::System::Single InDerivative(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + QUADRATIC_INDERIVATIVE_OFFSET))(arg, nullptr);
		}

		::System::Single OutDerivative(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + QUADRATIC_OUTDERIVATIVE_OFFSET))(arg, nullptr);
		}

		::System::Single InOutDerivative(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + QUADRATIC_INOUTDERIVATIVE_OFFSET))(arg, nullptr);
		}

		::System::Single In(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + QUADRATIC_IN_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single Out(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + QUADRATIC_OUT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single InOut(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + QUADRATIC_INOUT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single InDerivative(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + QUADRATIC_INDERIVATIVE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single OutDerivative(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + QUADRATIC_OUTDERIVATIVE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single InOutDerivative(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + QUADRATIC_INOUTDERIVATIVE_OFFSET))(arg, arg, arg, nullptr);
		}

	};

