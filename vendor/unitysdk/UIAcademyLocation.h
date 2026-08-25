#pragma once
#include "unitysdk.h"

class MXButton;
class UILabel;
namespace UnityEngine { class Transform; }
class UIAcademyOperationInfo;
class UIAcademyEventContentOperationInfo;
class UIAcademyLocationInfo;
class InformationGroupOpen;
class UIScrollView;
namespace MX::Data { class EventContentSeasonInfo; }
namespace UnityEngine { class GameObject; }
namespace MX::Data { class BGMPlayInfo; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class UIAcademyLocationSchedulesPopup;

#define UIACADEMYLOCATION_GET_LOCATIONSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x21B2AD0)
#define UIACADEMYLOCATION_AWAKE_OFFSET UNITYSDK_OFFSET(0x21B2B70)
#define UIACADEMYLOCATION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x21B2F30)
#define UIACADEMYLOCATION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x21B3580)
#define UIACADEMYLOCATION_ONUPDATEFORKEYMAPPING_OFFSET UNITYSDK_OFFSET(0x21B3740)
#define UIACADEMYLOCATION_ISMOVABLESCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x21B3910)
#define UIACADEMYLOCATION_REFRESHLOCATIONINFO_OFFSET UNITYSDK_OFFSET(0x21B3180)
#define UIACADEMYLOCATION_SHOWZONEUNLOCKS_OFFSET UNITYSDK_OFFSET(0x21B4160)
#define UIACADEMYLOCATION_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x21B4840)
#define UIACADEMYLOCATION_ONOPENED_OFFSET UNITYSDK_OFFSET(0x21B48E0)
#define UIACADEMYLOCATION_GETBGMPLAYINFO_OFFSET UNITYSDK_OFFSET(0x21B4BD0)
#define UIACADEMYLOCATION_PLAYLOCATIONANIMATION_OFFSET UNITYSDK_OFFSET(0x21B4B00)
#define UIACADEMYLOCATION_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x21B4C70)
#define UIACADEMYLOCATION_HANDLESELECTACADEMYZONEMESSAGE_OFFSET UNITYSDK_OFFSET(0x21B4F40)
#define UIACADEMYLOCATION_SETDATA_OFFSET UNITYSDK_OFFSET(0x21B1F80)
#define UIACADEMYLOCATION_ONCLICKPREV_OFFSET UNITYSDK_OFFSET(0x21B5780)
#define UIACADEMYLOCATION_ONCLICKNEXT_OFFSET UNITYSDK_OFFSET(0x21B5950)
#define UIACADEMYLOCATION_NAVIGATELOCATION_OFFSET UNITYSDK_OFFSET(0x21B5790)
#define UIACADEMYLOCATION_CLEAN_OFFSET UNITYSDK_OFFSET(0x21B09B0)
#define UIACADEMYLOCATION_SETDATA_OFFSET UNITYSDK_OFFSET(0x21B5970)
#define UIACADEMYLOCATION_LOCATIONLOAD_OFFSET UNITYSDK_OFFSET(0x21B5650)
#define UIACADEMYLOCATION_ONCLICKALLSCHEDULEBUTTON_OFFSET UNITYSDK_OFFSET(0x21B5BD0)
#define UIACADEMYLOCATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x21B5D50)
#define UIACADEMYLOCATION__LOCATIONLOAD_B__39_0_OFFSET UNITYSDK_OFFSET(0x21B5D70)
#define UIACADEMYLOCATION__ONCLICKALLSCHEDULEBUTTON_B__40_0_OFFSET UNITYSDK_OFFSET(0x21B6610)

	inline static constexpr unsigned int UIAcademyLocation_TypeDefinitionIndex = 4198;

	class UIAcademyLocation : public Il2CppObject
	{
	public:
		MXButton* backButton; // 0xD8
		UILabel* titleLabel; // 0xE0
		MXButton* allScheduleButton; // 0xE8
		::UnityEngine::Transform* locationPanel; // 0xF0
		UIAcademyOperationInfo* operationInfo; // 0xF8
		UIAcademyEventContentOperationInfo* eventContentOperationInfo; // 0x100
		UIAcademyLocationInfo* locationInfo; // 0x108
		InformationGroupOpen* infoGroup; // 0x110
		MXButton* prevButton; // 0x118
		MXButton* nextButton; // 0x120
		UIScrollView* _locationScrollView; // 0x128
		::System::Int64 locationId; // 0x130
		::MX::Data::EventContentSeasonInfo* seasonInfo; // 0x138
		::UnityEngine::GameObject* locationObject; // 0x140
		Il2CppObject* zoneList; // 0x148
		::System::Boolean isLocationLoaded; // 0x150
		::System::Boolean isNavigationMoving; // 0x151
		UIScrollView* MoveScrollView; // 0x158

		UIScrollView* get_LocationScrollView()
		{
			return ((UIScrollView*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATION_GET_LOCATIONSCROLLVIEW_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATION_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATION_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATION_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnUpdateForKeymapping()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATION_ONUPDATEFORKEYMAPPING_OFFSET))(nullptr);
		}

		::System::Boolean IsMovableScrollView()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATION_ISMOVABLESCROLLVIEW_OFFSET))(nullptr);
		}

		::System::Void RefreshLocationInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATION_REFRESHLOCATIONINFO_OFFSET))(nullptr);
		}

		::System::Void ShowZoneUnlocks()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATION_SHOWZONEUNLOCKS_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATION_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATION_ONOPENED_OFFSET))(arg, nullptr);
		}

		::MX::Data::BGMPlayInfo* GetBGMPlayInfo()
		{
			return ((::MX::Data::BGMPlayInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATION_GETBGMPLAYINFO_OFFSET))(nullptr);
		}

		::System::Void PlayLocationAnimation(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATION_PLAYLOCATIONANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATION_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Boolean HandleSelectAcademyZoneMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATION_HANDLESELECTACADEMYZONEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATION_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickPrev()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATION_ONCLICKPREV_OFFSET))(nullptr);
		}

		::System::Void OnClickNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATION_ONCLICKNEXT_OFFSET))(nullptr);
		}

		::System::Void NavigateLocation(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATION_NAVIGATELOCATION_OFFSET))(arg, nullptr);
		}

		::System::Void Clean()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATION_CLEAN_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATION_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void LocationLoad(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATION_LOCATIONLOAD_OFFSET))(str, nullptr);
		}

		::System::Void OnClickAllScheduleButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATION_ONCLICKALLSCHEDULEBUTTON_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _LocationLoad_b__39_0(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATION__LOCATIONLOAD_B__39_0_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickAllScheduleButton_b__40_0(UIAcademyLocationSchedulesPopup* arg)
		{
			((::System::Void(*)(UIAcademyLocationSchedulesPopup*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATION__ONCLICKALLSCHEDULEBUTTON_B__40_0_OFFSET))(arg, nullptr);
		}

	};

