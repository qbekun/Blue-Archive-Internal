#pragma once
#include "unitysdk.h"

namespace Mono::Security { class ASN1; }

#define ENCRYPTEDDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x90EFA90)
#define ENCRYPTEDDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x90EFAB0)
#define ENCRYPTEDDATA_GET_ENCRYPTIONALGORITHM_OFFSET UNITYSDK_OFFSET(0x90EFF10)
#define ENCRYPTEDDATA_GET_ENCRYPTEDCONTENT_OFFSET UNITYSDK_OFFSET(0x90EFF20)

	inline static constexpr unsigned int EncryptedData_TypeDefinitionIndex = 35739;

	class EncryptedData : public Il2CppObject
	{
	public:
		::System::Byte _version; // 0x10
		ContentInfo* _content; // 0x18
		ContentInfo* _encryptionAlgorithm; // 0x20
		::Il2CppArray<::System::Object*>* _encrypted; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCRYPTEDDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Mono::Security::ASN1* arg)
		{
			((::System::Void(*)(::Mono::Security::ASN1*, ::PVOID))((::PBYTE)hIl2Cpp + ENCRYPTEDDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		ContentInfo* get_EncryptionAlgorithm()
		{
			return (return (ContentInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCRYPTEDDATA_GET_ENCRYPTIONALGORITHM_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_EncryptedContent()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCRYPTEDDATA_GET_ENCRYPTEDCONTENT_OFFSET))(nullptr);
		}

	};

