#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Graphic; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Camera; }

#define UNITYENGINE_UI_MASK_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0xA46CB60)
#define UNITYENGINE_UI_MASK_.CTOR_OFFSET UNITYSDK_OFFSET(0xA46D590)
#define UNITYENGINE_UI_MASK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA46D5A0)
#define UNITYENGINE_UI_MASK_GET_SHOWMASKGRAPHIC_OFFSET UNITYSDK_OFFSET(0xA46DC50)
#define UNITYENGINE_UI_MASK_ISRAYCASTLOCATIONVALID_OFFSET UNITYSDK_OFFSET(0xA46DC60)
#define UNITYENGINE_UI_MASK_ONSIBLINGGRAPHICENABLEDDISABLED_OFFSET UNITYSDK_OFFSET(0xA46DDB0)
#define UNITYENGINE_UI_MASK_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA46DDC0)
#define UNITYENGINE_UI_MASK_GET_GRAPHIC_OFFSET UNITYSDK_OFFSET(0xA46D530)
#define UNITYENGINE_UI_MASK_GET_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA46DD50)
#define UNITYENGINE_UI_MASK_MASKENABLED_OFFSET UNITYSDK_OFFSET(0xA46E0E0)
#define UNITYENGINE_UI_MASK_SET_SHOWMASKGRAPHIC_OFFSET UNITYSDK_OFFSET(0xA46E1C0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Mask_TypeDefinitionIndex = 34822;

	class Mask : public Il2CppObject
	{
	public:
		::UnityEngine::RectTransform* m_RectTransform; // 0x18
		::System::Boolean m_ShowMaskGraphic; // 0x20
		::UnityEngine::UI::Graphic* m_Graphic; // 0x28
		::UnityEngine::Material* m_MaskMaterial; // 0x30
		::UnityEngine::Material* m_UnmaskMaterial; // 0x38

		::UnityEngine::Material* GetModifiedMaterial(::UnityEngine::Material* arg)
		{
			return (return (::UnityEngine::Material*(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASK_GETMODIFIEDMATERIAL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASK_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Boolean get_showMaskGraphic()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASK_GET_SHOWMASKGRAPHIC_OFFSET))(nullptr);
		}

		::System::Boolean IsRaycastLocationValid(::UnityEngine::Vector2* arg, ::UnityEngine::Camera* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector2*, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASK_ISRAYCASTLOCATIONVALID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnSiblingGraphicEnabledDisabled()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASK_ONSIBLINGGRAPHICENABLEDDISABLED_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASK_ONENABLE_OFFSET))(nullptr);
		}

		::UnityEngine::UI::Graphic* get_graphic()
		{
			return (return (::UnityEngine::UI::Graphic*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASK_GET_GRAPHIC_OFFSET))(nullptr);
		}

		::UnityEngine::RectTransform* get_rectTransform()
		{
			return (return (::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASK_GET_RECTTRANSFORM_OFFSET))(nullptr);
		}

		::System::Boolean MaskEnabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASK_MASKENABLED_OFFSET))(nullptr);
		}

		::System::Void set_showMaskGraphic(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASK_SET_SHOWMASKGRAPHIC_OFFSET))(arg, nullptr);
		}

	};
}

