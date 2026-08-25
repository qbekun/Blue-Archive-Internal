#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class MailType; }

#define MX_GAMELOGIC_DBMODEL_MAILDB_GET_ACCOUNTSERVERID_OFFSET UNITYSDK_OFFSET(0x1001930)
#define MX_GAMELOGIC_DBMODEL_MAILDB_SET_ACCOUNTSERVERID_OFFSET UNITYSDK_OFFSET(0x1001940)
#define MX_GAMELOGIC_DBMODEL_MAILDB_SET_SENDDATE_OFFSET UNITYSDK_OFFSET(0x1001950)
#define MX_GAMELOGIC_DBMODEL_MAILDB_GET_PARCELINFOS_OFFSET UNITYSDK_OFFSET(0x1001960)
#define MX_GAMELOGIC_DBMODEL_MAILDB_GET_SENDDATE_OFFSET UNITYSDK_OFFSET(0x1001970)
#define MX_GAMELOGIC_DBMODEL_MAILDB_GET_LOCALIZEDSENDER_OFFSET UNITYSDK_OFFSET(0x1001980)
#define MX_GAMELOGIC_DBMODEL_MAILDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x1001990)
#define MX_GAMELOGIC_DBMODEL_MAILDB_SET_PRODUCTID_OFFSET UNITYSDK_OFFSET(0x10019A0)
#define MX_GAMELOGIC_DBMODEL_MAILDB_SET_LOCALIZEDSENDER_OFFSET UNITYSDK_OFFSET(0x10019B0)
#define MX_GAMELOGIC_DBMODEL_MAILDB_GET_ISCASHMAIL_OFFSET UNITYSDK_OFFSET(0x10019C0)
#define MX_GAMELOGIC_DBMODEL_MAILDB_SHOULDSERIALIZEPARCELINFOS_OFFSET UNITYSDK_OFFSET(0x10019D0)
#define MX_GAMELOGIC_DBMODEL_MAILDB_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1001A10)
#define MX_GAMELOGIC_DBMODEL_MAILDB_GET_REMAINPARCELINFOS_OFFSET UNITYSDK_OFFSET(0x1001A20)
#define MX_GAMELOGIC_DBMODEL_MAILDB_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1001A30)
#define MX_GAMELOGIC_DBMODEL_MAILDB_SET_SERVERID_OFFSET UNITYSDK_OFFSET(0x1001A40)
#define MX_GAMELOGIC_DBMODEL_MAILDB_SET_ORDERID_OFFSET UNITYSDK_OFFSET(0x1001A50)
#define MX_GAMELOGIC_DBMODEL_MAILDB_GET_SERVERID_OFFSET UNITYSDK_OFFSET(0x1001A60)
#define MX_GAMELOGIC_DBMODEL_MAILDB_SET_REMAINPARCELINFOS_OFFSET UNITYSDK_OFFSET(0x1001A70)
#define MX_GAMELOGIC_DBMODEL_MAILDB_GET_COMMENT_OFFSET UNITYSDK_OFFSET(0x1001A90)
#define MX_GAMELOGIC_DBMODEL_MAILDB_SET_SENDER_OFFSET UNITYSDK_OFFSET(0x1001AA0)
#define MX_GAMELOGIC_DBMODEL_MAILDB_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1001AB0)
#define MX_GAMELOGIC_DBMODEL_MAILDB_GET_RECEIPTDATE_OFFSET UNITYSDK_OFFSET(0x1001AC0)
#define MX_GAMELOGIC_DBMODEL_MAILDB_SET_EXPIREDATE_OFFSET UNITYSDK_OFFSET(0x1001AD0)
#define MX_GAMELOGIC_DBMODEL_MAILDB_SET_ISCASHMAIL_OFFSET UNITYSDK_OFFSET(0x1001AE0)
#define MX_GAMELOGIC_DBMODEL_MAILDB_GET_ORDERID_OFFSET UNITYSDK_OFFSET(0x1001AF0)
#define MX_GAMELOGIC_DBMODEL_MAILDB_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1001B00)
#define MX_GAMELOGIC_DBMODEL_MAILDB_GET_PRODUCTID_OFFSET UNITYSDK_OFFSET(0x1001B10)
#define MX_GAMELOGIC_DBMODEL_MAILDB_SET_RECEIPTDATE_OFFSET UNITYSDK_OFFSET(0x1001B20)
#define MX_GAMELOGIC_DBMODEL_MAILDB_SET_PARCELINFOS_OFFSET UNITYSDK_OFFSET(0x1001B30)
#define MX_GAMELOGIC_DBMODEL_MAILDB_GET_EXPIREDATE_OFFSET UNITYSDK_OFFSET(0x1001B50)
#define MX_GAMELOGIC_DBMODEL_MAILDB_GET_LOCALIZEDCOMMENT_OFFSET UNITYSDK_OFFSET(0x1001B60)
#define MX_GAMELOGIC_DBMODEL_MAILDB_GET_SENDER_OFFSET UNITYSDK_OFFSET(0x1001B70)
#define MX_GAMELOGIC_DBMODEL_MAILDB_SET_LOCALIZEDCOMMENT_OFFSET UNITYSDK_OFFSET(0x1001B80)
#define MX_GAMELOGIC_DBMODEL_MAILDB_SET_COMMENT_OFFSET UNITYSDK_OFFSET(0x1001B90)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int MailDB_TypeDefinitionIndex = 12640;

	class MailDB : public Il2CppObject
	{
	public:
		::System::Int64 _ServerId_k__BackingField; // 0x10
		::System::Int64 _AccountServerId_k__BackingField; // 0x18
		::FlatData::MailType* _Type_k__BackingField; // 0x20
		::System::Int64 _UniqueId_k__BackingField; // 0x28
		::System::String* _Sender_k__BackingField; // 0x30
		Il2CppObject* _LocalizedSender_k__BackingField; // 0x38
		::System::String* _Comment_k__BackingField; // 0x40
		Il2CppObject* _LocalizedComment_k__BackingField; // 0x48
		::System::DateTime* _SendDate_k__BackingField; // 0x50
		Il2CppObject* _ReceiptDate_k__BackingField; // 0x58
		Il2CppObject* _ExpireDate_k__BackingField; // 0x68
		Il2CppObject* _OrderId_k__BackingField; // 0x78
		Il2CppObject* _ProductId_k__BackingField; // 0x88
		::System::Boolean _IsCashMail_k__BackingField; // 0x98
		Il2CppObject* _ParcelInfos_k__BackingField; // 0xA0
		Il2CppObject* _RemainParcelInfos_k__BackingField; // 0xA8

		::System::Int64 get_AccountServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MAILDB_GET_ACCOUNTSERVERID_OFFSET))(nullptr);
		}

		::System::Void set_AccountServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MAILDB_SET_ACCOUNTSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Void set_SendDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MAILDB_SET_SENDDATE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ParcelInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MAILDB_GET_PARCELINFOS_OFFSET))(nullptr);
		}

		::System::DateTime* get_SendDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MAILDB_GET_SENDDATE_OFFSET))(nullptr);
		}

		Il2CppObject* get_LocalizedSender()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MAILDB_GET_LOCALIZEDSENDER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MAILDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ProductId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MAILDB_SET_PRODUCTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_LocalizedSender(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MAILDB_SET_LOCALIZEDSENDER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsCashMail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MAILDB_GET_ISCASHMAIL_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeParcelInfos()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MAILDB_SHOULDSERIALIZEPARCELINFOS_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MAILDB_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_RemainParcelInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MAILDB_GET_REMAINPARCELINFOS_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MAILDB_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_ServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MAILDB_SET_SERVERID_OFFSET))(arg, nullptr);
		}

		::System::Void set_OrderId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MAILDB_SET_ORDERID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MAILDB_GET_SERVERID_OFFSET))(nullptr);
		}

		::System::Void set_RemainParcelInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MAILDB_SET_REMAINPARCELINFOS_OFFSET))(arg, nullptr);
		}

		::System::String* get_Comment()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MAILDB_GET_COMMENT_OFFSET))(nullptr);
		}

		::System::Void set_Sender(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MAILDB_SET_SENDER_OFFSET))(str, nullptr);
		}

		::System::Void set_Type(::FlatData::MailType* arg)
		{
			((::System::Void(*)(::FlatData::MailType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MAILDB_SET_TYPE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ReceiptDate()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MAILDB_GET_RECEIPTDATE_OFFSET))(nullptr);
		}

		::System::Void set_ExpireDate(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MAILDB_SET_EXPIREDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsCashMail(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MAILDB_SET_ISCASHMAIL_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_OrderId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MAILDB_GET_ORDERID_OFFSET))(nullptr);
		}

		::FlatData::MailType* get_Type()
		{
			return ((::FlatData::MailType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MAILDB_GET_TYPE_OFFSET))(nullptr);
		}

		Il2CppObject* get_ProductId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MAILDB_GET_PRODUCTID_OFFSET))(nullptr);
		}

		::System::Void set_ReceiptDate(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MAILDB_SET_RECEIPTDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_ParcelInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MAILDB_SET_PARCELINFOS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ExpireDate()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MAILDB_GET_EXPIREDATE_OFFSET))(nullptr);
		}

		Il2CppObject* get_LocalizedComment()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MAILDB_GET_LOCALIZEDCOMMENT_OFFSET))(nullptr);
		}

		::System::String* get_Sender()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MAILDB_GET_SENDER_OFFSET))(nullptr);
		}

		::System::Void set_LocalizedComment(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MAILDB_SET_LOCALIZEDCOMMENT_OFFSET))(arg, nullptr);
		}

		::System::Void set_Comment(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MAILDB_SET_COMMENT_OFFSET))(str, nullptr);
		}

	};
}

