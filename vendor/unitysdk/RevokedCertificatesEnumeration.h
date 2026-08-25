#pragma once
#include "unitysdk.h"

#define REVOKEDCERTIFICATESENUMERATION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x8016E0)
#define REVOKEDCERTIFICATESENUMERATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x801690)

	inline static constexpr unsigned int RevokedCertificatesEnumeration_TypeDefinitionIndex = 22922;

	class RevokedCertificatesEnumeration : public Il2CppObject
	{
	public:
		::System::Collections::IEnumerable* en; // 0x10

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + REVOKEDCERTIFICATESENUMERATION_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Collections::IEnumerable* arg)
		{
			((::System::Void(*)(::System::Collections::IEnumerable*, ::PVOID))((::PBYTE)hIl2Cpp + REVOKEDCERTIFICATESENUMERATION_.CTOR_OFFSET))(arg, nullptr);
		}

	};

