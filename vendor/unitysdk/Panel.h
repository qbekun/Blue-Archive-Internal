#pragma once
#include "unitysdk.h"

#define PANEL_SET_FLAGS_OFFSET UNITYSDK_OFFSET(0x9FB3590)
#define PANEL_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9FB35A0)
#define PANEL_SET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x9FB35B0)
#define PANEL_ONITEMREMOVED_OFFSET UNITYSDK_OFFSET(0x9FB35C0)
#define PANEL_GET_ISRUNTIMEONLY_OFFSET UNITYSDK_OFFSET(0x9FB38E0)
#define PANEL_GET_GROUPINDEX_OFFSET UNITYSDK_OFFSET(0x9FB38F0)
#define PANEL_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x9FB3900)
#define PANEL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FB3910)
#define PANEL_GET_QUERYPATH_OFFSET UNITYSDK_OFFSET(0x9FB3B40)
#define PANEL_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x9FB3B50)
#define PANEL_REMOVE_ONSETDIRTY_OFFSET UNITYSDK_OFFSET(0x9FB3B60)
#define PANEL_SET_GROUPINDEX_OFFSET UNITYSDK_OFFSET(0x9FB3C00)
#define PANEL_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9FB3C10)
#define PANEL_SYSTEM.ICOMPARABLE_UNITYENGINE.RENDERING.DEBUGUI.PANEL_.COMPARETO_OFFSET UNITYSDK_OFFSET(0x9FB3C20)
#define PANEL_ADD_ONSETDIRTY_OFFSET UNITYSDK_OFFSET(0x9FB3C50)
#define PANEL_GET_ISINACTIVEINEDITOR_OFFSET UNITYSDK_OFFSET(0x9FB3CF0)
#define PANEL_GET_EDITORFORCEUPDATE_OFFSET UNITYSDK_OFFSET(0x9FB3D10)
#define PANEL_ONITEMADDED_OFFSET UNITYSDK_OFFSET(0x9FB3D20)
#define PANEL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9FB3D80)
#define PANEL_GET_ISEDITORONLY_OFFSET UNITYSDK_OFFSET(0x9FB4060)
#define PANEL_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x9FB3620)

	inline static constexpr unsigned int Panel_TypeDefinitionIndex = 33975;

	class Panel : public Il2CppObject
	{
	public:
		Flags* _flags_k__BackingField; // 0x10
		::System::String* _displayName_k__BackingField; // 0x18
		::System::Int32 _groupIndex_k__BackingField; // 0x20
		Il2CppObject* _children_k__BackingField; // 0x28
		Il2CppObject* onSetDirty; // 0x30

		::System::Void set_flags(Flags* arg)
		{
			((::System::Void(*)(Flags*, ::PVOID))((::PBYTE)hIl2Cpp + PANEL_SET_FLAGS_OFFSET))(arg, nullptr);
		}

		::System::String* get_displayName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PANEL_GET_DISPLAYNAME_OFFSET))(nullptr);
		}

		::System::Void set_children(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + PANEL_SET_CHILDREN_OFFSET))(arg, nullptr);
		}

		::System::Void OnItemRemoved(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + PANEL_ONITEMREMOVED_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_isRuntimeOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PANEL_GET_ISRUNTIMEONLY_OFFSET))(nullptr);
		}

		::System::Int32 get_groupIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PANEL_GET_GROUPINDEX_OFFSET))(nullptr);
		}

		Il2CppObject* get_children()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + PANEL_GET_CHILDREN_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PANEL_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_queryPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PANEL_GET_QUERYPATH_OFFSET))(nullptr);
		}

		Flags* get_flags()
		{
			return (return (Flags*(*)(::PVOID))((::PBYTE)hIl2Cpp + PANEL_GET_FLAGS_OFFSET))(nullptr);
		}

		::System::Void remove_onSetDirty(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + PANEL_REMOVE_ONSETDIRTY_OFFSET))(arg, nullptr);
		}

		::System::Void set_groupIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PANEL_SET_GROUPINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void set_displayName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PANEL_SET_DISPLAYNAME_OFFSET))(str, nullptr);
		}

		::System::Int32 System.IComparable_UnityEngine.Rendering.DebugUI.Panel_.CompareTo(Panel* arg)
		{
			return (return (::System::Int32(*)(Panel*, ::PVOID))((::PBYTE)hIl2Cpp + PANEL_SYSTEM.ICOMPARABLE_UNITYENGINE.RENDERING.DEBUGUI.PANEL_.COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Void add_onSetDirty(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + PANEL_ADD_ONSETDIRTY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isInactiveInEditor()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PANEL_GET_ISINACTIVEINEDITOR_OFFSET))(nullptr);
		}

		::System::Boolean get_editorForceUpdate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PANEL_GET_EDITORFORCEUPDATE_OFFSET))(nullptr);
		}

		::System::Void OnItemAdded(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + PANEL_ONITEMADDED_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PANEL_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean get_isEditorOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PANEL_GET_ISEDITORONLY_OFFSET))(nullptr);
		}

		::System::Void SetDirty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PANEL_SETDIRTY_OFFSET))(nullptr);
		}

	};

