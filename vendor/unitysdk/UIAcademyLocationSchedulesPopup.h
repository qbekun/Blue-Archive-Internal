#pragma once
#include "unitysdk.h"

class MXButton;
class UIAcademyScheduleUnit;
namespace UnityEngine { class GameObject; }
class UILabel;
class UISprite;
class UIScrollView;
class UIGrid;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIACADEMYLOCATIONSCHEDULESPOPUP_HANDLEACADEMYATTENDSCHEDULERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x21B9320)
#define UIACADEMYLOCATIONSCHEDULESPOPUP_HANDLEEVENTCONTENTLOCATIONATTENDSCHEDULERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x21BA610)
#define UIACADEMYLOCATIONSCHEDULESPOPUP_ONOPENED_OFFSET UNITYSDK_OFFSET(0x21BA690)
#define UIACADEMYLOCATIONSCHEDULESPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x21BA830)
#define UIACADEMYLOCATIONSCHEDULESPOPUP_REFRESHRESOURCE_OFFSET UNITYSDK_OFFSET(0x21BA1E0)
#define UIACADEMYLOCATIONSCHEDULESPOPUP_GET_LOCATIONID_OFFSET UNITYSDK_OFFSET(0x21BA8B0)
#define UIACADEMYLOCATIONSCHEDULESPOPUP_REFRESHLIST_OFFSET UNITYSDK_OFFSET(0x21B93A0)
#define UIACADEMYLOCATIONSCHEDULESPOPUP_GET_GRID_OFFSET UNITYSDK_OFFSET(0x21BA8D0)
#define UIACADEMYLOCATIONSCHEDULESPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x21BAB80)
#define UIACADEMYLOCATIONSCHEDULESPOPUP_SET_LOCATIONID_OFFSET UNITYSDK_OFFSET(0x21BACB0)
#define UIACADEMYLOCATIONSCHEDULESPOPUP_GET_SCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x21BAAD0)
#define UIACADEMYLOCATIONSCHEDULESPOPUP_CREATEUNITS_OFFSET UNITYSDK_OFFSET(0x21BA980)
#define UIACADEMYLOCATIONSCHEDULESPOPUP_SETDATA_OFFSET UNITYSDK_OFFSET(0x21B6690)
#define UIACADEMYLOCATIONSCHEDULESPOPUP_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x21BACC0)

	inline static constexpr unsigned int UIAcademyLocationSchedulesPopup_TypeDefinitionIndex = 4211;

	class UIAcademyLocationSchedulesPopup : public Il2CppObject
	{
	public:
		MXButton* backButton; // 0xD8
		UIAcademyScheduleUnit* unitPrefab; // 0xE0
		::UnityEngine::GameObject* academyTicketCountRoot; // 0xE8
		UILabel* academyTicketLabel; // 0xF0
		::UnityEngine::GameObject* eventPointCountRoot; // 0xF8
		UISprite* eventPointIconSprite; // 0x100
		UILabel* eventPointLabel; // 0x108
		UIScrollView* _scrollView; // 0x110
		UIGrid* _grid; // 0x118
		Il2CppObject* scheduleUnitList; // 0x120
		::System::Int64 _LocationId_k__BackingField; // 0x128

		::System::Boolean HandleAcademyAttendScheduleResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATIONSCHEDULESPOPUP_HANDLEACADEMYATTENDSCHEDULERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleEventContentLocationAttendScheduleResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATIONSCHEDULESPOPUP_HANDLEEVENTCONTENTLOCATIONATTENDSCHEDULERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATIONSCHEDULESPOPUP_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATIONSCHEDULESPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RefreshResource()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATIONSCHEDULESPOPUP_REFRESHRESOURCE_OFFSET))(nullptr);
		}

		::System::Int64 get_LocationId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATIONSCHEDULESPOPUP_GET_LOCATIONID_OFFSET))(nullptr);
		}

		::System::Void RefreshList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATIONSCHEDULESPOPUP_REFRESHLIST_OFFSET))(nullptr);
		}

		UIGrid* get_Grid()
		{
			return ((UIGrid*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATIONSCHEDULESPOPUP_GET_GRID_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATIONSCHEDULESPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void set_LocationId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATIONSCHEDULESPOPUP_SET_LOCATIONID_OFFSET))(arg, nullptr);
		}

		UIScrollView* get_ScrollView()
		{
			return ((UIScrollView*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATIONSCHEDULESPOPUP_GET_SCROLLVIEW_OFFSET))(nullptr);
		}

		::System::Void CreateUnits(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATIONSCHEDULESPOPUP_CREATEUNITS_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATIONSCHEDULESPOPUP_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATIONSCHEDULESPOPUP_ONCLOSED_OFFSET))(nullptr);
		}

	};

