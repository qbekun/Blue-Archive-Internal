#pragma once
#include "unitysdk.h"

class UIEliminateRaidLobby;
class UIEliminateRaidBossGroupInfo;
class MXButton;
namespace UnityEngine { class GameObject; }
class UIWidget;
namespace UnityEngine { class Transform; }
class PortraitSpineCharacter;
class UISprite;
class UILabel;
class UIEliminateRaidSeasonInfo;
class UIEliminateRaidRoomScrollViewController;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIELIMINATERAIDLOBBY_LISTVIEW__INITSPINE_B__19_0_OFFSET UNITYSDK_OFFSET(0x23E23A0)
#define UIELIMINATERAIDLOBBY_LISTVIEW_ENDLOBBYANIMATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x23E2260)
#define UIELIMINATERAIDLOBBY_LISTVIEW_REFRESHRANKING_OFFSET UNITYSDK_OFFSET(0x23DFB90)
#define UIELIMINATERAIDLOBBY_LISTVIEW_REFRESHTICKET_OFFSET UNITYSDK_OFFSET(0x23E2940)
#define UIELIMINATERAIDLOBBY_LISTVIEW_REFRESHBYROOMEND_OFFSET UNITYSDK_OFFSET(0x23E05F0)
#define UIELIMINATERAIDLOBBY_LISTVIEW_COSETSCROLLVIEWPOS_OFFSET UNITYSDK_OFFSET(0x23E1AB0)
#define UIELIMINATERAIDLOBBY_LISTVIEW_REFRESH_OFFSET UNITYSDK_OFFSET(0x23E1890)
#define UIELIMINATERAIDLOBBY_LISTVIEW_HANDLEELIMINATERAIDSWEEPRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x23E3660)
#define UIELIMINATERAIDLOBBY_LISTVIEW_REFRESHLIST_OFFSET UNITYSDK_OFFSET(0x23E2E40)
#define UIELIMINATERAIDLOBBY_LISTVIEW_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x23E36D0)
#define UIELIMINATERAIDLOBBY_LISTVIEW_ONENABLE_OFFSET UNITYSDK_OFFSET(0x23E37D0)
#define UIELIMINATERAIDLOBBY_LISTVIEW_ONCLICKGOTOMAP_OFFSET UNITYSDK_OFFSET(0x23E38D0)
#define UIELIMINATERAIDLOBBY_LISTVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x23E3900)
#define UIELIMINATERAIDLOBBY_LISTVIEW_AWAKE_OFFSET UNITYSDK_OFFSET(0x23E3910)
#define UIELIMINATERAIDLOBBY_LISTVIEW_INITSPINE_OFFSET UNITYSDK_OFFSET(0x23E3330)
#define UIELIMINATERAIDLOBBY_LISTVIEW_REFRESHCOMPENSATECHANCELABEL_OFFSET UNITYSDK_OFFSET(0x23E2CB0)

	inline static constexpr unsigned int UIEliminateRaidLobby_ListView_TypeDefinitionIndex = 5379;

	class UIEliminateRaidLobby_ListView : public Il2CppObject
	{
	public:
		UIEliminateRaidLobby* lobby; // 0x18
		UIEliminateRaidBossGroupInfo* bossGroupInfo; // 0x20
		MXButton* GoToMapButton; // 0x28
		::UnityEngine::GameObject* SpineObject; // 0x30
		UIWidget* SpineRenderQueue; // 0x38
		::UnityEngine::Transform* SpinePosRoot; // 0x40
		PortraitSpineCharacter* bossSpine; // 0x48
		UISprite* TicketImage; // 0x50
		UILabel* TicketCount; // 0x58
		UILabel* CompensateChanceLabel; // 0x60
		UIEliminateRaidSeasonInfo* seasonInfoUI; // 0x68
		UIEliminateRaidRoomScrollViewController* ScrollView; // 0x70

		::System::Void _InitSpine_b__19_0(PortraitSpineCharacter* arg)
		{
			((::System::Void(*)(PortraitSpineCharacter*, ::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDLOBBY_LISTVIEW__INITSPINE_B__19_0_OFFSET))(arg, nullptr);
		}

		::System::Void EndLobbyAnimationCallBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDLOBBY_LISTVIEW_ENDLOBBYANIMATIONCALLBACK_OFFSET))(nullptr);
		}

		::System::Void RefreshRanking()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDLOBBY_LISTVIEW_REFRESHRANKING_OFFSET))(nullptr);
		}

		::System::Void RefreshTicket(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDLOBBY_LISTVIEW_REFRESHTICKET_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshByRoomEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDLOBBY_LISTVIEW_REFRESHBYROOMEND_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoSetScrollViewPos()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDLOBBY_LISTVIEW_COSETSCROLLVIEWPOS_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDLOBBY_LISTVIEW_REFRESH_OFFSET))(nullptr);
		}

		::System::Boolean HandleEliminateRaidSweepResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDLOBBY_LISTVIEW_HANDLEELIMINATERAIDSWEEPRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDLOBBY_LISTVIEW_REFRESHLIST_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDLOBBY_LISTVIEW_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDLOBBY_LISTVIEW_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnClickGoToMap()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDLOBBY_LISTVIEW_ONCLICKGOTOMAP_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDLOBBY_LISTVIEW_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDLOBBY_LISTVIEW_AWAKE_OFFSET))(nullptr);
		}

		::System::Void InitSpine()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDLOBBY_LISTVIEW_INITSPINE_OFFSET))(nullptr);
		}

		::System::Void RefreshCompensateChanceLabel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDLOBBY_LISTVIEW_REFRESHCOMPENSATECHANCELABEL_OFFSET))(nullptr);
		}

	};

