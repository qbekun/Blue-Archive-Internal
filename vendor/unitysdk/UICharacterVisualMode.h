#pragma once
#include "unitysdk.h"

class UICharacterVisualMode_UIGroup;
class PortraitSpineCharacter;
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class GameObject; }
namespace MX::Data::Excel { class CharacterIllustCoordinateExcel; }
class AnimType;
class MXButton;
class UITexture;
class CharacterObject;
class UIWidget;
namespace UnityEngine { class Transform; }

#define UICHARACTERVISUALMODE_GET_SHOWBUTTON_OFFSET UNITYSDK_OFFSET(0x22C38B0)
#define UICHARACTERVISUALMODE_ONCLICKSHOW_OFFSET UNITYSDK_OFFSET(0x22C38D0)
#define UICHARACTERVISUALMODE_CO_RETURNTODEFAULTPOSITION_OFFSET UNITYSDK_OFFSET(0x22C3AD0)
#define UICHARACTERVISUALMODE_PLAYZOOMINOUT_OFFSET UNITYSDK_OFFSET(0x22C3B60)
#define UICHARACTERVISUALMODE_ONCLICKRESET_OFFSET UNITYSDK_OFFSET(0x22C4680)
#define UICHARACTERVISUALMODE_ONMOVESPINE_OFFSET UNITYSDK_OFFSET(0x22C48E0)
#define UICHARACTERVISUALMODE_SETPORTRAIT_OFFSET UNITYSDK_OFFSET(0x22C4A90)
#define UICHARACTERVISUALMODE_ONOPENED_OFFSET UNITYSDK_OFFSET(0x22C4D80)
#define UICHARACTERVISUALMODE_CO_WAITANDOPEN_OFFSET UNITYSDK_OFFSET(0x22C4E10)
#define UICHARACTERVISUALMODE_ONLYEDITORZOOMINOUT_OFFSET UNITYSDK_OFFSET(0x22C4EA0)
#define UICHARACTERVISUALMODE_GET_BACKGROUNDTEXTURE_OFFSET UNITYSDK_OFFSET(0x22C5020)
#define UICHARACTERVISUALMODE_COOPENANIMATION_OFFSET UNITYSDK_OFFSET(0x22C5040)
#define UICHARACTERVISUALMODE_GETPLATFORMUIGROUP_OFFSET UNITYSDK_OFFSET(0x22C5100)
#define UICHARACTERVISUALMODE_FASTENSPINE_OFFSET UNITYSDK_OFFSET(0x22C4220)
#define UICHARACTERVISUALMODE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x22C5110)
#define UICHARACTERVISUALMODE_SETDATA_OFFSET UNITYSDK_OFFSET(0x22C5130)
#define UICHARACTERVISUALMODE_GET_HIDEBUTTON_OFFSET UNITYSDK_OFFSET(0x22C5440)
#define UICHARACTERVISUALMODE_AWAKE_OFFSET UNITYSDK_OFFSET(0x22C5460)
#define UICHARACTERVISUALMODE___N__0_OFFSET UNITYSDK_OFFSET(0x22C57F0)
#define UICHARACTERVISUALMODE_ONPRESSSCREEN_OFFSET UNITYSDK_OFFSET(0x22C5810)
#define UICHARACTERVISUALMODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x22C5940)
#define UICHARACTERVISUALMODE_ONCLICKHIDE_OFFSET UNITYSDK_OFFSET(0x22C5970)
#define UICHARACTERVISUALMODE_GET_RESETDISABLEBUTTON_OFFSET UNITYSDK_OFFSET(0x22C48C0)
#define UICHARACTERVISUALMODE_CHECKRESETBUTTONSTATE_OFFSET UNITYSDK_OFFSET(0x22C44B0)
#define UICHARACTERVISUALMODE_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x22C3950)
#define UICHARACTERVISUALMODE_GET_PORTRAITOFFSETWIDGET_OFFSET UNITYSDK_OFFSET(0x22C4D60)
#define UICHARACTERVISUALMODE_GET_PORTRAITPOS_OFFSET UNITYSDK_OFFSET(0x22C4D40)
#define UICHARACTERVISUALMODE_SETSCREENAUTOROTATION_OFFSET UNITYSDK_OFFSET(0x22C5120)
#define UICHARACTERVISUALMODE_UPDATEGYRO_OFFSET UNITYSDK_OFFSET(0x22C59A0)
#define UICHARACTERVISUALMODE_UPDATE_OFFSET UNITYSDK_OFFSET(0x22C59B0)
#define UICHARACTERVISUALMODE_GET_RESETBUTTON_OFFSET UNITYSDK_OFFSET(0x22C48A0)
#define UICHARACTERVISUALMODE_ONBACK_OFFSET UNITYSDK_OFFSET(0x22C5B50)

	inline static constexpr unsigned int UICharacterVisualMode_TypeDefinitionIndex = 4808;

	class UICharacterVisualMode : public Il2CppObject
	{
	public:
		UICharacterVisualMode_UIGroup* uiGroupMobile; // 0xD8
		UICharacterVisualMode_UIGroup* uiGroupPC; // 0xE0
		PortraitSpineCharacter* spineCharacter; // 0xE8
		::System::Int64 characterUniqueId; // 0xF0
		::UnityEngine::Vector3* startMousePos; // 0xF8
		::UnityEngine::Vector3* startObjectPos; // 0x104
		::UnityEngine::Vector3* bgPos; // 0x110
		::UnityEngine::Vector3* upperRight; // 0x11C
		::UnityEngine::Vector3* lowerLeft; // 0x128
		::UnityEngine::Vector3* errorRange; // 0x134
		::UnityEngine::Vector3* correctionObjStartPos; // 0x140
		::System::Single zoomSpeed; // 0x14C
		::System::Single minSize; // 0x150
		::System::Single maxSize; // 0x154
		::System::Single defaultSize; // 0x158
		::System::Single gyroMoveSpeed; // 0x15C
		::System::Single elapsedTime; // 0x160
		::UnityEngine::GameObject* correctionPosObj; // 0x168
		::UnityEngine::GameObject* centerPos; // 0x170
		::System::Boolean pressed; // 0x178
		::System::Boolean isZoom; // 0x179
		::System::Boolean isLoopWaitAndOpen; // 0x17A
		::System::Boolean isMovingToDefaultPos; // 0x17B
		::System::Single GyroRange; // 0x0
		::System::String* AnimName; // 0x0
		::MX::Data::Excel::CharacterIllustCoordinateExcel* excel; // 0x180
		AnimType* type; // 0x190
		::UnityEngine::Vector3* spineCharacterInitialPosition; // 0x194

		MXButton* get_ShowButton()
		{
			return ((MXButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERVISUALMODE_GET_SHOWBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickShow()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERVISUALMODE_ONCLICKSHOW_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_ReturnToDefaultPosition()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERVISUALMODE_CO_RETURNTODEFAULTPOSITION_OFFSET))(nullptr);
		}

		::System::Boolean PlayZoomInOut()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERVISUALMODE_PLAYZOOMINOUT_OFFSET))(nullptr);
		}

		::System::Void OnClickReset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERVISUALMODE_ONCLICKRESET_OFFSET))(nullptr);
		}

		::System::Void OnMoveSpine()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERVISUALMODE_ONMOVESPINE_OFFSET))(nullptr);
		}

		::System::Void SetPortrait(::System::Int64 arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERVISUALMODE_SETPORTRAIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERVISUALMODE_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* co_WaitAndOpen()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERVISUALMODE_CO_WAITANDOPEN_OFFSET))(nullptr);
		}

		::System::Void OnlyEditorZoomInOut(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERVISUALMODE_ONLYEDITORZOOMINOUT_OFFSET))(arg, nullptr);
		}

		UITexture* get_backgroundTexture()
		{
			return ((UITexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERVISUALMODE_GET_BACKGROUNDTEXTURE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoOpenAnimation(::System::Boolean arg, ::System::Action* arg2, ::System::Boolean arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::System::Action*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERVISUALMODE_COOPENANIMATION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		UICharacterVisualMode_UIGroup* GetPlatformUIGroup()
		{
			return ((UICharacterVisualMode_UIGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERVISUALMODE_GETPLATFORMUIGROUP_OFFSET))(nullptr);
		}

		::System::Void FastenSpine(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERVISUALMODE_FASTENSPINE_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERVISUALMODE_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void SetData(CharacterObject* arg)
		{
			((::System::Void(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERVISUALMODE_SETDATA_OFFSET))(arg, nullptr);
		}

		MXButton* get_HideButton()
		{
			return ((MXButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERVISUALMODE_GET_HIDEBUTTON_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERVISUALMODE_AWAKE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0(::System::Boolean arg, ::System::Action* arg2, ::System::Boolean arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::System::Action*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERVISUALMODE___N__0_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnPressScreen(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERVISUALMODE_ONPRESSSCREEN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERVISUALMODE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickHide()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERVISUALMODE_ONCLICKHIDE_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_resetDisableButton()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERVISUALMODE_GET_RESETDISABLEBUTTON_OFFSET))(nullptr);
		}

		::System::Void CheckResetButtonState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERVISUALMODE_CHECKRESETBUTTONSTATE_OFFSET))(nullptr);
		}

		::System::Void PlayAnimation(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERVISUALMODE_PLAYANIMATION_OFFSET))(arg, nullptr);
		}

		UIWidget* get_PortraitOffsetWidget()
		{
			return ((UIWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERVISUALMODE_GET_PORTRAITOFFSETWIDGET_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_PortraitPos()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERVISUALMODE_GET_PORTRAITPOS_OFFSET))(nullptr);
		}

		::System::Void SetScreenAutoRotation(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERVISUALMODE_SETSCREENAUTOROTATION_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateGyro()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERVISUALMODE_UPDATEGYRO_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERVISUALMODE_UPDATE_OFFSET))(nullptr);
		}

		MXButton* get_resetButton()
		{
			return ((MXButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERVISUALMODE_GET_RESETBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERVISUALMODE_ONBACK_OFFSET))(nullptr);
		}

	};

