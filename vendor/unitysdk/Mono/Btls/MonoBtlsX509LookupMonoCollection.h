#pragma once
#include "../../unitysdk.h"

namespace Mono::Btls { class MonoBtlsX509TrustKind; }
namespace Mono::Btls { class MonoBtlsX509; }
namespace Mono::Btls { class MonoBtlsX509Name; }

#define MONO_BTLS_MONOBTLSX509LOOKUPMONOCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AC1DB0)
#define MONO_BTLS_MONOBTLSX509LOOKUPMONOCOLLECTION_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9AC1DE0)
#define MONO_BTLS_MONOBTLSX509LOOKUPMONOCOLLECTION_ONGETBYSUBJECT_OFFSET UNITYSDK_OFFSET(0x9AC1FF0)
#define MONO_BTLS_MONOBTLSX509LOOKUPMONOCOLLECTION_CLOSE_OFFSET UNITYSDK_OFFSET(0x9AC20A0)

namespace Mono::Btls
{
	inline static constexpr unsigned int MonoBtlsX509LookupMonoCollection_TypeDefinitionIndex = 29136;

	class MonoBtlsX509LookupMonoCollection : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* hashes; // 0x48
		::Il2CppArray<::System::Object*>* certificates; // 0x50
		::System::Security::Cryptography::X509Certificates::X509CertificateCollection* collection; // 0x58
		::Mono::Btls::MonoBtlsX509TrustKind* trust; // 0x60

		::System::Void .ctor(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* arg, ::Mono::Btls::MonoBtlsX509TrustKind* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::Mono::Btls::MonoBtlsX509TrustKind*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509LOOKUPMONOCOLLECTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509LOOKUPMONOCOLLECTION_INITIALIZE_OFFSET))(nullptr);
		}

		::Mono::Btls::MonoBtlsX509* OnGetBySubject(::Mono::Btls::MonoBtlsX509Name* arg)
		{
			return (return (::Mono::Btls::MonoBtlsX509*(*)(::Mono::Btls::MonoBtlsX509Name*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509LOOKUPMONOCOLLECTION_ONGETBYSUBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509LOOKUPMONOCOLLECTION_CLOSE_OFFSET))(nullptr);
		}

	};
}

