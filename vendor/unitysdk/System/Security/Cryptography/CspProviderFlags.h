#pragma once
#include "../../../unitysdk.h"

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int CspProviderFlags_TypeDefinitionIndex = 24328;

	class CspProviderFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Security::Cryptography::CspProviderFlags* NoFlags; // 0x0
		::System::Security::Cryptography::CspProviderFlags* UseMachineKeyStore; // 0x0
		::System::Security::Cryptography::CspProviderFlags* UseDefaultKeyContainer; // 0x0
		::System::Security::Cryptography::CspProviderFlags* UseNonExportableKey; // 0x0
		::System::Security::Cryptography::CspProviderFlags* UseExistingKey; // 0x0
		::System::Security::Cryptography::CspProviderFlags* UseArchivableKey; // 0x0
		::System::Security::Cryptography::CspProviderFlags* UseUserProtectedKey; // 0x0
		::System::Security::Cryptography::CspProviderFlags* NoPrompt; // 0x0
		::System::Security::Cryptography::CspProviderFlags* CreateEphemeralKey; // 0x0

	};
}

