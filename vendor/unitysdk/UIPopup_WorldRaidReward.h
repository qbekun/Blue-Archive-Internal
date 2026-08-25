#pragma once
#include "unitysdk.h"

class UIWorldRaidRewardListScrollViewController;
class UILabel;
class ButtonActivator;
namespace MX::Data { class WorldRaidSeasonInfo; }
namespace UnityEngine { class Coroutine; }

#define UIPOPUP_WORLDRAIDREWARD__REFRESH_G__GETDATETEXT|10_0_OFFSET UNITYSDK_OFFSET(0xBEB650)
#define UIPOPUP_WORLDRAIDREWARD_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xBEBB40)
#define UIPOPUP_WORLDRAIDREWARD_AWAKE_OFFSET UNITYSDK_OFFSET(0xBEBB70)
#define UIPOPUP_WORLDRAIDREWARD_SETINFO_OFFSET UNITYSDK_OFFSET(0xBEBCB0)
#define UIPOPUP_WORLDRAIDREWARD_ONCLICKRECEIVEBUTTON_OFFSET UNITYSDK_OFFSET(0xBEBCD0)
#define UIPOPUP_WORLDRAIDREWARD_CORECEIVEREWARDANDREFRESH_OFFSET UNITYSDK_OFFSET(0xBEBD80)
#define UIPOPUP_WORLDRAIDREWARD_REFRESH_OFFSET UNITYSDK_OFFSET(0xBEBE10)
#define UIPOPUP_WORLDRAIDREWARD_ONOPENED_OFFSET UNITYSDK_OFFSET(0xBEC5E0)
#define UIPOPUP_WORLDRAIDREWARD_.CTOR_OFFSET UNITYSDK_OFFSET(0xBEC610)

	inline static constexpr unsigned int UIPopup_WorldRaidReward_TypeDefinitionIndex = 8731;

	class UIPopup_WorldRaidReward : public Il2CppObject
	{
	public:
		UIWorldRaidRewardListScrollViewController* RewardListController; // 0xD8
		UILabel* TimeLabel; // 0xE0
		ButtonActivator* ReceiveButton; // 0xE8
		::MX::Data::WorldRaidSeasonInfo* seasonInfo; // 0xF0
		::UnityEngine::Coroutine* receiveCoroutine; // 0xF8

		::System::String* _Refresh_g__GetDateText|10_0(::System::DateTime* arg)
		{
			return ((::System::String*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDREWARD__REFRESH_G__GETDATETEXT|10_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDREWARD_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDREWARD_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetInfo(::MX::Data::WorldRaidSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::WorldRaidSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDREWARD_SETINFO_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickReceiveButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDREWARD_ONCLICKRECEIVEBUTTON_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoReceiveRewardAndRefresh()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDREWARD_CORECEIVEREWARDANDREFRESH_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDREWARD_REFRESH_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDREWARD_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAIDREWARD_.CTOR_OFFSET))(nullptr);
		}

	};

