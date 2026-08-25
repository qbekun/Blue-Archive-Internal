#pragma once
#include "unitysdk.h"

namespace FlatData { class Language; }

#define LOCALIZESERVICE_CHECKSPINELOCALIZEATLASNAME_OFFSET UNITYSDK_OFFSET(0xC4A7B0)
#define LOCALIZESERVICE_.CCTOR_OFFSET UNITYSDK_OFFSET(0xC4ACE0)
#define LOCALIZESERVICE_ISKATAKANA_OFFSET UNITYSDK_OFFSET(0xC4A3A0)
#define LOCALIZESERVICE_NEEDREPLACEMENT_OFFSET UNITYSDK_OFFSET(0xC4AE10)
#define LOCALIZESERVICE_ISTHAI_OFFSET UNITYSDK_OFFSET(0xC4AEA0)
#define LOCALIZESERVICE_GETLOCALIZEBANNERIMAGENAME_OFFSET UNITYSDK_OFFSET(0xC4AF10)
#define LOCALIZESERVICE_CALLNAMELENGTHCHECK_OFFSET UNITYSDK_OFFSET(0xC4A400)
#define LOCALIZESERVICE_ISENGLISH_OFFSET UNITYSDK_OFFSET(0xC4A330)
#define LOCALIZESERVICE_REPLACE_OFFSET UNITYSDK_OFFSET(0xC4B080)
#define LOCALIZESERVICE_LANGUAGETOTOYCOUPONLANGUAGE_OFFSET UNITYSDK_OFFSET(0xC4B200)
#define LOCALIZESERVICE_ISKOREAN_OFFSET UNITYSDK_OFFSET(0xC4A4B0)
#define LOCALIZESERVICE_LANGUAGETOTOYURL_OFFSET UNITYSDK_OFFSET(0xC4B280)
#define LOCALIZESERVICE_GETSYSTEMLANGUAGE_OFFSET UNITYSDK_OFFSET(0xC4B300)
#define LOCALIZESERVICE_CONVERTLOCALIZETEXTURENAME_OFFSET UNITYSDK_OFFSET(0xC4B370)
#define LOCALIZESERVICE_NICKNAMELENGTHCHECK_OFFSET UNITYSDK_OFFSET(0xC4A240)
#define LOCALIZESERVICE_SETLOCALIZECALENDAR_OFFSET UNITYSDK_OFFSET(0xC4B4B0)

	inline static constexpr unsigned int LocalizeService_TypeDefinitionIndex = 8933;

	class LocalizeService : public Il2CppObject
	{
	public:
		::System::String* UserNameKey; // 0x0
		::System::String* CallNameKey; // 0x0
		::System::Text::RegularExpressions::Regex* Regex_ForbiddenJapaneseNameCharacters; // 0x0
		::System::Text::RegularExpressions::Regex* Regex_ForbiddenJapaneseInput; // 0x8
		::System::String* WrapCharacters; // 0x10

		::System::Boolean CheckSpineLocalizeAtlasName(::System::String* str, ::System::String* str2, ::System::Boolean arg)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + LOCALIZESERVICE_CHECKSPINELOCALIZEATLASNAME_OFFSET))(str, str2, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALIZESERVICE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsKatakana(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LOCALIZESERVICE_ISKATAKANA_OFFSET))(str, nullptr);
		}

		::System::Boolean NeedReplacement(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LOCALIZESERVICE_NEEDREPLACEMENT_OFFSET))(str, nullptr);
		}

		::System::Boolean IsThai(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LOCALIZESERVICE_ISTHAI_OFFSET))(str, nullptr);
		}

		::System::String* GetLocalizeBannerImageName(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LOCALIZESERVICE_GETLOCALIZEBANNERIMAGENAME_OFFSET))(str, nullptr);
		}

		::System::Boolean CallNameLengthCheck(::FlatData::Language* arg, ::System::String* str)
		{
			return ((::System::Boolean(*)(::FlatData::Language*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LOCALIZESERVICE_CALLNAMELENGTHCHECK_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean IsEnglish(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LOCALIZESERVICE_ISENGLISH_OFFSET))(str, nullptr);
		}

		::System::String* Replace(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LOCALIZESERVICE_REPLACE_OFFSET))(str, nullptr);
		}

		::System::String* LanguageToToyCouponLanguage(::FlatData::Language* arg)
		{
			return ((::System::String*(*)(::FlatData::Language*, ::PVOID))((::PBYTE)hIl2Cpp + LOCALIZESERVICE_LANGUAGETOTOYCOUPONLANGUAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsKorean(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LOCALIZESERVICE_ISKOREAN_OFFSET))(str, nullptr);
		}

		::System::String* LanguageToToyUrl(::FlatData::Language* arg)
		{
			return ((::System::String*(*)(::FlatData::Language*, ::PVOID))((::PBYTE)hIl2Cpp + LOCALIZESERVICE_LANGUAGETOTOYURL_OFFSET))(arg, nullptr);
		}

		::FlatData::Language* GetSystemLanguage()
		{
			return ((::FlatData::Language*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALIZESERVICE_GETSYSTEMLANGUAGE_OFFSET))(nullptr);
		}

		::System::String* ConvertLocalizeTextureName(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LOCALIZESERVICE_CONVERTLOCALIZETEXTURENAME_OFFSET))(str, nullptr);
		}

		::System::Boolean NickNameLengthCheck(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LOCALIZESERVICE_NICKNAMELENGTHCHECK_OFFSET))(str, nullptr);
		}

		::System::Void SetLocalizeCalendar()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALIZESERVICE_SETLOCALIZECALENDAR_OFFSET))(nullptr);
		}

	};

