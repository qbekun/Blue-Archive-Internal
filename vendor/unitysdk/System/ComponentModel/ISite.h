#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_ISITE_GET_COMPONENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_ISITE_GET_CONTAINER_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_ISITE_GET_DESIGNMODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_ISITE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_ISITE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ISite_TypeDefinitionIndex = 29332;

	class ISite : public Il2CppObject
	{
	public:
		::System::ComponentModel::IComponent* get_Component()
		{
			return (return (::System::ComponentModel::IComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ISITE_GET_COMPONENT_OFFSET))(nullptr);
		}

		::System::ComponentModel::IContainer* get_Container()
		{
			return (return (::System::ComponentModel::IContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ISITE_GET_CONTAINER_OFFSET))(nullptr);
		}

		::System::Boolean get_DesignMode()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ISITE_GET_DESIGNMODE_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ISITE_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ISITE_SET_NAME_OFFSET))(str, nullptr);
		}

	};
}

