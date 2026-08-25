#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_LISTSORTDESCRIPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B35980)
#define SYSTEM_COMPONENTMODEL_LISTSORTDESCRIPTION_GET_PROPERTYDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x9B359C0)
#define SYSTEM_COMPONENTMODEL_LISTSORTDESCRIPTION_SET_PROPERTYDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x9B359D0)
#define SYSTEM_COMPONENTMODEL_LISTSORTDESCRIPTION_GET_SORTDIRECTION_OFFSET UNITYSDK_OFFSET(0x9B359E0)
#define SYSTEM_COMPONENTMODEL_LISTSORTDESCRIPTION_SET_SORTDIRECTION_OFFSET UNITYSDK_OFFSET(0x9B359F0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ListSortDescription_TypeDefinitionIndex = 29429;

	class ListSortDescription : public Il2CppObject
	{
	public:
		::System::ComponentModel::PropertyDescriptor* _PropertyDescriptor_k__BackingField; // 0x10
		::System::ComponentModel::ListSortDirection* _SortDirection_k__BackingField; // 0x18

		::System::Void .ctor(::System::ComponentModel::PropertyDescriptor* arg, ::System::ComponentModel::ListSortDirection* arg)
		{
			((::System::Void(*)(::System::ComponentModel::PropertyDescriptor*, ::System::ComponentModel::ListSortDirection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTSORTDESCRIPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::ComponentModel::PropertyDescriptor* get_PropertyDescriptor()
		{
			return (return (::System::ComponentModel::PropertyDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTSORTDESCRIPTION_GET_PROPERTYDESCRIPTOR_OFFSET))(nullptr);
		}

		::System::Void set_PropertyDescriptor(::System::ComponentModel::PropertyDescriptor* arg)
		{
			((::System::Void(*)(::System::ComponentModel::PropertyDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTSORTDESCRIPTION_SET_PROPERTYDESCRIPTOR_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::ListSortDirection* get_SortDirection()
		{
			return (return (::System::ComponentModel::ListSortDirection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTSORTDESCRIPTION_GET_SORTDIRECTION_OFFSET))(nullptr);
		}

		::System::Void set_SortDirection(::System::ComponentModel::ListSortDirection* arg)
		{
			((::System::Void(*)(::System::ComponentModel::ListSortDirection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTSORTDESCRIPTION_SET_SORTDIRECTION_OFFSET))(arg, nullptr);
		}

	};
}

