#pragma once
#include "unitysdk.h"

#define REVOKEDCERTIFICATESENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x8017F0)
#define REVOKEDCERTIFICATESENUMERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x8017C0)
#define REVOKEDCERTIFICATESENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x801890)
#define REVOKEDCERTIFICATESENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x801930)

	inline static constexpr unsigned int RevokedCertificatesEnumerator_TypeDefinitionIndex = 22921;

	class RevokedCertificatesEnumerator : public Il2CppObject
	{
	public:
		::System::Collections::IEnumerator* e; // 0x10

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REVOKEDCERTIFICATESENUMERATOR_RESET_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Collections::IEnumerator* arg)
		{
			((::System::Void(*)(::System::Collections::IEnumerator*, ::PVOID))((::PBYTE)hIl2Cpp + REVOKEDCERTIFICATESENUMERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + REVOKEDCERTIFICATESENUMERATOR_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + REVOKEDCERTIFICATESENUMERATOR_GET_CURRENT_OFFSET))(nullptr);
		}

	};

