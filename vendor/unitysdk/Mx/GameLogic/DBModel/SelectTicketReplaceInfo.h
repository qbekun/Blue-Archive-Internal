#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ParcelType; }
namespace MX::GameLogic::DBModel { class SelectTicketReplaceInfo; }

#define MX_GAMELOGIC_DBMODEL_SELECTTICKETREPLACEINFO_SET_AMOUNT_OFFSET UNITYSDK_OFFSET(0xFF3880)
#define MX_GAMELOGIC_DBMODEL_SELECTTICKETREPLACEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xFF3890)
#define MX_GAMELOGIC_DBMODEL_SELECTTICKETREPLACEINFO_SET_MATERIALTYPE_OFFSET UNITYSDK_OFFSET(0xFF38A0)
#define MX_GAMELOGIC_DBMODEL_SELECTTICKETREPLACEINFO_GET_MATERIALTYPE_OFFSET UNITYSDK_OFFSET(0xFF38B0)
#define MX_GAMELOGIC_DBMODEL_SELECTTICKETREPLACEINFO_GET_TICKETITEMID_OFFSET UNITYSDK_OFFSET(0xFF38C0)
#define MX_GAMELOGIC_DBMODEL_SELECTTICKETREPLACEINFO_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0xFF38D0)
#define MX_GAMELOGIC_DBMODEL_SELECTTICKETREPLACEINFO_CLONE_OFFSET UNITYSDK_OFFSET(0xFF38E0)
#define MX_GAMELOGIC_DBMODEL_SELECTTICKETREPLACEINFO_SET_MATERIALID_OFFSET UNITYSDK_OFFSET(0xFF3950)
#define MX_GAMELOGIC_DBMODEL_SELECTTICKETREPLACEINFO_SET_TICKETITEMID_OFFSET UNITYSDK_OFFSET(0xFF3960)
#define MX_GAMELOGIC_DBMODEL_SELECTTICKETREPLACEINFO_GET_MATERIALID_OFFSET UNITYSDK_OFFSET(0xFF3970)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int SelectTicketReplaceInfo_TypeDefinitionIndex = 12558;

	class SelectTicketReplaceInfo : public Il2CppObject
	{
	public:
		::FlatData::ParcelType* _MaterialType_k__BackingField; // 0x10
		::System::Int64 _MaterialId_k__BackingField; // 0x18
		::System::Int64 _TicketItemId_k__BackingField; // 0x20
		::System::Int32 _Amount_k__BackingField; // 0x28

		::System::Void set_Amount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SELECTTICKETREPLACEINFO_SET_AMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SELECTTICKETREPLACEINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_MaterialType(::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SELECTTICKETREPLACEINFO_SET_MATERIALTYPE_OFFSET))(arg, nullptr);
		}

		::FlatData::ParcelType* get_MaterialType()
		{
			return ((::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SELECTTICKETREPLACEINFO_GET_MATERIALTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_TicketItemId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SELECTTICKETREPLACEINFO_GET_TICKETITEMID_OFFSET))(nullptr);
		}

		::System::Int32 get_Amount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SELECTTICKETREPLACEINFO_GET_AMOUNT_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::SelectTicketReplaceInfo* Clone()
		{
			return ((::MX::GameLogic::DBModel::SelectTicketReplaceInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SELECTTICKETREPLACEINFO_CLONE_OFFSET))(nullptr);
		}

		::System::Void set_MaterialId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SELECTTICKETREPLACEINFO_SET_MATERIALID_OFFSET))(arg, nullptr);
		}

		::System::Void set_TicketItemId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SELECTTICKETREPLACEINFO_SET_TICKETITEMID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MaterialId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SELECTTICKETREPLACEINFO_GET_MATERIALID_OFFSET))(nullptr);
		}

	};
}

