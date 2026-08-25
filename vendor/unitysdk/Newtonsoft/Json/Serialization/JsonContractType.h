#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Serialization { class JsonContractType; }

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonContractType_TypeDefinitionIndex = 31934;

	class JsonContractType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Newtonsoft::Json::Serialization::JsonContractType* None; // 0x0
		::Newtonsoft::Json::Serialization::JsonContractType* Object; // 0x0
		::Newtonsoft::Json::Serialization::JsonContractType* Array; // 0x0
		::Newtonsoft::Json::Serialization::JsonContractType* Primitive; // 0x0
		::Newtonsoft::Json::Serialization::JsonContractType* String; // 0x0
		::Newtonsoft::Json::Serialization::JsonContractType* Dictionary; // 0x0
		::Newtonsoft::Json::Serialization::JsonContractType* Dynamic; // 0x0
		::Newtonsoft::Json::Serialization::JsonContractType* Serializable; // 0x0
		::Newtonsoft::Json::Serialization::JsonContractType* Linq; // 0x0

	};
}

