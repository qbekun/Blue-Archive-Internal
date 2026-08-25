#pragma once
#include "../unitysdk.h"

#define BOARDGAME_UIEVENTCONCENTRATIONCLEAR_ONENDOPENANIMATION_OFFSET UNITYSDK_OFFSET(0xE13020)
#define BOARDGAME_UIEVENTCONCENTRATIONCLEAR_.CTOR_OFFSET UNITYSDK_OFFSET(0xE130A0)
#define BOARDGAME_UIEVENTCONCENTRATIONCLEAR_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xE130B0)
#define BOARDGAME_UIEVENTCONCENTRATIONCLEAR_ONCLOSED_OFFSET UNITYSDK_OFFSET(0xE130D0)

namespace BoardGame
{
	inline static constexpr unsigned int UIEventConcentrationClear_TypeDefinitionIndex = 10301;

	class UIEventConcentrationClear : public Il2CppObject
	{
	public:
		::System::Action* onCloseCallback; // 0xD8

		::System::Void OnEndOpenAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UIEVENTCONCENTRATIONCLEAR_ONENDOPENANIMATION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UIEVENTCONCENTRATIONCLEAR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UIEVENTCONCENTRATIONCLEAR_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UIEVENTCONCENTRATIONCLEAR_ONCLOSED_OFFSET))(nullptr);
		}

	};
}

