#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class RectTransform; }
namespace RuntimeInspectorNamespace { class PointerEventListener; }
namespace UnityEngine::UI { class LayoutGroup; }
namespace UnityEngine::UI { class Image; }
namespace RuntimeInspectorNamespace { class InspectorField; }
namespace UnityEngine { class Component; }
namespace RuntimeInspectorNamespace { class ExposedMethodField; }
namespace RuntimeInspectorNamespace { class ExposedMethod; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RUNTIMEINSPECTORNAMESPACE_EXPANDABLEINSPECTORFIELD_CREATEDRAWERFORVARIABLE_OFFSET UNITYSDK_OFFSET(0x956D0D0)
#define RUNTIMEINSPECTORNAMESPACE_EXPANDABLEINSPECTORFIELD__GENERATEEXPOSEDMETHODBUTTONS_B__26_3_OFFSET UNITYSDK_OFFSET(0x9571DB0)
#define RUNTIMEINSPECTORNAMESPACE_EXPANDABLEINSPECTORFIELD_GENERATEELEMENTS_OFFSET UNITYSDK_OFFSET(0x000000)
#define RUNTIMEINSPECTORNAMESPACE_EXPANDABLEINSPECTORFIELD_GET_SHOULDREFRESH_OFFSET UNITYSDK_OFFSET(0x9571DC0)
#define RUNTIMEINSPECTORNAMESPACE_EXPANDABLEINSPECTORFIELD_REGENERATEELEMENTS_OFFSET UNITYSDK_OFFSET(0x9571DD0)
#define RUNTIMEINSPECTORNAMESPACE_EXPANDABLEINSPECTORFIELD_SET_ISEXPANDED_OFFSET UNITYSDK_OFFSET(0x956D7B0)
#define RUNTIMEINSPECTORNAMESPACE_EXPANDABLEINSPECTORFIELD_GENERATEEXPOSEDMETHODBUTTONS_OFFSET UNITYSDK_OFFSET(0x9571ED0)
#define RUNTIMEINSPECTORNAMESPACE_EXPANDABLEINSPECTORFIELD_CREATEDRAWER_OFFSET UNITYSDK_OFFSET(0x956CE50)
#define RUNTIMEINSPECTORNAMESPACE_EXPANDABLEINSPECTORFIELD__GENERATEEXPOSEDMETHODBUTTONS_B__26_2_OFFSET UNITYSDK_OFFSET(0x9572420)
#define RUNTIMEINSPECTORNAMESPACE_EXPANDABLEINSPECTORFIELD_GET_HEADERVISIBILITY_OFFSET UNITYSDK_OFFSET(0x9572430)
#define RUNTIMEINSPECTORNAMESPACE_EXPANDABLEINSPECTORFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0x95704D0)
#define RUNTIMEINSPECTORNAMESPACE_EXPANDABLEINSPECTORFIELD_GET_ISEXPANDED_OFFSET UNITYSDK_OFFSET(0x9572440)
#define RUNTIMEINSPECTORNAMESPACE_EXPANDABLEINSPECTORFIELD_CREATEDRAWERFORCOMPONENT_OFFSET UNITYSDK_OFFSET(0x956D380)
#define RUNTIMEINSPECTORNAMESPACE_EXPANDABLEINSPECTORFIELD_CLEARELEMENTS_OFFSET UNITYSDK_OFFSET(0x956DFF0)
#define RUNTIMEINSPECTORNAMESPACE_EXPANDABLEINSPECTORFIELD_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x9572460)
#define RUNTIMEINSPECTORNAMESPACE_EXPANDABLEINSPECTORFIELD_SET_HEADERVISIBILITY_OFFSET UNITYSDK_OFFSET(0x95724A0)
#define RUNTIMEINSPECTORNAMESPACE_EXPANDABLEINSPECTORFIELD_ONINSPECTORCHANGED_OFFSET UNITYSDK_OFFSET(0x9572750)
#define RUNTIMEINSPECTORNAMESPACE_EXPANDABLEINSPECTORFIELD_ONUNBOUND_OFFSET UNITYSDK_OFFSET(0x956F8D0)
#define RUNTIMEINSPECTORNAMESPACE_EXPANDABLEINSPECTORFIELD_REFRESH_OFFSET UNITYSDK_OFFSET(0x956FDA0)
#define RUNTIMEINSPECTORNAMESPACE_EXPANDABLEINSPECTORFIELD__GENERATEEXPOSEDMETHODBUTTONS_B__26_0_OFFSET UNITYSDK_OFFSET(0x9572870)
#define RUNTIMEINSPECTORNAMESPACE_EXPANDABLEINSPECTORFIELD_CREATEEXPOSEDMETHODBUTTON_OFFSET UNITYSDK_OFFSET(0x956DB00)
#define RUNTIMEINSPECTORNAMESPACE_EXPANDABLEINSPECTORFIELD_ONDEPTHCHANGED_OFFSET UNITYSDK_OFFSET(0x9572880)
#define RUNTIMEINSPECTORNAMESPACE_EXPANDABLEINSPECTORFIELD__INITIALIZE_B__19_0_OFFSET UNITYSDK_OFFSET(0x9572970)
#define RUNTIMEINSPECTORNAMESPACE_EXPANDABLEINSPECTORFIELD_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9570200)
#define RUNTIMEINSPECTORNAMESPACE_EXPANDABLEINSPECTORFIELD_ONSKINCHANGED_OFFSET UNITYSDK_OFFSET(0x9572B40)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int ExpandableInspectorField_TypeDefinitionIndex = 35665;

	class ExpandableInspectorField : public Il2CppObject
	{
	public:
		::UnityEngine::RectTransform* drawArea; // 0x78
		::RuntimeInspectorNamespace::PointerEventListener* expandToggle; // 0x80
		::UnityEngine::RectTransform* expandToggleTransform; // 0x88
		::UnityEngine::UI::LayoutGroup* layoutGroup; // 0x90
		::UnityEngine::UI::Image* expandArrow; // 0x98
		Il2CppObject* elements; // 0xA0
		Il2CppObject* exposedMethods; // 0xA8
		::System::Boolean m_isExpanded; // 0xB0
		HeaderVisibility* m_headerVisibility; // 0xB4

		::RuntimeInspectorNamespace::InspectorField* CreateDrawerForVariable(::System::Reflection::MemberInfo* arg, ::System::String* str)
		{
			return (return (::RuntimeInspectorNamespace::InspectorField*(*)(::System::Reflection::MemberInfo*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_EXPANDABLEINSPECTORFIELD_CREATEDRAWERFORVARIABLE_OFFSET))(arg, str, nullptr);
		}

		::System::Void _GenerateExposedMethodButtons_b__26_3(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_EXPANDABLEINSPECTORFIELD__GENERATEEXPOSEDMETHODBUTTONS_B__26_3_OFFSET))(arg, nullptr);
		}

		::System::Void GenerateElements()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_EXPANDABLEINSPECTORFIELD_GENERATEELEMENTS_OFFSET))(nullptr);
		}

		::System::Boolean get_ShouldRefresh()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_EXPANDABLEINSPECTORFIELD_GET_SHOULDREFRESH_OFFSET))(nullptr);
		}

		::System::Void RegenerateElements()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_EXPANDABLEINSPECTORFIELD_REGENERATEELEMENTS_OFFSET))(nullptr);
		}

		::System::Void set_IsExpanded(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_EXPANDABLEINSPECTORFIELD_SET_ISEXPANDED_OFFSET))(arg, nullptr);
		}

		::System::Void GenerateExposedMethodButtons()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_EXPANDABLEINSPECTORFIELD_GENERATEEXPOSEDMETHODBUTTONS_OFFSET))(nullptr);
		}

		::RuntimeInspectorNamespace::InspectorField* CreateDrawer(::System::Type* arg, ::System::String* str, Getter* arg, Setter* arg, ::System::Boolean arg)
		{
			return (return (::RuntimeInspectorNamespace::InspectorField*(*)(::System::Type*, ::System::String*, Getter*, Setter*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_EXPANDABLEINSPECTORFIELD_CREATEDRAWER_OFFSET))(arg, str, arg, arg, arg, nullptr);
		}

		::System::Object* _GenerateExposedMethodButtons_b__26_2()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_EXPANDABLEINSPECTORFIELD__GENERATEEXPOSEDMETHODBUTTONS_B__26_2_OFFSET))(nullptr);
		}

		HeaderVisibility* get_HeaderVisibility()
		{
			return (return (HeaderVisibility*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_EXPANDABLEINSPECTORFIELD_GET_HEADERVISIBILITY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_EXPANDABLEINSPECTORFIELD_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsExpanded()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_EXPANDABLEINSPECTORFIELD_GET_ISEXPANDED_OFFSET))(nullptr);
		}

		::RuntimeInspectorNamespace::InspectorField* CreateDrawerForComponent(::UnityEngine::Component* arg, ::System::String* str)
		{
			return (return (::RuntimeInspectorNamespace::InspectorField*(*)(::UnityEngine::Component*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_EXPANDABLEINSPECTORFIELD_CREATEDRAWERFORCOMPONENT_OFFSET))(arg, str, nullptr);
		}

		::System::Void ClearElements()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_EXPANDABLEINSPECTORFIELD_CLEARELEMENTS_OFFSET))(nullptr);
		}

		::System::Int32 get_Length()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_EXPANDABLEINSPECTORFIELD_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Void set_HeaderVisibility(HeaderVisibility* arg)
		{
			((::System::Void(*)(HeaderVisibility*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_EXPANDABLEINSPECTORFIELD_SET_HEADERVISIBILITY_OFFSET))(arg, nullptr);
		}

		::System::Void OnInspectorChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_EXPANDABLEINSPECTORFIELD_ONINSPECTORCHANGED_OFFSET))(nullptr);
		}

		::System::Void OnUnbound()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_EXPANDABLEINSPECTORFIELD_ONUNBOUND_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_EXPANDABLEINSPECTORFIELD_REFRESH_OFFSET))(nullptr);
		}

		::System::Object* _GenerateExposedMethodButtons_b__26_0()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_EXPANDABLEINSPECTORFIELD__GENERATEEXPOSEDMETHODBUTTONS_B__26_0_OFFSET))(nullptr);
		}

		::RuntimeInspectorNamespace::ExposedMethodField* CreateExposedMethodButton(::RuntimeInspectorNamespace::ExposedMethod* arg, Getter* arg, Setter* arg)
		{
			return (return (::RuntimeInspectorNamespace::ExposedMethodField*(*)(::RuntimeInspectorNamespace::ExposedMethod*, Getter*, Setter*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_EXPANDABLEINSPECTORFIELD_CREATEEXPOSEDMETHODBUTTON_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnDepthChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_EXPANDABLEINSPECTORFIELD_ONDEPTHCHANGED_OFFSET))(nullptr);
		}

		::System::Void _Initialize_b__19_0(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_EXPANDABLEINSPECTORFIELD__INITIALIZE_B__19_0_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_EXPANDABLEINSPECTORFIELD_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void OnSkinChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_EXPANDABLEINSPECTORFIELD_ONSKINCHANGED_OFFSET))(nullptr);
		}

	};
}

