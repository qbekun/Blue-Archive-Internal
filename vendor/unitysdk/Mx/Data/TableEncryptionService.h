#pragma once
#include "../../unitysdk.h"

#define MX_DATA_TABLEENCRYPTIONSERVICE_CREATEKEY_OFFSET UNITYSDK_OFFSET(0x197E8F0)
#define MX_DATA_TABLEENCRYPTIONSERVICE_XOR_OFFSET UNITYSDK_OFFSET(0x197E970)
#define MX_DATA_TABLEENCRYPTIONSERVICE_CONVERT_OFFSET UNITYSDK_OFFSET(0x197EC80)
#define MX_DATA_TABLEENCRYPTIONSERVICE_CONVERT_OFFSET UNITYSDK_OFFSET(0x197ED40)
#define MX_DATA_TABLEENCRYPTIONSERVICE_CONVERT_OFFSET UNITYSDK_OFFSET(0x197EE00)
#define MX_DATA_TABLEENCRYPTIONSERVICE_CONVERT_OFFSET UNITYSDK_OFFSET(0x197EEC0)
#define MX_DATA_TABLEENCRYPTIONSERVICE_ENCRYPT_OFFSET UNITYSDK_OFFSET(0x197EF80)
#define MX_DATA_TABLEENCRYPTIONSERVICE_CONVERT_OFFSET UNITYSDK_OFFSET(0x197F000)
#define MX_DATA_TABLEENCRYPTIONSERVICE_ENCRYPT_OFFSET UNITYSDK_OFFSET(0x197F080)
#define MX_DATA_TABLEENCRYPTIONSERVICE_CONVERT_OFFSET UNITYSDK_OFFSET(0x197F100)
#define MX_DATA_TABLEENCRYPTIONSERVICE_ENCRYPT_OFFSET UNITYSDK_OFFSET(0x197F180)
#define MX_DATA_TABLEENCRYPTIONSERVICE_CONVERT_OFFSET UNITYSDK_OFFSET(0x197F280)

namespace MX::Data
{
	inline static constexpr unsigned int TableEncryptionService_TypeDefinitionIndex = 16513;

	class TableEncryptionService : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* CreateKey(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TABLEENCRYPTIONSERVICE_CREATEKEY_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* XOR(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TABLEENCRYPTIONSERVICE_XOR_OFFSET))(str, arg, nullptr);
		}

		::System::Int32 Convert(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TABLEENCRYPTIONSERVICE_CONVERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 Convert(::System::Int64 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TABLEENCRYPTIONSERVICE_CONVERT_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 Convert(::System::UInt32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TABLEENCRYPTIONSERVICE_CONVERT_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt64 Convert(::System::UInt64 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::UInt64(*)(::System::UInt64, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TABLEENCRYPTIONSERVICE_CONVERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Single Encrypt(::System::Single arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Single(*)(::System::Single, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TABLEENCRYPTIONSERVICE_ENCRYPT_OFFSET))(arg, arg, nullptr);
		}

		::System::Single Convert(::System::Single arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Single(*)(::System::Single, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TABLEENCRYPTIONSERVICE_CONVERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Double Encrypt(::System::Double arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Double(*)(::System::Double, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TABLEENCRYPTIONSERVICE_ENCRYPT_OFFSET))(arg, arg, nullptr);
		}

		::System::Double Convert(::System::Double arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Double(*)(::System::Double, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TABLEENCRYPTIONSERVICE_CONVERT_OFFSET))(arg, arg, nullptr);
		}

		::System::String* Encrypt(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TABLEENCRYPTIONSERVICE_ENCRYPT_OFFSET))(str, arg, nullptr);
		}

		::System::String* Convert(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TABLEENCRYPTIONSERVICE_CONVERT_OFFSET))(str, arg, nullptr);
		}

	};
}

