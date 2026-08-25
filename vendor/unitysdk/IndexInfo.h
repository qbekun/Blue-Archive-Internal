#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int IndexInfo_TypeDefinitionIndex = 36582;

	class IndexInfo : public Il2CppObject
	{
	public:
		::System::String* IndexName; // 0x10
		::System::String* TableName; // 0x18
		::System::Boolean Unique; // 0x20
		Il2CppObject* Columns; // 0x28

	};

