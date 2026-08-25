#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class GameObject; }
class UILabel;
namespace UnityEngine { class Coroutine; }

#define UILOBBYAPAUTOCHARGETOOLTIP_.CCTOR_OFFSET UNITYSDK_OFFSET(0x266A070)
#define UILOBBYAPAUTOCHARGETOOLTIP_.CTOR_OFFSET UNITYSDK_OFFSET(0x266A100)
#define UILOBBYAPAUTOCHARGETOOLTIP_UPDATE_OFFSET UNITYSDK_OFFSET(0x266A110)
#define UILOBBYAPAUTOCHARGETOOLTIP_ONCLICKTOOLTIP_OFFSET UNITYSDK_OFFSET(0x266A2A0)
#define UILOBBYAPAUTOCHARGETOOLTIP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x266A2B0)
#define UILOBBYAPAUTOCHARGETOOLTIP_ONCLICKBACKGROUND_OFFSET UNITYSDK_OFFSET(0x266A310)
#define UILOBBYAPAUTOCHARGETOOLTIP_CLOSETOOLTIP_OFFSET UNITYSDK_OFFSET(0x266A240)
#define UILOBBYAPAUTOCHARGETOOLTIP_AWAKE_OFFSET UNITYSDK_OFFSET(0x266A370)
#define UILOBBYAPAUTOCHARGETOOLTIP_COREFRESH_OFFSET UNITYSDK_OFFSET(0x266A750)
#define UILOBBYAPAUTOCHARGETOOLTIP_ONCLICKAP_OFFSET UNITYSDK_OFFSET(0x266A7E0)

	inline static constexpr unsigned int UILobbyApAutoChargeTooltip_TypeDefinitionIndex = 6684;

	class UILobbyApAutoChargeTooltip : public Il2CppObject
	{
	public:
		::System::String* ApChargeTimeText; // 0x0
		::System::String* ApMaxText; // 0x8
		::System::Single WaitForClose; // 0x0
		::System::Single RefreshPeriod; // 0x0
		MXButton* apButton; // 0x18
		MXButton* tooltipButton; // 0x20
		::UnityEngine::GameObject* tooltipParent; // 0x28
		UILabel* tooltipLabel; // 0x30
		MXButton* backgroundButton; // 0x38
		::UnityEngine::Coroutine* refreshCoroutine; // 0x40
		::System::Single elapsedTime; // 0x48

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYAPAUTOCHARGETOOLTIP_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYAPAUTOCHARGETOOLTIP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYAPAUTOCHARGETOOLTIP_UPDATE_OFFSET))(nullptr);
		}

		::System::Void OnClickTooltip()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYAPAUTOCHARGETOOLTIP_ONCLICKTOOLTIP_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYAPAUTOCHARGETOOLTIP_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnClickBackground()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYAPAUTOCHARGETOOLTIP_ONCLICKBACKGROUND_OFFSET))(nullptr);
		}

		::System::Void CloseTooltip()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYAPAUTOCHARGETOOLTIP_CLOSETOOLTIP_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYAPAUTOCHARGETOOLTIP_AWAKE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoRefresh()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYAPAUTOCHARGETOOLTIP_COREFRESH_OFFSET))(nullptr);
		}

		::System::Void OnClickAp()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYAPAUTOCHARGETOOLTIP_ONCLICKAP_OFFSET))(nullptr);
		}

	};

