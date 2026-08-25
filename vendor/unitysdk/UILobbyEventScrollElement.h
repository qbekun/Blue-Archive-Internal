#pragma once
#include "unitysdk.h"

class MXButton;
class UITexture;
namespace UnityEngine { class GameObject; }
namespace FlatData { class EventContentType; }
namespace MX::Data { class EventContentSeasonInfo; }
class UIGacha;
class UISpecialOperationLobby;
class UIEventLobby;
class UIEventShop;
class UISeasonalEvent;
class LobbyEventBase;
class UIEventMission;
namespace FlatData { class OpenConditionContent; }
namespace MX::Data { class BannerEventTagPosition; }

#define UILOBBYEVENTSCROLLELEMENT__ONCLICKBANNER_B__16_0_OFFSET UNITYSDK_OFFSET(0x266FFB0)
#define UILOBBYEVENTSCROLLELEMENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x266FFE0)
#define UILOBBYEVENTSCROLLELEMENT__ONCLICKBANNER_G__OPENLOBBY|16_13_OFFSET UNITYSDK_OFFSET(0x2670200)
#define UILOBBYEVENTSCROLLELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2670290)
#define UILOBBYEVENTSCROLLELEMENT__ONCLICKBANNER_B__16_8_OFFSET UNITYSDK_OFFSET(0x26702D0)
#define UILOBBYEVENTSCROLLELEMENT__ONCLICKBANNER_B__16_5_OFFSET UNITYSDK_OFFSET(0x2670380)
#define UILOBBYEVENTSCROLLELEMENT_ONPRESSBANNER_OFFSET UNITYSDK_OFFSET(0x2670430)
#define UILOBBYEVENTSCROLLELEMENT__ONCLICKBANNER_B__16_7_OFFSET UNITYSDK_OFFSET(0x2670580)
#define UILOBBYEVENTSCROLLELEMENT_ONCLICKBANNER_OFFSET UNITYSDK_OFFSET(0x2670630)
#define UILOBBYEVENTSCROLLELEMENT_COONPRESSBANNER_OFFSET UNITYSDK_OFFSET(0x2670510)
#define UILOBBYEVENTSCROLLELEMENT__ONCLICKBANNER_B__16_3_OFFSET UNITYSDK_OFFSET(0x2671780)
#define UILOBBYEVENTSCROLLELEMENT__ONCLICKBANNER_B__16_1_OFFSET UNITYSDK_OFFSET(0x26718E0)
#define UILOBBYEVENTSCROLLELEMENT__ONCLICKBANNER_B__16_2_OFFSET UNITYSDK_OFFSET(0x26719B0)
#define UILOBBYEVENTSCROLLELEMENT__ONCLICKBANNER_B__16_4_OFFSET UNITYSDK_OFFSET(0x2671A80)
#define UILOBBYEVENTSCROLLELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x2671B30)
#define UILOBBYEVENTSCROLLELEMENT__ONCLICKBANNER_B__16_6_OFFSET UNITYSDK_OFFSET(0x2672020)
#define UILOBBYEVENTSCROLLELEMENT__ONCLICKBANNER_B__16_9_OFFSET UNITYSDK_OFFSET(0x26720D0)
#define UILOBBYEVENTSCROLLELEMENT_CHECKSPOILERPOPUP_OFFSET UNITYSDK_OFFSET(0x26714B0)
#define UILOBBYEVENTSCROLLELEMENT_CHECKOPENCONDITION_OFFSET UNITYSDK_OFFSET(0x2671330)
#define UILOBBYEVENTSCROLLELEMENT_SETBANNEREVENTTAG_OFFSET UNITYSDK_OFFSET(0x2671EB0)

	inline static constexpr unsigned int UILobbyEventScrollElement_TypeDefinitionIndex = 6709;

	class UILobbyEventScrollElement : public Enumerator
	{
	public:
		MXButton* BannerBtn; // 0x28
		UITexture* ComebackLabelTexture; // 0x30
		UITexture* LimitedLabelTexture; // 0x38
		UITexture* Image; // 0x40
		UITexture* ContentsLockImage; // 0x48
		::UnityEngine::GameObject* ContentsLockObject; // 0x50
		::Il2CppArray<::System::Object*>* BannerEventTagObjects; // 0x58
		UITexture* eventTexture; // 0x60
		::System::Int32 lobbyBannerId; // 0x68
		::FlatData::EventContentType* eventType; // 0x6C
		::MX::Data::EventContentSeasonInfo* seasonInfo; // 0x70
		::System::Boolean isContensLock; // 0x78
		Il2CppObject* webViewData; // 0x80

		::System::Void _OnClickBanner_b__16_0(UIGacha* arg)
		{
			((::System::Void(*)(UIGacha*, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYEVENTSCROLLELEMENT__ONCLICKBANNER_B__16_0_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYEVENTSCROLLELEMENT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void _OnClickBanner_g__OpenLobby|16_13()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYEVENTSCROLLELEMENT__ONCLICKBANNER_G__OPENLOBBY|16_13_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYEVENTSCROLLELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnClickBanner_b__16_8(UISpecialOperationLobby* arg)
		{
			((::System::Void(*)(UISpecialOperationLobby*, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYEVENTSCROLLELEMENT__ONCLICKBANNER_B__16_8_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickBanner_b__16_5(UIEventLobby* arg)
		{
			((::System::Void(*)(UIEventLobby*, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYEVENTSCROLLELEMENT__ONCLICKBANNER_B__16_5_OFFSET))(arg, nullptr);
		}

		::System::Void OnPressBanner()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYEVENTSCROLLELEMENT_ONPRESSBANNER_OFFSET))(nullptr);
		}

		::System::Void _OnClickBanner_b__16_7(UIEventShop* arg)
		{
			((::System::Void(*)(UIEventShop*, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYEVENTSCROLLELEMENT__ONCLICKBANNER_B__16_7_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickBanner()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYEVENTSCROLLELEMENT_ONCLICKBANNER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoOnPressBanner()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYEVENTSCROLLELEMENT_COONPRESSBANNER_OFFSET))(nullptr);
		}

		::System::Void _OnClickBanner_b__16_3()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYEVENTSCROLLELEMENT__ONCLICKBANNER_B__16_3_OFFSET))(nullptr);
		}

		::System::Void _OnClickBanner_b__16_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYEVENTSCROLLELEMENT__ONCLICKBANNER_B__16_1_OFFSET))(nullptr);
		}

		::System::Void _OnClickBanner_b__16_2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYEVENTSCROLLELEMENT__ONCLICKBANNER_B__16_2_OFFSET))(nullptr);
		}

		::System::Void _OnClickBanner_b__16_4(UISeasonalEvent* arg)
		{
			((::System::Void(*)(UISeasonalEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYEVENTSCROLLELEMENT__ONCLICKBANNER_B__16_4_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(LobbyEventBase* arg)
		{
			((::System::Void(*)(LobbyEventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYEVENTSCROLLELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickBanner_b__16_6(UIEventMission* arg)
		{
			((::System::Void(*)(UIEventMission*, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYEVENTSCROLLELEMENT__ONCLICKBANNER_B__16_6_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickBanner_b__16_9(UIEventLobby* arg)
		{
			((::System::Void(*)(UIEventLobby*, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYEVENTSCROLLELEMENT__ONCLICKBANNER_B__16_9_OFFSET))(arg, nullptr);
		}

		::System::Void CheckSpoilerPopup(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYEVENTSCROLLELEMENT_CHECKSPOILERPOPUP_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckOpenCondition(::FlatData::OpenConditionContent* arg)
		{
			return ((::System::Boolean(*)(::FlatData::OpenConditionContent*, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYEVENTSCROLLELEMENT_CHECKOPENCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Void SetBannerEventTag(::MX::Data::BannerEventTagPosition* arg)
		{
			((::System::Void(*)(::MX::Data::BannerEventTagPosition*, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYEVENTSCROLLELEMENT_SETBANNEREVENTTAG_OFFSET))(arg, nullptr);
		}

	};

