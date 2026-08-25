#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_COMPONENTCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B1ECB0)
#define SYSTEM_COMPONENTMODEL_COMPONENTCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9B1ED00)
#define SYSTEM_COMPONENTMODEL_COMPONENTCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9B1F300)
#define SYSTEM_COMPONENTMODEL_COMPONENTCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x9B1F390)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ComponentCollection_TypeDefinitionIndex = 29322;

	class ComponentCollection : public Il2CppObject
	{
	public:
		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENTCOLLECTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::IComponent* get_Item(::System::String* str)
		{
			return (return (::System::ComponentModel::IComponent*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENTCOLLECTION_GET_ITEM_OFFSET))(str, nullptr);
		}

		::System::ComponentModel::IComponent* get_Item(::System::Int32 arg)
		{
			return (return (::System::ComponentModel::IComponent*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENTCOLLECTION_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENTCOLLECTION_COPYTO_OFFSET))(arg, arg, nullptr);
		}

	};
}

