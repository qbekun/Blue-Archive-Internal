#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Texture; }
namespace MX::NetworkProtocol { class NotificationEventContentReddotResponse; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define SMALLBANNERBASE_ISACTIVATEDBANNER_OFFSET UNITYSDK_OFFSET(0x000000)
#define SMALLBANNERBASE_GET_BANNERIMAGE_OFFSET UNITYSDK_OFFSET(0x2641C90)
#define SMALLBANNERBASE_SETREDDOTENABLED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SMALLBANNERBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x263DED0)
#define SMALLBANNERBASE_SET_REDDOTSPRITENAME_OFFSET UNITYSDK_OFFSET(0x2641CA0)
#define SMALLBANNERBASE_GET_ISWORLDRAID_OFFSET UNITYSDK_OFFSET(0x2641CB0)
#define SMALLBANNERBASE_GET_ISBANNERIMAGELOADED_OFFSET UNITYSDK_OFFSET(0x2641D20)
#define SMALLBANNERBASE_SET_ICONORDER_OFFSET UNITYSDK_OFFSET(0x2641D30)
#define SMALLBANNERBASE_GET_ICONORDER_OFFSET UNITYSDK_OFFSET(0x2641D40)
#define SMALLBANNERBASE_SET_ISREDDOTLOADED_OFFSET UNITYSDK_OFFSET(0x2641D50)
#define SMALLBANNERBASE_GET_ISWEBEVENT_OFFSET UNITYSDK_OFFSET(0x2641D60)
#define SMALLBANNERBASE_GET_ISGUIDEMISSION_OFFSET UNITYSDK_OFFSET(0x2641DD0)
#define SMALLBANNERBASE_GET_ISREDDOTENABLE_OFFSET UNITYSDK_OFFSET(0x2641E40)
#define SMALLBANNERBASE_ONCLICKBANNER_OFFSET UNITYSDK_OFFSET(0x000000)
#define SMALLBANNERBASE_GET_ISREDDOTLOADED_OFFSET UNITYSDK_OFFSET(0x2641E50)
#define SMALLBANNERBASE_GET_ISEVENTCONTENT_OFFSET UNITYSDK_OFFSET(0x2641E60)
#define SMALLBANNERBASE_SET_ISREDDOTENABLE_OFFSET UNITYSDK_OFFSET(0x2641ED0)
#define SMALLBANNERBASE_HANDLENOTIFICATIONEVENTCONTENTREDDOTRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2641EE0)
#define SMALLBANNERBASE_SET_ISBANNERIMAGELOADED_OFFSET UNITYSDK_OFFSET(0x2642090)
#define SMALLBANNERBASE_SET_BANNERIMAGE_OFFSET UNITYSDK_OFFSET(0x26420A0)
#define SMALLBANNERBASE_GET_ISMULTIFLOORRAID_OFFSET UNITYSDK_OFFSET(0x26420B0)
#define SMALLBANNERBASE_LOADBANNERIMAGE_OFFSET UNITYSDK_OFFSET(0x2642120)
#define SMALLBANNERBASE_GETBANNERIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x000000)
#define SMALLBANNERBASE_GET_REDDOTSPRITENAME_OFFSET UNITYSDK_OFFSET(0x26421F0)
#define SMALLBANNERBASE__LOADBANNERIMAGE_G__ONLOADED|36_0_OFFSET UNITYSDK_OFFSET(0x2642200)

	inline static constexpr unsigned int SmallBannerBase_TypeDefinitionIndex = 6605;

	class SmallBannerBase : public Il2CppObject
	{
	public:
		::UnityEngine::Texture* _BannerImage_k__BackingField; // 0x10
		::System::Boolean _IsBannerImageLoaded_k__BackingField; // 0x18
		::System::Boolean _IsReddotLoaded_k__BackingField; // 0x19
		::System::Boolean _IsReddotEnable_k__BackingField; // 0x1A
		::System::String* _ReddotSpriteName_k__BackingField; // 0x20
		::System::Int64 _IconOrder_k__BackingField; // 0x28

		::System::Boolean IsActivatedBanner(::System::DateTime* arg)
		{
			return ((::System::Boolean(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SMALLBANNERBASE_ISACTIVATEDBANNER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Texture* get_BannerImage()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + SMALLBANNERBASE_GET_BANNERIMAGE_OFFSET))(nullptr);
		}

		::System::Void SetReddotEnabled(::MX::NetworkProtocol::NotificationEventContentReddotResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::NotificationEventContentReddotResponse*, ::PVOID))((::PBYTE)hIl2Cpp + SMALLBANNERBASE_SETREDDOTENABLED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SMALLBANNERBASE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ReddotSpriteName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SMALLBANNERBASE_SET_REDDOTSPRITENAME_OFFSET))(str, nullptr);
		}

		::System::Boolean get_IsWorldRaid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SMALLBANNERBASE_GET_ISWORLDRAID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsBannerImageLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SMALLBANNERBASE_GET_ISBANNERIMAGELOADED_OFFSET))(nullptr);
		}

		::System::Void set_IconOrder(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SMALLBANNERBASE_SET_ICONORDER_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_IconOrder()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SMALLBANNERBASE_GET_ICONORDER_OFFSET))(nullptr);
		}

		::System::Void set_IsReddotLoaded(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SMALLBANNERBASE_SET_ISREDDOTLOADED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsWebEvent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SMALLBANNERBASE_GET_ISWEBEVENT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsGuideMission()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SMALLBANNERBASE_GET_ISGUIDEMISSION_OFFSET))(nullptr);
		}

		::System::Boolean get_IsReddotEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SMALLBANNERBASE_GET_ISREDDOTENABLE_OFFSET))(nullptr);
		}

		::System::Void OnClickBanner()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SMALLBANNERBASE_ONCLICKBANNER_OFFSET))(nullptr);
		}

		::System::Boolean get_IsReddotLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SMALLBANNERBASE_GET_ISREDDOTLOADED_OFFSET))(nullptr);
		}

		::System::Boolean get_IsEventContent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SMALLBANNERBASE_GET_ISEVENTCONTENT_OFFSET))(nullptr);
		}

		::System::Void set_IsReddotEnable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SMALLBANNERBASE_SET_ISREDDOTENABLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleNotificationEventContentReddotResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SMALLBANNERBASE_HANDLENOTIFICATIONEVENTCONTENTREDDOTRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsBannerImageLoaded(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SMALLBANNERBASE_SET_ISBANNERIMAGELOADED_OFFSET))(arg, nullptr);
		}

		::System::Void set_BannerImage(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + SMALLBANNERBASE_SET_BANNERIMAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsMultiFloorRaid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SMALLBANNERBASE_GET_ISMULTIFLOORRAID_OFFSET))(nullptr);
		}

		::System::Void LoadBannerImage()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SMALLBANNERBASE_LOADBANNERIMAGE_OFFSET))(nullptr);
		}

		::System::String* GetBannerImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SMALLBANNERBASE_GETBANNERIMAGEPATH_OFFSET))(nullptr);
		}

		::System::String* get_ReddotSpriteName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SMALLBANNERBASE_GET_REDDOTSPRITENAME_OFFSET))(nullptr);
		}

		::System::Void _LoadBannerImage_g__OnLoaded|36_0(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + SMALLBANNERBASE__LOADBANNERIMAGE_G__ONLOADED|36_0_OFFSET))(arg, nullptr);
		}

	};

