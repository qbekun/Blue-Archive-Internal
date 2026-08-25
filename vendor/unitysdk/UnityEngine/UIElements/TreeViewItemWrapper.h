#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class TreeItem; }

#define UNITYENGINE_UIELEMENTS_TREEVIEWITEMWRAPPER_GET_ID_OFFSET UNITYSDK_OFFSET(0xA3C7F20)
#define UNITYENGINE_UIELEMENTS_TREEVIEWITEMWRAPPER_GET_CHILDRENIDS_OFFSET UNITYSDK_OFFSET(0xA3C7F30)
#define UNITYENGINE_UIELEMENTS_TREEVIEWITEMWRAPPER_GET_HASCHILDREN_OFFSET UNITYSDK_OFFSET(0xA3C7F40)
#define UNITYENGINE_UIELEMENTS_TREEVIEWITEMWRAPPER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3C7F90)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int TreeViewItemWrapper_TypeDefinitionIndex = 30407;

	class TreeViewItemWrapper : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::TreeItem* item; // 0x10
		::System::Int32 depth; // 0x20

		::System::Int32 get_id()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEWITEMWRAPPER_GET_ID_OFFSET))(nullptr);
		}

		Il2CppObject* get_childrenIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEWITEMWRAPPER_GET_CHILDRENIDS_OFFSET))(nullptr);
		}

		::System::Boolean get_hasChildren()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEWITEMWRAPPER_GET_HASCHILDREN_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::UIElements::TreeItem* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::TreeItem*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEWITEMWRAPPER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

