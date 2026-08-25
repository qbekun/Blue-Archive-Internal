#pragma once
#include "../../unitysdk.h"

#define MXFIELD_UI_UIFIELDLOBBYBATTLEBUTTON_NEEDSTOPLAYUNLOCKANIMATION_OFFSET UNITYSDK_OFFSET(0xE9D890)
#define MXFIELD_UI_UIFIELDLOBBYBATTLEBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0xE9DAC0)
#define MXFIELD_UI_UIFIELDLOBBYBATTLEBUTTON_ONCLICKLOCKED_OFFSET UNITYSDK_OFFSET(0xE9DAE0)
#define MXFIELD_UI_UIFIELDLOBBYBATTLEBUTTON_GET_ISBATTLEACTIVE_OFFSET UNITYSDK_OFFSET(0xE9DDC0)
#define MXFIELD_UI_UIFIELDLOBBYBATTLEBUTTON_SET_ISBATTLEACTIVE_OFFSET UNITYSDK_OFFSET(0xE9B010)
#define MXFIELD_UI_UIFIELDLOBBYBATTLEBUTTON_ONCLICKTHIS_OFFSET UNITYSDK_OFFSET(0xE9DDF0)
#define MXFIELD_UI_UIFIELDLOBBYBATTLEBUTTON_EXECUTE_OFFSET UNITYSDK_OFFSET(0xE9E110)

namespace MXField::UI
{
	inline static constexpr unsigned int UIFieldLobbyBattleButton_TypeDefinitionIndex = 10725;

	class UIFieldLobbyBattleButton : public Il2CppObject
	{
	public:
		::System::Boolean isBattleActive; // 0x38

		::System::Boolean NeedsToPlayUnlockAnimation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBYBATTLEBUTTON_NEEDSTOPLAYUNLOCKANIMATION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBYBATTLEBUTTON_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickLocked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBYBATTLEBUTTON_ONCLICKLOCKED_OFFSET))(nullptr);
		}

		::System::Boolean get_IsBattleActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBYBATTLEBUTTON_GET_ISBATTLEACTIVE_OFFSET))(nullptr);
		}

		::System::Void set_IsBattleActive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBYBATTLEBUTTON_SET_ISBATTLEACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickThis()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBYBATTLEBUTTON_ONCLICKTHIS_OFFSET))(nullptr);
		}

		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDLOBBYBATTLEBUTTON_EXECUTE_OFFSET))(nullptr);
		}

	};
}

