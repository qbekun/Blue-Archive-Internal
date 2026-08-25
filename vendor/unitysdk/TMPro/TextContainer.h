#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace TMPro { class TextContainerAnchors; }
namespace UnityEngine { class Rect; }
namespace UnityEngine { class Vector4; }
namespace UnityEngine { class RectTransform; }
namespace TMPro { class TextMeshPro; }

#define TMPRO_TEXTCONTAINER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA10B3F0)
#define TMPRO_TEXTCONTAINER_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xA10B470)
#define TMPRO_TEXTCONTAINER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA10B6E0)
#define TMPRO_TEXTCONTAINER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA10B6F0)
#define TMPRO_TEXTCONTAINER_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xA10B730)
#define TMPRO_TEXTCONTAINER_SETRECT_OFFSET UNITYSDK_OFFSET(0xA10B510)
#define TMPRO_TEXTCONTAINER_SET_RECT_OFFSET UNITYSDK_OFFSET(0xA10B740)
#define TMPRO_TEXTCONTAINER_SET_ISAUTOFITTING_OFFSET UNITYSDK_OFFSET(0xA10B7A0)
#define TMPRO_TEXTCONTAINER_AWAKE_OFFSET UNITYSDK_OFFSET(0xA10B7B0)
#define TMPRO_TEXTCONTAINER_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0xA10B860)
#define TMPRO_TEXTCONTAINER_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0xA10B870)
#define TMPRO_TEXTCONTAINER_GETANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0xA10B910)
#define TMPRO_TEXTCONTAINER_GET_RECT_OFFSET UNITYSDK_OFFSET(0xA10BA10)
#define TMPRO_TEXTCONTAINER_GET_HASCHANGED_OFFSET UNITYSDK_OFFSET(0xA10BA20)
#define TMPRO_TEXTCONTAINER_SET_SIZE_OFFSET UNITYSDK_OFFSET(0xA10BA30)
#define TMPRO_TEXTCONTAINER_SET_ANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0xA10BB10)
#define TMPRO_TEXTCONTAINER_GET_ISDEFAULTHEIGHT_OFFSET UNITYSDK_OFFSET(0xA10BC30)
#define TMPRO_TEXTCONTAINER_GET_TEXTMESHPRO_OFFSET UNITYSDK_OFFSET(0xA10BC40)
#define TMPRO_TEXTCONTAINER_GET_ANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0xA10BCD0)
#define TMPRO_TEXTCONTAINER_GET_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA10BCE0)
#define TMPRO_TEXTCONTAINER_GET_SIZE_OFFSET UNITYSDK_OFFSET(0xA10BD70)
#define TMPRO_TEXTCONTAINER_GET_WORLDCORNERS_OFFSET UNITYSDK_OFFSET(0xA10BDC0)
#define TMPRO_TEXTCONTAINER_GET_CORNERS_OFFSET UNITYSDK_OFFSET(0xA10BDD0)
#define TMPRO_TEXTCONTAINER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0xA10BDE0)
#define TMPRO_TEXTCONTAINER_GET_MARGINS_OFFSET UNITYSDK_OFFSET(0xA10C070)
#define TMPRO_TEXTCONTAINER_GET_PIVOT_OFFSET UNITYSDK_OFFSET(0xA10C080)
#define TMPRO_TEXTCONTAINER_SET_MARGINS_OFFSET UNITYSDK_OFFSET(0xA10C090)
#define TMPRO_TEXTCONTAINER_SET_HASCHANGED_OFFSET UNITYSDK_OFFSET(0xA10C0F0)
#define TMPRO_TEXTCONTAINER_GET_ISAUTOFITTING_OFFSET UNITYSDK_OFFSET(0xA10C100)
#define TMPRO_TEXTCONTAINER_GET_ISDEFAULTWIDTH_OFFSET UNITYSDK_OFFSET(0xA10C110)
#define TMPRO_TEXTCONTAINER_ONCONTAINERCHANGED_OFFSET UNITYSDK_OFFSET(0xA10B590)
#define TMPRO_TEXTCONTAINER_GETPIVOT_OFFSET UNITYSDK_OFFSET(0xA10BBB0)
#define TMPRO_TEXTCONTAINER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA10C360)
#define TMPRO_TEXTCONTAINER_SET_PIVOT_OFFSET UNITYSDK_OFFSET(0xA10BF30)
#define TMPRO_TEXTCONTAINER_UPDATECORNERS_OFFSET UNITYSDK_OFFSET(0xA10C120)

namespace TMPro
{
	inline static constexpr unsigned int TextContainer_TypeDefinitionIndex = 33608;

	class TextContainer : public Il2CppObject
	{
	public:
		::System::Boolean m_hasChanged; // 0x18
		::UnityEngine::Vector2* m_pivot; // 0x1C
		::TMPro::TextContainerAnchors* m_anchorPosition; // 0x24
		::UnityEngine::Rect* m_rect; // 0x28
		::System::Boolean m_isDefaultWidth; // 0x38
		::System::Boolean m_isDefaultHeight; // 0x39
		::System::Boolean m_isAutoFitting; // 0x3A
		::Il2CppArray<::System::Object*>* m_corners; // 0x40
		::Il2CppArray<::System::Object*>* m_worldCorners; // 0x48
		::UnityEngine::Vector4* m_margins; // 0x50
		::UnityEngine::RectTransform* m_rectTransform; // 0x60
		::UnityEngine::Vector2* k_defaultSize; // 0x0
		::TMPro::TextMeshPro* m_textMeshPro; // 0x68

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_height(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_SET_HEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Single get_height()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_GET_HEIGHT_OFFSET))(nullptr);
		}

		::System::Void SetRect(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_SETRECT_OFFSET))(arg, nullptr);
		}

		::System::Void set_rect(::UnityEngine::Rect* arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_SET_RECT_OFFSET))(arg, nullptr);
		}

		::System::Void set_isAutoFitting(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_SET_ISAUTOFITTING_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_AWAKE_OFFSET))(nullptr);
		}

		::System::Single get_width()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_GET_WIDTH_OFFSET))(nullptr);
		}

		::System::Void set_width(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_SET_WIDTH_OFFSET))(arg, nullptr);
		}

		::TMPro::TextContainerAnchors* GetAnchorPosition(::UnityEngine::Vector2* arg)
		{
			return (return (::TMPro::TextContainerAnchors*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_GETANCHORPOSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rect* get_rect()
		{
			return (return (::UnityEngine::Rect*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_GET_RECT_OFFSET))(nullptr);
		}

		::System::Boolean get_hasChanged()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_GET_HASCHANGED_OFFSET))(nullptr);
		}

		::System::Void set_size(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_SET_SIZE_OFFSET))(arg, nullptr);
		}

		::System::Void set_anchorPosition(::TMPro::TextContainerAnchors* arg)
		{
			((::System::Void(*)(::TMPro::TextContainerAnchors*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_SET_ANCHORPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isDefaultHeight()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_GET_ISDEFAULTHEIGHT_OFFSET))(nullptr);
		}

		::TMPro::TextMeshPro* get_textMeshPro()
		{
			return (return (::TMPro::TextMeshPro*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_GET_TEXTMESHPRO_OFFSET))(nullptr);
		}

		::TMPro::TextContainerAnchors* get_anchorPosition()
		{
			return (return (::TMPro::TextContainerAnchors*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_GET_ANCHORPOSITION_OFFSET))(nullptr);
		}

		::UnityEngine::RectTransform* get_rectTransform()
		{
			return (return (::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_GET_RECTTRANSFORM_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_size()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_GET_SIZE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_worldCorners()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_GET_WORLDCORNERS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_corners()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_GET_CORNERS_OFFSET))(nullptr);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector4* get_margins()
		{
			return (return (::UnityEngine::Vector4*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_GET_MARGINS_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_pivot()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_GET_PIVOT_OFFSET))(nullptr);
		}

		::System::Void set_margins(::UnityEngine::Vector4* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_SET_MARGINS_OFFSET))(arg, nullptr);
		}

		::System::Void set_hasChanged(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_SET_HASCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isAutoFitting()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_GET_ISAUTOFITTING_OFFSET))(nullptr);
		}

		::System::Boolean get_isDefaultWidth()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_GET_ISDEFAULTWIDTH_OFFSET))(nullptr);
		}

		::System::Void OnContainerChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_ONCONTAINERCHANGED_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* GetPivot(::TMPro::TextContainerAnchors* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::TMPro::TextContainerAnchors*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_GETPIVOT_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void set_pivot(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_SET_PIVOT_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateCorners()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTCONTAINER_UPDATECORNERS_OFFSET))(nullptr);
		}

	};
}

