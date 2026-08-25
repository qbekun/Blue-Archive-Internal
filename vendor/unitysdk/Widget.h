#pragma once
#include "unitysdk.h"

#define WIDGET_SET_TOOLTIP_OFFSET UNITYSDK_OFFSET(0x9FB2230)
#define WIDGET_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9FB2240)
#define WIDGET_GET_ISHIDDEN_OFFSET UNITYSDK_OFFSET(0x9FB2250)
#define WIDGET_GET_QUERYPATH_OFFSET UNITYSDK_OFFSET(0x9FB2270)
#define WIDGET_GET_TOOLTIP_OFFSET UNITYSDK_OFFSET(0x9FB2280)
#define WIDGET_SET_PARENT_OFFSET UNITYSDK_OFFSET(0x9FB2290)
#define WIDGET_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9FB22A0)
#define WIDGET_SET_QUERYPATH_OFFSET UNITYSDK_OFFSET(0x9FB22B0)
#define WIDGET_GET_ISEDITORONLY_OFFSET UNITYSDK_OFFSET(0x9FB22C0)
#define WIDGET_SET_PANEL_OFFSET UNITYSDK_OFFSET(0x9FB22D0)
#define WIDGET_GENERATEQUERYPATH_OFFSET UNITYSDK_OFFSET(0x9FB16C0)
#define WIDGET_GET_ISINACTIVEINEDITOR_OFFSET UNITYSDK_OFFSET(0x9FB22E0)
#define WIDGET_SET_FLAGS_OFFSET UNITYSDK_OFFSET(0x9FB2310)
#define WIDGET_SET_NAMEANDTOOLTIP_OFFSET UNITYSDK_OFFSET(0x9FB2320)
#define WIDGET_GET_ISRUNTIMEONLY_OFFSET UNITYSDK_OFFSET(0x9FB2300)
#define WIDGET_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x9FB2360)
#define WIDGET_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FB1310)
#define WIDGET_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9FB2370)
#define WIDGET_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x9FB23A0)
#define WIDGET_GET_PANEL_OFFSET UNITYSDK_OFFSET(0x9FB23B0)

	inline static constexpr unsigned int Widget_TypeDefinitionIndex = 33951;

	class Widget : public Il2CppObject
	{
	public:
		Panel* m_Panel; // 0x10
		IContainer* m_Parent; // 0x18
		Flags* _flags_k__BackingField; // 0x20
		::System::String* _displayName_k__BackingField; // 0x28
		::System::String* _tooltip_k__BackingField; // 0x30
		::System::String* _queryPath_k__BackingField; // 0x38
		Il2CppObject* isHiddenCallback; // 0x40

		::System::Void set_tooltip(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + WIDGET_SET_TOOLTIP_OFFSET))(str, nullptr);
		}

		::System::Void set_displayName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + WIDGET_SET_DISPLAYNAME_OFFSET))(str, nullptr);
		}

		::System::Boolean get_isHidden()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGET_GET_ISHIDDEN_OFFSET))(nullptr);
		}

		::System::String* get_queryPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGET_GET_QUERYPATH_OFFSET))(nullptr);
		}

		::System::String* get_tooltip()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGET_GET_TOOLTIP_OFFSET))(nullptr);
		}

		::System::Void set_parent(IContainer* arg)
		{
			((::System::Void(*)(IContainer*, ::PVOID))((::PBYTE)hIl2Cpp + WIDGET_SET_PARENT_OFFSET))(arg, nullptr);
		}

		::System::String* get_displayName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGET_GET_DISPLAYNAME_OFFSET))(nullptr);
		}

		::System::Void set_queryPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + WIDGET_SET_QUERYPATH_OFFSET))(str, nullptr);
		}

		::System::Boolean get_isEditorOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGET_GET_ISEDITORONLY_OFFSET))(nullptr);
		}

		::System::Void set_panel(Panel* arg)
		{
			((::System::Void(*)(Panel*, ::PVOID))((::PBYTE)hIl2Cpp + WIDGET_SET_PANEL_OFFSET))(arg, nullptr);
		}

		::System::Void GenerateQueryPath()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGET_GENERATEQUERYPATH_OFFSET))(nullptr);
		}

		::System::Boolean get_isInactiveInEditor()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGET_GET_ISINACTIVEINEDITOR_OFFSET))(nullptr);
		}

		::System::Void set_flags(Flags* arg)
		{
			((::System::Void(*)(Flags*, ::PVOID))((::PBYTE)hIl2Cpp + WIDGET_SET_FLAGS_OFFSET))(arg, nullptr);
		}

		::System::Void set_nameAndTooltip(NameAndTooltip* arg)
		{
			((::System::Void(*)(NameAndTooltip*, ::PVOID))((::PBYTE)hIl2Cpp + WIDGET_SET_NAMEANDTOOLTIP_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isRuntimeOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGET_GET_ISRUNTIMEONLY_OFFSET))(nullptr);
		}

		Flags* get_flags()
		{
			return (return (Flags*(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGET_GET_FLAGS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGET_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGET_GETHASHCODE_OFFSET))(nullptr);
		}

		IContainer* get_parent()
		{
			return (return (IContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGET_GET_PARENT_OFFSET))(nullptr);
		}

		Panel* get_panel()
		{
			return (return (Panel*(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGET_GET_PANEL_OFFSET))(nullptr);
		}

	};

