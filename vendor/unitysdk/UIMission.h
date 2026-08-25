#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class MXButton;
class ButtonActivator;
class UIMissionTab;
class UIMissionScrollController;
class FixedMissionWidget;
class UIMissionSpineCharacter;
namespace MX::Data { class MissionInfo; }
namespace FlatData { class MissionCategory; }
class MissionContentBase;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIMISSION_SELECTMISSIONONOPENED_OFFSET UNITYSDK_OFFSET(0x2697F00)
#define UIMISSION_ONBACKBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x2697F90)
#define UIMISSION_GET_CURRENTCATEGORY_OFFSET UNITYSDK_OFFSET(0x2697FB0)
#define UIMISSION_REFRESHSCROLL_OFFSET UNITYSDK_OFFSET(0x2697FD0)
#define UIMISSION_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x26986F0)
#define UIMISSION__ONOPENED_G__HANDLENOSCENARIO|26_1_OFFSET UNITYSDK_OFFSET(0x2698700)
#define UIMISSION_GET_NEEDREDRAWSCROLL_OFFSET UNITYSDK_OFFSET(0x2698830)
#define UIMISSION_SET_TARGETMISSIONINFO_OFFSET UNITYSDK_OFFSET(0x2698840)
#define UIMISSION__SELECTMISSIONONOPENED_B__36_0_OFFSET UNITYSDK_OFFSET(0x2698860)
#define UIMISSION_HANDLEMISSIONLISTRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x26988A0)
#define UIMISSION_HANDLEMISSIONREWARDRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x26988B0)
#define UIMISSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x2698DC0)
#define UIMISSION_HANDLEMISSIONMULTIPLEREWARDRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2698DD0)
#define UIMISSION_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2698EB0)
#define UIMISSION__ONOPENED_G__HANDLEAFTERSCENARIO|26_0_OFFSET UNITYSDK_OFFSET(0x2699320)
#define UIMISSION_SET_NEEDREDRAWSCROLL_OFFSET UNITYSDK_OFFSET(0x26993B0)
#define UIMISSION_REFRESHITEMS_OFFSET UNITYSDK_OFFSET(0x2698260)
#define UIMISSION_GET_MISSIONSPINECHARACTER_OFFSET UNITYSDK_OFFSET(0x2698BC0)
#define UIMISSION_AWAKE_OFFSET UNITYSDK_OFFSET(0x26993C0)
#define UIMISSION_GET_SCROLLCONTROLLER_OFFSET UNITYSDK_OFFSET(0x2698610)
#define UIMISSION_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x26995E0)
#define UIMISSION_ONCLICKRECEIVEALL_OFFSET UNITYSDK_OFFSET(0x26997F0)
#define UIMISSION___N__0_OFFSET UNITYSDK_OFFSET(0x26998A0)
#define UIMISSION_RESETSCROLL_OFFSET UNITYSDK_OFFSET(0x26998B0)
#define UIMISSION_GET_TARGETMISSIONINFO_OFFSET UNITYSDK_OFFSET(0x2699940)
#define UIMISSION_GET_FIXEDMISSIONWIDGET_OFFSET UNITYSDK_OFFSET(0x2698680)
#define UIMISSION_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x2699950)

	inline static constexpr unsigned int UIMission_TypeDefinitionIndex = 6817;

	class UIMission : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* empty; // 0xD8
		MXButton* backButton; // 0xE0
		ButtonActivator* receiveAllButton; // 0xE8
		UIMissionTab* missionTabUI; // 0xF0
		::System::Boolean _NeedRedrawScroll_k__BackingField; // 0xF8
		UIMissionScrollController* scrollController; // 0x100
		FixedMissionWidget* _fixedMissionWidget; // 0x108
		UIMissionSpineCharacter* _missionSpineCharacter; // 0x110
		::MX::Data::MissionInfo* _TargetMissionInfo_k__BackingField; // 0x118

		::System::Collections::IEnumerator* SelectMissionOnOpened()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMISSION_SELECTMISSIONONOPENED_OFFSET))(nullptr);
		}

		::System::Void OnBackButtonClicked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMISSION_ONBACKBUTTONCLICKED_OFFSET))(nullptr);
		}

		::FlatData::MissionCategory* get_CurrentCategory()
		{
			return ((::FlatData::MissionCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMISSION_GET_CURRENTCATEGORY_OFFSET))(nullptr);
		}

		::System::Void RefreshScroll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMISSION_REFRESHSCROLL_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMISSION_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void _OnOpened_g__HandleNoScenario|26_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMISSION__ONOPENED_G__HANDLENOSCENARIO|26_1_OFFSET))(nullptr);
		}

		::System::Boolean get_NeedRedrawScroll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMISSION_GET_NEEDREDRAWSCROLL_OFFSET))(nullptr);
		}

		::System::Void set_TargetMissionInfo(::MX::Data::MissionInfo* arg)
		{
			((::System::Void(*)(::MX::Data::MissionInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIMISSION_SET_TARGETMISSIONINFO_OFFSET))(arg, nullptr);
		}

		::System::Boolean _SelectMissionOnOpened_b__36_0(MissionContentBase* arg)
		{
			return ((::System::Boolean(*)(MissionContentBase*, ::PVOID))((::PBYTE)hIl2Cpp + UIMISSION__SELECTMISSIONONOPENED_B__36_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMissionListResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIMISSION_HANDLEMISSIONLISTRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMissionRewardResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIMISSION_HANDLEMISSIONREWARDRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMISSION_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleMissionMultipleRewardResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIMISSION_HANDLEMISSIONMULTIPLEREWARDRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMISSION_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void _OnOpened_g__HandleAfterScenario|26_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMISSION__ONOPENED_G__HANDLEAFTERSCENARIO|26_0_OFFSET))(nullptr);
		}

		::System::Void set_NeedRedrawScroll(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMISSION_SET_NEEDREDRAWSCROLL_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshItems()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMISSION_REFRESHITEMS_OFFSET))(nullptr);
		}

		UIMissionSpineCharacter* get_missionSpineCharacter()
		{
			return ((UIMissionSpineCharacter*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMISSION_GET_MISSIONSPINECHARACTER_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMISSION_AWAKE_OFFSET))(nullptr);
		}

		UIMissionScrollController* get_ScrollController()
		{
			return ((UIMissionScrollController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMISSION_GET_SCROLLCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMISSION_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void OnClickReceiveAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMISSION_ONCLICKRECEIVEALL_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMISSION___N__0_OFFSET))(nullptr);
		}

		::System::Void ResetScroll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMISSION_RESETSCROLL_OFFSET))(nullptr);
		}

		::MX::Data::MissionInfo* get_TargetMissionInfo()
		{
			return ((::MX::Data::MissionInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMISSION_GET_TARGETMISSIONINFO_OFFSET))(nullptr);
		}

		FixedMissionWidget* get_fixedMissionWidget()
		{
			return ((FixedMissionWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMISSION_GET_FIXEDMISSIONWIDGET_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMISSION_CO_LOADING_OFFSET))(nullptr);
		}

	};

