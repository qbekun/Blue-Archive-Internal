#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class MXButton;
class UIArenaAccountInfo;
class UILabel;
class UIBase;
namespace UnityEngine { class WaitForSeconds; }
namespace MX::GameLogic::DBModel { class ArenaUserDB; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class UIPopup_System;
namespace MX::NetworkProtocol { class ArenaEnterLobbyResponse; }

#define UIARENA_COPLAYREFRESHINTERVAL_OFFSET UNITYSDK_OFFSET(0x21ED5D0)
#define UIARENA_APPLYARENAOPENED_OFFSET UNITYSDK_OFFSET(0x21ED660)
#define UIARENA__ONOPENED_B__22_0_OFFSET UNITYSDK_OFFSET(0x21ED6F0)
#define UIARENA_SETRANKUPREWARDSSEQUENCE_OFFSET UNITYSDK_OFFSET(0x21EDB30)
#define UIARENA_FINDOPPONENTINDEX_OFFSET UNITYSDK_OFFSET(0x21EE1E0)
#define UIARENA___N__0_OFFSET UNITYSDK_OFFSET(0x21EE250)
#define UIARENA_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x21EE260)
#define UIARENA_AWAKE_OFFSET UNITYSDK_OFFSET(0x21EE450)
#define UIARENA_GET_DEFENSEFORMATIONPOPUP_OFFSET UNITYSDK_OFFSET(0x21EE7A0)
#define UIARENA__ONOPENED_B__22_1_OFFSET UNITYSDK_OFFSET(0x21EE7B0)
#define UIARENA_GET_AUTOREFRESH_OFFSET UNITYSDK_OFFSET(0x21EE7E0)
#define UIARENA_HANDLENEEDTOREFRESHARENAOPPONENTSMESSAGE_OFFSET UNITYSDK_OFFSET(0x21EE7F0)
#define UIARENA_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x21EE810)
#define UIARENA_SET_DEFENSEFORMATIONPOPUP_OFFSET UNITYSDK_OFFSET(0x21EE8A0)
#define UIARENA_REFRESH_OFFSET UNITYSDK_OFFSET(0x21EE8C0)
#define UIARENA_GET_NEEDSTACKUIS_OFFSET UNITYSDK_OFFSET(0x21EEB10)
#define UIARENA_ONCLICKSEASONINFO_OFFSET UNITYSDK_OFFSET(0x21EEC60)
#define UIARENA_ONCLICKBACK_OFFSET UNITYSDK_OFFSET(0x21EEF20)
#define UIARENA__SHOWNEEDTOREFRESHPOPUP_B__30_0_OFFSET UNITYSDK_OFFSET(0x21EEF40)
#define UIARENA_SETREFRESHBUTTONENABLE_OFFSET UNITYSDK_OFFSET(0x21EEFE0)
#define UIARENA_SET_AUTOREFRESH_OFFSET UNITYSDK_OFFSET(0x21EF080)
#define UIARENA_HANDLEARENAOPPONENTLISTRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x21EF270)
#define UIARENA_SHOWNEEDTOREFRESHPOPUP_OFFSET UNITYSDK_OFFSET(0x21EF190)
#define UIARENA_SETOPPONENTUSERS_OFFSET UNITYSDK_OFFSET(0x21EF3B0)
#define UIARENA_INITOPENSEQUENCE_OFFSET UNITYSDK_OFFSET(0x21EF580)
#define UIARENA_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x21EF5A0)
#define UIARENA__SHOWNEEDTOREFRESHPOPUP_B__30_1_OFFSET UNITYSDK_OFFSET(0x21EF610)
#define UIARENA_ONOPENED_OFFSET UNITYSDK_OFFSET(0x21EF620)
#define UIARENA_OPENTUTORIALCHECK_OFFSET UNITYSDK_OFFSET(0x21ED850)
#define UIARENA_TRYOPENSEASONGUIDE_OFFSET UNITYSDK_OFFSET(0x21EF8D0)
#define UIARENA_.CTOR_OFFSET UNITYSDK_OFFSET(0x21EF970)
#define UIARENA_ONCLICKREFRESH_OFFSET UNITYSDK_OFFSET(0x21ED730)

	inline static constexpr unsigned int UIArena_TypeDefinitionIndex = 4254;

	class UIArena : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* ArenaClosedObject; // 0xD8
		::UnityEngine::GameObject* OpponentListObject; // 0xE0
		MXButton* backButton; // 0xE8
		MXButton* refreshButton; // 0xF0
		UIArenaAccountInfo* accountInfo; // 0xF8
		::Il2CppArray<::System::Object*>* opponentsInfo; // 0x100
		UILabel* seasonClosingLabel; // 0x108
		MXButton* seasonInfoButton; // 0x110
		UIBase* _DefenseFormationPopup_k__BackingField; // 0x118
		::System::Boolean _autoRefresh; // 0x120
		::UnityEngine::WaitForSeconds* waitForRefresh; // 0x128

		::System::Collections::IEnumerator* CoPlayRefreshInterval()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENA_COPLAYREFRESHINTERVAL_OFFSET))(nullptr);
		}

		::System::Void ApplyArenaOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIARENA_APPLYARENAOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void _OnOpened_b__22_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENA__ONOPENED_B__22_0_OFFSET))(nullptr);
		}

		::System::Void SetRankUpRewardsSequence()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENA_SETRANKUPREWARDSSEQUENCE_OFFSET))(nullptr);
		}

		::System::Int32 FindOpponentIndex(::MX::GameLogic::DBModel::ArenaUserDB* arg)
		{
			return ((::System::Int32(*)(::MX::GameLogic::DBModel::ArenaUserDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIARENA_FINDOPPONENTINDEX_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENA___N__0_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENA_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENA_AWAKE_OFFSET))(nullptr);
		}

		UIBase* get_DefenseFormationPopup()
		{
			return ((UIBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENA_GET_DEFENSEFORMATIONPOPUP_OFFSET))(nullptr);
		}

		::System::Void _OnOpened_b__22_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENA__ONOPENED_B__22_1_OFFSET))(nullptr);
		}

		::System::Boolean get_AutoRefresh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENA_GET_AUTOREFRESH_OFFSET))(nullptr);
		}

		::System::Boolean HandleNeedToRefreshArenaOpponentsMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIARENA_HANDLENEEDTOREFRESHARENAOPPONENTSMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENA_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void set_DefenseFormationPopup(UIBase* arg)
		{
			((::System::Void(*)(UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + UIARENA_SET_DEFENSEFORMATIONPOPUP_OFFSET))(arg, nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENA_REFRESH_OFFSET))(nullptr);
		}

		Il2CppObject* get_needStackUIs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENA_GET_NEEDSTACKUIS_OFFSET))(nullptr);
		}

		::System::Void OnClickSeasonInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENA_ONCLICKSEASONINFO_OFFSET))(nullptr);
		}

		::System::Void OnClickBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENA_ONCLICKBACK_OFFSET))(nullptr);
		}

		::System::Void _ShowNeedToRefreshPopup_b__30_0(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + UIARENA__SHOWNEEDTOREFRESHPOPUP_B__30_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetRefreshButtonEnable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIARENA_SETREFRESHBUTTONENABLE_OFFSET))(arg, nullptr);
		}

		::System::Void set_AutoRefresh(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIARENA_SET_AUTOREFRESH_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleArenaOpponentListResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIARENA_HANDLEARENAOPPONENTLISTRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void ShowNeedToRefreshPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENA_SHOWNEEDTOREFRESHPOPUP_OFFSET))(nullptr);
		}

		::System::Void SetOpponentUsers(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIARENA_SETOPPONENTUSERS_OFFSET))(arg, nullptr);
		}

		::System::Void InitOpenSequence()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENA_INITOPENSEQUENCE_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::NetworkProtocol::ArenaEnterLobbyResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ArenaEnterLobbyResponse*, ::PVOID))((::PBYTE)hIl2Cpp + UIARENA_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void _ShowNeedToRefreshPopup_b__30_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENA__SHOWNEEDTOREFRESHPOPUP_B__30_1_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIARENA_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OpenTutorialCheck()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENA_OPENTUTORIALCHECK_OFFSET))(nullptr);
		}

		::System::Void TryOpenSeasonGuide()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENA_TRYOPENSEASONGUIDE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickRefresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENA_ONCLICKREFRESH_OFFSET))(nullptr);
		}

	};

