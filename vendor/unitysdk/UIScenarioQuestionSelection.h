#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }
class QuestionSelectionAnimationInfo;
class MXPhoneticText;
namespace UnityEngine { class Color; }
class UIGrid;
class UIScenarioQuestionSelectionElement;
class UIScrollView;
namespace UnityEngine { class AnimationClip; }
class ScenarioQuestionSelectInfo;
class ScenarioScriptInfo;

#define UISCENARIOQUESTIONSELECTION_CO_OPEN_OFFSET UNITYSDK_OFFSET(0x27E2FD0)
#define UISCENARIOQUESTIONSELECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x27E3080)
#define UISCENARIOQUESTIONSELECTION_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x27E3100)
#define UISCENARIOQUESTIONSELECTION_AWAKE_OFFSET UNITYSDK_OFFSET(0x27E3180)
#define UISCENARIOQUESTIONSELECTION_SETSELECTIONS_OFFSET UNITYSDK_OFFSET(0x27E32C0)
#define UISCENARIOQUESTIONSELECTION_CREATEELEMENT_OFFSET UNITYSDK_OFFSET(0x27E3410)
#define UISCENARIOQUESTIONSELECTION_INITQUESTIONSELECTION_OFFSET UNITYSDK_OFFSET(0x27E38E0)
#define UISCENARIOQUESTIONSELECTION_INIT_OFFSET UNITYSDK_OFFSET(0x27E3950)

	inline static constexpr unsigned int UIScenarioQuestionSelection_TypeDefinitionIndex = 7675;

	class UIScenarioQuestionSelection : public Il2CppObject
	{
	public:
		::UnityEngine::Animation* animation; // 0x18
		QuestionSelectionAnimationInfo* animationInfo; // 0x20
		MXPhoneticText* questTitleText; // 0x30
		::UnityEngine::Color* highlightColor; // 0x38
		UIGrid* grid; // 0x48
		UIScenarioQuestionSelectionElement* prefab; // 0x50
		UIScrollView* scrollView; // 0x58
		Il2CppObject* elements; // 0x60

		::System::Collections::IEnumerator* Co_Open(::UnityEngine::AnimationClip* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOQUESTIONSELECTION_CO_OPEN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOQUESTIONSELECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOQUESTIONSELECTION_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOQUESTIONSELECTION_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetSelections(ScenarioQuestionSelectInfo* arg)
		{
			((::System::Void(*)(ScenarioQuestionSelectInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOQUESTIONSELECTION_SETSELECTIONS_OFFSET))(arg, nullptr);
		}

		::System::Void CreateElement(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOQUESTIONSELECTION_CREATEELEMENT_OFFSET))(arg, nullptr);
		}

		::System::Void InitQuestionSelection(ScenarioScriptInfo* arg)
		{
			((::System::Void(*)(ScenarioScriptInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOQUESTIONSELECTION_INITQUESTIONSELECTION_OFFSET))(arg, nullptr);
		}

		::System::Void Init(ScenarioScriptInfo* arg)
		{
			((::System::Void(*)(ScenarioScriptInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOQUESTIONSELECTION_INIT_OFFSET))(arg, nullptr);
		}

	};

