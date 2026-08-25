#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Linq { class JTokenType; }

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JTokenType_TypeDefinitionIndex = 32052;

	class JTokenType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Newtonsoft::Json::Linq::JTokenType* None; // 0x0
		::Newtonsoft::Json::Linq::JTokenType* Object; // 0x0
		::Newtonsoft::Json::Linq::JTokenType* Array; // 0x0
		::Newtonsoft::Json::Linq::JTokenType* Constructor; // 0x0
		::Newtonsoft::Json::Linq::JTokenType* Property; // 0x0
		::Newtonsoft::Json::Linq::JTokenType* Comment; // 0x0
		::Newtonsoft::Json::Linq::JTokenType* Integer; // 0x0
		::Newtonsoft::Json::Linq::JTokenType* Float; // 0x0
		::Newtonsoft::Json::Linq::JTokenType* String; // 0x0
		::Newtonsoft::Json::Linq::JTokenType* Boolean; // 0x0
		::Newtonsoft::Json::Linq::JTokenType* Null; // 0x0
		::Newtonsoft::Json::Linq::JTokenType* Undefined; // 0x0
		::Newtonsoft::Json::Linq::JTokenType* Date; // 0x0
		::Newtonsoft::Json::Linq::JTokenType* Raw; // 0x0
		::Newtonsoft::Json::Linq::JTokenType* Bytes; // 0x0
		::Newtonsoft::Json::Linq::JTokenType* Guid; // 0x0
		::Newtonsoft::Json::Linq::JTokenType* Uri; // 0x0
		::Newtonsoft::Json::Linq::JTokenType* TimeSpan; // 0x0

	};
}

