#pragma once
#include "unitysdk.h"

#define BOUNCE_IN_OFFSET UNITYSDK_OFFSET(0x4B9760)
#define BOUNCE_OUT_OFFSET UNITYSDK_OFFSET(0x4B9840)
#define BOUNCE_INOUT_OFFSET UNITYSDK_OFFSET(0x4B9910)
#define BOUNCE_INDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x4B9B00)
#define BOUNCE_OUTDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x4B9B70)
#define BOUNCE_INOUTDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x4B9BD0)
#define BOUNCE_IN_OFFSET UNITYSDK_OFFSET(0x4B9CC0)
#define BOUNCE_OUT_OFFSET UNITYSDK_OFFSET(0x4B9DE0)
#define BOUNCE_INOUT_OFFSET UNITYSDK_OFFSET(0x4B9EE0)
#define BOUNCE_INDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x4BA0D0)
#define BOUNCE_OUTDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x4BA170)
#define BOUNCE_INOUTDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x4BA220)

	inline static constexpr unsigned int Bounce_TypeDefinitionIndex = 35190;

	class Bounce : public Il2CppObject
	{
	public:
		::System::Single In(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + BOUNCE_IN_OFFSET))(arg, nullptr);
		}

		::System::Single Out(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + BOUNCE_OUT_OFFSET))(arg, nullptr);
		}

		::System::Single InOut(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + BOUNCE_INOUT_OFFSET))(arg, nullptr);
		}

		::System::Single InDerivative(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + BOUNCE_INDERIVATIVE_OFFSET))(arg, nullptr);
		}

		::System::Single OutDerivative(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + BOUNCE_OUTDERIVATIVE_OFFSET))(arg, nullptr);
		}

		::System::Single InOutDerivative(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + BOUNCE_INOUTDERIVATIVE_OFFSET))(arg, nullptr);
		}

		::System::Single In(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + BOUNCE_IN_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single Out(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + BOUNCE_OUT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single InOut(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + BOUNCE_INOUT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single InDerivative(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + BOUNCE_INDERIVATIVE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single OutDerivative(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + BOUNCE_OUTDERIVATIVE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single InOutDerivative(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + BOUNCE_INOUTDERIVATIVE_OFFSET))(arg, arg, arg, nullptr);
		}

	};

