#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class ConquestEventObjectType; }

namespace MX::Data
{
	inline static constexpr unsigned int ConquestEventObjectType_TypeDefinitionIndex = 15753;

	class ConquestEventObjectType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Data::ConquestEventObjectType* None; // 0x0
		::MX::Data::ConquestEventObjectType* UnexpectedEnemy; // 0x0
		::MX::Data::ConquestEventObjectType* TreasureBox; // 0x0
		::MX::Data::ConquestEventObjectType* Erosion; // 0x0
		::MX::Data::ConquestEventObjectType* End; // 0x0

	};
}

