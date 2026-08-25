#pragma once
#include "unitysdk.h"

class SecureLong;
namespace FlatData { class MailType; }
namespace MX::GameLogic::DBModel { class MailDB; }

#define MAILOBJECT_GET_ORDERID_OFFSET UNITYSDK_OFFSET(0x1E57950)
#define MAILOBJECT_SET_RECEIPTDATE_OFFSET UNITYSDK_OFFSET(0x1E57960)
#define MAILOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E55B80)
#define MAILOBJECT_GET_COMMENT_OFFSET UNITYSDK_OFFSET(0x1E57970)
#define MAILOBJECT_SET_ISCASHMAIL_OFFSET UNITYSDK_OFFSET(0x1E57980)
#define MAILOBJECT_SET_SERVERID_OFFSET UNITYSDK_OFFSET(0x1E57990)
#define MAILOBJECT_SET_PRODUCTID_OFFSET UNITYSDK_OFFSET(0x1E579A0)
#define MAILOBJECT_SET_COMMENT_OFFSET UNITYSDK_OFFSET(0x1E579B0)
#define MAILOBJECT_GET_ISCASHMAIL_OFFSET UNITYSDK_OFFSET(0x1E579C0)
#define MAILOBJECT_REQUESTMAILRECEIVE_OFFSET UNITYSDK_OFFSET(0x1E579D0)
#define MAILOBJECT_SET_ISREAD_OFFSET UNITYSDK_OFFSET(0x1E57DF0)
#define MAILOBJECT_RECEIVE_OFFSET UNITYSDK_OFFSET(0x1E56540)
#define MAILOBJECT_GET_ISREAD_OFFSET UNITYSDK_OFFSET(0x1E57E00)
#define MAILOBJECT_SET_PARCELINFOS_OFFSET UNITYSDK_OFFSET(0x1E57E10)
#define MAILOBJECT_GET_SENDER_OFFSET UNITYSDK_OFFSET(0x1E57E20)
#define MAILOBJECT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E57E30)
#define MAILOBJECT_GET_RECEIPTDATE_OFFSET UNITYSDK_OFFSET(0x1E57F10)
#define MAILOBJECT_GET_PRODUCTID_OFFSET UNITYSDK_OFFSET(0x1E57F20)
#define MAILOBJECT_SET_EXPIRYDATE_OFFSET UNITYSDK_OFFSET(0x1E57F30)
#define MAILOBJECT_GET_EXPIRYDATE_OFFSET UNITYSDK_OFFSET(0x1E57F40)
#define MAILOBJECT_SET_ORDERID_OFFSET UNITYSDK_OFFSET(0x1E57F50)
#define MAILOBJECT_GET_SENDDATE_OFFSET UNITYSDK_OFFSET(0x1E57F60)
#define MAILOBJECT_SET_SENDER_OFFSET UNITYSDK_OFFSET(0x1E57F70)
#define MAILOBJECT_GET_SERVERID_OFFSET UNITYSDK_OFFSET(0x1E57F80)
#define MAILOBJECT_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1E57F90)
#define MAILOBJECT_SET_SENDDATE_OFFSET UNITYSDK_OFFSET(0x1E57FA0)
#define MAILOBJECT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1E57FB0)
#define MAILOBJECT_GET_PARCELINFOS_OFFSET UNITYSDK_OFFSET(0x1E57FC0)

	inline static constexpr unsigned int MailObject_TypeDefinitionIndex = 1718;

	class MailObject : public Il2CppObject
	{
	public:
		SecureLong* _ServerId_k__BackingField; // 0x10
		::System::DateTime* _SendDate_k__BackingField; // 0x18
		::System::DateTime* _ReceiptDate_k__BackingField; // 0x20
		::System::DateTime* _ExpiryDate_k__BackingField; // 0x28
		::FlatData::MailType* _Type_k__BackingField; // 0x30
		::System::String* _Sender_k__BackingField; // 0x38
		::System::String* _Comment_k__BackingField; // 0x40
		Il2CppObject* _OrderId_k__BackingField; // 0x48
		Il2CppObject* _ProductId_k__BackingField; // 0x58
		::System::Boolean _IsCashMail_k__BackingField; // 0x68
		::System::Boolean _isRead_k__BackingField; // 0x69
		Il2CppObject* _Parcelinfos_k__BackingField; // 0x70

		Il2CppObject* get_OrderId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILOBJECT_GET_ORDERID_OFFSET))(nullptr);
		}

		::System::Void set_ReceiptDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MAILOBJECT_SET_RECEIPTDATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::DBModel::MailDB* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MailDB*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MAILOBJECT_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* get_Comment()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILOBJECT_GET_COMMENT_OFFSET))(nullptr);
		}

		::System::Void set_IsCashMail(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MAILOBJECT_SET_ISCASHMAIL_OFFSET))(arg, nullptr);
		}

		::System::Void set_ServerId(SecureLong* arg)
		{
			((::System::Void(*)(SecureLong*, ::PVOID))((::PBYTE)hIl2Cpp + MAILOBJECT_SET_SERVERID_OFFSET))(arg, nullptr);
		}

		::System::Void set_ProductId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MAILOBJECT_SET_PRODUCTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_Comment(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MAILOBJECT_SET_COMMENT_OFFSET))(str, nullptr);
		}

		::System::Boolean get_IsCashMail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILOBJECT_GET_ISCASHMAIL_OFFSET))(nullptr);
		}

		::System::Void RequestMailReceive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MAILOBJECT_REQUESTMAILRECEIVE_OFFSET))(arg, nullptr);
		}

		::System::Void set_isRead(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MAILOBJECT_SET_ISREAD_OFFSET))(arg, nullptr);
		}

		::System::Void Receive()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILOBJECT_RECEIVE_OFFSET))(nullptr);
		}

		::System::Boolean get_isRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILOBJECT_GET_ISREAD_OFFSET))(nullptr);
		}

		::System::Void set_Parcelinfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MAILOBJECT_SET_PARCELINFOS_OFFSET))(arg, nullptr);
		}

		::System::String* get_Sender()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILOBJECT_GET_SENDER_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILOBJECT_TOSTRING_OFFSET))(nullptr);
		}

		::System::DateTime* get_ReceiptDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILOBJECT_GET_RECEIPTDATE_OFFSET))(nullptr);
		}

		Il2CppObject* get_ProductId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILOBJECT_GET_PRODUCTID_OFFSET))(nullptr);
		}

		::System::Void set_ExpiryDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MAILOBJECT_SET_EXPIRYDATE_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_ExpiryDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILOBJECT_GET_EXPIRYDATE_OFFSET))(nullptr);
		}

		::System::Void set_OrderId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MAILOBJECT_SET_ORDERID_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_SendDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILOBJECT_GET_SENDDATE_OFFSET))(nullptr);
		}

		::System::Void set_Sender(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MAILOBJECT_SET_SENDER_OFFSET))(str, nullptr);
		}

		SecureLong* get_ServerId()
		{
			return ((SecureLong*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILOBJECT_GET_SERVERID_OFFSET))(nullptr);
		}

		::System::Void set_Type(::FlatData::MailType* arg)
		{
			((::System::Void(*)(::FlatData::MailType*, ::PVOID))((::PBYTE)hIl2Cpp + MAILOBJECT_SET_TYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_SendDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MAILOBJECT_SET_SENDDATE_OFFSET))(arg, nullptr);
		}

		::FlatData::MailType* get_Type()
		{
			return ((::FlatData::MailType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILOBJECT_GET_TYPE_OFFSET))(nullptr);
		}

		Il2CppObject* get_Parcelinfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILOBJECT_GET_PARCELINFOS_OFFSET))(nullptr);
		}

	};

