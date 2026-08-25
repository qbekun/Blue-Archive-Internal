#pragma once
#include "unitysdk.h"

class UITexture;
class UILabel;
class UISlider;
namespace UnityEngine { class ParticleSystem; }
class MXButton;
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Coroutine; }
namespace MX::Data { class AcademyScheduleData; }
namespace MX::Data::Excel { class ConquestProgressResourceExcel; }
namespace UnityEngine { class Texture; }
namespace MX::Audio { class VoicePlayInfoSimple; }

#define UIACADEMYSCHEDULEPROGRESS_GET_UIBASEONOPENED_OFFSET UNITYSDK_OFFSET(0x21E0410)
#define UIACADEMYSCHEDULEPROGRESS_GET_ANIM_OFFSET UNITYSDK_OFFSET(0x21E0480)
#define UIACADEMYSCHEDULEPROGRESS_AWAKE_OFFSET UNITYSDK_OFFSET(0x21E0520)
#define UIACADEMYSCHEDULEPROGRESS_ONCLICKPROGRESSSKIPBUTTON_OFFSET UNITYSDK_OFFSET(0x21E0650)
#define UIACADEMYSCHEDULEPROGRESS_SETDATA_OFFSET UNITYSDK_OFFSET(0x21E0700)
#define UIACADEMYSCHEDULEPROGRESS_SETDATA_OFFSET UNITYSDK_OFFSET(0x21E0960)
#define UIACADEMYSCHEDULEPROGRESS_SETSCHEDULESETTING_OFFSET UNITYSDK_OFFSET(0x21E0C60)
#define UIACADEMYSCHEDULEPROGRESS_ONOPENED_OFFSET UNITYSDK_OFFSET(0x21E0C90)
#define UIACADEMYSCHEDULEPROGRESS_ONSUCCESS_OFFSET UNITYSDK_OFFSET(0x21E0E30)
#define UIACADEMYSCHEDULEPROGRESS_ONANIFINISH_OFFSET UNITYSDK_OFFSET(0x21E0E90)
#define UIACADEMYSCHEDULEPROGRESS_ONPROGRESSSTART_OFFSET UNITYSDK_OFFSET(0x21E0F50)
#define UIACADEMYSCHEDULEPROGRESS_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x21E10C0)
#define UIACADEMYSCHEDULEPROGRESS_CO_UPDATEPROGRESSBAR_OFFSET UNITYSDK_OFFSET(0x21E1050)
#define UIACADEMYSCHEDULEPROGRESS_ONPROGRESSFINISH_OFFSET UNITYSDK_OFFSET(0x21E1170)
#define UIACADEMYSCHEDULEPROGRESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x21E12D0)
#define UIACADEMYSCHEDULEPROGRESS__SETDATA_B__21_0_OFFSET UNITYSDK_OFFSET(0x21E12E0)
#define UIACADEMYSCHEDULEPROGRESS__SETDATA_B__22_0_OFFSET UNITYSDK_OFFSET(0x21E1310)
#define UIACADEMYSCHEDULEPROGRESS__ONOPENED_B__24_0_OFFSET UNITYSDK_OFFSET(0x21E1340)
#define UIACADEMYSCHEDULEPROGRESS___N__0_OFFSET UNITYSDK_OFFSET(0x21E13F0)

	inline static constexpr unsigned int UIAcademyScheduleProgress_TypeDefinitionIndex = 4226;

	class UIAcademyScheduleProgress : public Il2CppObject
	{
	public:
		UITexture* progressTexture; // 0xD8
		UILabel* progressLabel; // 0xE0
		UISlider* slider; // 0xE8
		::UnityEngine::ParticleSystem* progressEndFX; // 0xF0
		MXButton* progressSkipButton; // 0xF8
		::UnityEngine::Animator* _anim; // 0x100
		::System::UInt32 voiceIdHash; // 0x108
		::System::Single progressPlayTimeLength; // 0x10C
		Il2CppObject* defaultAnimLength; // 0x110
		::System::Action* progressFinishedCallback; // 0x118
		::System::Boolean progressPassed; // 0x120
		::UnityEngine::Coroutine* updateProgressBarCoroutine; // 0x128
		::System::Boolean ignoreAudioLength; // 0x130
		::System::Boolean playProgressEndEffect; // 0x131
		::System::Boolean progressSkipable; // 0x132

		Il2CppObject* get_UIBaseOnOpened()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEPROGRESS_GET_UIBASEONOPENED_OFFSET))(nullptr);
		}

		::UnityEngine::Animator* get_Anim()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEPROGRESS_GET_ANIM_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEPROGRESS_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickProgressSkipButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEPROGRESS_ONCLICKPROGRESSSKIPBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::AcademyScheduleData* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::MX::Data::AcademyScheduleData*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEPROGRESS_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetData(::MX::Data::Excel::ConquestProgressResourceExcel* arg, ::System::String* str, ::System::String* str2, ::System::Action* arg2)
		{
			((::System::Void(*)(::MX::Data::Excel::ConquestProgressResourceExcel*, ::System::String*, ::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEPROGRESS_SETDATA_OFFSET))(arg, str, str2, arg2, nullptr);
		}

		::System::Void SetScheduleSetting(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEPROGRESS_SETSCHEDULESETTING_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEPROGRESS_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnSuccess()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEPROGRESS_ONSUCCESS_OFFSET))(nullptr);
		}

		::System::Void OnAniFinish()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEPROGRESS_ONANIFINISH_OFFSET))(nullptr);
		}

		::System::Void OnProgressStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEPROGRESS_ONPROGRESSSTART_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEPROGRESS_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_UpdateProgressBar()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEPROGRESS_CO_UPDATEPROGRESSBAR_OFFSET))(nullptr);
		}

		::System::Void OnProgressFinish()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEPROGRESS_ONPROGRESSFINISH_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEPROGRESS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _SetData_b__21_0(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEPROGRESS__SETDATA_B__21_0_OFFSET))(arg, nullptr);
		}

		::System::Void _SetData_b__22_0(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEPROGRESS__SETDATA_B__22_0_OFFSET))(arg, nullptr);
		}

		::System::Void _OnOpened_b__24_0(::MX::Audio::VoicePlayInfoSimple* arg)
		{
			((::System::Void(*)(::MX::Audio::VoicePlayInfoSimple*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEPROGRESS__ONOPENED_B__24_0_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEPROGRESS___N__0_OFFSET))(nullptr);
		}

	};

