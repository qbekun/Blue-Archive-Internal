#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class CafeProductionDB; }

#define MX_GAMELOGIC_DBMODEL_CAFEPRODUCTIONDB_GET_PRODUCTIONPARCELINFOS_OFFSET UNITYSDK_OFFSET(0xFE5750)
#define MX_GAMELOGIC_DBMODEL_CAFEPRODUCTIONDB_SET_PRODUCTIONPARCELINFOS_OFFSET UNITYSDK_OFFSET(0xFE5760)
#define MX_GAMELOGIC_DBMODEL_CAFEPRODUCTIONDB_RESETPRODUCTIONVALUES_OFFSET UNITYSDK_OFFSET(0xFE5770)
#define MX_GAMELOGIC_DBMODEL_CAFEPRODUCTIONDB_SET_APPLIEDDATE_OFFSET UNITYSDK_OFFSET(0xFE58D0)
#define MX_GAMELOGIC_DBMODEL_CAFEPRODUCTIONDB_GET_COMFORTVALUE_OFFSET UNITYSDK_OFFSET(0xFE58E0)
#define MX_GAMELOGIC_DBMODEL_CAFEPRODUCTIONDB_CLONE_OFFSET UNITYSDK_OFFSET(0xFE5500)
#define MX_GAMELOGIC_DBMODEL_CAFEPRODUCTIONDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFE58F0)
#define MX_GAMELOGIC_DBMODEL_CAFEPRODUCTIONDB_GET_CAFEDBID_OFFSET UNITYSDK_OFFSET(0xFE5970)
#define MX_GAMELOGIC_DBMODEL_CAFEPRODUCTIONDB_SET_CAFEDBID_OFFSET UNITYSDK_OFFSET(0xFE5980)
#define MX_GAMELOGIC_DBMODEL_CAFEPRODUCTIONDB_GET_APPLIEDDATE_OFFSET UNITYSDK_OFFSET(0xFE5990)
#define MX_GAMELOGIC_DBMODEL_CAFEPRODUCTIONDB_SET_COMFORTVALUE_OFFSET UNITYSDK_OFFSET(0xFE59A0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int CafeProductionDB_TypeDefinitionIndex = 12500;

	class CafeProductionDB : public Il2CppObject
	{
	public:
		::System::Int64 _CafeDBId_k__BackingField; // 0x10
		::System::Int64 _ComfortValue_k__BackingField; // 0x18
		::System::DateTime* _AppliedDate_k__BackingField; // 0x20
		Il2CppObject* _ProductionParcelInfos_k__BackingField; // 0x28

		Il2CppObject* get_ProductionParcelInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAFEPRODUCTIONDB_GET_PRODUCTIONPARCELINFOS_OFFSET))(nullptr);
		}

		::System::Void set_ProductionParcelInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAFEPRODUCTIONDB_SET_PRODUCTIONPARCELINFOS_OFFSET))(arg, nullptr);
		}

		::System::Void ResetProductionValues()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAFEPRODUCTIONDB_RESETPRODUCTIONVALUES_OFFSET))(nullptr);
		}

		::System::Void set_AppliedDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAFEPRODUCTIONDB_SET_APPLIEDDATE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ComfortValue()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAFEPRODUCTIONDB_GET_COMFORTVALUE_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::CafeProductionDB* Clone()
		{
			return ((::MX::GameLogic::DBModel::CafeProductionDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAFEPRODUCTIONDB_CLONE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAFEPRODUCTIONDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_CafeDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAFEPRODUCTIONDB_GET_CAFEDBID_OFFSET))(nullptr);
		}

		::System::Void set_CafeDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAFEPRODUCTIONDB_SET_CAFEDBID_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_AppliedDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAFEPRODUCTIONDB_GET_APPLIEDDATE_OFFSET))(nullptr);
		}

		::System::Void set_ComfortValue(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAFEPRODUCTIONDB_SET_COMFORTVALUE_OFFSET))(arg, nullptr);
		}

	};
}

