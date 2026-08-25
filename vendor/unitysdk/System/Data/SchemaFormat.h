#pragma once
#include "../../unitysdk.h"

namespace System::Data
{
	inline static constexpr unsigned int SchemaFormat_TypeDefinitionIndex = 32317;

	class SchemaFormat : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Data::SchemaFormat* Public; // 0x0
		::System::Data::SchemaFormat* Remoting; // 0x0
		::System::Data::SchemaFormat* WebService; // 0x0
		::System::Data::SchemaFormat* RemotingSkipSchema; // 0x0
		::System::Data::SchemaFormat* WebServiceSkipSchema; // 0x0

	};
}

