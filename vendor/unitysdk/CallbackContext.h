#pragma once
#include "unitysdk.h"

#define CALLBACKCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A66C20)

	inline static constexpr unsigned int CallbackContext_TypeDefinitionIndex = 29753;

	class CallbackContext : public Il2CppObject
	{
	public:
		::System::Object* request; // 0x10
		::System::Security::Cryptography::X509Certificates::X509Certificate* certificate; // 0x18
		::System::Security::Cryptography::X509Certificates::X509Chain* chain; // 0x20
		::System::Net::Security::SslPolicyErrors* sslPolicyErrors; // 0x28
		::System::Boolean result; // 0x2C

		::System::Void .ctor(::System::Object* arg, ::System::Security::Cryptography::X509Certificates::X509Certificate* arg, ::System::Security::Cryptography::X509Certificates::X509Chain* arg, ::System::Net::Security::SslPolicyErrors* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors*, ::PVOID))((::PBYTE)hIl2Cpp + CALLBACKCONTEXT_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};

