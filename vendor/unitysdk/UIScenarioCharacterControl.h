#pragma once
#include "unitysdk.h"

class ScenarioCharacterTarget;
namespace UnityEngine { class Transform; }
class TweenPosition;
class UIScenarioNew;
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Vector3; }
class UIPanel;
namespace FlatData { class ScenarioCharacterBehaviors; }
namespace FlatData { class ScenarioCharacterShapes; }
namespace FlatData { class ScenarioCharacterAction; }
class ScenarioCharacterControlInfo;

#define UISCENARIOCHARACTERCONTROL_GET_CURRENTCHARACTERRENDERQUEUE_OFFSET UNITYSDK_OFFSET(0x27D6700)
#define UISCENARIOCHARACTERCONTROL_GET_SCENARIOUI_OFFSET UNITYSDK_OFFSET(0x27D6710)
#define UISCENARIOCHARACTERCONTROL_GET_HASANYACTIVESPINE_OFFSET UNITYSDK_OFFSET(0x27D67A0)
#define UISCENARIOCHARACTERCONTROL_SET_PREVBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x27D68E0)
#define UISCENARIOCHARACTERCONTROL_SETSPINEANDSHAPE_OFFSET UNITYSDK_OFFSET(0x27D68F0)
#define UISCENARIOCHARACTERCONTROL_GET_PARENTPANEL_OFFSET UNITYSDK_OFFSET(0x27D70E0)
#define UISCENARIOCHARACTERCONTROL_CLEAR_OFFSET UNITYSDK_OFFSET(0x27D7250)
#define UISCENARIOCHARACTERCONTROL_GET_ACTIONANIMATOR_OFFSET UNITYSDK_OFFSET(0x27D7710)
#define UISCENARIOCHARACTERCONTROL_SETDIMMEDFOROTHERCHARACTER_OFFSET UNITYSDK_OFFSET(0x27D77C0)
#define UISCENARIOCHARACTERCONTROL_INITBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x27D7A00)
#define UISCENARIOCHARACTERCONTROL_INITACTION_OFFSET UNITYSDK_OFFSET(0x27D7EA0)
#define UISCENARIOCHARACTERCONTROL_INITEFFECT_OFFSET UNITYSDK_OFFSET(0x27D7F60)
#define UISCENARIOCHARACTERCONTROL_PREINSTANTIATE_OFFSET UNITYSDK_OFFSET(0x27D8380)
#define UISCENARIOCHARACTERCONTROL_GET_PREVBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x27D8530)
#define UISCENARIOCHARACTERCONTROL_INITEMOTICON_OFFSET UNITYSDK_OFFSET(0x27D8540)
#define UISCENARIOCHARACTERCONTROL_SETACTIVEEMOTICON_OFFSET UNITYSDK_OFFSET(0x27D86C0)
#define UISCENARIOCHARACTERCONTROL_INIT_OFFSET UNITYSDK_OFFSET(0x27D88E0)
#define UISCENARIOCHARACTERCONTROL_SET_CURRENTCHARACTERRENDERQUEUE_OFFSET UNITYSDK_OFFSET(0x27D8F30)
#define UISCENARIOCHARACTERCONTROL_.CTOR_OFFSET UNITYSDK_OFFSET(0x27D8F40)
#define UISCENARIOCHARACTERCONTROL_SETTINGEMOTIONRENDERQ_OFFSET UNITYSDK_OFFSET(0x27D9080)
#define UISCENARIOCHARACTERCONTROL_GET_MYTRANSFORM_OFFSET UNITYSDK_OFFSET(0x27D71A0)
#define UISCENARIOCHARACTERCONTROL_INITSPINEANDSHAPES_OFFSET UNITYSDK_OFFSET(0x27D8BA0)
#define UISCENARIOCHARACTERCONTROL_SETTODEFAULTPOS_OFFSET UNITYSDK_OFFSET(0x27D9190)

	inline static constexpr unsigned int UIScenarioCharacterControl_TypeDefinitionIndex = 7630;

	class UIScenarioCharacterControl : public Il2CppObject
	{
	public:
		ScenarioCharacterTarget* target; // 0x18
		::UnityEngine::Transform* SpinePos; // 0x20
		TweenPosition* moveTween; // 0x28
		UIScenarioNew* scenarioUI; // 0x30
		::UnityEngine::Animator* actionAnimator; // 0x38
		::UnityEngine::Transform* effectPos; // 0x40
		::UnityEngine::Transform* emoticonPos; // 0x48
		::UnityEngine::Vector3* DefaultPos; // 0x50
		::System::Single DefaultScaleRatio; // 0x5C
		Il2CppObject* tweenInfos; // 0x60
		Il2CppObject* charGoDictionary; // 0x68
		::System::String* currentSpineName; // 0x70
		Il2CppObject* effectGoDictionary; // 0x78
		Il2CppObject* emoticonGoDictionary; // 0x80
		::System::Int32 _CurrentCharacterRenderQueue_k__BackingField; // 0x88
		::UnityEngine::Transform* myTransform; // 0x90
		UIPanel* parentPanel; // 0x98
		::FlatData::ScenarioCharacterBehaviors* _prevBehavior_k__BackingField; // 0xA0

		::System::Int32 get_CurrentCharacterRenderQueue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOCHARACTERCONTROL_GET_CURRENTCHARACTERRENDERQUEUE_OFFSET))(nullptr);
		}

		UIScenarioNew* get_ScenarioUI()
		{
			return ((UIScenarioNew*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOCHARACTERCONTROL_GET_SCENARIOUI_OFFSET))(nullptr);
		}

		::System::Boolean get_HasAnyActiveSpine()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOCHARACTERCONTROL_GET_HASANYACTIVESPINE_OFFSET))(nullptr);
		}

		::System::Void set_prevBehavior(::FlatData::ScenarioCharacterBehaviors* arg)
		{
			((::System::Void(*)(::FlatData::ScenarioCharacterBehaviors*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOCHARACTERCONTROL_SET_PREVBEHAVIOR_OFFSET))(arg, nullptr);
		}

		::System::Void SetSpineAndShape(::System::String* str, ::System::String* str2, ::FlatData::ScenarioCharacterBehaviors* arg, ::FlatData::ScenarioCharacterShapes* arg2, ::System::Boolean arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::FlatData::ScenarioCharacterBehaviors*, ::FlatData::ScenarioCharacterShapes*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOCHARACTERCONTROL_SETSPINEANDSHAPE_OFFSET))(str, str2, arg, arg2, arg3, arg4, nullptr);
		}

		UIPanel* get_ParentPanel()
		{
			return ((UIPanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOCHARACTERCONTROL_GET_PARENTPANEL_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOCHARACTERCONTROL_CLEAR_OFFSET))(nullptr);
		}

		::UnityEngine::Animator* get_ActionAnimator()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOCHARACTERCONTROL_GET_ACTIONANIMATOR_OFFSET))(nullptr);
		}

		::System::Void SetDimmedForOtherCharacter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOCHARACTERCONTROL_SETDIMMEDFOROTHERCHARACTER_OFFSET))(nullptr);
		}

		::System::Void InitBehavior(::FlatData::ScenarioCharacterBehaviors* arg, ::UnityEngine::Vector3* arg2)
		{
			((::System::Void(*)(::FlatData::ScenarioCharacterBehaviors*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOCHARACTERCONTROL_INITBEHAVIOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void InitAction(::FlatData::ScenarioCharacterAction* arg)
		{
			((::System::Void(*)(::FlatData::ScenarioCharacterAction*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOCHARACTERCONTROL_INITACTION_OFFSET))(arg, nullptr);
		}

		::System::Void InitEffect(::System::UInt32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::UInt32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOCHARACTERCONTROL_INITEFFECT_OFFSET))(arg, str, nullptr);
		}

		::System::Void PreInstantiate(ScenarioCharacterControlInfo* arg)
		{
			((::System::Void(*)(ScenarioCharacterControlInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOCHARACTERCONTROL_PREINSTANTIATE_OFFSET))(arg, nullptr);
		}

		::FlatData::ScenarioCharacterBehaviors* get_prevBehavior()
		{
			return ((::FlatData::ScenarioCharacterBehaviors*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOCHARACTERCONTROL_GET_PREVBEHAVIOR_OFFSET))(nullptr);
		}

		::System::Void InitEmoticon(::System::UInt32 arg, ::System::String* str, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::UInt32, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOCHARACTERCONTROL_INITEMOTICON_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void SetActiveEmoticon(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOCHARACTERCONTROL_SETACTIVEEMOTICON_OFFSET))(arg, nullptr);
		}

		::System::Void Init(ScenarioCharacterControlInfo* arg, ::System::Boolean arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(ScenarioCharacterControlInfo*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOCHARACTERCONTROL_INIT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void set_CurrentCharacterRenderQueue(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOCHARACTERCONTROL_SET_CURRENTCHARACTERRENDERQUEUE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOCHARACTERCONTROL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SettingEmotionRenderQ(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOCHARACTERCONTROL_SETTINGEMOTIONRENDERQ_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Transform* get_MyTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOCHARACTERCONTROL_GET_MYTRANSFORM_OFFSET))(nullptr);
		}

		::System::Void InitSpineAndShapes(::System::String* str, ::System::String* str2, ::FlatData::ScenarioCharacterBehaviors* arg, ::FlatData::ScenarioCharacterShapes* arg2, ::System::Boolean arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::FlatData::ScenarioCharacterBehaviors*, ::FlatData::ScenarioCharacterShapes*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOCHARACTERCONTROL_INITSPINEANDSHAPES_OFFSET))(str, str2, arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SetToDefaultPos()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOCHARACTERCONTROL_SETTODEFAULTPOS_OFFSET))(nullptr);
		}

	};

