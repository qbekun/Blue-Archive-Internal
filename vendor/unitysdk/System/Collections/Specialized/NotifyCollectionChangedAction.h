#pragma once
#include "../../../unitysdk.h"

namespace System::Collections::Specialized
{
	inline static constexpr unsigned int NotifyCollectionChangedAction_TypeDefinitionIndex = 29572;

	class NotifyCollectionChangedAction : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Collections::Specialized::NotifyCollectionChangedAction* Add; // 0x0
		::System::Collections::Specialized::NotifyCollectionChangedAction* Remove; // 0x0
		::System::Collections::Specialized::NotifyCollectionChangedAction* Replace; // 0x0
		::System::Collections::Specialized::NotifyCollectionChangedAction* Move; // 0x0
		::System::Collections::Specialized::NotifyCollectionChangedAction* Reset; // 0x0

	};
}

