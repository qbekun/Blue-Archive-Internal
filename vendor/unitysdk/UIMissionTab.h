#pragma once
#include "unitysdk.h"

namespace FlatData { class MissionCategory; }
class UIMission;
class MXButton;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIMISSIONTAB_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x269C360)
#define UIMISSIONTAB_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2698790)
#define UIMISSIONTAB_ONWEEKLYTABBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x269C530)
#define UIMISSIONTAB_.CTOR_OFFSET UNITYSDK_OFFSET(0x269C5A0)
#define UIMISSIONTAB_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x269C5B0)
#define UIMISSIONTAB_ONDAILYTABBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x269C5C0)
#define UIMISSIONTAB_ONACHIEVEMENTTABBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x269C630)
#define UIMISSIONTAB_ONEVENTTABBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x269C6A0)
#define UIMISSIONTAB_AWAKE_OFFSET UNITYSDK_OFFSET(0x269C710)
#define UIMISSIONTAB_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x269CC90)
#define UIMISSIONTAB_SWITCHTAB_OFFSET UNITYSDK_OFFSET(0x269A180)
#define UIMISSIONTAB_ONALLTABBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x269CD80)
#define UIMISSIONTAB_INITIALIZETABMAPPING_OFFSET UNITYSDK_OFFSET(0x269CDF0)
#define UIMISSIONTAB_HANDLEREDDOTCHANGEDMESSAGE_OFFSET UNITYSDK_OFFSET(0x269CE90)
#define UIMISSIONTAB_REFRESHREDDOTS_OFFSET UNITYSDK_OFFSET(0x269C4E0)

	inline static constexpr unsigned int UIMissionTab_TypeDefinitionIndex = 6823;

	class UIMissionTab : public ::TriInspector::IndentAttribute
	{
	public:
		::FlatData::MissionCategory* _Current_k__BackingField; // 0x18
		UIMission* mission; // 0x20
		MXButton* allTab; // 0x28
		MXButton* dailyTab; // 0x30
		MXButton* weeklyTab; // 0x38
		MXButton* achievementTab; // 0x40
		MXButton* eventTab; // 0x48
		::Il2CppArray<::System::Object*>* tabElements; // 0x50

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMISSIONTAB_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMISSIONTAB_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void OnWeeklyTabButtonClicked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMISSIONTAB_ONWEEKLYTABBUTTONCLICKED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMISSIONTAB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Current(::FlatData::MissionCategory* arg)
		{
			((::System::Void(*)(::FlatData::MissionCategory*, ::PVOID))((::PBYTE)hIl2Cpp + UIMISSIONTAB_SET_CURRENT_OFFSET))(arg, nullptr);
		}

		::System::Void OnDailyTabButtonClicked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMISSIONTAB_ONDAILYTABBUTTONCLICKED_OFFSET))(nullptr);
		}

		::System::Void OnAchievementTabButtonClicked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMISSIONTAB_ONACHIEVEMENTTABBUTTONCLICKED_OFFSET))(nullptr);
		}

		::System::Void OnEventTabButtonClicked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMISSIONTAB_ONEVENTTABBUTTONCLICKED_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMISSIONTAB_AWAKE_OFFSET))(nullptr);
		}

		::FlatData::MissionCategory* get_Current()
		{
			return ((::FlatData::MissionCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMISSIONTAB_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void SwitchTab(::FlatData::MissionCategory* arg)
		{
			((::System::Void(*)(::FlatData::MissionCategory*, ::PVOID))((::PBYTE)hIl2Cpp + UIMISSIONTAB_SWITCHTAB_OFFSET))(arg, nullptr);
		}

		::System::Void OnAllTabButtonClicked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMISSIONTAB_ONALLTABBUTTONCLICKED_OFFSET))(nullptr);
		}

		::System::Void InitializeTabMapping()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMISSIONTAB_INITIALIZETABMAPPING_OFFSET))(nullptr);
		}

		::System::Boolean HandleRedDotChangedMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIMISSIONTAB_HANDLEREDDOTCHANGEDMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshRedDots()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMISSIONTAB_REFRESHREDDOTS_OFFSET))(nullptr);
		}

	};

