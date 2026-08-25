#pragma once
#include "unitysdk.h"

class UIScenarioNew;
class UIScenarioMaterialController;
class UIPanel;
class UITexture;
class TweenPosition;
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Material; }
class TweenScale;
namespace UnityEngine { class RenderTexture; }
class ScenarioScriptInfo;
namespace MX::Data::Excel { class ScenarioBGNameExcel; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Vector2; }
namespace FlatData { class ScenarioBGScroll; }

#define UISCENARIOBGCONTROL_GET_PANELRENDERQUEUE_OFFSET UNITYSDK_OFFSET(0x27CF6C0)
#define UISCENARIOBGCONTROL_GET_BGOVERLAP_OFFSET UNITYSDK_OFFSET(0x27CF6E0)
#define UISCENARIOBGCONTROL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x27CF6F0)
#define UISCENARIOBGCONTROL_SETACTIVEBG_OFFSET UNITYSDK_OFFSET(0x27CF920)
#define UISCENARIOBGCONTROL_CLEAR_OFFSET UNITYSDK_OFFSET(0x27CF980)
#define UISCENARIOBGCONTROL_INITBG_OFFSET UNITYSDK_OFFSET(0x27D0140)
#define UISCENARIOBGCONTROL_PREINSTANTIATE_OFFSET UNITYSDK_OFFSET(0x27D1400)
#define UISCENARIOBGCONTROL_INITBG_OFFSET UNITYSDK_OFFSET(0x27D02E0)
#define UISCENARIOBGCONTROL_INITBGEFFECT_OFFSET UNITYSDK_OFFSET(0x27D0CB0)
#define UISCENARIOBGCONTROL_CREATEBLURREDSCREENSHOT_OFFSET UNITYSDK_OFFSET(0x27D1430)
#define UISCENARIOBGCONTROL_ADDUILAYER_OFFSET UNITYSDK_OFFSET(0x27D27D0)
#define UISCENARIOBGCONTROL_REMOVEUILAYER_OFFSET UNITYSDK_OFFSET(0x27D2750)
#define UISCENARIOBGCONTROL_REFRESHRENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0x27D2850)
#define UISCENARIOBGCONTROL_INITBGEFFECT_OFFSET UNITYSDK_OFFSET(0x27D1D50)
#define UISCENARIOBGCONTROL_INITPOSEFFECT_OFFSET UNITYSDK_OFFSET(0x27D2530)
#define UISCENARIOBGCONTROL_SETEFFECTDEPTH_OFFSET UNITYSDK_OFFSET(0x27D31C0)
#define UISCENARIOBGCONTROL_INITSHAKE_OFFSET UNITYSDK_OFFSET(0x27D0F80)
#define UISCENARIOBGCONTROL_INITSCROLL_OFFSET UNITYSDK_OFFSET(0x27D2360)
#define UISCENARIOBGCONTROL_INITZOOM_OFFSET UNITYSDK_OFFSET(0x27D1050)
#define UISCENARIOBGCONTROL_.CTOR_OFFSET UNITYSDK_OFFSET(0x27D3700)

	inline static constexpr unsigned int UIScenarioBgControl_TypeDefinitionIndex = 7614;

	class UIScenarioBgControl : public Il2CppObject
	{
	public:
		UIScenarioNew* scenarioUI; // 0x18
		UIScenarioMaterialController* scenarioShaderController; // 0x20
		UIPanel* panel; // 0x28
		UITexture* bg; // 0x30
		UITexture* bgOverlap; // 0x38
		UITexture* rtBg; // 0x40
		TweenPosition* shakeTween; // 0x48
		TweenPosition* scrollTween; // 0x50
		::UnityEngine::Transform* scrollTransform; // 0x58
		::UnityEngine::Material* bgBlurMaterialRef; // 0x60
		::System::Int32 bgBlurAddIteration; // 0x68
		::UnityEngine::Transform* bgEffectPos; // 0x70
		TweenScale* scaleTween; // 0x78
		::UnityEngine::Transform* scaleTransform; // 0x80
		Il2CppObject* bgEffectDepthControls; // 0x88
		Il2CppObject* bgEffectDictionary; // 0x90
		Il2CppObject* posEffectDepthControls; // 0x98
		Il2CppObject* posEffectDictionary; // 0xA0
		Il2CppObject* spineBgDictionary; // 0xA8
		::UnityEngine::Material* bgBlurMaterial; // 0xB0
		::UnityEngine::RenderTexture* bgBlurRT; // 0xB8
		Il2CppObject* currentBGEffectNames; // 0xC0
		::System::String* currentPosEffectName; // 0xC8

		::System::Int32 get_PanelRenderQueue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOBGCONTROL_GET_PANELRENDERQUEUE_OFFSET))(nullptr);
		}

		UITexture* get_BgOverlap()
		{
			return ((UITexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOBGCONTROL_GET_BGOVERLAP_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOBGCONTROL_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void SetActiveBg(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOBGCONTROL_SETACTIVEBG_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOBGCONTROL_CLEAR_OFFSET))(nullptr);
		}

		::System::Void InitBg(ScenarioScriptInfo* arg)
		{
			((::System::Void(*)(ScenarioScriptInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOBGCONTROL_INITBG_OFFSET))(arg, nullptr);
		}

		::System::Void PreInstantiate(ScenarioScriptInfo* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(ScenarioScriptInfo*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOBGCONTROL_PREINSTANTIATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void InitBg(::MX::Data::Excel::ScenarioBGNameExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ScenarioBGNameExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOBGCONTROL_INITBG_OFFSET))(arg, nullptr);
		}

		::System::Void InitBgEffect(ScenarioScriptInfo* arg, ::System::Boolean arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(ScenarioScriptInfo*, ::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOBGCONTROL_INITBGEFFECT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::UnityEngine::Texture* CreateBlurredScreenShot()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOBGCONTROL_CREATEBLURREDSCREENSHOT_OFFSET))(nullptr);
		}

		::System::Void AddUILayer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOBGCONTROL_ADDUILAYER_OFFSET))(nullptr);
		}

		::System::Void RemoveUILayer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOBGCONTROL_REMOVEUILAYER_OFFSET))(nullptr);
		}

		::System::Void RefreshRenderTexture()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOBGCONTROL_REFRESHRENDERTEXTURE_OFFSET))(nullptr);
		}

		::System::Void InitBgEffect(::System::String* str, ::System::String* str2, ::System::Boolean arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOBGCONTROL_INITBGEFFECT_OFFSET))(str, str2, arg, arg2, nullptr);
		}

		::System::Void InitPosEffect(::System::String* str, ::UnityEngine::Vector2* arg, ::System::Boolean arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Vector2*, ::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOBGCONTROL_INITPOSEFFECT_OFFSET))(str, arg, arg2, arg3, nullptr);
		}

		::System::Void SetEffectDepth()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOBGCONTROL_SETEFFECTDEPTH_OFFSET))(nullptr);
		}

		::System::Void InitShake(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOBGCONTROL_INITSHAKE_OFFSET))(arg, nullptr);
		}

		::System::Void InitScroll(::FlatData::ScenarioBGScroll* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Int64 arg4)
		{
			((::System::Void(*)(::FlatData::ScenarioBGScroll*, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOBGCONTROL_INITSCROLL_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void InitZoom(ScenarioScriptInfo* arg)
		{
			((::System::Void(*)(ScenarioScriptInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOBGCONTROL_INITZOOM_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOBGCONTROL_.CTOR_OFFSET))(nullptr);
		}

	};

