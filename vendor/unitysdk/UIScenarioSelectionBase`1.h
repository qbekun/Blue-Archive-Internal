#pragma once
#include "unitysdk.h"

class MXButton;
class MXPhoneticText;
class UIScenarioAutoTimer;
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Coroutine; }
class MXUIKeyMapping;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UISCENARIOSELECTIONBASE`1_GET_SCENARIOSELECTIONKEYMAPID_OFFSET UNITYSDK_OFFSET(0x000000)
#define UISCENARIOSELECTIONBASE`1_SETPCKEYMAPPING_OFFSET UNITYSDK_OFFSET(0x000000)
#define UISCENARIOSELECTIONBASE`1_ONSELECTINTERNAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UISCENARIOSELECTIONBASE`1_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UISCENARIOSELECTIONBASE`1_AWAKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UISCENARIOSELECTIONBASE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UISCENARIOSELECTIONBASE`1_ONENABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UISCENARIOSELECTIONBASE`1_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UISCENARIOSELECTIONBASE`1_ONSELECTED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UISCENARIOSELECTIONBASE`1_PLAYTWEEN_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int UIScenarioSelectionBase`1_TypeDefinitionIndex = 7693;

	class UIScenarioSelectionBase`1 : public Il2CppObject
	{
	public:
		MXButton* Button; // 0x0
		MXPhoneticText* Label; // 0x0
		UIScenarioAutoTimer* AutoTimer; // 0x0
		::System::Int64 SelectionGroup; // 0x0
		::System::Single TweenDelay; // 0x0
		::System::Boolean SendSelection; // 0x0
		::UnityEngine::Animation* EnableAnimation; // 0x0
		::UnityEngine::Coroutine* AnimCoroutine; // 0x0
		::Il2CppArray<::System::Object*>* tweens; // 0x0
		MXUIKeyMapping* MXUIKeyMapping; // 0x0

		::System::String* get_ScenarioSelectionKeymapID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSELECTIONBASE`1_GET_SCENARIOSELECTIONKEYMAPID_OFFSET))(nullptr);
		}

		::System::Void SetPCKeyMapping(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSELECTIONBASE`1_SETPCKEYMAPPING_OFFSET))(arg, nullptr);
		}

		::System::Void OnSelectInternal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSELECTIONBASE`1_ONSELECTINTERNAL_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSELECTIONBASE`1_HANDLEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSELECTIONBASE`1_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSELECTIONBASE`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSELECTIONBASE`1_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSELECTIONBASE`1_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnSelected()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSELECTIONBASE`1_ONSELECTED_OFFSET))(nullptr);
		}

		::System::Void PlayTween()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSELECTIONBASE`1_PLAYTWEEN_OFFSET))(nullptr);
		}

	};

