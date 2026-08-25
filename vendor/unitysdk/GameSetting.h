#pragma once
#include "unitysdk.h"

namespace FlatData { class Language; }
namespace UnityEngine { class Vector2; }
class CustomCultureInfo;
namespace FlatData { class Nation; }

#define GAMESETTING_SET_LANGUAGE_OFFSET UNITYSDK_OFFSET(0xC28DD0)
#define GAMESETTING_SETCULTUREINFO_OFFSET UNITYSDK_OFFSET(0xC28FF0)
#define GAMESETTING_SETFONTINFO_OFFSET UNITYSDK_OFFSET(0xC29200)
#define GAMESETTING_.CCTOR_OFFSET UNITYSDK_OFFSET(0xC29380)
#define GAMESETTING_GETBUILDSETTINGLANGUAGE_OFFSET UNITYSDK_OFFSET(0xC28FE0)
#define GAMESETTING_GET_VOICELANGUAGE_OFFSET UNITYSDK_OFFSET(0xC293F0)
#define GAMESETTING_SET_VOICELANGUAGE_OFFSET UNITYSDK_OFFSET(0xC29440)
#define GAMESETTING_GET_LANGUAGE_OFFSET UNITYSDK_OFFSET(0xC29620)
#define GAMESETTING_ISMATCHEDCURRENTSETTING_OFFSET UNITYSDK_OFFSET(0xC29680)

	inline static constexpr unsigned int GameSetting_TypeDefinitionIndex = 8903;

	class GameSetting : public Il2CppObject
	{
	public:
		::FlatData::Language* DefaultLanguage; // 0x0
		::FlatData::Language* language; // 0x4
		::System::Single FontScale; // 0x8
		::UnityEngine::Vector2* FontSpacing; // 0xC
		CustomCultureInfo* LanguageCultureInfo; // 0x18
		::FlatData::Nation* voiceLanguage; // 0x20

		::System::Void set_Language(::FlatData::Language* arg)
		{
			((::System::Void(*)(::FlatData::Language*, ::PVOID))((::PBYTE)hIl2Cpp + GAMESETTING_SET_LANGUAGE_OFFSET))(arg, nullptr);
		}

		::System::Void SetCultureInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMESETTING_SETCULTUREINFO_OFFSET))(nullptr);
		}

		::System::Void SetFontInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMESETTING_SETFONTINFO_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMESETTING_.CCTOR_OFFSET))(nullptr);
		}

		::FlatData::Language* GetBuildSettingLanguage(::FlatData::Language* arg)
		{
			return ((::FlatData::Language*(*)(::FlatData::Language*, ::PVOID))((::PBYTE)hIl2Cpp + GAMESETTING_GETBUILDSETTINGLANGUAGE_OFFSET))(arg, nullptr);
		}

		::FlatData::Nation* get_VoiceLanguage()
		{
			return ((::FlatData::Nation*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMESETTING_GET_VOICELANGUAGE_OFFSET))(nullptr);
		}

		::System::Void set_VoiceLanguage(::FlatData::Nation* arg)
		{
			((::System::Void(*)(::FlatData::Nation*, ::PVOID))((::PBYTE)hIl2Cpp + GAMESETTING_SET_VOICELANGUAGE_OFFSET))(arg, nullptr);
		}

		::FlatData::Language* get_Language()
		{
			return ((::FlatData::Language*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMESETTING_GET_LANGUAGE_OFFSET))(nullptr);
		}

		::System::Boolean IsMatchedCurrentSetting(::FlatData::Nation* arg)
		{
			return ((::System::Boolean(*)(::FlatData::Nation*, ::PVOID))((::PBYTE)hIl2Cpp + GAMESETTING_ISMATCHEDCURRENTSETTING_OFFSET))(arg, nullptr);
		}

	};

