#pragma once
#include "unitysdk.h"

namespace UnityEngine::UIElements { class ReusableCollectionItem; }
namespace UnityEngine::UIElements { class DragAndDropPosition; }

#define DRAGPOSITION_EQUALS_OFFSET UNITYSDK_OFFSET(0xA3D5440)
#define DRAGPOSITION_EQUALS_OFFSET UNITYSDK_OFFSET(0xA3D7D60)
#define DRAGPOSITION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA3D7E00)

	inline static constexpr unsigned int DragPosition_TypeDefinitionIndex = 30435;

	class DragPosition : public Il2CppObject
	{
	public:
		::System::Int32 insertAtIndex; // 0x10
		::System::Int32 parentId; // 0x14
		::System::Int32 childIndex; // 0x18
		::UnityEngine::UIElements::ReusableCollectionItem* recycledItem; // 0x20
		::UnityEngine::UIElements::DragAndDropPosition* dropPosition; // 0x28

		::System::Boolean Equals(DragPosition* arg)
		{
			return (return (::System::Boolean(*)(DragPosition*, ::PVOID))((::PBYTE)hIl2Cpp + DRAGPOSITION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + DRAGPOSITION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DRAGPOSITION_GETHASHCODE_OFFSET))(nullptr);
		}

	};

