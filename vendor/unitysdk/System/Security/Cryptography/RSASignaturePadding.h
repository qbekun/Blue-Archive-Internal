#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSASIGNATUREPADDING_.CTOR_OFFSET UNITYSDK_OFFSET(0x918B8A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSASIGNATUREPADDING_GET_PKCS1_OFFSET UNITYSDK_OFFSET(0x918B8C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSASIGNATUREPADDING_GET_PSS_OFFSET UNITYSDK_OFFSET(0x918B910)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSASIGNATUREPADDING_GET_MODE_OFFSET UNITYSDK_OFFSET(0x918B960)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSASIGNATUREPADDING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x918B970)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSASIGNATUREPADDING_EQUALS_OFFSET UNITYSDK_OFFSET(0x918B980)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSASIGNATUREPADDING_EQUALS_OFFSET UNITYSDK_OFFSET(0x918B9E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSASIGNATUREPADDING_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x918BBF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSASIGNATUREPADDING_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x918BB70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSASIGNATUREPADDING_TOSTRING_OFFSET UNITYSDK_OFFSET(0x918BC00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSASIGNATUREPADDING_.CCTOR_OFFSET UNITYSDK_OFFSET(0x918BC60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSASIGNATUREPADDING_.CTOR_OFFSET UNITYSDK_OFFSET(0x918BD30)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RSASignaturePadding_TypeDefinitionIndex = 24312;

	class RSASignaturePadding : public Il2CppObject
	{
	public:
		::System::Security::Cryptography::RSASignaturePadding* s_pkcs1; // 0x0
		::System::Security::Cryptography::RSASignaturePadding* s_pss; // 0x8
		::System::Security::Cryptography::RSASignaturePaddingMode* _mode; // 0x10

		::System::Void .ctor(::System::Security::Cryptography::RSASignaturePaddingMode* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::RSASignaturePaddingMode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSASIGNATUREPADDING_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::RSASignaturePadding* get_Pkcs1()
		{
			return (return (::System::Security::Cryptography::RSASignaturePadding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSASIGNATUREPADDING_GET_PKCS1_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::RSASignaturePadding* get_Pss()
		{
			return (return (::System::Security::Cryptography::RSASignaturePadding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSASIGNATUREPADDING_GET_PSS_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::RSASignaturePaddingMode* get_Mode()
		{
			return (return (::System::Security::Cryptography::RSASignaturePaddingMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSASIGNATUREPADDING_GET_MODE_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSASIGNATUREPADDING_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSASIGNATUREPADDING_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Security::Cryptography::RSASignaturePadding* arg)
		{
			return (return (::System::Boolean(*)(::System::Security::Cryptography::RSASignaturePadding*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSASIGNATUREPADDING_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::System::Security::Cryptography::RSASignaturePadding* arg, ::System::Security::Cryptography::RSASignaturePadding* arg)
		{
			return (return (::System::Boolean(*)(::System::Security::Cryptography::RSASignaturePadding*, ::System::Security::Cryptography::RSASignaturePadding*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSASIGNATUREPADDING_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::System::Security::Cryptography::RSASignaturePadding* arg, ::System::Security::Cryptography::RSASignaturePadding* arg)
		{
			return (return (::System::Boolean(*)(::System::Security::Cryptography::RSASignaturePadding*, ::System::Security::Cryptography::RSASignaturePadding*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSASIGNATUREPADDING_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSASIGNATUREPADDING_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSASIGNATUREPADDING_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSASIGNATUREPADDING_.CTOR_OFFSET))(nullptr);
		}

	};
}

