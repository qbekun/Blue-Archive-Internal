#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::Parcel { class CurrencyTransaction; }
namespace FlatData { class ConsumeCondition; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::GameLogic::Parcel { class ParcelCost; }

#define MX_GAMELOGIC_PARCEL_PARCELCOST_GET_PARCELINFOS_OFFSET UNITYSDK_OFFSET(0xFD87D0)
#define MX_GAMELOGIC_PARCEL_PARCELCOST_SET_PARCELINFOS_OFFSET UNITYSDK_OFFSET(0xFD87E0)
#define MX_GAMELOGIC_PARCEL_PARCELCOST_GET_CURRENCY_OFFSET UNITYSDK_OFFSET(0xFD87F0)
#define MX_GAMELOGIC_PARCEL_PARCELCOST_SET_CURRENCY_OFFSET UNITYSDK_OFFSET(0xFD8800)
#define MX_GAMELOGIC_PARCEL_PARCELCOST_GET_EQUIPMENTDBS_OFFSET UNITYSDK_OFFSET(0xFD8810)
#define MX_GAMELOGIC_PARCEL_PARCELCOST_SET_EQUIPMENTDBS_OFFSET UNITYSDK_OFFSET(0xFD8820)
#define MX_GAMELOGIC_PARCEL_PARCELCOST_GET_ITEMDBS_OFFSET UNITYSDK_OFFSET(0xFD8830)
#define MX_GAMELOGIC_PARCEL_PARCELCOST_SET_ITEMDBS_OFFSET UNITYSDK_OFFSET(0xFD8840)
#define MX_GAMELOGIC_PARCEL_PARCELCOST_GET_FURNITUREDBS_OFFSET UNITYSDK_OFFSET(0xFD8850)
#define MX_GAMELOGIC_PARCEL_PARCELCOST_SET_FURNITUREDBS_OFFSET UNITYSDK_OFFSET(0xFD8860)
#define MX_GAMELOGIC_PARCEL_PARCELCOST_GET_HASCURRENCY_OFFSET UNITYSDK_OFFSET(0xFD8870)
#define MX_GAMELOGIC_PARCEL_PARCELCOST_GET_HASITEM_OFFSET UNITYSDK_OFFSET(0xFD88A0)
#define MX_GAMELOGIC_PARCEL_PARCELCOST_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xFD89F0)
#define MX_GAMELOGIC_PARCEL_PARCELCOST_GET_CONSUMABLEITEMBASEDBS_OFFSET UNITYSDK_OFFSET(0xFD8B90)
#define MX_GAMELOGIC_PARCEL_PARCELCOST_GET_CONSUMECONDITION_OFFSET UNITYSDK_OFFSET(0xFD8D10)
#define MX_GAMELOGIC_PARCEL_PARCELCOST_SET_CONSUMECONDITION_OFFSET UNITYSDK_OFFSET(0xFD8D20)
#define MX_GAMELOGIC_PARCEL_PARCELCOST_.CTOR_OFFSET UNITYSDK_OFFSET(0xFD8D30)
#define MX_GAMELOGIC_PARCEL_PARCELCOST_.CTOR_OFFSET UNITYSDK_OFFSET(0xFD8F30)
#define MX_GAMELOGIC_PARCEL_PARCELCOST_.CTOR_OFFSET UNITYSDK_OFFSET(0xFD9B60)
#define MX_GAMELOGIC_PARCEL_PARCELCOST_.CTOR_OFFSET UNITYSDK_OFFSET(0xFD9BC0)
#define MX_GAMELOGIC_PARCEL_PARCELCOST_.CTOR_OFFSET UNITYSDK_OFFSET(0xFD9C50)
#define MX_GAMELOGIC_PARCEL_PARCELCOST_.CTOR_OFFSET UNITYSDK_OFFSET(0xFD9D50)
#define MX_GAMELOGIC_PARCEL_PARCELCOST_.CTOR_OFFSET UNITYSDK_OFFSET(0xFD9E60)
#define MX_GAMELOGIC_PARCEL_PARCELCOST_ADD_OFFSET UNITYSDK_OFFSET(0xFD8F90)
#define MX_GAMELOGIC_PARCEL_PARCELCOST_ADD_OFFSET UNITYSDK_OFFSET(0xFDA2E0)
#define MX_GAMELOGIC_PARCEL_PARCELCOST_ADD_OFFSET UNITYSDK_OFFSET(0xFDA3D0)
#define MX_GAMELOGIC_PARCEL_PARCELCOST_GETSUBCOST_OFFSET UNITYSDK_OFFSET(0xFDA3F0)
#define MX_GAMELOGIC_PARCEL_PARCELCOST_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xFDA580)
#define MX_GAMELOGIC_PARCEL_PARCELCOST_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xFDAB60)
#define MX_GAMELOGIC_PARCEL_PARCELCOST_EQUALS_OFFSET UNITYSDK_OFFSET(0xFDAB70)
#define MX_GAMELOGIC_PARCEL_PARCELCOST_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xFDABF0)
#define MX_GAMELOGIC_PARCEL_PARCELCOST_TOSTRING_OFFSET UNITYSDK_OFFSET(0xFDAD00)

namespace MX::GameLogic::Parcel
{
	inline static constexpr unsigned int ParcelCost_TypeDefinitionIndex = 12433;

	class ParcelCost : public Il2CppObject
	{
	public:
		Il2CppObject* _ParcelInfos_k__BackingField; // 0x10
		::MX::GameLogic::Parcel::CurrencyTransaction* _Currency_k__BackingField; // 0x18
		Il2CppObject* _EquipmentDBs_k__BackingField; // 0x20
		Il2CppObject* _ItemDBs_k__BackingField; // 0x28
		Il2CppObject* _FurnitureDBs_k__BackingField; // 0x30
		Il2CppObject* _consumableItemBaseDBs; // 0x38
		::FlatData::ConsumeCondition* _ConsumeCondition_k__BackingField; // 0x40

		Il2CppObject* get_ParcelInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELCOST_GET_PARCELINFOS_OFFSET))(nullptr);
		}

		::System::Void set_ParcelInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELCOST_SET_PARCELINFOS_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::CurrencyTransaction* get_Currency()
		{
			return ((::MX::GameLogic::Parcel::CurrencyTransaction*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELCOST_GET_CURRENCY_OFFSET))(nullptr);
		}

		::System::Void set_Currency(::MX::GameLogic::Parcel::CurrencyTransaction* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::CurrencyTransaction*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELCOST_SET_CURRENCY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_EquipmentDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELCOST_GET_EQUIPMENTDBS_OFFSET))(nullptr);
		}

		::System::Void set_EquipmentDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELCOST_SET_EQUIPMENTDBS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ItemDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELCOST_GET_ITEMDBS_OFFSET))(nullptr);
		}

		::System::Void set_ItemDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELCOST_SET_ITEMDBS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_FurnitureDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELCOST_GET_FURNITUREDBS_OFFSET))(nullptr);
		}

		::System::Void set_FurnitureDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELCOST_SET_FURNITUREDBS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasCurrency()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELCOST_GET_HASCURRENCY_OFFSET))(nullptr);
		}

		::System::Boolean get_HasItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELCOST_GET_HASITEM_OFFSET))(nullptr);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELCOST_GET_ISEMPTY_OFFSET))(nullptr);
		}

		Il2CppObject* get_ConsumableItemBaseDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELCOST_GET_CONSUMABLEITEMBASEDBS_OFFSET))(nullptr);
		}

		::FlatData::ConsumeCondition* get_ConsumeCondition()
		{
			return ((::FlatData::ConsumeCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELCOST_GET_CONSUMECONDITION_OFFSET))(nullptr);
		}

		::System::Void set_ConsumeCondition(::FlatData::ConsumeCondition* arg)
		{
			((::System::Void(*)(::FlatData::ConsumeCondition*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELCOST_SET_CONSUMECONDITION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELCOST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELCOST_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::FlatData::ConsumeCondition* arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::FlatData::ConsumeCondition*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELCOST_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::Parcel::CurrencyTransaction* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::CurrencyTransaction*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELCOST_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELCOST_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::Parcel::CurrencyTransaction* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::CurrencyTransaction*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELCOST_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELCOST_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Add(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELCOST_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void Add(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELCOST_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void Add(::MX::GameLogic::Parcel::ParcelCost* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelCost*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELCOST_ADD_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetSubCost()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELCOST_GETSUBCOST_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::GameLogic::Parcel::ParcelCost* arg, ::MX::GameLogic::Parcel::ParcelCost* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Parcel::ParcelCost*, ::MX::GameLogic::Parcel::ParcelCost*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELCOST_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::GameLogic::Parcel::ParcelCost* arg, ::MX::GameLogic::Parcel::ParcelCost* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Parcel::ParcelCost*, ::MX::GameLogic::Parcel::ParcelCost*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELCOST_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELCOST_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELCOST_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELCOST_TOSTRING_OFFSET))(nullptr);
		}

	};
}

