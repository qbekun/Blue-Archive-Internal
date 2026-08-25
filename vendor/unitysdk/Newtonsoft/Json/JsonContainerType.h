#pragma once
#include "../../unitysdk.h"

namespace Newtonsoft::Json { class JsonContainerType; }

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonContainerType_TypeDefinitionIndex = 31695;

	class JsonContainerType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Newtonsoft::Json::JsonContainerType* None; // 0x0
		::Newtonsoft::Json::JsonContainerType* Object; // 0x0
		::Newtonsoft::Json::JsonContainerType* Array; // 0x0
		::Newtonsoft::Json::JsonContainerType* Constructor; // 0x0

	};
}

