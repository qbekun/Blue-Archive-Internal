#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class DrivenRectTransformTracker; }
namespace UnityEngine { class Vector2; }

#define UNITYENGINE_UI_ASPECTRATIOFITTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA463EC0)
#define UNITYENGINE_UI_ASPECTRATIOFITTER_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0xA463ED0)
#define UNITYENGINE_UI_ASPECTRATIOFITTER_GETSIZEDELTATOPRODUCESIZE_OFFSET UNITYSDK_OFFSET(0xA464010)
#define UNITYENGINE_UI_ASPECTRATIOFITTER_SETLAYOUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0xA464220)
#define UNITYENGINE_UI_ASPECTRATIOFITTER_UPDATERECT_OFFSET UNITYSDK_OFFSET(0xA464230)
#define UNITYENGINE_UI_ASPECTRATIOFITTER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA464650)
#define UNITYENGINE_UI_ASPECTRATIOFITTER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA4646F0)
#define UNITYENGINE_UI_ASPECTRATIOFITTER_SETDIRTY_OFFSET UNITYSDK_OFFSET(0xA464000)
#define UNITYENGINE_UI_ASPECTRATIOFITTER_GET_ASPECTMODE_OFFSET UNITYSDK_OFFSET(0xA464BD0)
#define UNITYENGINE_UI_ASPECTRATIOFITTER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0xA464BE0)
#define UNITYENGINE_UI_ASPECTRATIOFITTER_START_OFFSET UNITYSDK_OFFSET(0xA464BF0)
#define UNITYENGINE_UI_ASPECTRATIOFITTER_ISCOMPONENTVALIDONOBJECT_OFFSET UNITYSDK_OFFSET(0xA4645A0)
#define UNITYENGINE_UI_ASPECTRATIOFITTER_UPDATE_OFFSET UNITYSDK_OFFSET(0xA464C60)
#define UNITYENGINE_UI_ASPECTRATIOFITTER_SET_ASPECTRATIO_OFFSET UNITYSDK_OFFSET(0xA464C70)
#define UNITYENGINE_UI_ASPECTRATIOFITTER_DOESPARENTEXISTS_OFFSET UNITYSDK_OFFSET(0xA464CD0)
#define UNITYENGINE_UI_ASPECTRATIOFITTER_ISASPECTMODEVALID_OFFSET UNITYSDK_OFFSET(0xA464C40)
#define UNITYENGINE_UI_ASPECTRATIOFITTER_GET_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA463F70)
#define UNITYENGINE_UI_ASPECTRATIOFITTER_SET_ASPECTMODE_OFFSET UNITYSDK_OFFSET(0xA464CE0)
#define UNITYENGINE_UI_ASPECTRATIOFITTER_SETLAYOUTVERTICAL_OFFSET UNITYSDK_OFFSET(0xA464D40)
#define UNITYENGINE_UI_ASPECTRATIOFITTER_GETPARENTSIZE_OFFSET UNITYSDK_OFFSET(0xA464120)
#define UNITYENGINE_UI_ASPECTRATIOFITTER_GET_ASPECTRATIO_OFFSET UNITYSDK_OFFSET(0xA464D50)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int AspectRatioFitter_TypeDefinitionIndex = 34796;

	class AspectRatioFitter : public Il2CppObject
	{
	public:
		AspectMode* m_AspectMode; // 0x18
		::System::Single m_AspectRatio; // 0x1C
		::UnityEngine::RectTransform* m_Rect; // 0x20
		::System::Boolean m_DelayedSetDirty; // 0x28
		::System::Boolean m_DoesParentExist; // 0x29
		::UnityEngine::DrivenRectTransformTracker* m_Tracker; // 0x2A

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ASPECTRATIOFITTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnTransformParentChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ASPECTRATIOFITTER_ONTRANSFORMPARENTCHANGED_OFFSET))(nullptr);
		}

		::System::Single GetSizeDeltaToProduceSize(::System::Single arg, ::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ASPECTRATIOFITTER_GETSIZEDELTATOPRODUCESIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetLayoutHorizontal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ASPECTRATIOFITTER_SETLAYOUTHORIZONTAL_OFFSET))(nullptr);
		}

		::System::Void UpdateRect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ASPECTRATIOFITTER_UPDATERECT_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ASPECTRATIOFITTER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ASPECTRATIOFITTER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void SetDirty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ASPECTRATIOFITTER_SETDIRTY_OFFSET))(nullptr);
		}

		AspectMode* get_aspectMode()
		{
			return (return (AspectMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ASPECTRATIOFITTER_GET_ASPECTMODE_OFFSET))(nullptr);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ASPECTRATIOFITTER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ASPECTRATIOFITTER_START_OFFSET))(nullptr);
		}

		::System::Boolean IsComponentValidOnObject()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ASPECTRATIOFITTER_ISCOMPONENTVALIDONOBJECT_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ASPECTRATIOFITTER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void set_aspectRatio(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ASPECTRATIOFITTER_SET_ASPECTRATIO_OFFSET))(arg, nullptr);
		}

		::System::Boolean DoesParentExists()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ASPECTRATIOFITTER_DOESPARENTEXISTS_OFFSET))(nullptr);
		}

		::System::Boolean IsAspectModeValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ASPECTRATIOFITTER_ISASPECTMODEVALID_OFFSET))(nullptr);
		}

		::UnityEngine::RectTransform* get_rectTransform()
		{
			return (return (::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ASPECTRATIOFITTER_GET_RECTTRANSFORM_OFFSET))(nullptr);
		}

		::System::Void set_aspectMode(AspectMode* arg)
		{
			((::System::Void(*)(AspectMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ASPECTRATIOFITTER_SET_ASPECTMODE_OFFSET))(arg, nullptr);
		}

		::System::Void SetLayoutVertical()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ASPECTRATIOFITTER_SETLAYOUTVERTICAL_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* GetParentSize()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ASPECTRATIOFITTER_GETPARENTSIZE_OFFSET))(nullptr);
		}

		::System::Single get_aspectRatio()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ASPECTRATIOFITTER_GET_ASPECTRATIO_OFFSET))(nullptr);
		}

	};
}

