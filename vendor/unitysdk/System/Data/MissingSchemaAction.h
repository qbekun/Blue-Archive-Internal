#pragma once
#include "../../unitysdk.h"

namespace System::Data
{
	inline static constexpr unsigned int MissingSchemaAction_TypeDefinitionIndex = 32275;

	class MissingSchemaAction : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Data::MissingSchemaAction* Add; // 0x0
		::System::Data::MissingSchemaAction* Ignore; // 0x0
		::System::Data::MissingSchemaAction* Error; // 0x0
		::System::Data::MissingSchemaAction* AddWithKey; // 0x0

	};
}

