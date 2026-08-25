#pragma once
#include "../../unitysdk.h"

namespace System::Data
{
	inline static constexpr unsigned int DataRowVersion_TypeDefinitionIndex = 32223;

	class DataRowVersion : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Data::DataRowVersion* Original; // 0x0
		::System::Data::DataRowVersion* Current; // 0x0
		::System::Data::DataRowVersion* Proposed; // 0x0
		::System::Data::DataRowVersion* Default; // 0x0

	};
}

