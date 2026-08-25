#pragma once
#include "../../unitysdk.h"

namespace Newtonsoft::Json { class PreserveReferencesHandling; }

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int PreserveReferencesHandling_TypeDefinitionIndex = 31794;

	class PreserveReferencesHandling : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Newtonsoft::Json::PreserveReferencesHandling* None; // 0x0
		::Newtonsoft::Json::PreserveReferencesHandling* Objects; // 0x0
		::Newtonsoft::Json::PreserveReferencesHandling* Arrays; // 0x0
		::Newtonsoft::Json::PreserveReferencesHandling* All; // 0x0

	};
}

