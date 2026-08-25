#pragma once
#include "../../unitysdk.h"

namespace Newtonsoft::Json { class Required; }

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int Required_TypeDefinitionIndex = 31796;

	class Required : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Newtonsoft::Json::Required* Default; // 0x0
		::Newtonsoft::Json::Required* AllowNull; // 0x0
		::Newtonsoft::Json::Required* Always; // 0x0
		::Newtonsoft::Json::Required* DisallowNull; // 0x0

	};
}

