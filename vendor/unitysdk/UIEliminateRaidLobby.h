#pragma once
#include "unitysdk.h"

class UIEliminateRaidLobby_MapView;
class UIEliminateRaidLobby_ListView;
namespace UnityEngine { class Transform; }
class UIWidgetInsertRenderQueue;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Animation; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace FlatData { class RaidSeasonType; }

#define UIELIMINATERAIDLOBBY_ONOPENED_OFFSET UNITYSDK_OFFSET(0x23DF220)
#define UIELIMINATERAIDLOBBY_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x23DF920)
#define UIELIMINATERAIDLOBBY_.CTOR_OFFSET UNITYSDK_OFFSET(0x23DF9B0)
#define UIELIMINATERAIDLOBBY_ONBACK_OFFSET UNITYSDK_OFFSET(0x23DF9C0)
#define UIELIMINATERAIDLOBBY_GET_ZOOMANINAME_GROUP1_OFFSET UNITYSDK_OFFSET(0x23DFA50)
#define UIELIMINATERAIDLOBBY_REFRESHALLRANKING_OFFSET UNITYSDK_OFFSET(0x23DFA80)
#define UIELIMINATERAIDLOBBY_GET_FRONTUIANINAME_LISTTOMAP_OFFSET UNITYSDK_OFFSET(0x23DFC70)
#define UIELIMINATERAIDLOBBY_GET_ENTERANINAME_MAP_OFF_OFFSET UNITYSDK_OFFSET(0x23DFCA0)
#define UIELIMINATERAIDLOBBY_GET_ONENTERLOBBY_OFFSET UNITYSDK_OFFSET(0x23DFCD0)
#define UIELIMINATERAIDLOBBY_OPENNEWRANKING_OFFSET UNITYSDK_OFFSET(0x23DFCE0)
#define UIELIMINATERAIDLOBBY_UIRAIDROOMEND_OFFSET UNITYSDK_OFFSET(0x23DFEF0)
#define UIELIMINATERAIDLOBBY_LOADBG_OFFSET UNITYSDK_OFFSET(0x23E0260)
#define UIELIMINATERAIDLOBBY_REFRESHBYROOMEND_OFFSET UNITYSDK_OFFSET(0x23E0530)
#define UIELIMINATERAIDLOBBY___N__0_OFFSET UNITYSDK_OFFSET(0x23E0950)
#define UIELIMINATERAIDLOBBY_OPENTUTORIALCHECK_OFFSET UNITYSDK_OFFSET(0x23E0960)
#define UIELIMINATERAIDLOBBY__UIRAIDROOMEND_G__RESPONSEHANDLER|46_0_OFFSET UNITYSDK_OFFSET(0x23E0A40)
#define UIELIMINATERAIDLOBBY_GET_ENTERANINAME_LIST_OFFSET UNITYSDK_OFFSET(0x23E0BA0)
#define UIELIMINATERAIDLOBBY_GET_ZOOMANINAME_GROUP2_OFFSET UNITYSDK_OFFSET(0x23E0BD0)
#define UIELIMINATERAIDLOBBY_SETLIMITEDTAG_OFFSET UNITYSDK_OFFSET(0x23DF440)
#define UIELIMINATERAIDLOBBY_GETZOOMANINAME_OFFSET UNITYSDK_OFFSET(0x23E0C00)
#define UIELIMINATERAIDLOBBY_REMOVEPREVBG_OFFSET UNITYSDK_OFFSET(0x23E0D90)
#define UIELIMINATERAIDLOBBY_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x23E0E90)
#define UIELIMINATERAIDLOBBY_GET_NEEDSTACKUIS_OFFSET UNITYSDK_OFFSET(0x23E1000)
#define UIELIMINATERAIDLOBBY_GET_FRONTUIANINAME_MAPTOLIST_OFFSET UNITYSDK_OFFSET(0x23E1150)
#define UIELIMINATERAIDLOBBY_SHOWMAPVIEW_OFFSET UNITYSDK_OFFSET(0x23DF5B0)
#define UIELIMINATERAIDLOBBY_GET_ENTERANINAME_MAP_OFFSET UNITYSDK_OFFSET(0x23E1190)
#define UIELIMINATERAIDLOBBY__LOADBG_B__37_1_OFFSET UNITYSDK_OFFSET(0x23E11C0)
#define UIELIMINATERAIDLOBBY_SET_ONENTERLOBBY_OFFSET UNITYSDK_OFFSET(0x23E1330)
#define UIELIMINATERAIDLOBBY__LOADBG_B__37_0_OFFSET UNITYSDK_OFFSET(0x23E1340)
#define UIELIMINATERAIDLOBBY_GET_ZOOMANINAME_GROUP3_OFFSET UNITYSDK_OFFSET(0x23E0D60)
#define UIELIMINATERAIDLOBBY_SHOWLISTVIEW_OFFSET UNITYSDK_OFFSET(0x23E14B0)

	inline static constexpr unsigned int UIEliminateRaidLobby_TypeDefinitionIndex = 5376;

	class UIEliminateRaidLobby : public Il2CppObject
	{
	public:
		UIEliminateRaidLobby_MapView* mapView; // 0xD8
		UIEliminateRaidLobby_ListView* listView; // 0xE0
		::UnityEngine::Transform* FX_Root; // 0xE8
		UIWidgetInsertRenderQueue* insertRenderQueueComponent; // 0xF0
		::UnityEngine::GameObject* limitedTag_listView; // 0xF8
		::UnityEngine::GameObject* limitedTag_mapView; // 0x100
		::UnityEngine::Animation* EnterAnimation; // 0x108
		::UnityEngine::Animation* ZoomAnimation; // 0x110
		::UnityEngine::Animation* FrontUIAnimation; // 0x118
		::System::Boolean _OnEnterLobby_k__BackingField; // 0x120
		::System::Int64 bgLoadSeasonId; // 0x128
		::UnityEngine::GameObject* seasonScreenFX; // 0x130
		::UnityEngine::GameObject* seasonTableFX; // 0x138

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDLOBBY_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDLOBBY_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDLOBBY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDLOBBY_ONBACK_OFFSET))(nullptr);
		}

		::System::String* get_ZoomAniName_Group1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDLOBBY_GET_ZOOMANINAME_GROUP1_OFFSET))(nullptr);
		}

		::System::Void RefreshAllRanking()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDLOBBY_REFRESHALLRANKING_OFFSET))(nullptr);
		}

		::System::String* get_FrontUIAniName_ListToMap()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDLOBBY_GET_FRONTUIANINAME_LISTTOMAP_OFFSET))(nullptr);
		}

		::System::String* get_EnterAniName_Map_Off()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDLOBBY_GET_ENTERANINAME_MAP_OFF_OFFSET))(nullptr);
		}

		::System::Boolean get_OnEnterLobby()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDLOBBY_GET_ONENTERLOBBY_OFFSET))(nullptr);
		}

		::System::Void OpenNewRanking()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDLOBBY_OPENNEWRANKING_OFFSET))(nullptr);
		}

		::System::Boolean UIRaidRoomEnd(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDLOBBY_UIRAIDROOMEND_OFFSET))(arg, nullptr);
		}

		::System::Void LoadBG()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDLOBBY_LOADBG_OFFSET))(nullptr);
		}

		::System::Void RefreshByRoomEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDLOBBY_REFRESHBYROOMEND_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDLOBBY___N__0_OFFSET))(nullptr);
		}

		::System::Void OpenTutorialCheck()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDLOBBY_OPENTUTORIALCHECK_OFFSET))(nullptr);
		}

		::System::Boolean _UIRaidRoomEnd_g__ResponseHandler|46_0(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDLOBBY__UIRAIDROOMEND_G__RESPONSEHANDLER|46_0_OFFSET))(arg, nullptr);
		}

		::System::String* get_EnterAniName_List()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDLOBBY_GET_ENTERANINAME_LIST_OFFSET))(nullptr);
		}

		::System::String* get_ZoomAniName_Group2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDLOBBY_GET_ZOOMANINAME_GROUP2_OFFSET))(nullptr);
		}

		::System::Void SetLimitedTag()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDLOBBY_SETLIMITEDTAG_OFFSET))(nullptr);
		}

		::System::String* GetZoomAniName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDLOBBY_GETZOOMANINAME_OFFSET))(nullptr);
		}

		::System::Void RemovePrevBG()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDLOBBY_REMOVEPREVBG_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDLOBBY_ONCLOSED_OFFSET))(nullptr);
		}

		Il2CppObject* get_needStackUIs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDLOBBY_GET_NEEDSTACKUIS_OFFSET))(nullptr);
		}

		::System::String* get_FrontUIAniName_MapToList()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDLOBBY_GET_FRONTUIANINAME_MAPTOLIST_OFFSET))(nullptr);
		}

		::System::Void ShowMapView(::FlatData::RaidSeasonType* arg)
		{
			((::System::Void(*)(::FlatData::RaidSeasonType*, ::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDLOBBY_SHOWMAPVIEW_OFFSET))(arg, nullptr);
		}

		::System::String* get_EnterAniName_Map()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDLOBBY_GET_ENTERANINAME_MAP_OFFSET))(nullptr);
		}

		::System::Void _LoadBG_b__37_1(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDLOBBY__LOADBG_B__37_1_OFFSET))(arg, nullptr);
		}

		::System::Void set_OnEnterLobby(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDLOBBY_SET_ONENTERLOBBY_OFFSET))(arg, nullptr);
		}

		::System::Void _LoadBG_b__37_0(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDLOBBY__LOADBG_B__37_0_OFFSET))(arg, nullptr);
		}

		::System::String* get_ZoomAniName_Group3()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDLOBBY_GET_ZOOMANINAME_GROUP3_OFFSET))(nullptr);
		}

		::System::Void ShowListView(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDLOBBY_SHOWLISTVIEW_OFFSET))(arg, nullptr);
		}

	};

