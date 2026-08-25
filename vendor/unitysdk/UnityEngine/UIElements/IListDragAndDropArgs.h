#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class IDragAndDropData; }
namespace UnityEngine::UIElements { class DragAndDropPosition; }

#define UNITYENGINE_UIELEMENTS_ILISTDRAGANDDROPARGS_GET_INSERTATINDEX_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ILISTDRAGANDDROPARGS_GET_PARENTID_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ILISTDRAGANDDROPARGS_GET_CHILDINDEX_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ILISTDRAGANDDROPARGS_GET_DRAGANDDROPDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ILISTDRAGANDDROPARGS_GET_DRAGANDDROPPOSITION_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int IListDragAndDropArgs_TypeDefinitionIndex = 30431;

	class IListDragAndDropArgs : public Il2CppObject
	{
	public:
		::System::Int32 get_insertAtIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ILISTDRAGANDDROPARGS_GET_INSERTATINDEX_OFFSET))(nullptr);
		}

		::System::Int32 get_parentId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ILISTDRAGANDDROPARGS_GET_PARENTID_OFFSET))(nullptr);
		}

		::System::Int32 get_childIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ILISTDRAGANDDROPARGS_GET_CHILDINDEX_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::IDragAndDropData* get_dragAndDropData()
		{
			return (return (::UnityEngine::UIElements::IDragAndDropData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ILISTDRAGANDDROPARGS_GET_DRAGANDDROPDATA_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::DragAndDropPosition* get_dragAndDropPosition()
		{
			return (return (::UnityEngine::UIElements::DragAndDropPosition*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ILISTDRAGANDDROPARGS_GET_DRAGANDDROPPOSITION_OFFSET))(nullptr);
		}

	};
}

