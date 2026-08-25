#pragma once
#include "unitysdk.h"

namespace Mono::Math { class BigInteger; }

#define KERNEL_ADDSAMESIGN_OFFSET UNITYSDK_OFFSET(0x9118130)
#define KERNEL_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x9118540)
#define KERNEL_MINUSEQ_OFFSET UNITYSDK_OFFSET(0x911B180)
#define KERNEL_PLUSEQ_OFFSET UNITYSDK_OFFSET(0x911B290)
#define KERNEL_COMPARE_OFFSET UNITYSDK_OFFSET(0x91183B0)
#define KERNEL_SINGLEBYTEDIVIDEINPLACE_OFFSET UNITYSDK_OFFSET(0x9119D30)
#define KERNEL_DWORDMOD_OFFSET UNITYSDK_OFFSET(0x9118780)
#define KERNEL_DWORDDIVMOD_OFFSET UNITYSDK_OFFSET(0x911B8C0)
#define KERNEL_MULTIBYTEDIVIDE_OFFSET UNITYSDK_OFFSET(0x9118810)
#define KERNEL_LEFTSHIFT_OFFSET UNITYSDK_OFFSET(0x9119070)
#define KERNEL_RIGHTSHIFT_OFFSET UNITYSDK_OFFSET(0x9119310)
#define KERNEL_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x9118F60)
#define KERNEL_MULTIPLYMOD2P32PMOD_OFFSET UNITYSDK_OFFSET(0x911B070)
#define KERNEL_MODINVERSE_OFFSET UNITYSDK_OFFSET(0x911BB00)
#define KERNEL_MODINVERSE_OFFSET UNITYSDK_OFFSET(0x911A030)

	inline static constexpr unsigned int Kernel_TypeDefinitionIndex = 35819;

	class Kernel : public Il2CppObject
	{
	public:
		::Mono::Math::BigInteger* AddSameSign(::Mono::Math::BigInteger* arg, ::Mono::Math::BigInteger* arg)
		{
			return (return (::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + KERNEL_ADDSAMESIGN_OFFSET))(arg, arg, nullptr);
		}

		::Mono::Math::BigInteger* Subtract(::Mono::Math::BigInteger* arg, ::Mono::Math::BigInteger* arg)
		{
			return (return (::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + KERNEL_SUBTRACT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void MinusEq(::Mono::Math::BigInteger* arg, ::Mono::Math::BigInteger* arg)
		{
			((::System::Void(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + KERNEL_MINUSEQ_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PlusEq(::Mono::Math::BigInteger* arg, ::Mono::Math::BigInteger* arg)
		{
			((::System::Void(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + KERNEL_PLUSEQ_OFFSET))(arg, arg, nullptr);
		}

		Sign* Compare(::Mono::Math::BigInteger* arg, ::Mono::Math::BigInteger* arg)
		{
			return (return (Sign*(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + KERNEL_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 SingleByteDivideInPlace(::Mono::Math::BigInteger* arg, ::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::Mono::Math::BigInteger*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + KERNEL_SINGLEBYTEDIVIDEINPLACE_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 DwordMod(::Mono::Math::BigInteger* arg, ::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::Mono::Math::BigInteger*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + KERNEL_DWORDMOD_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* DwordDivMod(::Mono::Math::BigInteger* arg, ::System::UInt32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Mono::Math::BigInteger*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + KERNEL_DWORDDIVMOD_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* multiByteDivide(::Mono::Math::BigInteger* arg, ::Mono::Math::BigInteger* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + KERNEL_MULTIBYTEDIVIDE_OFFSET))(arg, arg, nullptr);
		}

		::Mono::Math::BigInteger* LeftShift(::Mono::Math::BigInteger* arg, ::System::Int32 arg)
		{
			return (return (::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + KERNEL_LEFTSHIFT_OFFSET))(arg, arg, nullptr);
		}

		::Mono::Math::BigInteger* RightShift(::Mono::Math::BigInteger* arg, ::System::Int32 arg)
		{
			return (return (::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + KERNEL_RIGHTSHIFT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Multiply(::Il2CppArray<::System::Object*>* arg, ::System::UInt32 arg, ::System::UInt32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::UInt32 arg, ::System::UInt32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::Object*>*, ::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::Object*>*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + KERNEL_MULTIPLY_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void MultiplyMod2p32pmod(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + KERNEL_MULTIPLYMOD2P32PMOD_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::UInt32 modInverse(::Mono::Math::BigInteger* arg, ::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::Mono::Math::BigInteger*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + KERNEL_MODINVERSE_OFFSET))(arg, arg, nullptr);
		}

		::Mono::Math::BigInteger* modInverse(::Mono::Math::BigInteger* arg, ::Mono::Math::BigInteger* arg)
		{
			return (return (::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + KERNEL_MODINVERSE_OFFSET))(arg, arg, nullptr);
		}

	};

