#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace MX::SaveData { class ClientOption; }

#define UIPAUSE_OPTION_SAVEOPTIONS_OFFSET UNITYSDK_OFFSET(0x26D4C90)
#define UIPAUSE_OPTION_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x26D4D20)
#define UIPAUSE_OPTION_INITIALIZEUI_OFFSET UNITYSDK_OFFSET(0x26D55E0)
#define UIPAUSE_OPTION_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x26D56C0)
#define UIPAUSE_OPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x26D56E0)
#define UIPAUSE_OPTION_REFRESHBATTLEUI_OFFSET UNITYSDK_OFFSET(0x26D4E10)

	inline static constexpr unsigned int UIPause_Option_TypeDefinitionIndex = 7025;

	class UIPause_Option : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* pcTabObject; // 0x130

		::System::Void SaveOptions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPAUSE_OPTION_SAVEOPTIONS_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPAUSE_OPTION_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void InitializeUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPAUSE_OPTION_INITIALIZEUI_OFFSET))(nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPAUSE_OPTION_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPAUSE_OPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RefreshBattleUI(::MX::SaveData::ClientOption* arg)
		{
			((::System::Void(*)(::MX::SaveData::ClientOption*, ::PVOID))((::PBYTE)hIl2Cpp + UIPAUSE_OPTION_REFRESHBATTLEUI_OFFSET))(arg, nullptr);
		}

	};

