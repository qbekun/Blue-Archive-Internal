#pragma once
#include "../../unitysdk.h"

namespace System::ComponentModel
{
	inline static constexpr unsigned int NotifyCollectionChangedAction_TypeDefinitionIndex = 10146;

	class NotifyCollectionChangedAction : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::ComponentModel::NotifyCollectionChangedAction* Add; // 0x0
		::System::ComponentModel::NotifyCollectionChangedAction* Remove; // 0x0
		::System::ComponentModel::NotifyCollectionChangedAction* Replace; // 0x0
		::System::ComponentModel::NotifyCollectionChangedAction* Move; // 0x0
		::System::ComponentModel::NotifyCollectionChangedAction* Reset; // 0x0

	};
}

