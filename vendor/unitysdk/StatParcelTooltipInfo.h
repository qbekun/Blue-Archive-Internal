#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelKeyPair; }
class AssetObjectBase;

#define STATPARCELTOOLTIPINFO_SET_PARCEL_OFFSET UNITYSDK_OFFSET(0x275E390)
#define STATPARCELTOOLTIPINFO_GET_ASSET_OFFSET UNITYSDK_OFFSET(0x275E3A0)
#define STATPARCELTOOLTIPINFO_GET_PARCEL_OFFSET UNITYSDK_OFFSET(0x275E3B0)
#define STATPARCELTOOLTIPINFO_SET_ASSET_OFFSET UNITYSDK_OFFSET(0x275E3C0)
#define STATPARCELTOOLTIPINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x275E3D0)

	inline static constexpr unsigned int StatParcelTooltipInfo_TypeDefinitionIndex = 7287;

	class StatParcelTooltipInfo : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelKeyPair* _Parcel_k__BackingField; // 0x10
		AssetObjectBase* _Asset_k__BackingField; // 0x20

		::System::Void set_Parcel(::MX::GameLogic::Parcel::ParcelKeyPair* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelKeyPair*, ::PVOID))((::PBYTE)hIl2Cpp + STATPARCELTOOLTIPINFO_SET_PARCEL_OFFSET))(arg, nullptr);
		}

		AssetObjectBase* get_Asset()
		{
			return ((AssetObjectBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATPARCELTOOLTIPINFO_GET_ASSET_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelKeyPair* get_Parcel()
		{
			return ((::MX::GameLogic::Parcel::ParcelKeyPair*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATPARCELTOOLTIPINFO_GET_PARCEL_OFFSET))(nullptr);
		}

		::System::Void set_Asset(AssetObjectBase* arg)
		{
			((::System::Void(*)(AssetObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + STATPARCELTOOLTIPINFO_SET_ASSET_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::Parcel::ParcelKeyPair* arg, AssetObjectBase* arg2)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelKeyPair*, AssetObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + STATPARCELTOOLTIPINFO_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

