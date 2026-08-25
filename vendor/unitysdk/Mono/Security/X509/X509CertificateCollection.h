#pragma once
#include "../../../unitysdk.h"

namespace Mono::Security::X509 { class X509Certificate; }
namespace Mono::Security::X509 { class X509CertificateCollection; }

#define MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x90F0610)
#define MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9103170)
#define MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x90F07D0)
#define MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x9103200)
#define MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x9103360)
#define MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x90F5530)
#define MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9103710)
#define MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9103740)
#define MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x9103380)
#define MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_COMPARE_OFFSET UNITYSDK_OFFSET(0x9103770)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int X509CertificateCollection_TypeDefinitionIndex = 35751;

	class X509CertificateCollection : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_.CTOR_OFFSET))(nullptr);
		}

		::Mono::Security::X509::X509Certificate* get_Item(::System::Int32 arg)
		{
			return (return (::Mono::Security::X509::X509Certificate*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Int32 Add(::Mono::Security::X509::X509Certificate* arg)
		{
			return (return (::System::Int32(*)(::Mono::Security::X509::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void AddRange(::Mono::Security::X509::X509CertificateCollection* arg)
		{
			((::System::Void(*)(::Mono::Security::X509::X509CertificateCollection*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_ADDRANGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Contains(::Mono::Security::X509::X509Certificate* arg)
		{
			return (return (::System::Boolean(*)(::Mono::Security::X509::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_CONTAINS_OFFSET))(arg, nullptr);
		}

		X509CertificateEnumerator* GetEnumerator()
		{
			return (return (X509CertificateEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Int32 IndexOf(::Mono::Security::X509::X509Certificate* arg)
		{
			return (return (::System::Int32(*)(::Mono::Security::X509::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_INDEXOF_OFFSET))(arg, nullptr);
		}

		::System::Boolean Compare(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATECOLLECTION_COMPARE_OFFSET))(arg, arg, nullptr);
		}

	};
}

