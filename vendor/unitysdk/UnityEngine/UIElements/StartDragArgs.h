#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class DragVisualMode; }

#define UNITYENGINE_UIELEMENTS_STARTDRAGARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3D0BF0)
#define UNITYENGINE_UIELEMENTS_STARTDRAGARGS_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xA3D2D70)
#define UNITYENGINE_UIELEMENTS_STARTDRAGARGS_GET_VISUALMODE_OFFSET UNITYSDK_OFFSET(0xA3D2D80)
#define UNITYENGINE_UIELEMENTS_STARTDRAGARGS_GET_GENERICDATA_OFFSET UNITYSDK_OFFSET(0xA3D2D90)
#define UNITYENGINE_UIELEMENTS_STARTDRAGARGS_SET_GENERICDATA_OFFSET UNITYSDK_OFFSET(0xA3D2DA0)
#define UNITYENGINE_UIELEMENTS_STARTDRAGARGS_GET_UNITYOBJECTREFERENCES_OFFSET UNITYSDK_OFFSET(0xA3D2DB0)
#define UNITYENGINE_UIELEMENTS_STARTDRAGARGS_SET_UNITYOBJECTREFERENCES_OFFSET UNITYSDK_OFFSET(0xA3D2DC0)
#define UNITYENGINE_UIELEMENTS_STARTDRAGARGS_SETGENERICDATA_OFFSET UNITYSDK_OFFSET(0xA3D2DD0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StartDragArgs_TypeDefinitionIndex = 30430;

	class StartDragArgs : public Il2CppObject
	{
	public:
		::System::String* _title_k__BackingField; // 0x10
		::UnityEngine::UIElements::DragVisualMode* _visualMode_k__BackingField; // 0x18
		::System::Collections::Hashtable* _genericData_k__BackingField; // 0x20
		Il2CppObject* _unityObjectReferences_k__BackingField; // 0x28

		::System::Void .ctor(::System::String* str, ::UnityEngine::UIElements::DragVisualMode* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::UIElements::DragVisualMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STARTDRAGARGS_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::String* get_title()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STARTDRAGARGS_GET_TITLE_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::DragVisualMode* get_visualMode()
		{
			return (return (::UnityEngine::UIElements::DragVisualMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STARTDRAGARGS_GET_VISUALMODE_OFFSET))(nullptr);
		}

		::System::Collections::Hashtable* get_genericData()
		{
			return (return (::System::Collections::Hashtable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STARTDRAGARGS_GET_GENERICDATA_OFFSET))(nullptr);
		}

		::System::Void set_genericData(::System::Collections::Hashtable* arg)
		{
			((::System::Void(*)(::System::Collections::Hashtable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STARTDRAGARGS_SET_GENERICDATA_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_unityObjectReferences()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STARTDRAGARGS_GET_UNITYOBJECTREFERENCES_OFFSET))(nullptr);
		}

		::System::Void set_unityObjectReferences(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STARTDRAGARGS_SET_UNITYOBJECTREFERENCES_OFFSET))(arg, nullptr);
		}

		::System::Void SetGenericData(::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STARTDRAGARGS_SETGENERICDATA_OFFSET))(str, arg, nullptr);
		}

	};
}

