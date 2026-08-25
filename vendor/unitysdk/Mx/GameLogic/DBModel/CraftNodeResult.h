#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class CraftNodeTier; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }

#define MX_GAMELOGIC_DBMODEL_CRAFTNODERESULT_SET_PARCELINFO_OFFSET UNITYSDK_OFFSET(0xFF4F70)
#define MX_GAMELOGIC_DBMODEL_CRAFTNODERESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0xFF4E50)
#define MX_GAMELOGIC_DBMODEL_CRAFTNODERESULT_GET_NODETIER_OFFSET UNITYSDK_OFFSET(0xFF4F80)
#define MX_GAMELOGIC_DBMODEL_CRAFTNODERESULT_SET_NODETIER_OFFSET UNITYSDK_OFFSET(0xFF4F90)
#define MX_GAMELOGIC_DBMODEL_CRAFTNODERESULT_GET_PARCELINFO_OFFSET UNITYSDK_OFFSET(0xFF4FA0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int CraftNodeResult_TypeDefinitionIndex = 12571;

	class CraftNodeResult : public Il2CppObject
	{
	public:
		::FlatData::CraftNodeTier* _NodeTier_k__BackingField; // 0x10
		::MX::GameLogic::Parcel::ParcelInfo* _ParcelInfo_k__BackingField; // 0x18

		::System::Void set_ParcelInfo(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTNODERESULT_SET_PARCELINFO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTNODERESULT_.CTOR_OFFSET))(nullptr);
		}

		::FlatData::CraftNodeTier* get_NodeTier()
		{
			return ((::FlatData::CraftNodeTier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTNODERESULT_GET_NODETIER_OFFSET))(nullptr);
		}

		::System::Void set_NodeTier(::FlatData::CraftNodeTier* arg)
		{
			((::System::Void(*)(::FlatData::CraftNodeTier*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTNODERESULT_SET_NODETIER_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_ParcelInfo()
		{
			return ((::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CRAFTNODERESULT_GET_PARCELINFO_OFFSET))(nullptr);
		}

	};
}

