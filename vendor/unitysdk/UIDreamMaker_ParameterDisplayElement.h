#pragma once
#include "unitysdk.h"

class UISprite;
class UILabel;
namespace UnityEngine { class GameObject; }
class TweenPosition;
namespace UnityEngine { class AudioSource; }
namespace UnityEngine { class Color; }
class WidgetsPositionSetter;
namespace UnityEngine { class Coroutine; }
namespace MX::Data::Excel { class MiniGameDreamParameterExcel; }
namespace MX::GameLogic::DBModel { class MiniGameDreamMakerParameterDB; }
namespace FlatData { class DreamMakerParamOperationType; }

#define UIDREAMMAKER_PARAMETERDISPLAYELEMENT_SETUIFORDAILYRESULT_OFFSET UNITYSDK_OFFSET(0xBA1560)
#define UIDREAMMAKER_PARAMETERDISPLAYELEMENT_.CCTOR_OFFSET UNITYSDK_OFFSET(0xBA1820)
#define UIDREAMMAKER_PARAMETERDISPLAYELEMENT_PLAYPARAMETERCHANGEANIMATION_OFFSET UNITYSDK_OFFSET(0xBA0A00)
#define UIDREAMMAKER_PARAMETERDISPLAYELEMENT_CO_PLAYPARAMETERCHANGEANIMATION_OFFSET UNITYSDK_OFFSET(0xBA18A0)
#define UIDREAMMAKER_PARAMETERDISPLAYELEMENT_SETUIFORPROGRESS_OFFSET UNITYSDK_OFFSET(0xBA04B0)
#define UIDREAMMAKER_PARAMETERDISPLAYELEMENT_SETCOLORIFUNDERBASEVALUE_OFFSET UNITYSDK_OFFSET(0xBA13E0)
#define UIDREAMMAKER_PARAMETERDISPLAYELEMENT_SETUIFORNEWSTART_OFFSET UNITYSDK_OFFSET(0xB9F880)
#define UIDREAMMAKER_PARAMETERDISPLAYELEMENT_SHOWSTATANDDIFFVALUE_OFFSET UNITYSDK_OFFSET(0xBA1960)
#define UIDREAMMAKER_PARAMETERDISPLAYELEMENT_SETUIFORINFOUI_OFFSET UNITYSDK_OFFSET(0xBA1190)
#define UIDREAMMAKER_PARAMETERDISPLAYELEMENT_ONPARAMETERCHANGEANIMATIONFINISHED_OFFSET UNITYSDK_OFFSET(0xB9FDA0)
#define UIDREAMMAKER_PARAMETERDISPLAYELEMENT_SETUIFORCONTINUE_OFFSET UNITYSDK_OFFSET(0xB9FBD0)
#define UIDREAMMAKER_PARAMETERDISPLAYELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xBA19E0)

	inline static constexpr unsigned int UIDreamMaker_ParameterDisplayElement_TypeDefinitionIndex = 604;

	class UIDreamMaker_ParameterDisplayElement : public Il2CppObject
	{
	public:
		UISprite* statTypeIcon; // 0x18
		UILabel* statTypeNameText; // 0x20
		::UnityEngine::GameObject* nonchangeParameterRoot; // 0x28
		::UnityEngine::GameObject* changeParameterRoot; // 0x30
		UILabel* nonChangeCurrentParameterValueText; // 0x38
		UILabel* changeCurrentParameterValueText; // 0x40
		UILabel* changingAmoutText; // 0x48
		UISprite* statchangeIcon; // 0x50
		TweenPosition* statchangeIconTween; // 0x58
		::UnityEngine::AudioSource* parameterIncreaseSFXAudioSource; // 0x60
		::UnityEngine::Color* plusColor; // 0x0
		::UnityEngine::Color* zeroColor; // 0x10
		::UnityEngine::Color* minusColor; // 0x20
		::UnityEngine::Color* plainTextColor; // 0x30
		WidgetsPositionSetter* widgetsPositionSetter; // 0x68
		::System::Int64 currentStatValueCache; // 0x70
		::System::Int64 changingValueCache; // 0x78
		::UnityEngine::Coroutine* valueChangeCoroutine; // 0x80
		::MX::Data::Excel::MiniGameDreamParameterExcel* paramExcel; // 0x88

		::System::Void SetUIForDailyResult(::MX::Data::Excel::MiniGameDreamParameterExcel* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::MX::Data::Excel::MiniGameDreamParameterExcel*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_PARAMETERDISPLAYELEMENT_SETUIFORDAILYRESULT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_PARAMETERDISPLAYELEMENT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void PlayParameterChangeAnimation(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_PARAMETERDISPLAYELEMENT_PLAYPARAMETERCHANGEANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_PlayParameterChangeAnimation(::System::Int64 arg, ::System::Int64 arg2, ::System::Single arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int64, ::System::Int64, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_PARAMETERDISPLAYELEMENT_CO_PLAYPARAMETERCHANGEANIMATION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetUIForProgress(::MX::Data::Excel::MiniGameDreamParameterExcel* arg, ::MX::GameLogic::DBModel::MiniGameDreamMakerParameterDB* arg2, ::System::Int64 arg3, ::FlatData::DreamMakerParamOperationType* arg4)
		{
			((::System::Void(*)(::MX::Data::Excel::MiniGameDreamParameterExcel*, ::MX::GameLogic::DBModel::MiniGameDreamMakerParameterDB*, ::System::Int64, ::FlatData::DreamMakerParamOperationType*, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_PARAMETERDISPLAYELEMENT_SETUIFORPROGRESS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SetColorIfUnderBaseValue(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_PARAMETERDISPLAYELEMENT_SETCOLORIFUNDERBASEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void SetUIForNewStart(::MX::Data::Excel::MiniGameDreamParameterExcel* arg, ::MX::GameLogic::DBModel::MiniGameDreamMakerParameterDB* arg2)
		{
			((::System::Void(*)(::MX::Data::Excel::MiniGameDreamParameterExcel*, ::MX::GameLogic::DBModel::MiniGameDreamMakerParameterDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_PARAMETERDISPLAYELEMENT_SETUIFORNEWSTART_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ShowStatAndDiffValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_PARAMETERDISPLAYELEMENT_SHOWSTATANDDIFFVALUE_OFFSET))(nullptr);
		}

		::System::Void SetUIForInfoUI(::MX::Data::Excel::MiniGameDreamParameterExcel* arg, ::MX::GameLogic::DBModel::MiniGameDreamMakerParameterDB* arg2, ::FlatData::DreamMakerParamOperationType* arg3)
		{
			((::System::Void(*)(::MX::Data::Excel::MiniGameDreamParameterExcel*, ::MX::GameLogic::DBModel::MiniGameDreamMakerParameterDB*, ::FlatData::DreamMakerParamOperationType*, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_PARAMETERDISPLAYELEMENT_SETUIFORINFOUI_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnParameterChangeAnimationFinished()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_PARAMETERDISPLAYELEMENT_ONPARAMETERCHANGEANIMATIONFINISHED_OFFSET))(nullptr);
		}

		::System::Void SetUIForContinue(::MX::Data::Excel::MiniGameDreamParameterExcel* arg, ::MX::GameLogic::DBModel::MiniGameDreamMakerParameterDB* arg2)
		{
			((::System::Void(*)(::MX::Data::Excel::MiniGameDreamParameterExcel*, ::MX::GameLogic::DBModel::MiniGameDreamMakerParameterDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_PARAMETERDISPLAYELEMENT_SETUIFORCONTINUE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_PARAMETERDISPLAYELEMENT_.CTOR_OFFSET))(nullptr);
		}

	};

