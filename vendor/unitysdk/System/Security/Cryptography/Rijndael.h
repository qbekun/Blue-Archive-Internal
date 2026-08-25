#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAEL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9198180)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAEL_CREATE_OFFSET UNITYSDK_OFFSET(0x9198220)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAEL_CREATE_OFFSET UNITYSDK_OFFSET(0x9198400)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAEL_.CCTOR_OFFSET UNITYSDK_OFFSET(0x91984A0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int Rijndael_TypeDefinitionIndex = 24355;

	class Rijndael : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* s_legalBlockSizes; // 0x0
		::Il2CppArray<::System::Object*>* s_legalKeySizes; // 0x8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAEL_.CTOR_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::Rijndael* Create()
		{
			return (return (::System::Security::Cryptography::Rijndael*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAEL_CREATE_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::Rijndael* Create(::System::String* str)
		{
			return (return (::System::Security::Cryptography::Rijndael*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAEL_CREATE_OFFSET))(str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAEL_.CCTOR_OFFSET))(nullptr);
		}

	};
}

