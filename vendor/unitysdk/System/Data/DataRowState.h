#pragma once
#include "../../unitysdk.h"

namespace System::Data
{
	inline static constexpr unsigned int DataRowState_TypeDefinitionIndex = 32222;

	class DataRowState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Data::DataRowState* Detached; // 0x0
		::System::Data::DataRowState* Unchanged; // 0x0
		::System::Data::DataRowState* Added; // 0x0
		::System::Data::DataRowState* Deleted; // 0x0
		::System::Data::DataRowState* Modified; // 0x0

	};
}

