#pragma once
#include "unitysdk.h"

class UIDreammaker_ParameterDisplay;
class UILabel;
class UISlider;
class MXButton;
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AudioSource; }
namespace UnityEngine { class AudioClip; }
namespace MX::NetworkProtocol { class MiniGameDreamMakerDailyClosingResponse; }
namespace MX::Data { class EventContentStageTotalRewardInfo; }

#define UIDREAMMAKER_DAILYRESULT__COUPDATEEVENTGAUGE_B__25_1_OFFSET UNITYSDK_OFFSET(0xB9AC80)
#define UIDREAMMAKER_DAILYRESULT_AWAKE_OFFSET UNITYSDK_OFFSET(0xB9ACB0)
#define UIDREAMMAKER_DAILYRESULT_COUPDATEEVENTGAUGE_OFFSET UNITYSDK_OFFSET(0xB9AED0)
#define UIDREAMMAKER_DAILYRESULT__COUPDATEEVENTGAUGE_B__25_2_OFFSET UNITYSDK_OFFSET(0xB9AF60)
#define UIDREAMMAKER_DAILYRESULT_INITTWEENS_OFFSET UNITYSDK_OFFSET(0xB9AF90)
#define UIDREAMMAKER_DAILYRESULT_ONCLICKNEXT_OFFSET UNITYSDK_OFFSET(0xB9B120)
#define UIDREAMMAKER_DAILYRESULT__COUPDATEEVENTGAUGE_B__25_0_OFFSET UNITYSDK_OFFSET(0xB9B1B0)
#define UIDREAMMAKER_DAILYRESULT_ONCLICKOPENREWARDLIST_OFFSET UNITYSDK_OFFSET(0xB9B240)
#define UIDREAMMAKER_DAILYRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0xB9B3A0)
#define UIDREAMMAKER_DAILYRESULT_ONOPENED_OFFSET UNITYSDK_OFFSET(0xB9B3B0)
#define UIDREAMMAKER_DAILYRESULT_PLAYTWEENS_OFFSET UNITYSDK_OFFSET(0xB9B4A0)
#define UIDREAMMAKER_DAILYRESULT_ONCLOSED_OFFSET UNITYSDK_OFFSET(0xB9B650)
#define UIDREAMMAKER_DAILYRESULT_SETDAILYRESULTUI_OFFSET UNITYSDK_OFFSET(0xB99930)

	inline static constexpr unsigned int UIDreammaker_DailyResult_TypeDefinitionIndex = 589;

	class UIDreammaker_DailyResult : public Il2CppObject
	{
	public:
		::System::Single gaugePlayTime; // 0xD8
		UIDreammaker_ParameterDisplay* parameterDisplay; // 0xE0
		UILabel* dayCountLabel; // 0xE8
		UISlider* eventPointGauge; // 0xF0
		Il2CppObject* eventPointTweens; // 0xF8
		UILabel* eventPointLabel; // 0x100
		UILabel* curPointMinText; // 0x108
		UILabel* nextTargetPointText; // 0x110
		MXButton* rewardDetailButton; // 0x118
		MXButton* nextButton; // 0x120
		::UnityEngine::Animation* openAnimation; // 0x128
		::UnityEngine::AudioSource* gaugeMaxSFXAudioSource; // 0x130
		::UnityEngine::AudioClip* gaugeMaxSFXClip; // 0x138
		::MX::NetworkProtocol::MiniGameDreamMakerDailyClosingResponse* responseCache; // 0x140
		::System::Int64 maxPoint; // 0x148
		::System::Int64 prevPoint; // 0x150
		::System::Int64 nextPoint; // 0x158
		::System::Single currPoint; // 0x160
		::System::Action* onClosedAction; // 0x168

		::System::Boolean _CoUpdateEventGauge_b__25_1(::MX::Data::EventContentStageTotalRewardInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::EventContentStageTotalRewardInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_DAILYRESULT__COUPDATEEVENTGAUGE_B__25_1_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_DAILYRESULT_AWAKE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoUpdateEventGauge()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_DAILYRESULT_COUPDATEEVENTGAUGE_OFFSET))(nullptr);
		}

		::System::Boolean _CoUpdateEventGauge_b__25_2(::MX::Data::EventContentStageTotalRewardInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::EventContentStageTotalRewardInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_DAILYRESULT__COUPDATEEVENTGAUGE_B__25_2_OFFSET))(arg, nullptr);
		}

		::System::Void InitTweens()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_DAILYRESULT_INITTWEENS_OFFSET))(nullptr);
		}

		::System::Void OnClickNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_DAILYRESULT_ONCLICKNEXT_OFFSET))(nullptr);
		}

		::System::Boolean _CoUpdateEventGauge_b__25_0(::MX::Data::EventContentStageTotalRewardInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::EventContentStageTotalRewardInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_DAILYRESULT__COUPDATEEVENTGAUGE_B__25_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickOpenRewardList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_DAILYRESULT_ONCLICKOPENREWARDLIST_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_DAILYRESULT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_DAILYRESULT_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void PlayTweens()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_DAILYRESULT_PLAYTWEENS_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_DAILYRESULT_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void SetDailyResultUI(::MX::NetworkProtocol::MiniGameDreamMakerDailyClosingResponse* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::MiniGameDreamMakerDailyClosingResponse*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_DAILYRESULT_SETDAILYRESULTUI_OFFSET))(arg, arg2, nullptr);
		}

	};

