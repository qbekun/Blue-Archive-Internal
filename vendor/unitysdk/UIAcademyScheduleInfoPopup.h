#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;
class UIAdmissionDisplay;
class UIGrid;
class UIScrollView;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::Data { class AcademyScheduleData; }
class UISmallParcelCard;

#define UIACADEMYSCHEDULEINFOPOPUP_GET_PARCELCARDLIST_OFFSET UNITYSDK_OFFSET(0x21DE280)
#define UIACADEMYSCHEDULEINFOPOPUP_GET_GRID_OFFSET UNITYSDK_OFFSET(0x21DE3A0)
#define UIACADEMYSCHEDULEINFOPOPUP_GET_SCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x21DE450)
#define UIACADEMYSCHEDULEINFOPOPUP_GET_STUDENTS_OFFSET UNITYSDK_OFFSET(0x21DE510)
#define UIACADEMYSCHEDULEINFOPOPUP_GET_SCHEDULEID_OFFSET UNITYSDK_OFFSET(0x21DE5C0)
#define UIACADEMYSCHEDULEINFOPOPUP_SET_SCHEDULEID_OFFSET UNITYSDK_OFFSET(0x21DE5D0)
#define UIACADEMYSCHEDULEINFOPOPUP_GET_ZONEID_OFFSET UNITYSDK_OFFSET(0x21DE5E0)
#define UIACADEMYSCHEDULEINFOPOPUP_SET_ZONEID_OFFSET UNITYSDK_OFFSET(0x21DE5F0)
#define UIACADEMYSCHEDULEINFOPOPUP_GET_REWARDLIST_OFFSET UNITYSDK_OFFSET(0x21DE600)
#define UIACADEMYSCHEDULEINFOPOPUP_SET_REWARDLIST_OFFSET UNITYSDK_OFFSET(0x21DE610)
#define UIACADEMYSCHEDULEINFOPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x21DE630)
#define UIACADEMYSCHEDULEINFOPOPUP_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x21DE920)
#define UIACADEMYSCHEDULEINFOPOPUP_ONOPENED_OFFSET UNITYSDK_OFFSET(0x21DEA90)
#define UIACADEMYSCHEDULEINFOPOPUP_SETREWARDS_OFFSET UNITYSDK_OFFSET(0x21DEAB0)
#define UIACADEMYSCHEDULEINFOPOPUP_HANDLECURRENCYUPDATEMESSAGE_OFFSET UNITYSDK_OFFSET(0x21DEDB0)
#define UIACADEMYSCHEDULEINFOPOPUP_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x21DEDD0)
#define UIACADEMYSCHEDULEINFOPOPUP_SETDATA_OFFSET UNITYSDK_OFFSET(0x21DEE40)
#define UIACADEMYSCHEDULEINFOPOPUP_SETDATA_OFFSET UNITYSDK_OFFSET(0x21DEF90)
#define UIACADEMYSCHEDULEINFOPOPUP_ADDSECRETSTONE_OFFSET UNITYSDK_OFFSET(0x21DFAD0)
#define UIACADEMYSCHEDULEINFOPOPUP_ONCLICKSTARTBUTTON_OFFSET UNITYSDK_OFFSET(0x21DFF20)
#define UIACADEMYSCHEDULEINFOPOPUP_REFRESHADMISSION_OFFSET UNITYSDK_OFFSET(0x21E0130)
#define UIACADEMYSCHEDULEINFOPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x21E0200)
#define UIACADEMYSCHEDULEINFOPOPUP__GET_PARCELCARDLIST_B__9_0_OFFSET UNITYSDK_OFFSET(0x21E0280)

	inline static constexpr unsigned int UIAcademyScheduleInfoPopup_TypeDefinitionIndex = 4223;

	class UIAcademyScheduleInfoPopup : public Il2CppObject
	{
	public:
		UILabel* levelLabel; // 0xD8
		UILabel* nameLabel; // 0xE0
		UILabel* desriptionLabel; // 0xE8
		MXButton* closeButton; // 0xF0
		MXButton* startSchedulebutton; // 0xF8
		UIAdmissionDisplay* admissionDisplay; // 0x100
		UILabel* rewardEmptyLabel; // 0x108
		Il2CppObject* _parcelCardList; // 0x110
		UIGrid* _grid; // 0x118
		UIScrollView* _scrollView; // 0x120
		Il2CppObject* _students; // 0x128
		::System::Int64 _ScheduleId_k__BackingField; // 0x130
		::System::Int64 _ZoneId_k__BackingField; // 0x138
		Il2CppObject* _RewardList_k__BackingField; // 0x140

		Il2CppObject* get_ParcelCardList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEINFOPOPUP_GET_PARCELCARDLIST_OFFSET))(nullptr);
		}

		UIGrid* get_Grid()
		{
			return ((UIGrid*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEINFOPOPUP_GET_GRID_OFFSET))(nullptr);
		}

		UIScrollView* get_ScrollView()
		{
			return ((UIScrollView*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEINFOPOPUP_GET_SCROLLVIEW_OFFSET))(nullptr);
		}

		Il2CppObject* get_Students()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEINFOPOPUP_GET_STUDENTS_OFFSET))(nullptr);
		}

		::System::Int64 get_ScheduleId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEINFOPOPUP_GET_SCHEDULEID_OFFSET))(nullptr);
		}

		::System::Void set_ScheduleId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEINFOPOPUP_SET_SCHEDULEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ZoneId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEINFOPOPUP_GET_ZONEID_OFFSET))(nullptr);
		}

		::System::Void set_ZoneId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEINFOPOPUP_SET_ZONEID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_RewardList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEINFOPOPUP_GET_REWARDLIST_OFFSET))(nullptr);
		}

		::System::Void set_RewardList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEINFOPOPUP_SET_REWARDLIST_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEINFOPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEINFOPOPUP_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEINFOPOPUP_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void SetRewards()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEINFOPOPUP_SETREWARDS_OFFSET))(nullptr);
		}

		::System::Boolean HandleCurrencyUpdateMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEINFOPOPUP_HANDLECURRENCYUPDATEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEINFOPOPUP_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEINFOPOPUP_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetData(::MX::Data::AcademyScheduleData* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::Data::AcademyScheduleData*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEINFOPOPUP_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddSecretStone(::MX::Data::AcademyScheduleData* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::Data::AcademyScheduleData*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEINFOPOPUP_ADDSECRETSTONE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickStartButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEINFOPOPUP_ONCLICKSTARTBUTTON_OFFSET))(nullptr);
		}

		::System::Void RefreshAdmission()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEINFOPOPUP_REFRESHADMISSION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEINFOPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _get_ParcelCardList_b__9_0(UISmallParcelCard* arg)
		{
			((::System::Void(*)(UISmallParcelCard*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEINFOPOPUP__GET_PARCELCARDLIST_B__9_0_OFFSET))(arg, nullptr);
		}

	};

