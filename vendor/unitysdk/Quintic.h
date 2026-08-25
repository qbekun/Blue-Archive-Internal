#pragma once
#include "unitysdk.h"

#define QUINTIC_IN_OFFSET UNITYSDK_OFFSET(0x4B82A0)
#define QUINTIC_OUT_OFFSET UNITYSDK_OFFSET(0x4B82C0)
#define QUINTIC_INOUT_OFFSET UNITYSDK_OFFSET(0x4B82F0)
#define QUINTIC_INDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x4B8350)
#define QUINTIC_OUTDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x4B8370)
#define QUINTIC_INOUTDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x4B83A0)
#define QUINTIC_IN_OFFSET UNITYSDK_OFFSET(0x4B83E0)
#define QUINTIC_OUT_OFFSET UNITYSDK_OFFSET(0x4B8420)
#define QUINTIC_INOUT_OFFSET UNITYSDK_OFFSET(0x4B8470)
#define QUINTIC_INDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x4B8500)
#define QUINTIC_OUTDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x4B8540)
#define QUINTIC_INOUTDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x4B8590)

	inline static constexpr unsigned int Quintic_TypeDefinitionIndex = 35185;

	class Quintic : public Il2CppObject
	{
	public:
		::System::Single In(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + QUINTIC_IN_OFFSET))(arg, nullptr);
		}

		::System::Single Out(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + QUINTIC_OUT_OFFSET))(arg, nullptr);
		}

		::System::Single InOut(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + QUINTIC_INOUT_OFFSET))(arg, nullptr);
		}

		::System::Single InDerivative(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + QUINTIC_INDERIVATIVE_OFFSET))(arg, nullptr);
		}

		::System::Single OutDerivative(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + QUINTIC_OUTDERIVATIVE_OFFSET))(arg, nullptr);
		}

		::System::Single InOutDerivative(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + QUINTIC_INOUTDERIVATIVE_OFFSET))(arg, nullptr);
		}

		::System::Single In(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + QUINTIC_IN_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single Out(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + QUINTIC_OUT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single InOut(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + QUINTIC_INOUT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single InDerivative(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + QUINTIC_INDERIVATIVE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single OutDerivative(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + QUINTIC_OUTDERIVATIVE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single InOutDerivative(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + QUINTIC_INOUTDERIVATIVE_OFFSET))(arg, arg, arg, nullptr);
		}

	};

