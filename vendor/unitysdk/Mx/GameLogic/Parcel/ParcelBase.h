#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ParcelType; }

#define MX_GAMELOGIC_PARCEL_PARCELBASE_GET_PARCELINFOS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMELOGIC_PARCEL_PARCELBASE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMELOGIC_PARCEL_PARCELBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0xFCD910)
#define MX_GAMELOGIC_PARCEL_PARCELBASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xFD87A0)

namespace MX::GameLogic::Parcel
{
	inline static constexpr unsigned int ParcelBase_TypeDefinitionIndex = 12431;

	class ParcelBase : public Il2CppObject
	{
	public:
		Il2CppObject* get_ParcelInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELBASE_GET_PARCELINFOS_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_Type()
		{
			return ((::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELBASE_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELBASE_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELBASE_TOSTRING_OFFSET))(nullptr);
		}

	};
}

