#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelInfo; }
class AssetObjectBase;

#define MULTISWEEPITEMINFO_GET_PARCELINFO_OFFSET UNITYSDK_OFFSET(0x2712FA0)
#define MULTISWEEPITEMINFO_GET_ASSETOBJECT_OFFSET UNITYSDK_OFFSET(0x2712FB0)
#define MULTISWEEPITEMINFO_SET_PARCELINFO_OFFSET UNITYSDK_OFFSET(0x2712FC0)
#define MULTISWEEPITEMINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x2712FD0)
#define MULTISWEEPITEMINFO_SET_ASSETOBJECT_OFFSET UNITYSDK_OFFSET(0x2713320)

	inline static constexpr unsigned int MultiSweepItemInfo_TypeDefinitionIndex = 7130;

	class MultiSweepItemInfo : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelInfo* _parcelInfo_k__BackingField; // 0x10
		AssetObjectBase* _assetObject_k__BackingField; // 0x18

		::MX::GameLogic::Parcel::ParcelInfo* get_parcelInfo()
		{
			return ((::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPITEMINFO_GET_PARCELINFO_OFFSET))(nullptr);
		}

		AssetObjectBase* get_assetObject()
		{
			return ((AssetObjectBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPITEMINFO_GET_ASSETOBJECT_OFFSET))(nullptr);
		}

		::System::Void set_parcelInfo(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPITEMINFO_SET_PARCELINFO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPITEMINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_assetObject(AssetObjectBase* arg)
		{
			((::System::Void(*)(AssetObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPITEMINFO_SET_ASSETOBJECT_OFFSET))(arg, nullptr);
		}

	};

