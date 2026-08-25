#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class IssueAlertTypeCode; }

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int IssueAlertTypeCode_TypeDefinitionIndex = 12637;

	class IssueAlertTypeCode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::GameLogic::DBModel::IssueAlertTypeCode* All; // 0x0
		::MX::GameLogic::DBModel::IssueAlertTypeCode* File_Target; // 0x0
		::MX::GameLogic::DBModel::IssueAlertTypeCode* AllButFile_Exception; // 0x0

	};
}

