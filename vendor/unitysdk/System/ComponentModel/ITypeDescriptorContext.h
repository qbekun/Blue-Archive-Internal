#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_ITYPEDESCRIPTORCONTEXT_GET_CONTAINER_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_ITYPEDESCRIPTORCONTEXT_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_ITYPEDESCRIPTORCONTEXT_GET_PROPERTYDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_ITYPEDESCRIPTORCONTEXT_ONCOMPONENTCHANGING_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_ITYPEDESCRIPTORCONTEXT_ONCOMPONENTCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ITypeDescriptorContext_TypeDefinitionIndex = 29409;

	class ITypeDescriptorContext : public Il2CppObject
	{
	public:
		::System::ComponentModel::IContainer* get_Container()
		{
			return (return (::System::ComponentModel::IContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ITYPEDESCRIPTORCONTEXT_GET_CONTAINER_OFFSET))(nullptr);
		}

		::System::Object* get_Instance()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ITYPEDESCRIPTORCONTEXT_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::ComponentModel::PropertyDescriptor* get_PropertyDescriptor()
		{
			return (return (::System::ComponentModel::PropertyDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ITYPEDESCRIPTORCONTEXT_GET_PROPERTYDESCRIPTOR_OFFSET))(nullptr);
		}

		::System::Boolean OnComponentChanging()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ITYPEDESCRIPTORCONTEXT_ONCOMPONENTCHANGING_OFFSET))(nullptr);
		}

		::System::Void OnComponentChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ITYPEDESCRIPTORCONTEXT_ONCOMPONENTCHANGED_OFFSET))(nullptr);
		}

	};
}

