#pragma once
#include "../../unitysdk.h"

namespace FlatData { class WebAPIErrorLevel&; }
namespace UnityEngine { class Font; }
namespace FlatData { class Language; }
namespace UnityEngine { class FontStyle; }

#define MX_DATA_LOCALIZEDATA_INITIALIZECLIENT_OFFSET UNITYSDK_OFFSET(0x18EB230)
#define MX_DATA_LOCALIZEDATA_TRYGETDATA_OFFSET UNITYSDK_OFFSET(0x18EB9C0)
#define MX_DATA_LOCALIZEDATA_TRYGETTEXT_OFFSET UNITYSDK_OFFSET(0x18EBBC0)
#define MX_DATA_LOCALIZEDATA_TRYGETTEXT_OFFSET UNITYSDK_OFFSET(0x18EBD20)
#define MX_DATA_LOCALIZEDATA_GETTEXT_OFFSET UNITYSDK_OFFSET(0x18EBD50)
#define MX_DATA_LOCALIZEDATA_GETTEXT_OFFSET UNITYSDK_OFFSET(0x18EBDB0)
#define MX_DATA_LOCALIZEDATA_TRYGETERRORLEVEL_OFFSET UNITYSDK_OFFSET(0x18EBE40)
#define MX_DATA_LOCALIZEDATA_GETFONT_OFFSET UNITYSDK_OFFSET(0x18EBF40)
#define MX_DATA_LOCALIZEDATA_GETFONT_OFFSET UNITYSDK_OFFSET(0x18EC050)
#define MX_DATA_LOCALIZEDATA_GETBOLDFONTSTYLE_OFFSET UNITYSDK_OFFSET(0x18EC1A0)
#define MX_DATA_LOCALIZEDATA_GETBOLDFONTSTYLE_OFFSET UNITYSDK_OFFSET(0x18EC280)
#define MX_DATA_LOCALIZEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18EC390)

namespace MX::Data
{
	inline static constexpr unsigned int LocalizeData_TypeDefinitionIndex = 16171;

	class LocalizeData : public Il2CppObject
	{
	public:
		Il2CppObject* needReplacemenetSet; // 0x28
		Il2CppObject* cache; // 0x30

		::System::Void InitializeClient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOCALIZEDATA_INITIALIZECLIENT_OFFSET))(nullptr);
		}

		::System::Boolean TryGetData(::System::UInt32 arg, ::System::String&* arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOCALIZEDATA_TRYGETDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetText(::System::UInt32 arg, ::System::String&* arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOCALIZEDATA_TRYGETTEXT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetText(::System::String* str, ::System::String&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOCALIZEDATA_TRYGETTEXT_OFFSET))(str, arg, nullptr);
		}

		::System::String* GetText(::System::UInt32 arg, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::UInt32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOCALIZEDATA_GETTEXT_OFFSET))(arg, str, nullptr);
		}

		::System::String* GetText(::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOCALIZEDATA_GETTEXT_OFFSET))(str, str, nullptr);
		}

		::System::Boolean TryGetErrorLevel(::System::String* str, ::FlatData::WebAPIErrorLevel&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::FlatData::WebAPIErrorLevel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOCALIZEDATA_TRYGETERRORLEVEL_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::Font* GetFont(::FlatData::Language* arg, ::UnityEngine::FontStyle* arg)
		{
			return (return (::UnityEngine::Font*(*)(::FlatData::Language*, ::UnityEngine::FontStyle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOCALIZEDATA_GETFONT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Font* GetFont(::FlatData::Language* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::Font*(*)(::FlatData::Language*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOCALIZEDATA_GETFONT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::FontStyle* GetBoldFontStyle(::FlatData::Language* arg, ::UnityEngine::FontStyle* arg)
		{
			return (return (::UnityEngine::FontStyle*(*)(::FlatData::Language*, ::UnityEngine::FontStyle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOCALIZEDATA_GETBOLDFONTSTYLE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::FontStyle* GetBoldFontStyle(::FlatData::Language* arg, ::System::Boolean arg, ::UnityEngine::FontStyle* arg)
		{
			return (return (::UnityEngine::FontStyle*(*)(::FlatData::Language*, ::System::Boolean, ::UnityEngine::FontStyle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOCALIZEDATA_GETBOLDFONTSTYLE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOCALIZEDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

