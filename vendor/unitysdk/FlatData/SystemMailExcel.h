#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class SystemMailExcel; }
namespace FlatData { class MailType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define FLATDATA_SYSTEMMAILEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD5C090)
#define FLATDATA_SYSTEMMAILEXCEL_GETROOTASSYSTEMMAILEXCEL_OFFSET UNITYSDK_OFFSET(0xD5C0A0)
#define FLATDATA_SYSTEMMAILEXCEL_GETROOTASSYSTEMMAILEXCEL_OFFSET UNITYSDK_OFFSET(0xD5C100)
#define FLATDATA_SYSTEMMAILEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD5C160)
#define FLATDATA_SYSTEMMAILEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD5BDB0)
#define FLATDATA_SYSTEMMAILEXCEL_GET_MAILTYPE_OFFSET UNITYSDK_OFFSET(0xD5C180)
#define FLATDATA_SYSTEMMAILEXCEL_GET_MAILTYPE_OFFSET UNITYSDK_OFFSET(0xD5C1D0)
#define FLATDATA_SYSTEMMAILEXCEL_GET_ISPRODUCTMAIL_OFFSET UNITYSDK_OFFSET(0xD5C250)
#define FLATDATA_SYSTEMMAILEXCEL_GET_ISPRODUCTMAIL_OFFSET UNITYSDK_OFFSET(0xD5C2A0)
#define FLATDATA_SYSTEMMAILEXCEL_GET_ISVARIABLEEXPIREDDAY_OFFSET UNITYSDK_OFFSET(0xD5C2F0)
#define FLATDATA_SYSTEMMAILEXCEL_GET_ISVARIABLEEXPIREDDAY_OFFSET UNITYSDK_OFFSET(0xD5C340)
#define FLATDATA_SYSTEMMAILEXCEL_GET_EXPIREDDAY_OFFSET UNITYSDK_OFFSET(0xD5C390)
#define FLATDATA_SYSTEMMAILEXCEL_GET_EXPIREDDAY_OFFSET UNITYSDK_OFFSET(0xD5C3E0)
#define FLATDATA_SYSTEMMAILEXCEL_GET_SENDER_OFFSET UNITYSDK_OFFSET(0xD5C460)
#define FLATDATA_SYSTEMMAILEXCEL_GET_SENDER_OFFSET UNITYSDK_OFFSET(0xD5C4A0)
#define FLATDATA_SYSTEMMAILEXCEL_GETSENDERBYTES_OFFSET UNITYSDK_OFFSET(0xD5C510)
#define FLATDATA_SYSTEMMAILEXCEL_GET_COMMENT_OFFSET UNITYSDK_OFFSET(0xD5C530)
#define FLATDATA_SYSTEMMAILEXCEL_GET_COMMENT_OFFSET UNITYSDK_OFFSET(0xD5C570)
#define FLATDATA_SYSTEMMAILEXCEL_GETCOMMENTBYTES_OFFSET UNITYSDK_OFFSET(0xD5C5E0)
#define FLATDATA_SYSTEMMAILEXCEL_CREATESYSTEMMAILEXCEL_OFFSET UNITYSDK_OFFSET(0xD5C600)
#define FLATDATA_SYSTEMMAILEXCEL_STARTSYSTEMMAILEXCEL_OFFSET UNITYSDK_OFFSET(0xD5C8A0)
#define FLATDATA_SYSTEMMAILEXCEL_ADDMAILTYPE_OFFSET UNITYSDK_OFFSET(0xD5C7C0)
#define FLATDATA_SYSTEMMAILEXCEL_ADDISPRODUCTMAIL_OFFSET UNITYSDK_OFFSET(0xD5C820)
#define FLATDATA_SYSTEMMAILEXCEL_ADDISVARIABLEEXPIREDDAY_OFFSET UNITYSDK_OFFSET(0xD5C7F0)
#define FLATDATA_SYSTEMMAILEXCEL_ADDEXPIREDDAY_OFFSET UNITYSDK_OFFSET(0xD5C730)
#define FLATDATA_SYSTEMMAILEXCEL_ADDSENDER_OFFSET UNITYSDK_OFFSET(0xD5C790)
#define FLATDATA_SYSTEMMAILEXCEL_ADDCOMMENT_OFFSET UNITYSDK_OFFSET(0xD5C760)
#define FLATDATA_SYSTEMMAILEXCEL_ENDSYSTEMMAILEXCEL_OFFSET UNITYSDK_OFFSET(0xD5C850)

namespace FlatData
{
	inline static constexpr unsigned int SystemMailExcel_TypeDefinitionIndex = 9335;

	class SystemMailExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SYSTEMMAILEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::SystemMailExcel* GetRootAsSystemMailExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::SystemMailExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SYSTEMMAILEXCEL_GETROOTASSYSTEMMAILEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::SystemMailExcel* GetRootAsSystemMailExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::SystemMailExcel* arg2)
		{
			return ((::FlatData::SystemMailExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::SystemMailExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SYSTEMMAILEXCEL_GETROOTASSYSTEMMAILEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SYSTEMMAILEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::SystemMailExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::SystemMailExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SYSTEMMAILEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::MailType* get_mailType()
		{
			return ((::FlatData::MailType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SYSTEMMAILEXCEL_GET_MAILTYPE_OFFSET))(nullptr);
		}

		::FlatData::MailType* get_MailType()
		{
			return ((::FlatData::MailType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SYSTEMMAILEXCEL_GET_MAILTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_isProductMail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SYSTEMMAILEXCEL_GET_ISPRODUCTMAIL_OFFSET))(nullptr);
		}

		::System::Boolean get_IsProductMail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SYSTEMMAILEXCEL_GET_ISPRODUCTMAIL_OFFSET))(nullptr);
		}

		::System::Boolean get_isVariableExpiredDay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SYSTEMMAILEXCEL_GET_ISVARIABLEEXPIREDDAY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsVariableExpiredDay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SYSTEMMAILEXCEL_GET_ISVARIABLEEXPIREDDAY_OFFSET))(nullptr);
		}

		::System::Int64 get_expiredDay()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SYSTEMMAILEXCEL_GET_EXPIREDDAY_OFFSET))(nullptr);
		}

		::System::Int64 get_ExpiredDay()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SYSTEMMAILEXCEL_GET_EXPIREDDAY_OFFSET))(nullptr);
		}

		::System::String* get_sender()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SYSTEMMAILEXCEL_GET_SENDER_OFFSET))(nullptr);
		}

		::System::String* get_Sender()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SYSTEMMAILEXCEL_GET_SENDER_OFFSET))(nullptr);
		}

		Il2CppObject* GetSenderBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SYSTEMMAILEXCEL_GETSENDERBYTES_OFFSET))(nullptr);
		}

		::System::String* get_comment()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SYSTEMMAILEXCEL_GET_COMMENT_OFFSET))(nullptr);
		}

		::System::String* get_Comment()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SYSTEMMAILEXCEL_GET_COMMENT_OFFSET))(nullptr);
		}

		Il2CppObject* GetCommentBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SYSTEMMAILEXCEL_GETCOMMENTBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateSystemMailExcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::MailType* arg2, ::System::Boolean arg3, ::System::Boolean arg4, ::System::Int64 arg5, ::FlatBuffers::StringOffset* arg6, ::FlatBuffers::StringOffset* arg7)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::MailType*, ::System::Boolean, ::System::Boolean, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SYSTEMMAILEXCEL_CREATESYSTEMMAILEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Void StartSystemMailExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SYSTEMMAILEXCEL_STARTSYSTEMMAILEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddMailType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::MailType* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::MailType*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SYSTEMMAILEXCEL_ADDMAILTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddIsProductMail(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SYSTEMMAILEXCEL_ADDISPRODUCTMAIL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddIsVariableExpiredDay(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SYSTEMMAILEXCEL_ADDISVARIABLEEXPIREDDAY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddExpiredDay(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SYSTEMMAILEXCEL_ADDEXPIREDDAY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddSender(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SYSTEMMAILEXCEL_ADDSENDER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddComment(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SYSTEMMAILEXCEL_ADDCOMMENT_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndSystemMailExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_SYSTEMMAILEXCEL_ENDSYSTEMMAILEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

