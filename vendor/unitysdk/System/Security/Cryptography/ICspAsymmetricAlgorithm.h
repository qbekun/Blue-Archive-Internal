#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_ICSPASYMMETRICALGORITHM_GET_CSPKEYCONTAINERINFO_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ICSPASYMMETRICALGORITHM_EXPORTCSPBLOB_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ICSPASYMMETRICALGORITHM_IMPORTCSPBLOB_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int ICspAsymmetricAlgorithm_TypeDefinitionIndex = 24298;

	class ICspAsymmetricAlgorithm : public Il2CppObject
	{
	public:
		::System::Security::Cryptography::CspKeyContainerInfo* get_CspKeyContainerInfo()
		{
			return (return (::System::Security::Cryptography::CspKeyContainerInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ICSPASYMMETRICALGORITHM_GET_CSPKEYCONTAINERINFO_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* ExportCspBlob(::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ICSPASYMMETRICALGORITHM_EXPORTCSPBLOB_OFFSET))(arg, nullptr);
		}

		::System::Void ImportCspBlob(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ICSPASYMMETRICALGORITHM_IMPORTCSPBLOB_OFFSET))(arg, nullptr);
		}

	};
}

