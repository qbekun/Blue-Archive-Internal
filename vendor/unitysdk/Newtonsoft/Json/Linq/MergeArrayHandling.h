#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Linq { class MergeArrayHandling; }

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int MergeArrayHandling_TypeDefinitionIndex = 32057;

	class MergeArrayHandling : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Newtonsoft::Json::Linq::MergeArrayHandling* Concat; // 0x0
		::Newtonsoft::Json::Linq::MergeArrayHandling* Union; // 0x0
		::Newtonsoft::Json::Linq::MergeArrayHandling* Replace; // 0x0
		::Newtonsoft::Json::Linq::MergeArrayHandling* Merge; // 0x0

	};
}

