#pragma once
#include "unitysdk.h"

#define CONTAINER_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x9FB0ED0)
#define CONTAINER_SET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x9FB0EE0)
#define CONTAINER_GET_PANEL_OFFSET UNITYSDK_OFFSET(0x9FB0EF0)
#define CONTAINER_SET_PANEL_OFFSET UNITYSDK_OFFSET(0x9FB0F00)
#define CONTAINER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FB11B0)
#define CONTAINER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FB1320)
#define CONTAINER_GENERATEQUERYPATH_OFFSET UNITYSDK_OFFSET(0x9FB1420)
#define CONTAINER_ONITEMADDED_OFFSET UNITYSDK_OFFSET(0x9FB17C0)
#define CONTAINER_ONITEMREMOVED_OFFSET UNITYSDK_OFFSET(0x9FB1830)
#define CONTAINER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9FB18A0)

	inline static constexpr unsigned int Container_TypeDefinitionIndex = 33942;

	class Container : public Il2CppObject
	{
	public:
		Il2CppObject* _children_k__BackingField; // 0x48

		Il2CppObject* get_children()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTAINER_GET_CHILDREN_OFFSET))(nullptr);
		}

		::System::Void set_children(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CONTAINER_SET_CHILDREN_OFFSET))(arg, nullptr);
		}

		Panel* get_panel()
		{
			return (return (Panel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTAINER_GET_PANEL_OFFSET))(nullptr);
		}

		::System::Void set_panel(Panel* arg)
		{
			((::System::Void(*)(Panel*, ::PVOID))((::PBYTE)hIl2Cpp + CONTAINER_SET_PANEL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTAINER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CONTAINER_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void GenerateQueryPath()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTAINER_GENERATEQUERYPATH_OFFSET))(nullptr);
		}

		::System::Void OnItemAdded(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CONTAINER_ONITEMADDED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnItemRemoved(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CONTAINER_ONITEMREMOVED_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTAINER_GETHASHCODE_OFFSET))(nullptr);
		}

	};

