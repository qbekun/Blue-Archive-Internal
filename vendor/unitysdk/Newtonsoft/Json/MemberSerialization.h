#pragma once
#include "../../unitysdk.h"

namespace Newtonsoft::Json { class MemberSerialization; }

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int MemberSerialization_TypeDefinitionIndex = 31789;

	class MemberSerialization : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Newtonsoft::Json::MemberSerialization* OptOut; // 0x0
		::Newtonsoft::Json::MemberSerialization* OptIn; // 0x0
		::Newtonsoft::Json::MemberSerialization* Fields; // 0x0

	};
}

