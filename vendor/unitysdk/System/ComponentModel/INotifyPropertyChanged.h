#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_INOTIFYPROPERTYCHANGED_ADD_PROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_INOTIFYPROPERTYCHANGED_REMOVE_PROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::ComponentModel
{
	inline static constexpr unsigned int INotifyPropertyChanged_TypeDefinitionIndex = 29478;

	class INotifyPropertyChanged : public Il2CppObject
	{
	public:
		::System::Void add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* arg)
		{
			((::System::Void(*)(::System::ComponentModel::PropertyChangedEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INOTIFYPROPERTYCHANGED_ADD_PROPERTYCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* arg)
		{
			((::System::Void(*)(::System::ComponentModel::PropertyChangedEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INOTIFYPROPERTYCHANGED_REMOVE_PROPERTYCHANGED_OFFSET))(arg, nullptr);
		}

	};
}

