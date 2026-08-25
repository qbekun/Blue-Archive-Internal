#pragma once
#include "../../unitysdk.h"

namespace Newtonsoft::Json { class DefaultValueHandling; }

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int DefaultValueHandling_TypeDefinitionIndex = 31675;

	class DefaultValueHandling : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Newtonsoft::Json::DefaultValueHandling* Include; // 0x0
		::Newtonsoft::Json::DefaultValueHandling* Ignore; // 0x0
		::Newtonsoft::Json::DefaultValueHandling* Populate; // 0x0
		::Newtonsoft::Json::DefaultValueHandling* IgnoreAndPopulate; // 0x0

	};
}

