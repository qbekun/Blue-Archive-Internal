#pragma once
#include "unitysdk.h"

class UITexture;
namespace MX::Data { class AttendanceBookReward; }
namespace MX::GameLogic::DBModel { class AttendanceHistoryDB; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UICOUNTDOWN_GET_COMPLETE_OFFSET UNITYSDK_OFFSET(0x2216800)
#define UICOUNTDOWN___N__0_OFFSET UNITYSDK_OFFSET(0x2216810)
#define UICOUNTDOWN_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x22168F0)
#define UICOUNTDOWN_SET_COMPLETE_OFFSET UNITYSDK_OFFSET(0x2216980)
#define UICOUNTDOWN_CO_REQUESTREWARD_OFFSET UNITYSDK_OFFSET(0x2216990)
#define UICOUNTDOWN__SETATTENDANCEDATA_B__30_0_OFFSET UNITYSDK_OFFSET(0x2216A20)
#define UICOUNTDOWN_SETUICOMPONENTS_OFFSET UNITYSDK_OFFSET(0x2216A50)
#define UICOUNTDOWN_GET_RECEIVEDBYMAIL_OFFSET UNITYSDK_OFFSET(0x2217800)
#define UICOUNTDOWN_CO_WAITCLICK_OFFSET UNITYSDK_OFFSET(0x2217810)
#define UICOUNTDOWN_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x22178A0)
#define UICOUNTDOWN_SETATTENDANCEDATA_OFFSET UNITYSDK_OFFSET(0x2217B20)
#define UICOUNTDOWN_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2217D30)
#define UICOUNTDOWN_SET_RECEIVEDBYMAIL_OFFSET UNITYSDK_OFFSET(0x2217E40)
#define UICOUNTDOWN_.CTOR_OFFSET UNITYSDK_OFFSET(0x2217E50)
#define UICOUNTDOWN_ONCLICK_OFFSET UNITYSDK_OFFSET(0x2217E90)
#define UICOUNTDOWN_CO_PLAYREWARDSEQUENCE_OFFSET UNITYSDK_OFFSET(0x2217EB0)
#define UICOUNTDOWN_ONRESPONSE_OFFSET UNITYSDK_OFFSET(0x2217F40)
#define UICOUNTDOWN_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2218140)

	inline static constexpr unsigned int UICountdown_TypeDefinitionIndex = 4392;

	class UICountdown : public Il2CppObject
	{
	public:
		::System::Boolean _Complete_k__BackingField; // 0xD8
		::System::Action* onClickEvent; // 0xE0
		::System::Action* onResponseEvent; // 0xE8
		::System::Int64 attendingDay; // 0xF0
		UITexture* SchoolBanner; // 0xF8
		::Il2CppArray<::System::Object*>* DecoLines; // 0x100
		UITexture* DecoBackground1; // 0x108
		UITexture* DecoBackground2; // 0x110
		::Il2CppArray<::System::Object*>* DecoLineColors; // 0x118
		UITexture* CountdownDayImageFont; // 0x120
		UITexture* SchoolText; // 0x128
		::Il2CppArray<::System::Object*>* CharacterSpineGroupObjects; // 0x130
		::Il2CppArray<::System::Object*>* ResourceNames; // 0x138
		::System::String* prefabName; // 0x140
		::MX::Data::AttendanceBookReward* countdownReward; // 0x148
		::System::Boolean _ReceivedByMail_k__BackingField; // 0x150

		::System::Boolean get_Complete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICOUNTDOWN_GET_COMPLETE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICOUNTDOWN___N__0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICOUNTDOWN_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void set_Complete(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICOUNTDOWN_SET_COMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* co_RequestReward()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICOUNTDOWN_CO_REQUESTREWARD_OFFSET))(nullptr);
		}

		::System::Boolean _SetAttendanceData_b__30_0(::MX::GameLogic::DBModel::AttendanceHistoryDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::AttendanceHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + UICOUNTDOWN__SETATTENDANCEDATA_B__30_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetUIComponents()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICOUNTDOWN_SETUICOMPONENTS_OFFSET))(nullptr);
		}

		::System::Boolean get_ReceivedByMail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICOUNTDOWN_GET_RECEIVEDBYMAIL_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_WaitClick()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICOUNTDOWN_CO_WAITCLICK_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICOUNTDOWN_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void SetAttendanceData(::MX::Data::AttendanceBookReward* arg, ::System::String* str)
		{
			((::System::Void(*)(::MX::Data::AttendanceBookReward*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UICOUNTDOWN_SETATTENDANCEDATA_OFFSET))(arg, str, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICOUNTDOWN_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void set_ReceivedByMail(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICOUNTDOWN_SET_RECEIVEDBYMAIL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICOUNTDOWN_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICOUNTDOWN_ONCLICK_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_PlayRewardSequence()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICOUNTDOWN_CO_PLAYREWARDSEQUENCE_OFFSET))(nullptr);
		}

		::System::Boolean OnResponse(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UICOUNTDOWN_ONRESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICOUNTDOWN_ONOPENED_OFFSET))(arg, nullptr);
		}

	};

