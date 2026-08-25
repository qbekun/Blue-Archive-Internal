#pragma once
#include "unitysdk.h"

class UISprite;

#define UIIMAGEBUTTON_UPDATEIMAGE_OFFSET UNITYSDK_OFFSET(0xA067E0)
#define UIIMAGEBUTTON_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0xA06A80)
#define UIIMAGEBUTTON_SET_ISENABLED_OFFSET UNITYSDK_OFFSET(0xA06BA0)
#define UIIMAGEBUTTON_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA06C70)
#define UIIMAGEBUTTON_ONPRESS_OFFSET UNITYSDK_OFFSET(0xA06D00)
#define UIIMAGEBUTTON_ONHOVER_OFFSET UNITYSDK_OFFSET(0xA06D20)
#define UIIMAGEBUTTON_GET_ISENABLED_OFFSET UNITYSDK_OFFSET(0xA068C0)
#define UIIMAGEBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0xA06DC0)
#define UIIMAGEBUTTON_SETSPRITE_OFFSET UNITYSDK_OFFSET(0xA06960)

	inline static constexpr unsigned int UIImageButton_TypeDefinitionIndex = 45;

	class UIImageButton : public Il2CppObject
	{
	public:
		UISprite* target; // 0x18
		::System::String* normalSprite; // 0x20
		::System::String* hoverSprite; // 0x28
		::System::String* pressedSprite; // 0x30
		::System::String* disabledSprite; // 0x38
		::System::Boolean pixelSnap; // 0x40

		::System::Void UpdateImage()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIIMAGEBUTTON_UPDATEIMAGE_OFFSET))(nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIIMAGEBUTTON_ONVALIDATE_OFFSET))(nullptr);
		}

		::System::Void set_isEnabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIIMAGEBUTTON_SET_ISENABLED_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIIMAGEBUTTON_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnPress(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIIMAGEBUTTON_ONPRESS_OFFSET))(arg, nullptr);
		}

		::System::Void OnHover(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIIMAGEBUTTON_ONHOVER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIIMAGEBUTTON_GET_ISENABLED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIIMAGEBUTTON_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetSprite(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIIMAGEBUTTON_SETSPRITE_OFFSET))(str, nullptr);
		}

	};

