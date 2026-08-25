#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::LogModel { class UserType; }

namespace MX::GameLogic::LogModel
{
	inline static constexpr unsigned int UserType_TypeDefinitionIndex = 12446;

	class UserType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::GameLogic::LogModel::UserType* None; // 0x0
		::MX::GameLogic::LogModel::UserType* GM; // 0x0
		::MX::GameLogic::LogModel::UserType* Tester; // 0x0
		::MX::GameLogic::LogModel::UserType* Bot; // 0x0

	};
}

