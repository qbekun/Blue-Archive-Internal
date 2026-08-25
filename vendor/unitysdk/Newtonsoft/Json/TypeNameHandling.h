#pragma once
#include "../../unitysdk.h"

namespace Newtonsoft::Json { class TypeNameHandling; }

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int TypeNameHandling_TypeDefinitionIndex = 31799;

	class TypeNameHandling : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Newtonsoft::Json::TypeNameHandling* None; // 0x0
		::Newtonsoft::Json::TypeNameHandling* Objects; // 0x0
		::Newtonsoft::Json::TypeNameHandling* Arrays; // 0x0
		::Newtonsoft::Json::TypeNameHandling* All; // 0x0
		::Newtonsoft::Json::TypeNameHandling* Auto; // 0x0

	};
}

