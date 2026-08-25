#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::Data::Excel { class CharacterExcel; }

#define MX_DATA_CHARACTERDUPLICATEREWARDDATA_GET_DUPLICATEREWARDS_OFFSET UNITYSDK_OFFSET(0x1838160)
#define MX_DATA_CHARACTERDUPLICATEREWARDDATA_SET_DUPLICATEREWARDS_OFFSET UNITYSDK_OFFSET(0x1838170)
#define MX_DATA_CHARACTERDUPLICATEREWARDDATA_GET_CHARACTERPIECEPARCELINFO_OFFSET UNITYSDK_OFFSET(0x1838180)
#define MX_DATA_CHARACTERDUPLICATEREWARDDATA_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1838190)
#define MX_DATA_CHARACTERDUPLICATEREWARDDATA_GET_SECRETSTONEPARCELINFO_OFFSET UNITYSDK_OFFSET(0x18381A0)
#define MX_DATA_CHARACTERDUPLICATEREWARDDATA_SET_CHARACTERPIECEPARCELINFO_OFFSET UNITYSDK_OFFSET(0x18381B0)
#define MX_DATA_CHARACTERDUPLICATEREWARDDATA_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x18381C0)
#define MX_DATA_CHARACTERDUPLICATEREWARDDATA_SET_SECRETSTONEPARCELINFO_OFFSET UNITYSDK_OFFSET(0x18381D0)
#define MX_DATA_CHARACTERDUPLICATEREWARDDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18381E0)

namespace MX::Data
{
	inline static constexpr unsigned int CharacterDuplicateRewardData_TypeDefinitionIndex = 15748;

	class CharacterDuplicateRewardData : public Il2CppObject
	{
	public:
		::System::Int64 _UniqueId_k__BackingField; // 0x10
		::MX::GameLogic::Parcel::ParcelInfo* _SecretStoneParcelInfo_k__BackingField; // 0x18
		::MX::GameLogic::Parcel::ParcelInfo* _CharacterPieceParcelInfo_k__BackingField; // 0x20
		Il2CppObject* _DuplicateRewards_k__BackingField; // 0x28

		Il2CppObject* get_DuplicateRewards()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDUPLICATEREWARDDATA_GET_DUPLICATEREWARDS_OFFSET))(nullptr);
		}

		::System::Void set_DuplicateRewards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDUPLICATEREWARDDATA_SET_DUPLICATEREWARDS_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_CharacterPieceParcelInfo()
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDUPLICATEREWARDDATA_GET_CHARACTERPIECEPARCELINFO_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDUPLICATEREWARDDATA_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_SecretStoneParcelInfo()
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDUPLICATEREWARDDATA_GET_SECRETSTONEPARCELINFO_OFFSET))(nullptr);
		}

		::System::Void set_CharacterPieceParcelInfo(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDUPLICATEREWARDDATA_SET_CHARACTERPIECEPARCELINFO_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDUPLICATEREWARDDATA_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_SecretStoneParcelInfo(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDUPLICATEREWARDDATA_SET_SECRETSTONEPARCELINFO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::CharacterExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::CharacterExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDUPLICATEREWARDDATA_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

