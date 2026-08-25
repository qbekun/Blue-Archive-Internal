#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelKeyPair; }

#define MX_GAMELOGIC_PARCEL_IPARCELINFO_GET_KEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMELOGIC_PARCEL_IPARCELINFO_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::GameLogic::Parcel
{
	inline static constexpr unsigned int IParcelInfo_TypeDefinitionIndex = 12434;

	class IParcelInfo : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelKeyPair* get_Key()
		{
			return ((::MX::GameLogic::Parcel::ParcelKeyPair*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_IPARCELINFO_GET_KEY_OFFSET))(nullptr);
		}

		::System::Int64 get_Amount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_IPARCELINFO_GET_AMOUNT_OFFSET))(nullptr);
		}

	};
}

