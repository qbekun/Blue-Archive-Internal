#pragma once
#include "unitysdk.h"

namespace MX::Campaign { class Strategy; }
class UICampaign;
class HexaUI;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::Playables { class PlayableDirector; }
class HexaTileVisual;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define STRATEGYVISUAL__COPLAYSWITCHANIMATION_B__38_0_OFFSET UNITYSDK_OFFSET(0xF854C0)
#define STRATEGYVISUAL_ROTATELEFT_OFFSET UNITYSDK_OFFSET(0xF854F0)
#define STRATEGYVISUAL_DESELECT_OFFSET UNITYSDK_OFFSET(0xF855B0)
#define STRATEGYVISUAL_GET_RENDERERS_OFFSET UNITYSDK_OFFSET(0xF85640)
#define STRATEGYVISUAL_COPLAYHOVERUPANIMATION_OFFSET UNITYSDK_OFFSET(0xF85650)
#define STRATEGYVISUAL_REFRESHVISUALOBJECT_OFFSET UNITYSDK_OFFSET(0xF79390)
#define STRATEGYVISUAL_SET_APPEARANCEPLAYABLEASSET_OFFSET UNITYSDK_OFFSET(0xF856E0)
#define STRATEGYVISUAL_ROTATERIGHT_OFFSET UNITYSDK_OFFSET(0xF85700)
#define STRATEGYVISUAL_ONCHANGESTATE_OFFSET UNITYSDK_OFFSET(0xF857C0)
#define STRATEGYVISUAL_SET_RENDERERS_OFFSET UNITYSDK_OFFSET(0xF85890)
#define STRATEGYVISUAL_AWAKE_OFFSET UNITYSDK_OFFSET(0xF858B0)
#define STRATEGYVISUAL_COPLAYSPAWNANIMATION_OFFSET UNITYSDK_OFFSET(0xF78D40)
#define STRATEGYVISUAL_INITVISUAL_OFFSET UNITYSDK_OFFSET(0xF781F0)
#define STRATEGYVISUAL_SELECT_OFFSET UNITYSDK_OFFSET(0xF85C40)
#define STRATEGYVISUAL_MAKEUI_OFFSET UNITYSDK_OFFSET(0xF85AF0)
#define STRATEGYVISUAL_SETFOG_OFFSET UNITYSDK_OFFSET(0xF81060)
#define STRATEGYVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0xF85CD0)
#define STRATEGYVISUAL_NEEDUI_OFFSET UNITYSDK_OFFSET(0xF85A80)
#define STRATEGYVISUAL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xF85CE0)
#define STRATEGYVISUAL_COPLAYHOVERDOWNANIMATION_OFFSET UNITYSDK_OFFSET(0xF85F50)
#define STRATEGYVISUAL_COPLAYSWITCHANIMATION_OFFSET UNITYSDK_OFFSET(0xF79320)
#define STRATEGYVISUAL_GET_APPEARANCEPLAYABLEASSET_OFFSET UNITYSDK_OFFSET(0xF85FC0)

	inline static constexpr unsigned int StrategyVisual_TypeDefinitionIndex = 868;

	class StrategyVisual : public Il2CppObject
	{
	public:
		::MX::Campaign::Strategy* Data; // 0x18
		UICampaign* uiCampaign; // 0x20
		HexaUI* HexaUI; // 0x28
		::UnityEngine::GameObject* Activated; // 0x30
		::UnityEngine::GameObject* Deactivated; // 0x38
		::UnityEngine::GameObject* Movable; // 0x40
		::UnityEngine::GameObject* UnMovable; // 0x48
		::UnityEngine::Animation* HoverAnimaion; // 0x50
		::UnityEngine::Animation* SwitchAnimation; // 0x58
		::System::String* SwitchUpAnimationName; // 0x60
		::System::String* SwitchDownAnimationName; // 0x68
		::UnityEngine::Animation* ActivateAnimation; // 0x70
		::System::String* ActivateAnimationName; // 0x78
		::System::String* DeactivateAnimationName; // 0x80
		::UnityEngine::Playables::PlayableDirector* _AppearancePlayableAsset_k__BackingField; // 0x88
		Il2CppObject* _Renderers_k__BackingField; // 0x90
		::System::Boolean previousActivated; // 0x98

		::System::Boolean _CoPlaySwitchAnimation_b__38_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRATEGYVISUAL__COPLAYSWITCHANIMATION_B__38_0_OFFSET))(nullptr);
		}

		::System::Void RotateLeft()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRATEGYVISUAL_ROTATELEFT_OFFSET))(nullptr);
		}

		::System::Void Deselect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRATEGYVISUAL_DESELECT_OFFSET))(nullptr);
		}

		Il2CppObject* get_Renderers()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRATEGYVISUAL_GET_RENDERERS_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoPlayHoverUpAnimation()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRATEGYVISUAL_COPLAYHOVERUPANIMATION_OFFSET))(nullptr);
		}

		::System::Void RefreshVisualObject(HexaTileVisual* arg)
		{
			((::System::Void(*)(HexaTileVisual*, ::PVOID))((::PBYTE)hIl2Cpp + STRATEGYVISUAL_REFRESHVISUALOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void set_AppearancePlayableAsset(::UnityEngine::Playables::PlayableDirector* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::PVOID))((::PBYTE)hIl2Cpp + STRATEGYVISUAL_SET_APPEARANCEPLAYABLEASSET_OFFSET))(arg, nullptr);
		}

		::System::Void RotateRight()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRATEGYVISUAL_ROTATERIGHT_OFFSET))(nullptr);
		}

		::System::Boolean OnChangeState(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + STRATEGYVISUAL_ONCHANGESTATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Renderers(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + STRATEGYVISUAL_SET_RENDERERS_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRATEGYVISUAL_AWAKE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoPlaySpawnAnimation()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRATEGYVISUAL_COPLAYSPAWNANIMATION_OFFSET))(nullptr);
		}

		::System::Void InitVisual()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRATEGYVISUAL_INITVISUAL_OFFSET))(nullptr);
		}

		::System::Void Select()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRATEGYVISUAL_SELECT_OFFSET))(nullptr);
		}

		HexaUI* MakeUI()
		{
			return ((HexaUI*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRATEGYVISUAL_MAKEUI_OFFSET))(nullptr);
		}

		::System::Void SetFog(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + STRATEGYVISUAL_SETFOG_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRATEGYVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean NeedUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRATEGYVISUAL_NEEDUI_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRATEGYVISUAL_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoPlayHoverDownAnimation()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRATEGYVISUAL_COPLAYHOVERDOWNANIMATION_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoPlaySwitchAnimation(::System::Boolean arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + STRATEGYVISUAL_COPLAYSWITCHANIMATION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Playables::PlayableDirector* get_AppearancePlayableAsset()
		{
			return ((::UnityEngine::Playables::PlayableDirector*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRATEGYVISUAL_GET_APPEARANCEPLAYABLEASSET_OFFSET))(nullptr);
		}

	};

