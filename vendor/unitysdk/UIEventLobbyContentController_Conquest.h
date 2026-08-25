#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class GameObject; }

#define UIEVENTLOBBYCONTENTCONTROLLER_CONQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x2446F10)
#define UIEVENTLOBBYCONTENTCONTROLLER_CONQUEST_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2446F20)
#define UIEVENTLOBBYCONTENTCONTROLLER_CONQUEST_ONCLICKENTERCONQUESTBUTTON_OFFSET UNITYSDK_OFFSET(0x2446FC0)
#define UIEVENTLOBBYCONTENTCONTROLLER_CONQUEST_AWAKE_OFFSET UNITYSDK_OFFSET(0x2447030)

	inline static constexpr unsigned int UIEventLobbyContentController_Conquest_TypeDefinitionIndex = 5540;

	class UIEventLobbyContentController_Conquest : public Il2CppObject
	{
	public:
		MXButton* enterConquestButton; // 0x38
		::UnityEngine::GameObject* conquestReddot; // 0x40
		::System::Int64 eventContentId; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_CONQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_CONQUEST_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickEnterConquestButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_CONQUEST_ONCLICKENTERCONQUESTBUTTON_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_CONQUEST_AWAKE_OFFSET))(nullptr);
		}

	};

