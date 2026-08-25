#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class GameObject; }

#define UIEVENTCARDSHOPREWARDHISTORYPOPUP_ONCLICKCLOSEBTN_OFFSET UNITYSDK_OFFSET(0x248E290)
#define UIEVENTCARDSHOPREWARDHISTORYPOPUP_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x24887D0)
#define UIEVENTCARDSHOPREWARDHISTORYPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x248ECD0)
#define UIEVENTCARDSHOPREWARDHISTORYPOPUP_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x248ECE0)
#define UIEVENTCARDSHOPREWARDHISTORYPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x248ED20)

	inline static constexpr unsigned int UIEventCardShopRewardHistoryPopup_TypeDefinitionIndex = 5715;

	class UIEventCardShopRewardHistoryPopup : public Il2CppObject
	{
	public:
		MXButton* closeBtn; // 0xD8
		::UnityEngine::GameObject* empty; // 0xE0
		Il2CppObject* items; // 0xE8
		::System::Action* closeCallback; // 0xF0

		::System::Void OnClickCloseBtn()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOPREWARDHISTORYPOPUP_ONCLICKCLOSEBTN_OFFSET))(nullptr);
		}

		::System::Void Initialized(Il2CppObject* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOPREWARDHISTORYPOPUP_INITIALIZED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOPREWARDHISTORYPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOPREWARDHISTORYPOPUP_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOPREWARDHISTORYPOPUP_AWAKE_OFFSET))(nullptr);
		}

	};

