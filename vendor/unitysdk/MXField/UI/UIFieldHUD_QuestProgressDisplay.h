#pragma once
#include "../../unitysdk.h"

class UILabel;
class UIGrid;
class UISlider;
namespace MXField::Quest { class FieldQuestProgressInfo; }
namespace Cysharp::Threading::Tasks { class UniTask; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define MXFIELD_UI_UIFIELDHUD_QUESTPROGRESSDISPLAY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xE96410)
#define MXFIELD_UI_UIFIELDHUD_QUESTPROGRESSDISPLAY_AWAKE_OFFSET UNITYSDK_OFFSET(0xE98140)
#define MXFIELD_UI_UIFIELDHUD_QUESTPROGRESSDISPLAY_CALCULATEPROGRESSSLIDERVALUE_OFFSET UNITYSDK_OFFSET(0xE98020)
#define MXFIELD_UI_UIFIELDHUD_QUESTPROGRESSDISPLAY_.CTOR_OFFSET UNITYSDK_OFFSET(0xE98210)
#define MXFIELD_UI_UIFIELDHUD_QUESTPROGRESSDISPLAY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE98330)
#define MXFIELD_UI_UIFIELDHUD_QUESTPROGRESSDISPLAY_REQUESTPLAYCOMPLETEQUESTANI_OFFSET UNITYSDK_OFFSET(0xE98400)
#define MXFIELD_UI_UIFIELDHUD_QUESTPROGRESSDISPLAY_PLAYCOMPLETEQUESTANI_OFFSET UNITYSDK_OFFSET(0xE98540)
#define MXFIELD_UI_UIFIELDHUD_QUESTPROGRESSDISPLAY_HANDLEREFRESHQUESTDISPLAYCHANGED_OFFSET UNITYSDK_OFFSET(0xE98700)

namespace MXField::UI
{
	inline static constexpr unsigned int UIFieldHUD_QuestProgressDisplay_TypeDefinitionIndex = 10709;

	class UIFieldHUD_QuestProgressDisplay : public Il2CppObject
	{
	public:
		UILabel* _questProgressLabel; // 0x18
		Il2CppObject* _questProgressNodes; // 0x20
		UIGrid* _nodeGrid; // 0x28
		UISlider* _slider; // 0x30
		::System::Int32 _threeNodeGridCellWidth; // 0x38
		::Il2CppArray<::System::Object*>* _threeNormalizedGaugeRatios; // 0x40
		::System::Int32 _fourNodeGridCellWidth; // 0x48
		::Il2CppArray<::System::Object*>* _fourNodeNormalizedGaugeRatios; // 0x50
		::System::Single _sliderAniTime; // 0x58
		::MXField::Quest::FieldQuestProgressInfo* _prevQuestProgressInfo; // 0x60
		::Il2CppArray<::System::Object*>* _currentDateGaugeRatios; // 0x68
		::System::Boolean _isPlayingSliderAni; // 0x70
		Il2CppObject* _pendingPlayingActions; // 0x78
		::System::Action* _afterDirectionAction; // 0x80

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_QUESTPROGRESSDISPLAY_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_QUESTPROGRESSDISPLAY_AWAKE_OFFSET))(nullptr);
		}

		::System::Single CalculateProgressSliderValue(::MXField::Quest::FieldQuestProgressInfo* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Single(*)(::MXField::Quest::FieldQuestProgressInfo*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_QUESTPROGRESSDISPLAY_CALCULATEPROGRESSSLIDERVALUE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_QUESTPROGRESSDISPLAY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_QUESTPROGRESSDISPLAY_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void RequestPlayCompleteQuestAni(::MXField::Quest::FieldQuestProgressInfo* arg)
		{
			((::System::Void(*)(::MXField::Quest::FieldQuestProgressInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_QUESTPROGRESSDISPLAY_REQUESTPLAYCOMPLETEQUESTANI_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* PlayCompleteQuestAni(::MXField::Quest::FieldQuestProgressInfo* arg, ::System::Threading::CancellationToken* arg2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::MXField::Quest::FieldQuestProgressInfo*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_QUESTPROGRESSDISPLAY_PLAYCOMPLETEQUESTANI_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HandleRefreshQuestDisplayChanged(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_QUESTPROGRESSDISPLAY_HANDLEREFRESHQUESTDISPLAYCHANGED_OFFSET))(arg, nullptr);
		}

	};
}

