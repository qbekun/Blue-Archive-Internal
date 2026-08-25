#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class DragAndDropPosition; }
namespace UnityEngine::UIElements { class IDragAndDropData; }

#define UNITYENGINE_UIELEMENTS_DRAGANDDROPARGS_SET_TARGET_OFFSET UNITYSDK_OFFSET(0xA3D2E70)
#define UNITYENGINE_UIELEMENTS_DRAGANDDROPARGS_GET_INSERTATINDEX_OFFSET UNITYSDK_OFFSET(0xA3D2E80)
#define UNITYENGINE_UIELEMENTS_DRAGANDDROPARGS_SET_INSERTATINDEX_OFFSET UNITYSDK_OFFSET(0xA3D2E90)
#define UNITYENGINE_UIELEMENTS_DRAGANDDROPARGS_GET_PARENTID_OFFSET UNITYSDK_OFFSET(0xA3D2EA0)
#define UNITYENGINE_UIELEMENTS_DRAGANDDROPARGS_SET_PARENTID_OFFSET UNITYSDK_OFFSET(0xA3D2EB0)
#define UNITYENGINE_UIELEMENTS_DRAGANDDROPARGS_GET_CHILDINDEX_OFFSET UNITYSDK_OFFSET(0xA3D2EC0)
#define UNITYENGINE_UIELEMENTS_DRAGANDDROPARGS_SET_CHILDINDEX_OFFSET UNITYSDK_OFFSET(0xA3D2ED0)
#define UNITYENGINE_UIELEMENTS_DRAGANDDROPARGS_GET_DRAGANDDROPPOSITION_OFFSET UNITYSDK_OFFSET(0xA3D2EE0)
#define UNITYENGINE_UIELEMENTS_DRAGANDDROPARGS_SET_DRAGANDDROPPOSITION_OFFSET UNITYSDK_OFFSET(0xA3D2EF0)
#define UNITYENGINE_UIELEMENTS_DRAGANDDROPARGS_GET_DRAGANDDROPDATA_OFFSET UNITYSDK_OFFSET(0xA3D2F00)
#define UNITYENGINE_UIELEMENTS_DRAGANDDROPARGS_SET_DRAGANDDROPDATA_OFFSET UNITYSDK_OFFSET(0xA3D2F10)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int DragAndDropArgs_TypeDefinitionIndex = 30432;

	class DragAndDropArgs : public Il2CppObject
	{
	public:
		::System::Object* _target_k__BackingField; // 0x10
		::System::Int32 _insertAtIndex_k__BackingField; // 0x18
		::System::Int32 _parentId_k__BackingField; // 0x1C
		::System::Int32 _childIndex_k__BackingField; // 0x20
		::UnityEngine::UIElements::DragAndDropPosition* _dragAndDropPosition_k__BackingField; // 0x24
		::UnityEngine::UIElements::IDragAndDropData* _dragAndDropData_k__BackingField; // 0x28

		::System::Void set_target(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGANDDROPARGS_SET_TARGET_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_insertAtIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGANDDROPARGS_GET_INSERTATINDEX_OFFSET))(nullptr);
		}

		::System::Void set_insertAtIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGANDDROPARGS_SET_INSERTATINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_parentId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGANDDROPARGS_GET_PARENTID_OFFSET))(nullptr);
		}

		::System::Void set_parentId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGANDDROPARGS_SET_PARENTID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_childIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGANDDROPARGS_GET_CHILDINDEX_OFFSET))(nullptr);
		}

		::System::Void set_childIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGANDDROPARGS_SET_CHILDINDEX_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::DragAndDropPosition* get_dragAndDropPosition()
		{
			return (return (::UnityEngine::UIElements::DragAndDropPosition*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGANDDROPARGS_GET_DRAGANDDROPPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_dragAndDropPosition(::UnityEngine::UIElements::DragAndDropPosition* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::DragAndDropPosition*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGANDDROPARGS_SET_DRAGANDDROPPOSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::IDragAndDropData* get_dragAndDropData()
		{
			return (return (::UnityEngine::UIElements::IDragAndDropData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGANDDROPARGS_GET_DRAGANDDROPDATA_OFFSET))(nullptr);
		}

		::System::Void set_dragAndDropData(::UnityEngine::UIElements::IDragAndDropData* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IDragAndDropData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGANDDROPARGS_SET_DRAGANDDROPDATA_OFFSET))(arg, nullptr);
		}

	};
}

