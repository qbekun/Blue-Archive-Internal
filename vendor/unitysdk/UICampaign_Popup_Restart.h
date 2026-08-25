#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class MXButton;
class UILabel;

#define UICAMPAIGN_POPUP_RESTART_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x22AC280)
#define UICAMPAIGN_POPUP_RESTART_.CTOR_OFFSET UNITYSDK_OFFSET(0x22B1C40)
#define UICAMPAIGN_POPUP_RESTART_AWAKE_OFFSET UNITYSDK_OFFSET(0x22B1C50)
#define UICAMPAIGN_POPUP_RESTART_ONCLICKRESTART_OFFSET UNITYSDK_OFFSET(0x22B1D80)

	inline static constexpr unsigned int UICampaign_Popup_Restart_TypeDefinitionIndex = 4770;

	class UICampaign_Popup_Restart : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* CountAP; // 0xD8
		MXButton* RestartButton; // 0xE0
		UILabel* CurAP; // 0xE8
		UILabel* NextAP; // 0xF0
		UILabel* Message; // 0xF8

		::System::Void Initialize(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_POPUP_RESTART_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_POPUP_RESTART_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_POPUP_RESTART_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickRestart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAMPAIGN_POPUP_RESTART_ONCLICKRESTART_OFFSET))(nullptr);
		}

	};

