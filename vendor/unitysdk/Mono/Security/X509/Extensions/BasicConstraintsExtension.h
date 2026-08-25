#pragma once
#include "../../../../unitysdk.h"

namespace Mono::Security::X509 { class X509Extension; }

#define MONO_SECURITY_X509_EXTENSIONS_BASICCONSTRAINTSEXTENSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9104D40)
#define MONO_SECURITY_X509_EXTENSIONS_BASICCONSTRAINTSEXTENSION_DECODE_OFFSET UNITYSDK_OFFSET(0x9107800)
#define MONO_SECURITY_X509_EXTENSIONS_BASICCONSTRAINTSEXTENSION_ENCODE_OFFSET UNITYSDK_OFFSET(0x9107A30)
#define MONO_SECURITY_X509_EXTENSIONS_BASICCONSTRAINTSEXTENSION_GET_CERTIFICATEAUTHORITY_OFFSET UNITYSDK_OFFSET(0x9107BB0)
#define MONO_SECURITY_X509_EXTENSIONS_BASICCONSTRAINTSEXTENSION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9107BC0)

namespace Mono::Security::X509::Extensions
{
	inline static constexpr unsigned int BasicConstraintsExtension_TypeDefinitionIndex = 35778;

	class BasicConstraintsExtension : public Il2CppObject
	{
	public:
		::System::Boolean cA; // 0x28
		::System::Int32 pathLenConstraint; // 0x2C

		::System::Void .ctor(::Mono::Security::X509::X509Extension* arg)
		{
			((::System::Void(*)(::Mono::Security::X509::X509Extension*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_BASICCONSTRAINTSEXTENSION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Decode()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_BASICCONSTRAINTSEXTENSION_DECODE_OFFSET))(nullptr);
		}

		::System::Void Encode()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_BASICCONSTRAINTSEXTENSION_ENCODE_OFFSET))(nullptr);
		}

		::System::Boolean get_CertificateAuthority()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_BASICCONSTRAINTSEXTENSION_GET_CERTIFICATEAUTHORITY_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_EXTENSIONS_BASICCONSTRAINTSEXTENSION_TOSTRING_OFFSET))(nullptr);
		}

	};
}

