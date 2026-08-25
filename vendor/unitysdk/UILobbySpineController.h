#pragma once
#include "unitysdk.h"

class MXButton;
class UILabel;
class UILobbyContainer;
class UILobby;
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }
class LobbySpineLoadInfo;
namespace MX::SaveData { class LobbyCharacterSelectData; }

#define UILOBBYSPINECONTROLLER_GET_UILOBBY_OFFSET UNITYSDK_OFFSET(0x2677350)
#define UILOBBYSPINECONTROLLER_GET_LOBBYTRANSFORM_OFFSET UNITYSDK_OFFSET(0x26773D0)
#define UILOBBYSPINECONTROLLER_GET_LOBBYSPINELOADINFO_OFFSET UNITYSDK_OFFSET(0x26774A0)
#define UILOBBYSPINECONTROLLER_SET_LOBBYSPINELOADINFO_OFFSET UNITYSDK_OFFSET(0x26774B0)
#define UILOBBYSPINECONTROLLER_GET_ISMEMORIAL_OFFSET UNITYSDK_OFFSET(0x26774C0)
#define UILOBBYSPINECONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x26774E0)
#define UILOBBYSPINECONTROLLER_LOADDEFAULTANDCHANGE_OFFSET UNITYSDK_OFFSET(0x26778C0)
#define UILOBBYSPINECONTROLLER_LOADDEFAULTINFO_OFFSET UNITYSDK_OFFSET(0x2677930)
#define UILOBBYSPINECONTROLLER_LOADSPINE_OFFSET UNITYSDK_OFFSET(0x26779A0)
#define UILOBBYSPINECONTROLLER_CHANGELOBBYSPINE_OFFSET UNITYSDK_OFFSET(0x2677990)
#define UILOBBYSPINECONTROLLER_CHANGELOBBYSPINE_OFFSET UNITYSDK_OFFSET(0x2677AB0)
#define UILOBBYSPINECONTROLLER_CHANGESELECTCHARACTERS_OFFSET UNITYSDK_OFFSET(0x26783E0)
#define UILOBBYSPINECONTROLLER_MEMORYLOBBYSKIP_OFFSET UNITYSDK_OFFSET(0x2678570)
#define UILOBBYSPINECONTROLLER_ONSETACTIVELOBBYICONS_OFFSET UNITYSDK_OFFSET(0x26785C0)
#define UILOBBYSPINECONTROLLER_ONFAVORSCENARIOFINISHED_OFFSET UNITYSDK_OFFSET(0x2678670)
#define UILOBBYSPINECONTROLLER_RESETSPINELAYER_OFFSET UNITYSDK_OFFSET(0x26786A0)
#define UILOBBYSPINECONTROLLER_SAVELOBBYCHARACTERSELECTDATA_OFFSET UNITYSDK_OFFSET(0x2677FB0)
#define UILOBBYSPINECONTROLLER_REFRESHSPINECOUNT_OFFSET UNITYSDK_OFFSET(0x2678290)
#define UILOBBYSPINECONTROLLER_SETSPINEBUTTONS_OFFSET UNITYSDK_OFFSET(0x2678110)
#define UILOBBYSPINECONTROLLER_ONCLICKROTATESPINEBUTTON_OFFSET UNITYSDK_OFFSET(0x2678700)
#define UILOBBYSPINECONTROLLER_ONCLICKPREVCHARACTERSPINEBUTTON_OFFSET UNITYSDK_OFFSET(0x2678760)
#define UILOBBYSPINECONTROLLER_ONCLICKNEXTCHARACTERSPINEBUTTON_OFFSET UNITYSDK_OFFSET(0x2678880)
#define UILOBBYSPINECONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26789A0)

	inline static constexpr unsigned int UILobbySpineController_TypeDefinitionIndex = 6724;

	class UILobbySpineController : public Il2CppObject
	{
	public:
		MXButton* rotateSpineButton; // 0x18
		MXButton* prevCharacterSpineButton; // 0x20
		MXButton* nextCharacterSpineButton; // 0x28
		UILabel* lobbySpineCount; // 0x30
		UILobbyContainer* Container; // 0x38
		UILobby* lobby; // 0x40
		::UnityEngine::Transform* lobbyTransform; // 0x48
		::UnityEngine::Playables::PlayableDirector* memoryLobbyDirector; // 0x50
		LobbySpineLoadInfo* _LobbySpineLoadInfo_k__BackingField; // 0x58

		UILobby* get_UILobby()
		{
			return ((UILobby*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSPINECONTROLLER_GET_UILOBBY_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_LobbyTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSPINECONTROLLER_GET_LOBBYTRANSFORM_OFFSET))(nullptr);
		}

		LobbySpineLoadInfo* get_LobbySpineLoadInfo()
		{
			return ((LobbySpineLoadInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSPINECONTROLLER_GET_LOBBYSPINELOADINFO_OFFSET))(nullptr);
		}

		::System::Void set_LobbySpineLoadInfo(LobbySpineLoadInfo* arg)
		{
			((::System::Void(*)(LobbySpineLoadInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSPINECONTROLLER_SET_LOBBYSPINELOADINFO_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsMemorial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSPINECONTROLLER_GET_ISMEMORIAL_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSPINECONTROLLER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void LoadDefaultAndChange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSPINECONTROLLER_LOADDEFAULTANDCHANGE_OFFSET))(nullptr);
		}

		::System::Void LoadDefaultInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSPINECONTROLLER_LOADDEFAULTINFO_OFFSET))(nullptr);
		}

		::System::Void LoadSpine(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSPINECONTROLLER_LOADSPINE_OFFSET))(arg, nullptr);
		}

		::System::Void ChangeLobbySpine(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSPINECONTROLLER_CHANGELOBBYSPINE_OFFSET))(arg, nullptr);
		}

		::System::Void ChangeLobbySpine(LobbySpineLoadInfo* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(LobbySpineLoadInfo*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSPINECONTROLLER_CHANGELOBBYSPINE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ChangeSelectCharacters(::MX::SaveData::LobbyCharacterSelectData* arg)
		{
			((::System::Void(*)(::MX::SaveData::LobbyCharacterSelectData*, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSPINECONTROLLER_CHANGESELECTCHARACTERS_OFFSET))(arg, nullptr);
		}

		::System::Void MemoryLobbySkip()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSPINECONTROLLER_MEMORYLOBBYSKIP_OFFSET))(nullptr);
		}

		::System::Void OnSetActiveLobbyIcons(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSPINECONTROLLER_ONSETACTIVELOBBYICONS_OFFSET))(arg, nullptr);
		}

		::System::Void OnFavorScenarioFinished()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSPINECONTROLLER_ONFAVORSCENARIOFINISHED_OFFSET))(nullptr);
		}

		::System::Void ResetSpineLayer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSPINECONTROLLER_RESETSPINELAYER_OFFSET))(nullptr);
		}

		::System::Void SaveLobbyCharacterSelectData(LobbySpineLoadInfo* arg)
		{
			((::System::Void(*)(LobbySpineLoadInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSPINECONTROLLER_SAVELOBBYCHARACTERSELECTDATA_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshSpineCount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSPINECONTROLLER_REFRESHSPINECOUNT_OFFSET))(nullptr);
		}

		::System::Void SetSpineButtons()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSPINECONTROLLER_SETSPINEBUTTONS_OFFSET))(nullptr);
		}

		::System::Void OnClickRotateSpineButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSPINECONTROLLER_ONCLICKROTATESPINEBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickPrevCharacterSpineButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSPINECONTROLLER_ONCLICKPREVCHARACTERSPINEBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickNextCharacterSpineButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSPINECONTROLLER_ONCLICKNEXTCHARACTERSPINEBUTTON_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSPINECONTROLLER_.CTOR_OFFSET))(nullptr);
		}

	};

