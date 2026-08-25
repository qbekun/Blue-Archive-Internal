#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelChangeType; }

namespace MX::GameLogic::Parcel
{
	inline static constexpr unsigned int ParcelChangeType_TypeDefinitionIndex = 12442;

	class ParcelChangeType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::GameLogic::Parcel::ParcelChangeType* NoChange; // 0x0
		::MX::GameLogic::Parcel::ParcelChangeType* Terminated; // 0x0
		::MX::GameLogic::Parcel::ParcelChangeType* MailSend; // 0x0
		::MX::GameLogic::Parcel::ParcelChangeType* Converted; // 0x0

	};
}

