#pragma once
#include "../../unitysdk.h"

#define INTERNAL_CRYPTOGRAPHY_HELPERS_CLONEBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x914C580)
#define INTERNAL_CRYPTOGRAPHY_HELPERS_GENERATERANDOM_OFFSET UNITYSDK_OFFSET(0x914C600)
#define INTERNAL_CRYPTOGRAPHY_HELPERS_WRITEINT_OFFSET UNITYSDK_OFFSET(0x914C770)
#define INTERNAL_CRYPTOGRAPHY_HELPERS_TOHEXARRAYUPPER_OFFSET UNITYSDK_OFFSET(0x914C7E0)
#define INTERNAL_CRYPTOGRAPHY_HELPERS_TOHEXSTRINGUPPER_OFFSET UNITYSDK_OFFSET(0x914C8B0)
#define INTERNAL_CRYPTOGRAPHY_HELPERS_NIBBLETOHEX_OFFSET UNITYSDK_OFFSET(0x914C8A0)

namespace Internal::Cryptography
{
	inline static constexpr unsigned int Helpers_TypeDefinitionIndex = 23663;

	class Helpers : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* CloneByteArray(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + INTERNAL_CRYPTOGRAPHY_HELPERS_CLONEBYTEARRAY_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GenerateRandom(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INTERNAL_CRYPTOGRAPHY_HELPERS_GENERATERANDOM_OFFSET))(arg, nullptr);
		}

		::System::Void WriteInt(::System::UInt32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INTERNAL_CRYPTOGRAPHY_HELPERS_WRITEINT_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ToHexArrayUpper(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + INTERNAL_CRYPTOGRAPHY_HELPERS_TOHEXARRAYUPPER_OFFSET))(arg, nullptr);
		}

		::System::String* ToHexStringUpper(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + INTERNAL_CRYPTOGRAPHY_HELPERS_TOHEXSTRINGUPPER_OFFSET))(arg, nullptr);
		}

		::System::Char NibbleToHex(::System::Byte arg)
		{
			return (return (::System::Char(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + INTERNAL_CRYPTOGRAPHY_HELPERS_NIBBLETOHEX_OFFSET))(arg, nullptr);
		}

	};
}

