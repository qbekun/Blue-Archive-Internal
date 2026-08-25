#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_ITYPEDLIST_GETLISTNAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_ITYPEDLIST_GETITEMPROPERTIES_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ITypedList_TypeDefinitionIndex = 29410;

	class ITypedList : public Il2CppObject
	{
	public:
		::System::String* GetListName(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ITYPEDLIST_GETLISTNAME_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::PropertyDescriptorCollection* GetItemProperties(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::ComponentModel::PropertyDescriptorCollection*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ITYPEDLIST_GETITEMPROPERTIES_OFFSET))(arg, nullptr);
		}

	};
}

