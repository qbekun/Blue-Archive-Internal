#pragma once
#include "unitysdk.h"

class TweenAlpha;
class UILabel;

#define UIINTERACTIVEWORLDRAIDLOBBYTOAST_HIDE_OFFSET UNITYSDK_OFFSET(0x262C6C0)
#define UIINTERACTIVEWORLDRAIDLOBBYTOAST_SHOW_OFFSET UNITYSDK_OFFSET(0x2627B90)
#define UIINTERACTIVEWORLDRAIDLOBBYTOAST_UPDATE_OFFSET UNITYSDK_OFFSET(0x262C7B0)
#define UIINTERACTIVEWORLDRAIDLOBBYTOAST_COHIDE_OFFSET UNITYSDK_OFFSET(0x262C740)
#define UIINTERACTIVEWORLDRAIDLOBBYTOAST_.CTOR_OFFSET UNITYSDK_OFFSET(0x262C890)
#define UIINTERACTIVEWORLDRAIDLOBBYTOAST__COHIDE_B__8_0_OFFSET UNITYSDK_OFFSET(0x262C8A0)

	inline static constexpr unsigned int UIInteractiveWorldRaidLobbyToast_TypeDefinitionIndex = 6556;

	class UIInteractiveWorldRaidLobbyToast : public Il2CppObject
	{
	public:
		TweenAlpha* toastAlpha; // 0x18
		UILabel* toastText; // 0x20
		::System::Single displayTime; // 0x28
		::System::Boolean _isShowing; // 0x2C
		::System::Single _elapsedTime; // 0x30

		::System::Void Hide()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBYTOAST_HIDE_OFFSET))(nullptr);
		}

		::System::Void Show(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBYTOAST_SHOW_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBYTOAST_UPDATE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoHide()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBYTOAST_COHIDE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBYTOAST_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _CoHide_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDLOBBYTOAST__COHIDE_B__8_0_OFFSET))(nullptr);
		}

	};

