#pragma once
#include "unitysdk.h"

#define BACK_IN_OFFSET UNITYSDK_OFFSET(0x4B9340)
#define BACK_OUT_OFFSET UNITYSDK_OFFSET(0x4B9360)
#define BACK_INOUT_OFFSET UNITYSDK_OFFSET(0x4B9390)
#define BACK_INDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x4B9410)
#define BACK_OUTDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x4B9440)
#define BACK_INOUTDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x4B9480)
#define BACK_IN_OFFSET UNITYSDK_OFFSET(0x4B94F0)
#define BACK_OUT_OFFSET UNITYSDK_OFFSET(0x4B9530)
#define BACK_INOUT_OFFSET UNITYSDK_OFFSET(0x4B9580)
#define BACK_INDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x4B9620)
#define BACK_OUTDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x4B9670)
#define BACK_INOUTDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x4B96D0)

	inline static constexpr unsigned int Back_TypeDefinitionIndex = 35189;

	class Back : public Il2CppObject
	{
	public:
		::System::Single C; // 0x0

		::System::Single In(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + BACK_IN_OFFSET))(arg, nullptr);
		}

		::System::Single Out(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + BACK_OUT_OFFSET))(arg, nullptr);
		}

		::System::Single InOut(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + BACK_INOUT_OFFSET))(arg, nullptr);
		}

		::System::Single InDerivative(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + BACK_INDERIVATIVE_OFFSET))(arg, nullptr);
		}

		::System::Single OutDerivative(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + BACK_OUTDERIVATIVE_OFFSET))(arg, nullptr);
		}

		::System::Single InOutDerivative(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + BACK_INOUTDERIVATIVE_OFFSET))(arg, nullptr);
		}

		::System::Single In(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + BACK_IN_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single Out(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + BACK_OUT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single InOut(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + BACK_INOUT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single InDerivative(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + BACK_INDERIVATIVE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single OutDerivative(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + BACK_OUTDERIVATIVE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single InOutDerivative(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + BACK_INOUTDERIVATIVE_OFFSET))(arg, arg, arg, nullptr);
		}

	};

