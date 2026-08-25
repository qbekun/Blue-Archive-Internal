#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509BASICCONSTRAINTSEXTENSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B094A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509BASICCONSTRAINTSEXTENSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B09550)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509BASICCONSTRAINTSEXTENSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B09830)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509BASICCONSTRAINTSEXTENSION_GET_CERTIFICATEAUTHORITY_OFFSET UNITYSDK_OFFSET(0x9B09AB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509BASICCONSTRAINTSEXTENSION_GET_HASPATHLENGTHCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x9B09B20)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509BASICCONSTRAINTSEXTENSION_GET_PATHLENGTHCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x9B09B90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509BASICCONSTRAINTSEXTENSION_COPYFROM_OFFSET UNITYSDK_OFFSET(0x9B09C00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509BASICCONSTRAINTSEXTENSION_DECODE_OFFSET UNITYSDK_OFFSET(0x9B09620)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509BASICCONSTRAINTSEXTENSION_ENCODE_OFFSET UNITYSDK_OFFSET(0x9B09960)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509BASICCONSTRAINTSEXTENSION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9B09DE0)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509BasicConstraintsExtension_TypeDefinitionIndex = 29289;

	class X509BasicConstraintsExtension : public Il2CppObject
	{
	public:
		::System::String* oid; // 0x0
		::System::String* friendlyName; // 0x0
		::System::Boolean _certificateAuthority; // 0x28
		::System::Boolean _hasPathLengthConstraint; // 0x29
		::System::Int32 _pathLengthConstraint; // 0x2C
		::System::Security::Cryptography::AsnDecodeStatus* _status; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509BASICCONSTRAINTSEXTENSION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Security::Cryptography::AsnEncodedData* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::AsnEncodedData*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509BASICCONSTRAINTSEXTENSION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Boolean arg, ::System::Boolean arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509BASICCONSTRAINTSEXTENSION_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean get_CertificateAuthority()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509BASICCONSTRAINTSEXTENSION_GET_CERTIFICATEAUTHORITY_OFFSET))(nullptr);
		}

		::System::Boolean get_HasPathLengthConstraint()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509BASICCONSTRAINTSEXTENSION_GET_HASPATHLENGTHCONSTRAINT_OFFSET))(nullptr);
		}

		::System::Int32 get_PathLengthConstraint()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509BASICCONSTRAINTSEXTENSION_GET_PATHLENGTHCONSTRAINT_OFFSET))(nullptr);
		}

		::System::Void CopyFrom(::System::Security::Cryptography::AsnEncodedData* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::AsnEncodedData*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509BASICCONSTRAINTSEXTENSION_COPYFROM_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::AsnDecodeStatus* Decode(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Security::Cryptography::AsnDecodeStatus*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509BASICCONSTRAINTSEXTENSION_DECODE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Encode()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509BASICCONSTRAINTSEXTENSION_ENCODE_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509BASICCONSTRAINTSEXTENSION_TOSTRING_OFFSET))(arg, nullptr);
		}

	};
}

