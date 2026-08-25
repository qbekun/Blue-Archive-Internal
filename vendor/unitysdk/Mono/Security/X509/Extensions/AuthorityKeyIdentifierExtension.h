#pragma once
#include "../../../../unitysdk.h"

namespace Mono::Security::X509 { class X509Extension; }

#define MONO_SECURITY_X509_EXTENSIONS_AUTHORITYKEYIDENTIFIEREXTENSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9107260)
#define MONO_SECURITY_X509_EXTENSIONS_AUTHORITYKEYIDENTIFIEREXTENSION_DECODE_OFFSET UNITYSDK_OFFSET(0x9107270)
#define MONO_SECURITY_X509_EXTENSIONS_AUTHORITYKEYIDENTIFIEREXTENSION_ENCODE_OFFSET UNITYSDK_OFFSET(0x91074B0)
#define MONO_SECURITY_X509_EXTENSIONS_AUTHORITYKEYIDENTIFIEREXTENSION_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x9107620)
#define MONO_SECURITY_X509_EXTENSIONS_AUTHORITYKEYIDENTIFIEREXTENSION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x91076A0)

namespace Mono::Security::X509::Extensions
{
	inline static constexpr unsigned int AuthorityKeyIdentifierExtension_TypeDefinitionIndex = 35777;

	class AuthorityKeyIdentifierExtension : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* aki; // 0x28

		::System::Void .ctor(::Mono::Security::X509::X509Extension* arg)
		{
			((::System::Void(*)(::Mono::Security::X509::X509Extension*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_AUTHORITYKEYIDENTIFIEREXTENSION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Decode()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_AUTHORITYKEYIDENTIFIEREXTENSION_DECODE_OFFSET))(nullptr);
		}

		::System::Void Encode()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_AUTHORITYKEYIDENTIFIEREXTENSION_ENCODE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Identifier()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_AUTHORITYKEYIDENTIFIEREXTENSION_GET_IDENTIFIER_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_AUTHORITYKEYIDENTIFIEREXTENSION_TOSTRING_OFFSET))(nullptr);
		}

	};
}

