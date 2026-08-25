#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COLLECTIONS_OBJECTMODEL_EVENTARGSCACHE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B7F870)

namespace System::Collections::ObjectModel
{
	inline static constexpr unsigned int EventArgsCache_TypeDefinitionIndex = 29558;

	class EventArgsCache : public Il2CppObject
	{
	public:
		::System::ComponentModel::PropertyChangedEventArgs* CountPropertyChanged; // 0x0
		::System::ComponentModel::PropertyChangedEventArgs* IndexerPropertyChanged; // 0x8
		::System::Collections::Specialized::NotifyCollectionChangedEventArgs* ResetCollectionChanged; // 0x10

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_EVENTARGSCACHE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

