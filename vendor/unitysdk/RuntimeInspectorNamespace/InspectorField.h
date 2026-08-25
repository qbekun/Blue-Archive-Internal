#pragma once
#include "../unitysdk.h"

namespace UnityEngine::UI { class LayoutElement; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class MaskableGraphic; }
namespace RuntimeInspectorNamespace { class RuntimeInspector; }
namespace RuntimeInspectorNamespace { class UISkin; }
namespace RuntimeInspectorNamespace { class InspectorField; }

#define RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_GET_INSPECTOR_OFFSET UNITYSDK_OFFSET(0x9570A40)
#define RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_SET_INSPECTOR_OFFSET UNITYSDK_OFFSET(0x9570A50)
#define RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_GET_SKIN_OFFSET UNITYSDK_OFFSET(0x9570AE0)
#define RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_SET_SKIN_OFFSET UNITYSDK_OFFSET(0x9570AF0)
#define RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_GET_BOUNDVARIABLETYPE_OFFSET UNITYSDK_OFFSET(0x9570BC0)
#define RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9570BD0)
#define RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x956C290)
#define RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0x9570BE0)
#define RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_SET_DEPTH_OFFSET UNITYSDK_OFFSET(0x9570BF0)
#define RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x9570C10)
#define RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9570C20)
#define RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_SET_NAME_OFFSET UNITYSDK_OFFSET(0x9570CC0)
#define RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_GET_NAMERAW_OFFSET UNITYSDK_OFFSET(0x9570DA0)
#define RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_SET_NAMERAW_OFFSET UNITYSDK_OFFSET(0x956BDD0)
#define RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_RUNTIMEINSPECTORNAMESPACE.ITOOLTIPCONTENT.GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x9570E40)
#define RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_RUNTIMEINSPECTORNAMESPACE.ITOOLTIPCONTENT.GET_TOOLTIPTEXT_OFFSET UNITYSDK_OFFSET(0x9570EC0)
#define RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_GET_SHOULDREFRESH_OFFSET UNITYSDK_OFFSET(0x9570F60)
#define RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_GET_HEIGHTMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x9570F70)
#define RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x956BF80)
#define RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_SUPPORTSTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_CANBINDTO_OFFSET UNITYSDK_OFFSET(0x9570F80)
#define RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_BINDTO_OFFSET UNITYSDK_OFFSET(0x9570F90)
#define RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_BINDTO_OFFSET UNITYSDK_OFFSET(0x95715B0)
#define RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_UNBIND_OFFSET UNITYSDK_OFFSET(0x9571640)
#define RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_ONBOUND_OFFSET UNITYSDK_OFFSET(0x956C6D0)
#define RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_ONUNBOUND_OFFSET UNITYSDK_OFFSET(0x95717D0)
#define RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_ONINSPECTORCHANGED_OFFSET UNITYSDK_OFFSET(0x95717F0)
#define RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_ONSKINCHANGED_OFFSET UNITYSDK_OFFSET(0x956C490)
#define RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_ONDEPTHCHANGED_OFFSET UNITYSDK_OFFSET(0x95719B0)
#define RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_REFRESH_OFFSET UNITYSDK_OFFSET(0x9571A50)
#define RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_REFRESHVALUE_OFFSET UNITYSDK_OFFSET(0x95716C0)
#define RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0x956C080)
#define RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD__INITIALIZE_B__45_0_OFFSET UNITYSDK_OFFSET(0x9571A60)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int InspectorField_TypeDefinitionIndex = 35662;

	class InspectorField : public Il2CppObject
	{
	public:
		::UnityEngine::UI::LayoutElement* layoutElement; // 0x18
		::UnityEngine::UI::Text* variableNameText; // 0x20
		::UnityEngine::UI::Image* variableNameMask; // 0x28
		::UnityEngine::UI::MaskableGraphic* visibleArea; // 0x30
		::RuntimeInspectorNamespace::RuntimeInspector* m_inspector; // 0x38
		::System::Int32 m_skinVersion; // 0x40
		::RuntimeInspectorNamespace::UISkin* m_skin; // 0x48
		::System::Type* m_boundVariableType; // 0x50
		::System::Object* m_value; // 0x58
		::System::Int32 m_depth; // 0x60
		::System::Boolean m_isVisible; // 0x64
		Getter* getter; // 0x68
		Setter* setter; // 0x70

		::RuntimeInspectorNamespace::RuntimeInspector* get_Inspector()
		{
			return (return (::RuntimeInspectorNamespace::RuntimeInspector*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_GET_INSPECTOR_OFFSET))(nullptr);
		}

		::System::Void set_Inspector(::RuntimeInspectorNamespace::RuntimeInspector* arg)
		{
			((::System::Void(*)(::RuntimeInspectorNamespace::RuntimeInspector*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_SET_INSPECTOR_OFFSET))(arg, nullptr);
		}

		::RuntimeInspectorNamespace::UISkin* get_Skin()
		{
			return (return (::RuntimeInspectorNamespace::UISkin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_GET_SKIN_OFFSET))(nullptr);
		}

		::System::Void set_Skin(::RuntimeInspectorNamespace::UISkin* arg)
		{
			((::System::Void(*)(::RuntimeInspectorNamespace::UISkin*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_SET_SKIN_OFFSET))(arg, nullptr);
		}

		::System::Type* get_BoundVariableType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_GET_BOUNDVARIABLETYPE_OFFSET))(nullptr);
		}

		::System::Object* get_Value()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_Value(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Depth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_GET_DEPTH_OFFSET))(nullptr);
		}

		::System::Void set_Depth(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_SET_DEPTH_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsVisible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_GET_ISVISIBLE_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::String* get_NameRaw()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_GET_NAMERAW_OFFSET))(nullptr);
		}

		::System::Void set_NameRaw(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_SET_NAMERAW_OFFSET))(str, nullptr);
		}

		::System::Boolean RuntimeInspectorNamespace.ITooltipContent.get_IsActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_RUNTIMEINSPECTORNAMESPACE.ITOOLTIPCONTENT.GET_ISACTIVE_OFFSET))(nullptr);
		}

		::System::String* RuntimeInspectorNamespace.ITooltipContent.get_TooltipText()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_RUNTIMEINSPECTORNAMESPACE.ITOOLTIPCONTENT.GET_TOOLTIPTEXT_OFFSET))(nullptr);
		}

		::System::Boolean get_ShouldRefresh()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_GET_SHOULDREFRESH_OFFSET))(nullptr);
		}

		::System::Single get_HeightMultiplier()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_GET_HEIGHTMULTIPLIER_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Boolean SupportsType(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_SUPPORTSTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanBindTo(::System::Type* arg, ::System::Reflection::MemberInfo* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_CANBINDTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void BindTo(::RuntimeInspectorNamespace::InspectorField* arg, ::System::Reflection::MemberInfo* arg, ::System::String* str)
		{
			((::System::Void(*)(::RuntimeInspectorNamespace::InspectorField*, ::System::Reflection::MemberInfo*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_BINDTO_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void BindTo(::System::Type* arg, ::System::String* str, Getter* arg, Setter* arg, ::System::Reflection::MemberInfo* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::String*, Getter*, Setter*, ::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_BINDTO_OFFSET))(arg, str, arg, arg, arg, nullptr);
		}

		::System::Void Unbind()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_UNBIND_OFFSET))(nullptr);
		}

		::System::Void OnBound(::System::Reflection::MemberInfo* arg)
		{
			((::System::Void(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_ONBOUND_OFFSET))(arg, nullptr);
		}

		::System::Void OnUnbound()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_ONUNBOUND_OFFSET))(nullptr);
		}

		::System::Void OnInspectorChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_ONINSPECTORCHANGED_OFFSET))(nullptr);
		}

		::System::Void OnSkinChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_ONSKINCHANGED_OFFSET))(nullptr);
		}

		::System::Void OnDepthChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_ONDEPTHCHANGED_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_REFRESH_OFFSET))(nullptr);
		}

		::System::Void RefreshValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_REFRESHVALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _Initialize_b__45_0(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_INSPECTORFIELD__INITIALIZE_B__45_0_OFFSET))(arg, nullptr);
		}

	};
}

