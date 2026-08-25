#pragma once
#include "../../unitysdk.h"

#define SYSTEM_TEXT_ENCODINGHELPER_GET_UTF8UNMARKED_OFFSET UNITYSDK_OFFSET(0x917B2E0)
#define SYSTEM_TEXT_ENCODINGHELPER_INTERNALCODEPAGE_OFFSET UNITYSDK_OFFSET(0x917B550)
#define SYSTEM_TEXT_ENCODINGHELPER_GETDEFAULTENCODING_OFFSET UNITYSDK_OFFSET(0x91774B0)
#define SYSTEM_TEXT_ENCODINGHELPER_INVOKEI18N_OFFSET UNITYSDK_OFFSET(0x91757D0)
#define SYSTEM_TEXT_ENCODINGHELPER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x917B560)

namespace System::Text
{
	inline static constexpr unsigned int EncodingHelper_TypeDefinitionIndex = 24270;

	class EncodingHelper : public Il2CppObject
	{
	public:
		::System::Text::Encoding* utf8EncodingWithoutMarkers; // 0x0
		::System::Object* lockobj; // 0x8
		::System::Reflection::Assembly* i18nAssembly; // 0x10
		::System::Boolean i18nDisabled; // 0x18

		::System::Text::Encoding* get_UTF8Unmarked()
		{
			return (return (::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGHELPER_GET_UTF8UNMARKED_OFFSET))(nullptr);
		}

		::System::String* InternalCodePage(int32_t&* arg)
		{
			return (return (::System::String*(*)(int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGHELPER_INTERNALCODEPAGE_OFFSET))(arg, nullptr);
		}

		::System::Text::Encoding* GetDefaultEncoding()
		{
			return (return (::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGHELPER_GETDEFAULTENCODING_OFFSET))(nullptr);
		}

		::System::Object* InvokeI18N(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGHELPER_INVOKEI18N_OFFSET))(str, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGHELPER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

