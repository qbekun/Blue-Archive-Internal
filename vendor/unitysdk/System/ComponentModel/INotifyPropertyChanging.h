#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_INOTIFYPROPERTYCHANGING_ADD_PROPERTYCHANGING_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_INOTIFYPROPERTYCHANGING_REMOVE_PROPERTYCHANGING_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::ComponentModel
{
	inline static constexpr unsigned int INotifyPropertyChanging_TypeDefinitionIndex = 29479;

	class INotifyPropertyChanging : public Il2CppObject
	{
	public:
		::System::Void add_PropertyChanging(::System::ComponentModel::PropertyChangingEventHandler* arg)
		{
			((::System::Void(*)(::System::ComponentModel::PropertyChangingEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INOTIFYPROPERTYCHANGING_ADD_PROPERTYCHANGING_OFFSET))(arg, nullptr);
		}

		::System::Void remove_PropertyChanging(::System::ComponentModel::PropertyChangingEventHandler* arg)
		{
			((::System::Void(*)(::System::ComponentModel::PropertyChangingEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INOTIFYPROPERTYCHANGING_REMOVE_PROPERTYCHANGING_OFFSET))(arg, nullptr);
		}

	};
}

