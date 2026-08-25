#pragma once
#include "../../../unitysdk.h"

namespace MXField::Shared::Condition { class ConditionElement; }
namespace FlatData { class FieldMasteryExcel; }
namespace MX::GameLogic::Parcel { class ParcelCost; }

#define MXFIELD_SHARED_DATA_FIELDMASTERYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xE7B5A0)
#define MXFIELD_SHARED_DATA_FIELDMASTERYINFO_GET_TOKENCOST_OFFSET UNITYSDK_OFFSET(0xE7B7E0)
#define MXFIELD_SHARED_DATA_FIELDMASTERYINFO_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0xE7B840)
#define MXFIELD_SHARED_DATA_FIELDMASTERYINFO_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xE7B850)
#define MXFIELD_SHARED_DATA_FIELDMASTERYINFO_GET_CONDITION_OFFSET UNITYSDK_OFFSET(0xE7B860)
#define MXFIELD_SHARED_DATA_FIELDMASTERYINFO_GET_ORDER_OFFSET UNITYSDK_OFFSET(0xE7B870)
#define MXFIELD_SHARED_DATA_FIELDMASTERYINFO_GET_TOKEN_OFFSET UNITYSDK_OFFSET(0xE7B880)
#define MXFIELD_SHARED_DATA_FIELDMASTERYINFO_GET_EXPAMOUNT_OFFSET UNITYSDK_OFFSET(0xE7B890)

namespace MXField::Shared::Data
{
	inline static constexpr unsigned int FieldMasteryInfo_TypeDefinitionIndex = 10587;

	class FieldMasteryInfo : public Il2CppObject
	{
	public:
		::System::Int64 _SeasonId_k__BackingField; // 0x10
		::System::Int64 _UniqueId_k__BackingField; // 0x18
		::System::Int32 _Order_k__BackingField; // 0x20
		::System::Int64 _ExpAmount_k__BackingField; // 0x28
		Il2CppObject* _Token_k__BackingField; // 0x30
		::MXField::Shared::Condition::ConditionElement* _Condition_k__BackingField; // 0x38

		::System::Void .ctor(::FlatData::FieldMasteryExcel* arg)
		{
			((::System::Void(*)(::FlatData::FieldMasteryExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDMASTERYINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelCost* get_TokenCost()
		{
			return ((::MX::GameLogic::Parcel::ParcelCost*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDMASTERYINFO_GET_TOKENCOST_OFFSET))(nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDMASTERYINFO_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDMASTERYINFO_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::MXField::Shared::Condition::ConditionElement* get_Condition()
		{
			return ((::MXField::Shared::Condition::ConditionElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDMASTERYINFO_GET_CONDITION_OFFSET))(nullptr);
		}

		::System::Int32 get_Order()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDMASTERYINFO_GET_ORDER_OFFSET))(nullptr);
		}

		Il2CppObject* get_Token()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDMASTERYINFO_GET_TOKEN_OFFSET))(nullptr);
		}

		::System::Int64 get_ExpAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDMASTERYINFO_GET_EXPAMOUNT_OFFSET))(nullptr);
		}

	};
}

