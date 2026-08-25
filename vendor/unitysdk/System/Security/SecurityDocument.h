#pragma once
#include "../../unitysdk.h"

#define SYSTEM_SECURITY_SECURITYDOCUMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x917B630)
#define SYSTEM_SECURITY_SECURITYDOCUMENT_GUARANTEESIZE_OFFSET UNITYSDK_OFFSET(0x917B690)
#define SYSTEM_SECURITY_SECURITYDOCUMENT_ADDSTRING_OFFSET UNITYSDK_OFFSET(0x917B730)
#define SYSTEM_SECURITY_SECURITYDOCUMENT_APPENDSTRING_OFFSET UNITYSDK_OFFSET(0x917B860)
#define SYSTEM_SECURITY_SECURITYDOCUMENT_ENCODEDSTRINGSIZE_OFFSET UNITYSDK_OFFSET(0x917B900)
#define SYSTEM_SECURITY_SECURITYDOCUMENT_GETSTRING_OFFSET UNITYSDK_OFFSET(0x917B920)
#define SYSTEM_SECURITY_SECURITYDOCUMENT_ADDTOKEN_OFFSET UNITYSDK_OFFSET(0x917C1A0)
#define SYSTEM_SECURITY_SECURITYDOCUMENT_GETROOTELEMENT_OFFSET UNITYSDK_OFFSET(0x917C1F0)
#define SYSTEM_SECURITY_SECURITYDOCUMENT_GETELEMENT_OFFSET UNITYSDK_OFFSET(0x917C210)
#define SYSTEM_SECURITY_SECURITYDOCUMENT_INTERNALGETELEMENT_OFFSET UNITYSDK_OFFSET(0x917C230)

namespace System::Security
{
	inline static constexpr unsigned int SecurityDocument_TypeDefinitionIndex = 24274;

	class SecurityDocument : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* m_data; // 0x10

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYDOCUMENT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void GuaranteeSize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYDOCUMENT_GUARANTEESIZE_OFFSET))(arg, nullptr);
		}

		::System::Void AddString(::System::String* str, int32_t&* arg)
		{
			((::System::Void(*)(::System::String*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYDOCUMENT_ADDSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::Void AppendString(::System::String* str, int32_t&* arg)
		{
			((::System::Void(*)(::System::String*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYDOCUMENT_APPENDSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::Int32 EncodedStringSize(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYDOCUMENT_ENCODEDSTRINGSIZE_OFFSET))(str, nullptr);
		}

		::System::String* GetString(int32_t&* arg, ::System::Boolean arg)
		{
			return (return (::System::String*(*)(int32_t&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYDOCUMENT_GETSTRING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddToken(::System::Byte arg, int32_t&* arg)
		{
			((::System::Void(*)(::System::Byte, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYDOCUMENT_ADDTOKEN_OFFSET))(arg, arg, nullptr);
		}

		::System::Security::SecurityElement* GetRootElement()
		{
			return (return (::System::Security::SecurityElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYDOCUMENT_GETROOTELEMENT_OFFSET))(nullptr);
		}

		::System::Security::SecurityElement* GetElement(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Security::SecurityElement*(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYDOCUMENT_GETELEMENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Security::SecurityElement* InternalGetElement(int32_t&* arg, ::System::Boolean arg)
		{
			return (return (::System::Security::SecurityElement*(*)(int32_t&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYDOCUMENT_INTERNALGETELEMENT_OFFSET))(arg, arg, nullptr);
		}

	};
}

