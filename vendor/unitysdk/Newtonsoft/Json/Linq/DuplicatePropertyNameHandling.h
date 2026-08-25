#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Linq { class DuplicatePropertyNameHandling; }

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int DuplicatePropertyNameHandling_TypeDefinitionIndex = 32000;

	class DuplicatePropertyNameHandling : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Newtonsoft::Json::Linq::DuplicatePropertyNameHandling* Replace; // 0x0
		::Newtonsoft::Json::Linq::DuplicatePropertyNameHandling* Ignore; // 0x0
		::Newtonsoft::Json::Linq::DuplicatePropertyNameHandling* Error; // 0x0

	};
}

