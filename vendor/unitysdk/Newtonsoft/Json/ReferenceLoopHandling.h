#pragma once
#include "../../unitysdk.h"

namespace Newtonsoft::Json { class ReferenceLoopHandling; }

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int ReferenceLoopHandling_TypeDefinitionIndex = 31795;

	class ReferenceLoopHandling : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Newtonsoft::Json::ReferenceLoopHandling* Error; // 0x0
		::Newtonsoft::Json::ReferenceLoopHandling* Ignore; // 0x0
		::Newtonsoft::Json::ReferenceLoopHandling* Serialize; // 0x0

	};
}

