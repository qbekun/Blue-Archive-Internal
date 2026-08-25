#pragma once
#include "../../unitysdk.h"

namespace Newtonsoft::Json { class NullValueHandling; }

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int NullValueHandling_TypeDefinitionIndex = 31792;

	class NullValueHandling : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Newtonsoft::Json::NullValueHandling* Include; // 0x0
		::Newtonsoft::Json::NullValueHandling* Ignore; // 0x0

	};
}

