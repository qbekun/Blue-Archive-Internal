#pragma once
#include "unitysdk.h"

#define RECOGNIZEDATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A578C0)
#define RECOGNIZEDATTRIBUTE_GET_TOKEN_OFFSET UNITYSDK_OFFSET(0x9A578E0)
#define RECOGNIZEDATTRIBUTE_ISEQUALTO_OFFSET UNITYSDK_OFFSET(0x9A57050)

	inline static constexpr unsigned int RecognizedAttribute_TypeDefinitionIndex = 29729;

	class RecognizedAttribute : public Il2CppObject
	{
	public:
		::System::String* m_name; // 0x10
		::System::Net::CookieToken* m_token; // 0x18

		::System::Void .ctor(::System::String* str, ::System::Net::CookieToken* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Net::CookieToken*, ::PVOID))((::PBYTE)hIl2Cpp + RECOGNIZEDATTRIBUTE_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Net::CookieToken* get_Token()
		{
			return (return (::System::Net::CookieToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + RECOGNIZEDATTRIBUTE_GET_TOKEN_OFFSET))(nullptr);
		}

		::System::Boolean IsEqualTo(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + RECOGNIZEDATTRIBUTE_ISEQUALTO_OFFSET))(str, nullptr);
		}

	};

