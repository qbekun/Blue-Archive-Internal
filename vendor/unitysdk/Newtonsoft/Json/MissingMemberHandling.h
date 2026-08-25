#pragma once
#include "../../unitysdk.h"

namespace Newtonsoft::Json { class MissingMemberHandling; }

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int MissingMemberHandling_TypeDefinitionIndex = 31791;

	class MissingMemberHandling : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Newtonsoft::Json::MissingMemberHandling* Ignore; // 0x0
		::Newtonsoft::Json::MissingMemberHandling* Error; // 0x0

	};
}

