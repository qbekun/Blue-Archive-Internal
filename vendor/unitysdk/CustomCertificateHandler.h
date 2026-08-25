#pragma once
#include "unitysdk.h"

#define CUSTOMCERTIFICATEHANDLER_VALIDATECERTIFICATE_OFFSET UNITYSDK_OFFSET(0x20F4190)
#define CUSTOMCERTIFICATEHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x20F41B0)

	inline static constexpr unsigned int CustomCertificateHandler_TypeDefinitionIndex = 3828;

	class CustomCertificateHandler : public Il2CppObject
	{
	public:
		::System::Boolean ValidateCertificate(::Il2CppArray<::System::Object*>* arg)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CUSTOMCERTIFICATEHANDLER_VALIDATECERTIFICATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMCERTIFICATEHANDLER_.CTOR_OFFSET))(nullptr);
		}

	};

