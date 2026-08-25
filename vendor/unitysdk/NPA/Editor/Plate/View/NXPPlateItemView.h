#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine { class Color32; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define NPA_EDITOR_PLATE_VIEW_NXPPLATEITEMVIEW_SETITEM_OFFSET UNITYSDK_OFFSET(0x9DCD1B0)
#define NPA_EDITOR_PLATE_VIEW_NXPPLATEITEMVIEW_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x9DCE0B0)
#define NPA_EDITOR_PLATE_VIEW_NXPPLATEITEMVIEW_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x9DCE1A0)
#define NPA_EDITOR_PLATE_VIEW_NXPPLATEITEMVIEW_SETTITLECOLOR_OFFSET UNITYSDK_OFFSET(0x9DCDF90)
#define NPA_EDITOR_PLATE_VIEW_NXPPLATEITEMVIEW_SETITEMCOLOR_OFFSET UNITYSDK_OFFSET(0x9DCE020)
#define NPA_EDITOR_PLATE_VIEW_NXPPLATEITEMVIEW_GETPLATEITEMICON_OFFSET UNITYSDK_OFFSET(0x9DCD650)
#define NPA_EDITOR_PLATE_VIEW_NXPPLATEITEMVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCE290)

namespace NPA::Editor::Plate::View
{
	inline static constexpr unsigned int NXPPlateItemView_TypeDefinitionIndex = 26462;

	class NXPPlateItemView : public Il2CppObject
	{
	public:
		::UnityEngine::UI::Image* item; // 0x18
		::UnityEngine::UI::Image* icon; // 0x20
		::UnityEngine::UI::Text* title; // 0x28
		::System::String* normalIconNamePrefix; // 0x0
		::System::String* hoverIconNamePrefix; // 0x0
		::System::String* pressdIconNamePrefix; // 0x0
		::UnityEngine::Color32* normalItemColor; // 0x30
		::UnityEngine::Color32* hoverItemColor; // 0x34
		::UnityEngine::Color32* normalTitleColor; // 0x38
		::UnityEngine::Color32* hoverTitleColor; // 0x3C

		::System::Void SetItem(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str, ::System::Action* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPPLATEITEMVIEW_SETITEM_OFFSET))(str, str, str, str, str, arg, nullptr);
		}

		::System::Void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPPLATEITEMVIEW_ONPOINTERENTER_OFFSET))(arg, nullptr);
		}

		::System::Void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPPLATEITEMVIEW_ONPOINTEREXIT_OFFSET))(arg, nullptr);
		}

		::System::Void SetTitleColor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPPLATEITEMVIEW_SETTITLECOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void SetItemColor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPPLATEITEMVIEW_SETITEMCOLOR_OFFSET))(arg, nullptr);
		}

		::System::String* GetPlateItemIcon(::System::String* str, ::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPPLATEITEMVIEW_GETPLATEITEMICON_OFFSET))(str, str, str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPPLATEITEMVIEW_.CTOR_OFFSET))(nullptr);
		}

	};
}

