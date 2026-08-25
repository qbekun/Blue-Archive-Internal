#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelProcessActionType; }

namespace MX::GameLogic::Parcel
{
	inline static constexpr unsigned int ParcelProcessActionType_TypeDefinitionIndex = 12441;

	class ParcelProcessActionType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::GameLogic::Parcel::ParcelProcessActionType* None; // 0x0
		::MX::GameLogic::Parcel::ParcelProcessActionType* Cost; // 0x0
		::MX::GameLogic::Parcel::ParcelProcessActionType* Reward; // 0x0

	};
}

