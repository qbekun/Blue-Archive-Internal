#pragma once
#include "../../unitysdk.h"

#define MONO_SECURITY_BITCONVERTERLE_GETUINTBYTES_OFFSET UNITYSDK_OFFSET(0x90EF120)
#define MONO_SECURITY_BITCONVERTERLE_GETULONGBYTES_OFFSET UNITYSDK_OFFSET(0x90EF230)
#define MONO_SECURITY_BITCONVERTERLE_GETBYTES_OFFSET UNITYSDK_OFFSET(0x90EE3D0)
#define MONO_SECURITY_BITCONVERTERLE_GETBYTES_OFFSET UNITYSDK_OFFSET(0x90EF3D0)
#define MONO_SECURITY_BITCONVERTERLE_USHORTFROMBYTES_OFFSET UNITYSDK_OFFSET(0x90EF3F0)
#define MONO_SECURITY_BITCONVERTERLE_UINTFROMBYTES_OFFSET UNITYSDK_OFFSET(0x90EF4D0)
#define MONO_SECURITY_BITCONVERTERLE_TOINT32_OFFSET UNITYSDK_OFFSET(0x90EF620)
#define MONO_SECURITY_BITCONVERTERLE_TOUINT16_OFFSET UNITYSDK_OFFSET(0x90EF650)
#define MONO_SECURITY_BITCONVERTERLE_TOUINT32_OFFSET UNITYSDK_OFFSET(0x90EF680)

namespace Mono::Security
{
	inline static constexpr unsigned int BitConverterLE_TypeDefinitionIndex = 35737;

	class BitConverterLE : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* GetUIntBytes(::System::Object** arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_GETUINTBYTES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetULongBytes(::System::Object** arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_GETULONGBYTES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetBytes(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_GETBYTES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetBytes(::System::Int64 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_GETBYTES_OFFSET))(arg, nullptr);
		}

		::System::Void UShortFromBytes(::System::Object** arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_USHORTFROMBYTES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void UIntFromBytes(::System::Object** arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_UINTFROMBYTES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 ToInt32(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_TOINT32_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt16 ToUInt16(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::UInt16(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_TOUINT16_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 ToUInt32(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_TOUINT32_OFFSET))(arg, arg, nullptr);
		}

	};
}

