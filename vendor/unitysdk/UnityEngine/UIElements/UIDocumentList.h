#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class UIDocument; }
namespace UnityEngine::UIElements { class VisualElement; }

#define UNITYENGINE_UIELEMENTS_UIDOCUMENTLIST_REMOVEFROMLISTANDFROMVISUALTREE_OFFSET UNITYSDK_OFFSET(0xA4029F0)
#define UNITYENGINE_UIELEMENTS_UIDOCUMENTLIST_ADDTOLISTANDTOVISUALTREE_OFFSET UNITYSDK_OFFSET(0xA402A60)
#define UNITYENGINE_UIELEMENTS_UIDOCUMENTLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0xA402970)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int UIDocumentList_TypeDefinitionIndex = 30568;

	class UIDocumentList : public Il2CppObject
	{
	public:
		Il2CppObject* m_AttachedUIDocuments; // 0x10

		::System::Void RemoveFromListAndFromVisualTree(::UnityEngine::UIElements::UIDocument* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIDocument*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIDOCUMENTLIST_REMOVEFROMLISTANDFROMVISUALTREE_OFFSET))(arg, nullptr);
		}

		::System::Void AddToListAndToVisualTree(::UnityEngine::UIElements::UIDocument* arg, ::UnityEngine::UIElements::VisualElement* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIDocument*, ::UnityEngine::UIElements::VisualElement*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIDOCUMENTLIST_ADDTOLISTANDTOVISUALTREE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIDOCUMENTLIST_.CTOR_OFFSET))(nullptr);
		}

	};
}

