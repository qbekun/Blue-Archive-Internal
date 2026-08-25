#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class ReusableCollectionItem; }
namespace UnityEngine::UIElements { class BaseVerticalCollectionView; }

#define UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGEREXTENSION_GETRECYCLEDITEMFROMID_OFFSET UNITYSDK_OFFSET(0xA3D0880)
#define UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGEREXTENSION_GETRECYCLEDITEMFROMINDEX_OFFSET UNITYSDK_OFFSET(0xA3D5DA0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ListViewDraggerExtension_TypeDefinitionIndex = 30437;

	class ListViewDraggerExtension : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::ReusableCollectionItem* GetRecycledItemFromId(::UnityEngine::UIElements::BaseVerticalCollectionView* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::UIElements::ReusableCollectionItem*(*)(::UnityEngine::UIElements::BaseVerticalCollectionView*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGEREXTENSION_GETRECYCLEDITEMFROMID_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::ReusableCollectionItem* GetRecycledItemFromIndex(::UnityEngine::UIElements::BaseVerticalCollectionView* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::UIElements::ReusableCollectionItem*(*)(::UnityEngine::UIElements::BaseVerticalCollectionView*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGEREXTENSION_GETRECYCLEDITEMFROMINDEX_OFFSET))(arg, arg, nullptr);
		}

	};
}

