#pragma once
#include "unitysdk.h"

class AutoScroller;
namespace UnityEngine { class Coroutine; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::Data { class ManagementBannerData; }

#define UILOBBYEVENTSCROLLCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x266E570)
#define UILOBBYEVENTSCROLLCONTROLLER_REFRESHITEMS_OFFSET UNITYSDK_OFFSET(0x266EEE0)
#define UILOBBYEVENTSCROLLCONTROLLER_COWAITANDADDITEMS_OFFSET UNITYSDK_OFFSET(0x266F4F0)
#define UILOBBYEVENTSCROLLCONTROLLER_REFRESHBANNERITEMS_OFFSET UNITYSDK_OFFSET(0x266F580)
#define UILOBBYEVENTSCROLLCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x266F590)
#define UILOBBYEVENTSCROLLCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x266F630)
#define UILOBBYEVENTSCROLLCONTROLLER_ISLOADBANNER_OFFSET UNITYSDK_OFFSET(0x266F7D0)
#define UILOBBYEVENTSCROLLCONTROLLER_GET_AUTOSCROLLER_OFFSET UNITYSDK_OFFSET(0x266F480)
#define UILOBBYEVENTSCROLLCONTROLLER_REFRESHBANNERITEMSINTERNAL_OFFSET UNITYSDK_OFFSET(0x266E6A0)

	inline static constexpr unsigned int UILobbyEventScrollController_TypeDefinitionIndex = 6701;

	class UILobbyEventScrollController : public ::System::Xml::XmlEntity
	{
	public:
		::System::Single autoScrollInterval; // 0x0
		Il2CppObject* LobbyEventBanners; // 0x90
		Il2CppObject* activeBanners; // 0x98
		AutoScroller* autoScroller; // 0xA0
		::UnityEngine::Coroutine* refreshCoroutine; // 0xA8

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYEVENTSCROLLCONTROLLER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void RefreshItems()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYEVENTSCROLLCONTROLLER_REFRESHITEMS_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoWaitAndAddItems()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYEVENTSCROLLCONTROLLER_COWAITANDADDITEMS_OFFSET))(nullptr);
		}

		::System::Boolean RefreshBannerItems(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYEVENTSCROLLCONTROLLER_REFRESHBANNERITEMS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYEVENTSCROLLCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYEVENTSCROLLCONTROLLER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Boolean IsLoadBanner(::MX::Data::ManagementBannerData* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::ManagementBannerData*, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYEVENTSCROLLCONTROLLER_ISLOADBANNER_OFFSET))(arg, nullptr);
		}

		AutoScroller* get_AutoScroller()
		{
			return ((AutoScroller*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYEVENTSCROLLCONTROLLER_GET_AUTOSCROLLER_OFFSET))(nullptr);
		}

		::System::Boolean RefreshBannerItemsInternal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYEVENTSCROLLCONTROLLER_REFRESHBANNERITEMSINTERNAL_OFFSET))(nullptr);
		}

	};

