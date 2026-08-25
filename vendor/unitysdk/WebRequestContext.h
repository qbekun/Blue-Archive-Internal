#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int WebRequestContext_TypeDefinitionIndex = 25883;

	class WebRequestContext : public Il2CppObject
	{
	public:
		::System::String* method; // 0x10
		::System::String* uri; // 0x18
		::Il2CppArray<::System::Object*>* headers; // 0x20
		::System::String* body; // 0x28

	};

