#pragma once
#include "../../unitysdk.h"

namespace Newtonsoft::Json { class WriteState; }

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int WriteState_TypeDefinitionIndex = 31800;

	class WriteState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Newtonsoft::Json::WriteState* Error; // 0x0
		::Newtonsoft::Json::WriteState* Closed; // 0x0
		::Newtonsoft::Json::WriteState* Object; // 0x0
		::Newtonsoft::Json::WriteState* Array; // 0x0
		::Newtonsoft::Json::WriteState* Constructor; // 0x0
		::Newtonsoft::Json::WriteState* Property; // 0x0
		::Newtonsoft::Json::WriteState* Start; // 0x0

	};
}

