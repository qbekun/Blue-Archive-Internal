#pragma once
#include "unitysdk.h"

class UIProgressBar;
class OnDragFinished;
namespace UnityEngine { class Transform; }
class UIWidget;
class FillDirection;
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector2; }

#define UIPROGRESSBAR_GET_CACHEDCAMERA_OFFSET UNITYSDK_OFFSET(0xA31E30)
#define UIPROGRESSBAR_SET_FILLDIRECTION_OFFSET UNITYSDK_OFFSET(0xA31EF0)
#define UIPROGRESSBAR_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA31F20)
#define UIPROGRESSBAR_SETTHUMBPOSITION_OFFSET UNITYSDK_OFFSET(0xA32010)
#define UIPROGRESSBAR_GET_CACHEDTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA32460)
#define UIPROGRESSBAR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA324E0)
#define UIPROGRESSBAR_GET_FOREGROUNDWIDGET_OFFSET UNITYSDK_OFFSET(0xA32580)
#define UIPROGRESSBAR_UPDATE_OFFSET UNITYSDK_OFFSET(0xA32590)
#define UIPROGRESSBAR_SCREENTOVALUE_OFFSET UNITYSDK_OFFSET(0xA325B0)
#define UIPROGRESSBAR_SET_FOREGROUNDWIDGET_OFFSET UNITYSDK_OFFSET(0xA32940)
#define UIPROGRESSBAR_UPGRADE_OFFSET UNITYSDK_OFFSET(0xA329B0)
#define UIPROGRESSBAR_LOCALTOVALUE_OFFSET UNITYSDK_OFFSET(0xA329C0)
#define UIPROGRESSBAR_GET_ALPHA_OFFSET UNITYSDK_OFFSET(0xA32BD0)
#define UIPROGRESSBAR_GET_ISINVERTED_OFFSET UNITYSDK_OFFSET(0xA32BC0)
#define UIPROGRESSBAR_SET_OFFSET UNITYSDK_OFFSET(0xA32C90)
#define UIPROGRESSBAR_GET_ISHORIZONTAL_OFFSET UNITYSDK_OFFSET(0xA32BB0)
#define UIPROGRESSBAR_GET_BACKGROUNDWIDGET_OFFSET UNITYSDK_OFFSET(0xA33290)
#define UIPROGRESSBAR_FORCEUPDATE_OFFSET UNITYSDK_OFFSET(0xA332A0)
#define UIPROGRESSBAR_GET_FILLDIRECTION_OFFSET UNITYSDK_OFFSET(0xA346A0)
#define UIPROGRESSBAR_SET_ALPHA_OFFSET UNITYSDK_OFFSET(0xA346B0)
#define UIPROGRESSBAR_ONSTART_OFFSET UNITYSDK_OFFSET(0xA34BD0)
#define UIPROGRESSBAR_ONPAN_OFFSET UNITYSDK_OFFSET(0xA34BE0)
#define UIPROGRESSBAR_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0xA34CE0)
#define UIPROGRESSBAR_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xA34CD0)
#define UIPROGRESSBAR_SET_BACKGROUNDWIDGET_OFFSET UNITYSDK_OFFSET(0xA34E30)
#define UIPROGRESSBAR_START_OFFSET UNITYSDK_OFFSET(0xA34EA0)

	inline static constexpr unsigned int UIProgressBar_TypeDefinitionIndex = 64;

	class UIProgressBar : public Il2CppObject
	{
	public:
		UIProgressBar* current; // 0x0
		OnDragFinished* onDragFinished; // 0x18
		::UnityEngine::Transform* thumb; // 0x20
		UIWidget* mBG; // 0x28
		UIWidget* mFG; // 0x30
		::System::Single mValue; // 0x38
		FillDirection* mFill; // 0x3C
		::System::Boolean mStarted; // 0x40
		::UnityEngine::Transform* mTrans; // 0x48
		::System::Boolean mIsDirty; // 0x50
		::UnityEngine::Camera* mCam; // 0x58
		::System::Single mOffset; // 0x60
		::System::Int32 numberOfSteps; // 0x64
		Il2CppObject* onChange; // 0x68

		::UnityEngine::Camera* get_cachedCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPROGRESSBAR_GET_CACHEDCAMERA_OFFSET))(nullptr);
		}

		::System::Void set_fillDirection(FillDirection* arg)
		{
			((::System::Void(*)(FillDirection*, ::PVOID))((::PBYTE)hIl2Cpp + UIPROGRESSBAR_SET_FILLDIRECTION_OFFSET))(arg, nullptr);
		}

		::System::Single get_value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPROGRESSBAR_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void SetThumbPosition(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UIPROGRESSBAR_SETTHUMBPOSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Transform* get_cachedTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPROGRESSBAR_GET_CACHEDTRANSFORM_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPROGRESSBAR_.CTOR_OFFSET))(nullptr);
		}

		UIWidget* get_foregroundWidget()
		{
			return ((UIWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPROGRESSBAR_GET_FOREGROUNDWIDGET_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPROGRESSBAR_UPDATE_OFFSET))(nullptr);
		}

		::System::Single ScreenToValue(::UnityEngine::Vector2* arg)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UIPROGRESSBAR_SCREENTOVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void set_foregroundWidget(UIWidget* arg)
		{
			((::System::Void(*)(UIWidget*, ::PVOID))((::PBYTE)hIl2Cpp + UIPROGRESSBAR_SET_FOREGROUNDWIDGET_OFFSET))(arg, nullptr);
		}

		::System::Void Upgrade()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPROGRESSBAR_UPGRADE_OFFSET))(nullptr);
		}

		::System::Single LocalToValue(::UnityEngine::Vector2* arg)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UIPROGRESSBAR_LOCALTOVALUE_OFFSET))(arg, nullptr);
		}

		::System::Single get_alpha()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPROGRESSBAR_GET_ALPHA_OFFSET))(nullptr);
		}

		::System::Boolean get_isInverted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPROGRESSBAR_GET_ISINVERTED_OFFSET))(nullptr);
		}

		::System::Void Set(::System::Single arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPROGRESSBAR_SET_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_isHorizontal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPROGRESSBAR_GET_ISHORIZONTAL_OFFSET))(nullptr);
		}

		UIWidget* get_backgroundWidget()
		{
			return ((UIWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPROGRESSBAR_GET_BACKGROUNDWIDGET_OFFSET))(nullptr);
		}

		::System::Void ForceUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPROGRESSBAR_FORCEUPDATE_OFFSET))(nullptr);
		}

		FillDirection* get_fillDirection()
		{
			return ((FillDirection*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPROGRESSBAR_GET_FILLDIRECTION_OFFSET))(nullptr);
		}

		::System::Void set_alpha(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIPROGRESSBAR_SET_ALPHA_OFFSET))(arg, nullptr);
		}

		::System::Void OnStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPROGRESSBAR_ONSTART_OFFSET))(nullptr);
		}

		::System::Void OnPan(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UIPROGRESSBAR_ONPAN_OFFSET))(arg, nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPROGRESSBAR_ONVALIDATE_OFFSET))(nullptr);
		}

		::System::Void set_value(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIPROGRESSBAR_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::Void set_backgroundWidget(UIWidget* arg)
		{
			((::System::Void(*)(UIWidget*, ::PVOID))((::PBYTE)hIl2Cpp + UIPROGRESSBAR_SET_BACKGROUNDWIDGET_OFFSET))(arg, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPROGRESSBAR_START_OFFSET))(nullptr);
		}

	};

