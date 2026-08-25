#pragma once
#include "unitysdk.h"

class FontLocalizeInfo;
namespace FlatData { class Language; }

#define FONTCONTAINER_LOADBUNDLEFONTS_OFFSET UNITYSDK_OFFSET(0xC0FCC0)
#define FONTCONTAINER_GETFONTINFORMATION_OFFSET UNITYSDK_OFFSET(0xC0FD60)
#define FONTCONTAINER_INITFONTCONTAINER_OFFSET UNITYSDK_OFFSET(0xC0FDB0)
#define FONTCONTAINER_CHANGEBUNDLEFONT_OFFSET UNITYSDK_OFFSET(0xC0FE30)
#define FONTCONTAINER_INITFONTS_OFFSET UNITYSDK_OFFSET(0xC0FEC0)
#define FONTCONTAINER_.CTOR_OFFSET UNITYSDK_OFFSET(0xC10040)

	inline static constexpr unsigned int FontContainer_TypeDefinitionIndex = 8835;

	class FontContainer : public ::ToyWebViewShared::Messages::NotifyMessageEmitted
	{
	public:
		FontLocalizeInfo* Kr; // 0x20
		FontLocalizeInfo* Jp; // 0x28
		FontLocalizeInfo* Th; // 0x30
		FontLocalizeInfo* Tw; // 0x38
		FontLocalizeInfo* En; // 0x40

		::System::Collections::IEnumerator* LoadBundleFonts(::FlatData::Language* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::FlatData::Language*, ::PVOID))((::PBYTE)hIl2Cpp + FONTCONTAINER_LOADBUNDLEFONTS_OFFSET))(arg, nullptr);
		}

		FontLocalizeInfo* GetFontInformation(::FlatData::Language* arg)
		{
			return ((FontLocalizeInfo*(*)(::FlatData::Language*, ::PVOID))((::PBYTE)hIl2Cpp + FONTCONTAINER_GETFONTINFORMATION_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* InitFontContainer()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + FONTCONTAINER_INITFONTCONTAINER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ChangeBundleFont()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + FONTCONTAINER_CHANGEBUNDLEFONT_OFFSET))(nullptr);
		}

		::System::Void InitFonts()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FONTCONTAINER_INITFONTS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FONTCONTAINER_.CTOR_OFFSET))(nullptr);
		}

	};

