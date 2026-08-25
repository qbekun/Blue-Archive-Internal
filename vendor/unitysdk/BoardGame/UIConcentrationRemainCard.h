#pragma once
#include "../unitysdk.h"

class UITexture;
namespace UnityEngine { class GameObject; }
class UISprite;
namespace MX::Data::Excel { class EventContentConcentrationCardExcel; }

#define BOARDGAME_UICONCENTRATIONREMAINCARD_REFRESH_OFFSET UNITYSDK_OFFSET(0xE0F8A0)
#define BOARDGAME_UICONCENTRATIONREMAINCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0xE12690)

namespace BoardGame
{
	inline static constexpr unsigned int UIConcentrationRemainCard_TypeDefinitionIndex = 10296;

	class UIConcentrationRemainCard : public Il2CppObject
	{
	public:
		UITexture* cardTexture; // 0x18
		::UnityEngine::GameObject* matchedMarkObject; // 0x20
		UISprite* raritySprite; // 0x28

		::System::Void Refresh(::MX::Data::Excel::EventContentConcentrationCardExcel* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentConcentrationCardExcel*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONREMAINCARD_REFRESH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONREMAINCARD_.CTOR_OFFSET))(nullptr);
		}

	};
}

