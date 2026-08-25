#pragma once
#include "unitysdk.h"

class UILabel;
class UISlider;
namespace UnityEngine { class GameObject; }

#define UILOBBYACCOUNTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x2669660)
#define UILOBBYACCOUNTINFO_REFRESHNEWBIEICON_OFFSET UNITYSDK_OFFSET(0x2669670)
#define UILOBBYACCOUNTINFO_REFRESHNICKNAME_OFFSET UNITYSDK_OFFSET(0x26697A0)
#define UILOBBYACCOUNTINFO_ONCLICKBUTTON_OFFSET UNITYSDK_OFFSET(0x2669840)
#define UILOBBYACCOUNTINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0x26698F0)
#define UILOBBYACCOUNTINFO_REFRESHALL_OFFSET UNITYSDK_OFFSET(0x2669BB0)
#define UILOBBYACCOUNTINFO_ONENABLE_OFFSET UNITYSDK_OFFSET(0x266A040)
#define UILOBBYACCOUNTINFO_REFREHSLEVELEXP_OFFSET UNITYSDK_OFFSET(0x2669BE0)

	inline static constexpr unsigned int UILobbyAccountInfo_TypeDefinitionIndex = 6682;

	class UILobbyAccountInfo : public Il2CppObject
	{
	public:
		Il2CppObject* accountinfoButtons; // 0x18
		Il2CppObject* accountinfoTriggers; // 0x20
		UILabel* nickname; // 0x28
		UILabel* level; // 0x30
		UILabel* exp; // 0x38
		UISlider* expGauge; // 0x40
		::UnityEngine::GameObject* normalLevelExp; // 0x48
		::UnityEngine::GameObject* maxLevelExp; // 0x50
		::UnityEngine::GameObject* newbieIcon; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYACCOUNTINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ReFreshNewbieIcon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYACCOUNTINFO_REFRESHNEWBIEICON_OFFSET))(nullptr);
		}

		::System::Void RefreshNickname()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYACCOUNTINFO_REFRESHNICKNAME_OFFSET))(nullptr);
		}

		::System::Void OnClickButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYACCOUNTINFO_ONCLICKBUTTON_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYACCOUNTINFO_AWAKE_OFFSET))(nullptr);
		}

		::System::Void RefreshAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYACCOUNTINFO_REFRESHALL_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYACCOUNTINFO_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void RefrehsLevelExp()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYACCOUNTINFO_REFREHSLEVELEXP_OFFSET))(nullptr);
		}

	};

