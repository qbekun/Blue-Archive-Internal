#pragma once
#include "unitysdk.h"

class ButtonActivator;
class UILabel;
class ObjectActivator;
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace UnityEngine { class Coroutine; }

#define UIACADEMYSCHEDULEINFOPOPUP_EVENT_ONPRESSPLUSBUTTON_OFFSET UNITYSDK_OFFSET(0x219C720)
#define UIACADEMYSCHEDULEINFOPOPUP_EVENT_ONCLICKMINUSBUTTON_OFFSET UNITYSDK_OFFSET(0x219C840)
#define UIACADEMYSCHEDULEINFOPOPUP_EVENT_REFRESHADMISSION_OFFSET UNITYSDK_OFFSET(0x219CB50)
#define UIACADEMYSCHEDULEINFOPOPUP_EVENT_ONCLICKSTARTBUTTON_OFFSET UNITYSDK_OFFSET(0x219CFD0)
#define UIACADEMYSCHEDULEINFOPOPUP_EVENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x219D2F0)
#define UIACADEMYSCHEDULEINFOPOPUP_EVENT_REFRESHBATCHCOUNTSTATE_OFFSET UNITYSDK_OFFSET(0x219C8B0)
#define UIACADEMYSCHEDULEINFOPOPUP_EVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x219D610)
#define UIACADEMYSCHEDULEINFOPOPUP_EVENT_ONPRESSMINUSBUTTON_OFFSET UNITYSDK_OFFSET(0x219D630)
#define UIACADEMYSCHEDULEINFOPOPUP_EVENT_REFRESHBATCHCOUNTBYCACHED_OFFSET UNITYSDK_OFFSET(0x219CB70)
#define UIACADEMYSCHEDULEINFOPOPUP_EVENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x219D6D0)
#define UIACADEMYSCHEDULEINFOPOPUP_EVENT_ONOPENED_OFFSET UNITYSDK_OFFSET(0x219DB40)
#define UIACADEMYSCHEDULEINFOPOPUP_EVENT_ONCLICKPLUSBUTTON_OFFSET UNITYSDK_OFFSET(0x219DB80)
#define UIACADEMYSCHEDULEINFOPOPUP_EVENT_SETVISITORUI_OFFSET UNITYSDK_OFFSET(0x219CCC0)
#define UIACADEMYSCHEDULEINFOPOPUP_EVENT_CO_LONGPRESSBATCHCOUNT_OFFSET UNITYSDK_OFFSET(0x219C7C0)

	inline static constexpr unsigned int UIAcademyScheduleInfoPopup_event_TypeDefinitionIndex = 4142;

	class UIAcademyScheduleInfoPopup_event : public Il2CppObject
	{
	public:
		ButtonActivator* plusButton; // 0x148
		ButtonActivator* minusButton; // 0x150
		UILabel* countLabel; // 0x158
		::System::Single batchCountAccumSpeed; // 0x160
		ObjectActivator* startButtonActivator; // 0x168
		::MX::GameLogic::Parcel::ParcelInfo* costParcelInfo; // 0x170
		::System::Int64 maxBatchCount; // 0x178
		::System::Int64 currentBatchCount; // 0x180
		::UnityEngine::Coroutine* longPressCoroutine; // 0x188

		::System::Void OnPressPlusButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEINFOPOPUP_EVENT_ONPRESSPLUSBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickMinusButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEINFOPOPUP_EVENT_ONCLICKMINUSBUTTON_OFFSET))(nullptr);
		}

		::System::Void RefreshAdmission()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEINFOPOPUP_EVENT_REFRESHADMISSION_OFFSET))(nullptr);
		}

		::System::Void OnClickStartButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEINFOPOPUP_EVENT_ONCLICKSTARTBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEINFOPOPUP_EVENT_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RefreshBatchCountState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEINFOPOPUP_EVENT_REFRESHBATCHCOUNTSTATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEINFOPOPUP_EVENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnPressMinusButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEINFOPOPUP_EVENT_ONPRESSMINUSBUTTON_OFFSET))(nullptr);
		}

		::System::Void RefreshBatchCountByCached()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEINFOPOPUP_EVENT_REFRESHBATCHCOUNTBYCACHED_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEINFOPOPUP_EVENT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEINFOPOPUP_EVENT_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickPlusButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEINFOPOPUP_EVENT_ONCLICKPLUSBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetVisitorUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEINFOPOPUP_EVENT_SETVISITORUI_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_LongPressBatchCount(::System::Boolean arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEINFOPOPUP_EVENT_CO_LONGPRESSBATCHCOUNT_OFFSET))(arg, nullptr);
		}

	};

