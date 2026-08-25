#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelKeyPair; }
class CafeProductionParcelInfo;

#define CAFEPRODUCTIONPARCELINFO_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0xFE59B0)
#define CAFEPRODUCTIONPARCELINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xFE59C0)
#define CAFEPRODUCTIONPARCELINFO_CLONE_OFFSET UNITYSDK_OFFSET(0xFE59D0)
#define CAFEPRODUCTIONPARCELINFO_SET_KEY_OFFSET UNITYSDK_OFFSET(0xFE5A40)
#define CAFEPRODUCTIONPARCELINFO_SET_AMOUNT_OFFSET UNITYSDK_OFFSET(0xFE5A50)
#define CAFEPRODUCTIONPARCELINFO_GET_KEY_OFFSET UNITYSDK_OFFSET(0xFE5A60)

	inline static constexpr unsigned int CafeProductionParcelInfo_TypeDefinitionIndex = 12498;

	class CafeProductionParcelInfo : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelKeyPair* _Key_k__BackingField; // 0x10
		::System::Int64 _Amount_k__BackingField; // 0x20

		::System::Int64 get_Amount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEPRODUCTIONPARCELINFO_GET_AMOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEPRODUCTIONPARCELINFO_.CTOR_OFFSET))(nullptr);
		}

		CafeProductionParcelInfo* Clone()
		{
			return ((CafeProductionParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEPRODUCTIONPARCELINFO_CLONE_OFFSET))(nullptr);
		}

		::System::Void set_Key(::MX::GameLogic::Parcel::ParcelKeyPair* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelKeyPair*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEPRODUCTIONPARCELINFO_SET_KEY_OFFSET))(arg, nullptr);
		}

		::System::Void set_Amount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFEPRODUCTIONPARCELINFO_SET_AMOUNT_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelKeyPair* get_Key()
		{
			return ((::MX::GameLogic::Parcel::ParcelKeyPair*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEPRODUCTIONPARCELINFO_GET_KEY_OFFSET))(nullptr);
		}

	};

