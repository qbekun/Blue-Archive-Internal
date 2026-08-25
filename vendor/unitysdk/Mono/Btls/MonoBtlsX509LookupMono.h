#pragma once
#include "../../unitysdk.h"

namespace Mono::Btls { class MonoBtlsX509Lookup; }
namespace Mono::Btls { class MonoBtlsX509; }
namespace Mono::Btls { class MonoBtlsX509Name; }

#define MONO_BTLS_MONOBTLSX509LOOKUPMONO_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x9AC0D40)
#define MONO_BTLS_MONOBTLSX509LOOKUPMONO_MONO_BTLS_X509_LOOKUP_MONO_NEW_OFFSET UNITYSDK_OFFSET(0x9AC16A0)
#define MONO_BTLS_MONOBTLSX509LOOKUPMONO_MONO_BTLS_X509_LOOKUP_MONO_INIT_OFFSET UNITYSDK_OFFSET(0x9AC1720)
#define MONO_BTLS_MONOBTLSX509LOOKUPMONO_MONO_BTLS_X509_LOOKUP_MONO_FREE_OFFSET UNITYSDK_OFFSET(0x9AC17B0)
#define MONO_BTLS_MONOBTLSX509LOOKUPMONO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AC1830)
#define MONO_BTLS_MONOBTLSX509LOOKUPMONO_INSTALL_OFFSET UNITYSDK_OFFSET(0x9AC0DC0)
#define MONO_BTLS_MONOBTLSX509LOOKUPMONO_ADDCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x9AC1B90)
#define MONO_BTLS_MONOBTLSX509LOOKUPMONO_ONGETBYSUBJECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONO_BTLS_MONOBTLSX509LOOKUPMONO_ONGETBYSUBJECT_OFFSET UNITYSDK_OFFSET(0x9AC1290)
#define MONO_BTLS_MONOBTLSX509LOOKUPMONO_CLOSE_OFFSET UNITYSDK_OFFSET(0x9AC1BC0)

namespace Mono::Btls
{
	inline static constexpr unsigned int MonoBtlsX509LookupMono_TypeDefinitionIndex = 29135;

	class MonoBtlsX509LookupMono : public Il2CppObject
	{
	public:
		::System::Runtime::InteropServices::GCHandle* gch; // 0x20
		::System::Int32 instance; // 0x28
		BySubjectFunc* bySubjectFunc; // 0x30
		::System::Int32 bySubjectFuncPtr; // 0x38
		::Mono::Btls::MonoBtlsX509Lookup* lookup; // 0x40

		BoringX509LookupMonoHandle* get_Handle()
		{
			return (return (BoringX509LookupMonoHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509LOOKUPMONO_GET_HANDLE_OFFSET))(nullptr);
		}

		::System::Int32 mono_btls_x509_lookup_mono_new()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509LOOKUPMONO_MONO_BTLS_X509_LOOKUP_MONO_NEW_OFFSET))(nullptr);
		}

		::System::Void mono_btls_x509_lookup_mono_init(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509LOOKUPMONO_MONO_BTLS_X509_LOOKUP_MONO_INIT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 mono_btls_x509_lookup_mono_free(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509LOOKUPMONO_MONO_BTLS_X509_LOOKUP_MONO_FREE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509LOOKUPMONO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Install(::Mono::Btls::MonoBtlsX509Lookup* arg)
		{
			((::System::Void(*)(::Mono::Btls::MonoBtlsX509Lookup*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509LOOKUPMONO_INSTALL_OFFSET))(arg, nullptr);
		}

		::System::Void AddCertificate(::Mono::Btls::MonoBtlsX509* arg)
		{
			((::System::Void(*)(::Mono::Btls::MonoBtlsX509*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509LOOKUPMONO_ADDCERTIFICATE_OFFSET))(arg, nullptr);
		}

		::Mono::Btls::MonoBtlsX509* OnGetBySubject(::Mono::Btls::MonoBtlsX509Name* arg)
		{
			return (return (::Mono::Btls::MonoBtlsX509*(*)(::Mono::Btls::MonoBtlsX509Name*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509LOOKUPMONO_ONGETBYSUBJECT_OFFSET))(arg, nullptr);
		}

		::System::Int32 OnGetBySubject(::System::Int32 arg, ::System::Int32 arg, int32_t&* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509LOOKUPMONO_ONGETBYSUBJECT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509LOOKUPMONO_CLOSE_OFFSET))(nullptr);
		}

	};
}

