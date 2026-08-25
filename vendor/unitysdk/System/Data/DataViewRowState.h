#pragma once
#include "../../unitysdk.h"

namespace System::Data
{
	inline static constexpr unsigned int DataViewRowState_TypeDefinitionIndex = 32239;

	class DataViewRowState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Data::DataViewRowState* None; // 0x0
		::System::Data::DataViewRowState* Unchanged; // 0x0
		::System::Data::DataViewRowState* Added; // 0x0
		::System::Data::DataViewRowState* Deleted; // 0x0
		::System::Data::DataViewRowState* ModifiedCurrent; // 0x0
		::System::Data::DataViewRowState* ModifiedOriginal; // 0x0
		::System::Data::DataViewRowState* OriginalRows; // 0x0
		::System::Data::DataViewRowState* CurrentRows; // 0x0

	};
}

