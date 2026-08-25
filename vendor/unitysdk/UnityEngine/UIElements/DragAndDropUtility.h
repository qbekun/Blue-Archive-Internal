#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class IDragAndDrop; }
namespace UnityEngine::UIElements { class IPanel; }

#define UNITYENGINE_UIELEMENTS_DRAGANDDROPUTILITY_GETDRAGANDDROP_OFFSET UNITYSDK_OFFSET(0xA3D0C70)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int DragAndDropUtility_TypeDefinitionIndex = 30420;

	class DragAndDropUtility : public Il2CppObject
	{
	public:
		Il2CppObject* s_MakeDragAndDropClientFunc; // 0x0
		::UnityEngine::UIElements::IDragAndDrop* s_DragAndDropEditor; // 0x8
		::UnityEngine::UIElements::IDragAndDrop* s_DragAndDropPlayMode; // 0x10

		::UnityEngine::UIElements::IDragAndDrop* GetDragAndDrop(::UnityEngine::UIElements::IPanel* arg)
		{
			return (return (::UnityEngine::UIElements::IDragAndDrop*(*)(::UnityEngine::UIElements::IPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGANDDROPUTILITY_GETDRAGANDDROP_OFFSET))(arg, nullptr);
		}

	};
}

