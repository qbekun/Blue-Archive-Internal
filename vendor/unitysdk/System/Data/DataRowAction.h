#pragma once
#include "../../unitysdk.h"

namespace System::Data
{
	inline static constexpr unsigned int DataRowAction_TypeDefinitionIndex = 32215;

	class DataRowAction : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Data::DataRowAction* Nothing; // 0x0
		::System::Data::DataRowAction* Delete; // 0x0
		::System::Data::DataRowAction* Change; // 0x0
		::System::Data::DataRowAction* Rollback; // 0x0
		::System::Data::DataRowAction* Commit; // 0x0
		::System::Data::DataRowAction* Add; // 0x0
		::System::Data::DataRowAction* ChangeOriginal; // 0x0
		::System::Data::DataRowAction* ChangeCurrentAndOriginal; // 0x0

	};
}

