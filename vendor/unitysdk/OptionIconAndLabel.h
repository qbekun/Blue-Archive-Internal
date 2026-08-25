#pragma once
#include "unitysdk.h"

class UILabel;
class UISprite;
class UITexture;
namespace FlatData { class School; }

#define OPTIONICONANDLABEL_SETICONANDLABEL_OFFSET UNITYSDK_OFFSET(0xAF4890)
#define OPTIONICONANDLABEL_SETICONTEXTUREANDLABEL_OFFSET UNITYSDK_OFFSET(0xAF4A50)
#define OPTIONICONANDLABEL_SETICONTEXTUREANDLABEL_OFFSET UNITYSDK_OFFSET(0xAF4B50)
#define OPTIONICONANDLABEL_INITIALCACHECHECK_OFFSET UNITYSDK_OFFSET(0xAF4980)
#define OPTIONICONANDLABEL_.CTOR_OFFSET UNITYSDK_OFFSET(0xAF4C30)

	inline static constexpr unsigned int OptionIconAndLabel_TypeDefinitionIndex = 8142;

	class OptionIconAndLabel : public Il2CppObject
	{
	public:
		UILabel* optionNameOn; // 0x18
		UILabel* optionNameOff; // 0x20
		UISprite* optionIconSpriteOn; // 0x28
		UISprite* optionIconSpriteOff; // 0x30
		UITexture* optionIconTextureOn; // 0x38
		UITexture* optionIconTextureOff; // 0x40
		::System::Boolean isOptionNameOnAvailable; // 0x48
		::System::Boolean isOptionNameOffAvailable; // 0x49
		::System::Boolean isOptionIconSpriteOnAvailable; // 0x4A
		::System::Boolean isOptionIconSpriteOffAvailable; // 0x4B
		::System::Boolean isOptionIconTextureOnAvailable; // 0x4C
		::System::Boolean isOptionIconTextureOffAvailable; // 0x4D
		::System::Boolean isCacheChecked; // 0x4E

		::System::Void SetIconAndLabel(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + OPTIONICONANDLABEL_SETICONANDLABEL_OFFSET))(str, str2, nullptr);
		}

		::System::Void SetIconTextureAndLabel(::System::String* str, ::System::String* str2, ::System::String* str3)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + OPTIONICONANDLABEL_SETICONTEXTUREANDLABEL_OFFSET))(str, str2, str3, nullptr);
		}

		::System::Void SetIconTextureAndLabel(::System::String* str, ::FlatData::School* arg)
		{
			((::System::Void(*)(::System::String*, ::FlatData::School*, ::PVOID))((::PBYTE)hIl2Cpp + OPTIONICONANDLABEL_SETICONTEXTUREANDLABEL_OFFSET))(str, arg, nullptr);
		}

		::System::Void InitialCacheCheck()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPTIONICONANDLABEL_INITIALCACHECHECK_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPTIONICONANDLABEL_.CTOR_OFFSET))(nullptr);
		}

	};

