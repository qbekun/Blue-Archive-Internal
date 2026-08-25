#pragma once
#include "../../../unitysdk.h"

namespace PlatformSupport::Collections::Specialized { class NotifyCollectionChangedAction; }

namespace PlatformSupport::Collections::Specialized
{
	inline static constexpr unsigned int NotifyCollectionChangedAction_TypeDefinitionIndex = 21284;

	class NotifyCollectionChangedAction : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction* Add; // 0x0
		::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction* Remove; // 0x0
		::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction* Replace; // 0x0
		::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction* Move; // 0x0
		::PlatformSupport::Collections::Specialized::NotifyCollectionChangedAction* Reset; // 0x0

	};
}

