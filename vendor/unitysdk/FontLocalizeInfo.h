#pragma once
#include "unitysdk.h"

class FontStyleInfo;
namespace UnityEngine { class Vector2; }
class BundleFonts;

#define FONTLOCALIZEINFO_INIT_OFFSET UNITYSDK_OFFSET(0xC0F6E0)
#define FONTLOCALIZEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xC0F730)
#define FONTLOCALIZEINFO_COLOADBUNDLEFONT_OFFSET UNITYSDK_OFFSET(0xC0F790)

	inline static constexpr unsigned int FontLocalizeInfo_TypeDefinitionIndex = 8831;

	class FontLocalizeInfo : public Il2CppObject
	{
	public:
		::System::String* BundleFontPath; // 0x10
		FontStyleInfo* Normal; // 0x18
		FontStyleInfo* Bold; // 0x20
		::System::Single Scale; // 0x28
		::UnityEngine::Vector2* Spacing; // 0x2C

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FONTLOCALIZEINFO_INIT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FONTLOCALIZEINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoLoadBundleFont(BundleFonts* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(BundleFonts*, ::PVOID))((::PBYTE)hIl2Cpp + FONTLOCALIZEINFO_COLOADBUNDLEFONT_OFFSET))(arg, nullptr);
		}

	};

