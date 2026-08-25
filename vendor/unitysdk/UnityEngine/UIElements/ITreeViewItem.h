#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_ITREEVIEWITEM_GET_ID_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ITREEVIEWITEM_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ITREEVIEWITEM_GET_HASCHILDREN_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ITreeViewItem_TypeDefinitionIndex = 30418;

	class ITreeViewItem : public Il2CppObject
	{
	public:
		::System::Int32 get_id()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ITREEVIEWITEM_GET_ID_OFFSET))(nullptr);
		}

		Il2CppObject* get_children()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ITREEVIEWITEM_GET_CHILDREN_OFFSET))(nullptr);
		}

		::System::Boolean get_hasChildren()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ITREEVIEWITEM_GET_HASCHILDREN_OFFSET))(nullptr);
		}

	};
}

