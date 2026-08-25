#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_COLLECTIONCHANGEEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B24EC0)
#define SYSTEM_COMPONENTMODEL_COLLECTIONCHANGEEVENTARGS_GET_ACTION_OFFSET UNITYSDK_OFFSET(0x9B24F30)
#define SYSTEM_COMPONENTMODEL_COLLECTIONCHANGEEVENTARGS_GET_ELEMENT_OFFSET UNITYSDK_OFFSET(0x9B24F40)

namespace System::ComponentModel
{
	inline static constexpr unsigned int CollectionChangeEventArgs_TypeDefinitionIndex = 29360;

	class CollectionChangeEventArgs : public Il2CppObject
	{
	public:
		::System::ComponentModel::CollectionChangeAction* _Action_k__BackingField; // 0x10
		::System::Object* _Element_k__BackingField; // 0x18

		::System::Void .ctor(::System::ComponentModel::CollectionChangeAction* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::ComponentModel::CollectionChangeAction*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COLLECTIONCHANGEEVENTARGS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::ComponentModel::CollectionChangeAction* get_Action()
		{
			return (return (::System::ComponentModel::CollectionChangeAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COLLECTIONCHANGEEVENTARGS_GET_ACTION_OFFSET))(nullptr);
		}

		::System::Object* get_Element()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COLLECTIONCHANGEEVENTARGS_GET_ELEMENT_OFFSET))(nullptr);
		}

	};
}

