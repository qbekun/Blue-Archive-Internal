#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_ICONTAINER_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_ICONTAINER_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_ICONTAINER_GET_COMPONENTS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_ICONTAINER_REMOVE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::ComponentModel
{
	inline static constexpr unsigned int IContainer_TypeDefinitionIndex = 29331;

	class IContainer : public Il2CppObject
	{
	public:
		::System::Void Add(::System::ComponentModel::IComponent* arg)
		{
			((::System::Void(*)(::System::ComponentModel::IComponent*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ICONTAINER_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void Add(::System::ComponentModel::IComponent* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::ComponentModel::IComponent*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ICONTAINER_ADD_OFFSET))(arg, str, nullptr);
		}

		::System::ComponentModel::ComponentCollection* get_Components()
		{
			return (return (::System::ComponentModel::ComponentCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ICONTAINER_GET_COMPONENTS_OFFSET))(nullptr);
		}

		::System::Void Remove(::System::ComponentModel::IComponent* arg)
		{
			((::System::Void(*)(::System::ComponentModel::IComponent*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ICONTAINER_REMOVE_OFFSET))(arg, nullptr);
		}

	};
}

