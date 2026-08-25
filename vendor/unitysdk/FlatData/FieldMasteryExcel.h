#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class FieldMasteryExcel; }
namespace FlatData { class ParcelType; }
namespace FlatData { class FieldConditionType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define FLATDATA_FIELDMASTERYEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD3EC20)
#define FLATDATA_FIELDMASTERYEXCEL_GETROOTASFIELDMASTERYEXCEL_OFFSET UNITYSDK_OFFSET(0xD3EC30)
#define FLATDATA_FIELDMASTERYEXCEL_GETROOTASFIELDMASTERYEXCEL_OFFSET UNITYSDK_OFFSET(0xD3EC90)
#define FLATDATA_FIELDMASTERYEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD3ECF0)
#define FLATDATA_FIELDMASTERYEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD3E940)
#define FLATDATA_FIELDMASTERYEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xD3ED10)
#define FLATDATA_FIELDMASTERYEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xD3ED60)
#define FLATDATA_FIELDMASTERYEXCEL_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0xD3EDE0)
#define FLATDATA_FIELDMASTERYEXCEL_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0xD3EE30)
#define FLATDATA_FIELDMASTERYEXCEL_GET_ORDER_OFFSET UNITYSDK_OFFSET(0xD3EEB0)
#define FLATDATA_FIELDMASTERYEXCEL_GET_ORDER_OFFSET UNITYSDK_OFFSET(0xD3EF00)
#define FLATDATA_FIELDMASTERYEXCEL_GET_EXPAMOUNT_OFFSET UNITYSDK_OFFSET(0xD3EF80)
#define FLATDATA_FIELDMASTERYEXCEL_GET_EXPAMOUNT_OFFSET UNITYSDK_OFFSET(0xD3EFD0)
#define FLATDATA_FIELDMASTERYEXCEL_GET_TOKENTYPE_OFFSET UNITYSDK_OFFSET(0xD3F050)
#define FLATDATA_FIELDMASTERYEXCEL_GET_TOKENTYPE_OFFSET UNITYSDK_OFFSET(0xD3F0A0)
#define FLATDATA_FIELDMASTERYEXCEL_GET_TOKENID_OFFSET UNITYSDK_OFFSET(0xD3F120)
#define FLATDATA_FIELDMASTERYEXCEL_GET_TOKENID_OFFSET UNITYSDK_OFFSET(0xD3F170)
#define FLATDATA_FIELDMASTERYEXCEL_GET_TOKENREQUIREMENT_OFFSET UNITYSDK_OFFSET(0xD3F1F0)
#define FLATDATA_FIELDMASTERYEXCEL_GET_TOKENREQUIREMENT_OFFSET UNITYSDK_OFFSET(0xD3F240)
#define FLATDATA_FIELDMASTERYEXCEL_GET_ACCOMPLISHMENTCONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0xD3F2C0)
#define FLATDATA_FIELDMASTERYEXCEL_GET_ACCOMPLISHMENTCONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0xD3F310)
#define FLATDATA_FIELDMASTERYEXCEL_GET_ACCOMPLISHMENTCONDITIONID_OFFSET UNITYSDK_OFFSET(0xD3F390)
#define FLATDATA_FIELDMASTERYEXCEL_GET_ACCOMPLISHMENTCONDITIONID_OFFSET UNITYSDK_OFFSET(0xD3F3E0)
#define FLATDATA_FIELDMASTERYEXCEL_CREATEFIELDMASTERYEXCEL_OFFSET UNITYSDK_OFFSET(0xD3F460)
#define FLATDATA_FIELDMASTERYEXCEL_STARTFIELDMASTERYEXCEL_OFFSET UNITYSDK_OFFSET(0xD3F800)
#define FLATDATA_FIELDMASTERYEXCEL_ADDUNIQUEID_OFFSET UNITYSDK_OFFSET(0xD3F6F0)
#define FLATDATA_FIELDMASTERYEXCEL_ADDSEASONID_OFFSET UNITYSDK_OFFSET(0xD3F6C0)
#define FLATDATA_FIELDMASTERYEXCEL_ADDORDER_OFFSET UNITYSDK_OFFSET(0xD3F780)
#define FLATDATA_FIELDMASTERYEXCEL_ADDEXPAMOUNT_OFFSET UNITYSDK_OFFSET(0xD3F690)
#define FLATDATA_FIELDMASTERYEXCEL_ADDTOKENTYPE_OFFSET UNITYSDK_OFFSET(0xD3F750)
#define FLATDATA_FIELDMASTERYEXCEL_ADDTOKENID_OFFSET UNITYSDK_OFFSET(0xD3F660)
#define FLATDATA_FIELDMASTERYEXCEL_ADDTOKENREQUIREMENT_OFFSET UNITYSDK_OFFSET(0xD3F630)
#define FLATDATA_FIELDMASTERYEXCEL_ADDACCOMPLISHMENTCONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0xD3F720)
#define FLATDATA_FIELDMASTERYEXCEL_ADDACCOMPLISHMENTCONDITIONID_OFFSET UNITYSDK_OFFSET(0xD3F600)
#define FLATDATA_FIELDMASTERYEXCEL_ENDFIELDMASTERYEXCEL_OFFSET UNITYSDK_OFFSET(0xD3F7B0)

namespace FlatData
{
	inline static constexpr unsigned int FieldMasteryExcel_TypeDefinitionIndex = 9273;

	class FieldMasteryExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::FieldMasteryExcel* GetRootAsFieldMasteryExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::FieldMasteryExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYEXCEL_GETROOTASFIELDMASTERYEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::FieldMasteryExcel* GetRootAsFieldMasteryExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::FieldMasteryExcel* arg2)
		{
			return ((::FlatData::FieldMasteryExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::FieldMasteryExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYEXCEL_GETROOTASFIELDMASTERYEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::FieldMasteryExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::FieldMasteryExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_uniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_seasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYEXCEL_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYEXCEL_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Int32 get_order()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYEXCEL_GET_ORDER_OFFSET))(nullptr);
		}

		::System::Int32 get_Order()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYEXCEL_GET_ORDER_OFFSET))(nullptr);
		}

		::System::Int64 get_expAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYEXCEL_GET_EXPAMOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_ExpAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYEXCEL_GET_EXPAMOUNT_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_tokenType()
		{
			return ((::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYEXCEL_GET_TOKENTYPE_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_TokenType()
		{
			return ((::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYEXCEL_GET_TOKENTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_tokenId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYEXCEL_GET_TOKENID_OFFSET))(nullptr);
		}

		::System::Int64 get_TokenId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYEXCEL_GET_TOKENID_OFFSET))(nullptr);
		}

		::System::Int64 get_tokenRequirement()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYEXCEL_GET_TOKENREQUIREMENT_OFFSET))(nullptr);
		}

		::System::Int64 get_TokenRequirement()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYEXCEL_GET_TOKENREQUIREMENT_OFFSET))(nullptr);
		}

		::FlatData::FieldConditionType* get_accomplishmentConditionType()
		{
			return ((::FlatData::FieldConditionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYEXCEL_GET_ACCOMPLISHMENTCONDITIONTYPE_OFFSET))(nullptr);
		}

		::FlatData::FieldConditionType* get_AccomplishmentConditionType()
		{
			return ((::FlatData::FieldConditionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYEXCEL_GET_ACCOMPLISHMENTCONDITIONTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_accomplishmentConditionId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYEXCEL_GET_ACCOMPLISHMENTCONDITIONID_OFFSET))(nullptr);
		}

		::System::Int64 get_AccomplishmentConditionId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYEXCEL_GET_ACCOMPLISHMENTCONDITIONID_OFFSET))(nullptr);
		}

		Il2CppObject* CreateFieldMasteryExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Int32 arg4, ::System::Int64 arg5, ::FlatData::ParcelType* arg6, ::System::Int64 arg7, ::System::Int64 arg8, ::FlatData::FieldConditionType* arg9, ::System::Int64 arg10)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int32, ::System::Int64, ::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::FlatData::FieldConditionType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYEXCEL_CREATEFIELDMASTERYEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, nullptr);
		}

		::System::Void StartFieldMasteryExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYEXCEL_STARTFIELDMASTERYEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYEXCEL_ADDUNIQUEID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddSeasonId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYEXCEL_ADDSEASONID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYEXCEL_ADDORDER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddExpAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYEXCEL_ADDEXPAMOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddTokenType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYEXCEL_ADDTOKENTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddTokenId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYEXCEL_ADDTOKENID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddTokenRequirement(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYEXCEL_ADDTOKENREQUIREMENT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddAccomplishmentConditionType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::FieldConditionType* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::FieldConditionType*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYEXCEL_ADDACCOMPLISHMENTCONDITIONTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddAccomplishmentConditionId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYEXCEL_ADDACCOMPLISHMENTCONDITIONID_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndFieldMasteryExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYEXCEL_ENDFIELDMASTERYEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

