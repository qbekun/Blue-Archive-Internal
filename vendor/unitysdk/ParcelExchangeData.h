#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelInfo; }

#define PARCELEXCHANGEDATA_SET_TOEXCHANGE_OFFSET UNITYSDK_OFFSET(0x27015C0)
#define PARCELEXCHANGEDATA_SET_RESULT_OFFSET UNITYSDK_OFFSET(0x27015D0)
#define PARCELEXCHANGEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x27015E0)
#define PARCELEXCHANGEDATA_GET_TOEXCHANGE_OFFSET UNITYSDK_OFFSET(0x2701640)
#define PARCELEXCHANGEDATA_GET_ORIGINAL_OFFSET UNITYSDK_OFFSET(0x2701650)
#define PARCELEXCHANGEDATA_GET_RESULT_OFFSET UNITYSDK_OFFSET(0x2701660)
#define PARCELEXCHANGEDATA_SET_ORIGINAL_OFFSET UNITYSDK_OFFSET(0x2701670)

	inline static constexpr unsigned int ParcelExchangeData_TypeDefinitionIndex = 7077;

	class ParcelExchangeData : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelInfo* _Original_k__BackingField; // 0x10
		::MX::GameLogic::Parcel::ParcelInfo* _ToExchange_k__BackingField; // 0x18
		::MX::GameLogic::Parcel::ParcelInfo* _Result_k__BackingField; // 0x20

		::System::Void set_ToExchange(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + PARCELEXCHANGEDATA_SET_TOEXCHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Result(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + PARCELEXCHANGEDATA_SET_RESULT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::Parcel::ParcelInfo* arg, ::MX::GameLogic::Parcel::ParcelInfo* arg2, ::MX::GameLogic::Parcel::ParcelInfo* arg3)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::MX::GameLogic::Parcel::ParcelInfo*, ::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + PARCELEXCHANGEDATA_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_ToExchange()
		{
			return ((::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARCELEXCHANGEDATA_GET_TOEXCHANGE_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_Original()
		{
			return ((::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARCELEXCHANGEDATA_GET_ORIGINAL_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_Result()
		{
			return ((::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARCELEXCHANGEDATA_GET_RESULT_OFFSET))(nullptr);
		}

		::System::Void set_Original(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + PARCELEXCHANGEDATA_SET_ORIGINAL_OFFSET))(arg, nullptr);
		}

	};

