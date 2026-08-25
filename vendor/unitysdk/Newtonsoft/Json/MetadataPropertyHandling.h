#pragma once
#include "../../unitysdk.h"

namespace Newtonsoft::Json { class MetadataPropertyHandling; }

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int MetadataPropertyHandling_TypeDefinitionIndex = 31790;

	class MetadataPropertyHandling : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Newtonsoft::Json::MetadataPropertyHandling* Default; // 0x0
		::Newtonsoft::Json::MetadataPropertyHandling* ReadAhead; // 0x0
		::Newtonsoft::Json::MetadataPropertyHandling* Ignore; // 0x0

	};
}

