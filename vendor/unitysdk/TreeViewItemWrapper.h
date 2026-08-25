#pragma once
#include "unitysdk.h"

namespace UnityEngine::UIElements { class ITreeViewItem; }

#define TREEVIEWITEMWRAPPER_GET_ID_OFFSET UNITYSDK_OFFSET(0xA3CEBE0)

	inline static constexpr unsigned int TreeViewItemWrapper_TypeDefinitionIndex = 30415;

	class TreeViewItemWrapper : public Il2CppObject
	{
	public:
		::System::Int32 depth; // 0x10
		::UnityEngine::UIElements::ITreeViewItem* item; // 0x18

		::System::Int32 get_id()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TREEVIEWITEMWRAPPER_GET_ID_OFFSET))(nullptr);
		}

	};

