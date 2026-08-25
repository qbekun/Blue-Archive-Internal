#pragma once
#include "unitysdk.h"

class UIMultiFloorRaidPeriodDisplay;
class SpineChatDialogContainer;
class UITexture;
class UILabel;
class MXButton;

#define UIMULTIFLOORRAID_LOBBY_.CTOR_OFFSET UNITYSDK_OFFSET(0x26ABED0)
#define UIMULTIFLOORRAID_LOBBY_GET_NEEDSTACKUIS_OFFSET UNITYSDK_OFFSET(0x26ABEE0)
#define UIMULTIFLOORRAID_LOBBY_SETSEASONINFO_OFFSET UNITYSDK_OFFSET(0x26AC030)
#define UIMULTIFLOORRAID_LOBBY_ONOPENED_OFFSET UNITYSDK_OFFSET(0x26AC7F0)
#define UIMULTIFLOORRAID_LOBBY_ONCLICKENTER_OFFSET UNITYSDK_OFFSET(0x26ACBC0)
#define UIMULTIFLOORRAID_LOBBY_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x26ACCE0)
#define UIMULTIFLOORRAID_LOBBY___N__0_OFFSET UNITYSDK_OFFSET(0x26ACD70)
#define UIMULTIFLOORRAID_LOBBY_AWAKE_OFFSET UNITYSDK_OFFSET(0x26ACD80)

	inline static constexpr unsigned int UIMultiFloorRaid_Lobby_TypeDefinitionIndex = 6876;

	class UIMultiFloorRaid_Lobby : public Il2CppObject
	{
	public:
		UIMultiFloorRaidPeriodDisplay* PeriodDisplay; // 0xD8
		SpineChatDialogContainer* spineChatDialogContainer; // 0xE0
		UITexture* MinimapTexture; // 0xE8
		UITexture* BossTexture; // 0xF0
		UILabel* BossNameLabel; // 0xF8
		UILabel* BestFloorLabel; // 0x100
		UILabel* TipLabel; // 0x108
		MXButton* EnterButton; // 0x110
		::Il2CppArray<::System::Object*>* SeasonOnObjects; // 0x118
		::Il2CppArray<::System::Object*>* SeasonOffObjects; // 0x120

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAID_LOBBY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_needStackUIs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAID_LOBBY_GET_NEEDSTACKUIS_OFFSET))(nullptr);
		}

		::System::Void SetSeasonInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAID_LOBBY_SETSEASONINFO_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAID_LOBBY_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAID_LOBBY_ONCLICKENTER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAID_LOBBY_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAID_LOBBY___N__0_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAID_LOBBY_AWAKE_OFFSET))(nullptr);
		}

	};

