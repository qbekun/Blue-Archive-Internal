#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class DefaultMailExcel; }
namespace FlatData { class MailType; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_DEFAULTMAILEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD32450)
#define FLATDATA_DEFAULTMAILEXCEL_GETROOTASDEFAULTMAILEXCEL_OFFSET UNITYSDK_OFFSET(0xD32460)
#define FLATDATA_DEFAULTMAILEXCEL_GETROOTASDEFAULTMAILEXCEL_OFFSET UNITYSDK_OFFSET(0xD324C0)
#define FLATDATA_DEFAULTMAILEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD32520)
#define FLATDATA_DEFAULTMAILEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD32170)
#define FLATDATA_DEFAULTMAILEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0xD32540)
#define FLATDATA_DEFAULTMAILEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0xD32590)
#define FLATDATA_DEFAULTMAILEXCEL_GET_LOCALIZECODEID_OFFSET UNITYSDK_OFFSET(0xD32610)
#define FLATDATA_DEFAULTMAILEXCEL_GET_LOCALIZECODEID_OFFSET UNITYSDK_OFFSET(0xD32660)
#define FLATDATA_DEFAULTMAILEXCEL_GET_MAILTYPE_OFFSET UNITYSDK_OFFSET(0xD326E0)
#define FLATDATA_DEFAULTMAILEXCEL_GET_MAILTYPE_OFFSET UNITYSDK_OFFSET(0xD32730)
#define FLATDATA_DEFAULTMAILEXCEL_GET_MAILSENDPERIODFROM_OFFSET UNITYSDK_OFFSET(0xD327B0)
#define FLATDATA_DEFAULTMAILEXCEL_GET_MAILSENDPERIODFROM_OFFSET UNITYSDK_OFFSET(0xD327F0)
#define FLATDATA_DEFAULTMAILEXCEL_GETMAILSENDPERIODFROMBYTES_OFFSET UNITYSDK_OFFSET(0xD32860)
#define FLATDATA_DEFAULTMAILEXCEL_GET_MAILSENDPERIODTO_OFFSET UNITYSDK_OFFSET(0xD32880)
#define FLATDATA_DEFAULTMAILEXCEL_GET_MAILSENDPERIODTO_OFFSET UNITYSDK_OFFSET(0xD328C0)
#define FLATDATA_DEFAULTMAILEXCEL_GETMAILSENDPERIODTOBYTES_OFFSET UNITYSDK_OFFSET(0xD32930)
#define FLATDATA_DEFAULTMAILEXCEL_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0xD32950)
#define FLATDATA_DEFAULTMAILEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0xD329B0)
#define FLATDATA_DEFAULTMAILEXCEL_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0xD329F0)
#define FLATDATA_DEFAULTMAILEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0xD32A80)
#define FLATDATA_DEFAULTMAILEXCEL_REWARDPARCELID_OFFSET UNITYSDK_OFFSET(0xD32AA0)
#define FLATDATA_DEFAULTMAILEXCEL_GET_REWARDPARCELIDLENGTH_OFFSET UNITYSDK_OFFSET(0xD32B00)
#define FLATDATA_DEFAULTMAILEXCEL_REWARDPARCELID_OFFSET UNITYSDK_OFFSET(0xD32B40)
#define FLATDATA_DEFAULTMAILEXCEL_GETREWARDPARCELIDBYTES_OFFSET UNITYSDK_OFFSET(0xD32BD0)
#define FLATDATA_DEFAULTMAILEXCEL_REWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0xD32BF0)
#define FLATDATA_DEFAULTMAILEXCEL_GET_REWARDPARCELAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0xD32C50)
#define FLATDATA_DEFAULTMAILEXCEL_REWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0xD32C90)
#define FLATDATA_DEFAULTMAILEXCEL_GETREWARDPARCELAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0xD32D20)
#define FLATDATA_DEFAULTMAILEXCEL_CREATEDEFAULTMAILEXCEL_OFFSET UNITYSDK_OFFSET(0xD32D40)
#define FLATDATA_DEFAULTMAILEXCEL_STARTDEFAULTMAILEXCEL_OFFSET UNITYSDK_OFFSET(0xD33090)
#define FLATDATA_DEFAULTMAILEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0xD32EC0)
#define FLATDATA_DEFAULTMAILEXCEL_ADDLOCALIZECODEID_OFFSET UNITYSDK_OFFSET(0xD33010)
#define FLATDATA_DEFAULTMAILEXCEL_ADDMAILTYPE_OFFSET UNITYSDK_OFFSET(0xD32FE0)
#define FLATDATA_DEFAULTMAILEXCEL_ADDMAILSENDPERIODFROM_OFFSET UNITYSDK_OFFSET(0xD32FB0)
#define FLATDATA_DEFAULTMAILEXCEL_ADDMAILSENDPERIODTO_OFFSET UNITYSDK_OFFSET(0xD32F80)
#define FLATDATA_DEFAULTMAILEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0xD32F50)
#define FLATDATA_DEFAULTMAILEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0xD330B0)
#define FLATDATA_DEFAULTMAILEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0xD33140)
#define FLATDATA_DEFAULTMAILEXCEL_ADDREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0xD32F20)
#define FLATDATA_DEFAULTMAILEXCEL_CREATEREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0xD33180)
#define FLATDATA_DEFAULTMAILEXCEL_STARTREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0xD33210)
#define FLATDATA_DEFAULTMAILEXCEL_ADDREWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0xD32EF0)
#define FLATDATA_DEFAULTMAILEXCEL_CREATEREWARDPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0xD33250)
#define FLATDATA_DEFAULTMAILEXCEL_STARTREWARDPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0xD332E0)
#define FLATDATA_DEFAULTMAILEXCEL_ENDDEFAULTMAILEXCEL_OFFSET UNITYSDK_OFFSET(0xD33040)

namespace FlatData
{
	inline static constexpr unsigned int DefaultMailExcel_TypeDefinitionIndex = 9249;

	class DefaultMailExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::DefaultMailExcel* GetRootAsDefaultMailExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::DefaultMailExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCEL_GETROOTASDEFAULTMAILEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::DefaultMailExcel* GetRootAsDefaultMailExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::DefaultMailExcel* arg2)
		{
			return ((::FlatData::DefaultMailExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::DefaultMailExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCEL_GETROOTASDEFAULTMAILEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::DefaultMailExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::DefaultMailExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::UInt32 get_localizeCodeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCEL_GET_LOCALIZECODEID_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeCodeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCEL_GET_LOCALIZECODEID_OFFSET))(nullptr);
		}

		::FlatData::MailType* get_mailType()
		{
			return ((::FlatData::MailType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCEL_GET_MAILTYPE_OFFSET))(nullptr);
		}

		::FlatData::MailType* get_MailType()
		{
			return ((::FlatData::MailType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCEL_GET_MAILTYPE_OFFSET))(nullptr);
		}

		::System::String* get_mailSendPeriodFrom()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCEL_GET_MAILSENDPERIODFROM_OFFSET))(nullptr);
		}

		::System::String* get_MailSendPeriodFrom()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCEL_GET_MAILSENDPERIODFROM_OFFSET))(nullptr);
		}

		Il2CppObject* GetMailSendPeriodFromBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCEL_GETMAILSENDPERIODFROMBYTES_OFFSET))(nullptr);
		}

		::System::String* get_mailSendPeriodTo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCEL_GET_MAILSENDPERIODTO_OFFSET))(nullptr);
		}

		::System::String* get_MailSendPeriodTo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCEL_GET_MAILSENDPERIODTO_OFFSET))(nullptr);
		}

		Il2CppObject* GetMailSendPeriodToBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCEL_GETMAILSENDPERIODTOBYTES_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* rewardParcelType(::System::Int32 arg)
		{
			return ((::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCEL_REWARDPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelTypeLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* RewardParcelType(::System::Int32 arg)
		{
			return ((::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCEL_REWARDPARCELTYPE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetRewardParcelTypeBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 rewardParcelId(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCEL_REWARDPARCELID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelIdLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCEL_GET_REWARDPARCELIDLENGTH_OFFSET))(nullptr);
		}

		::System::Int64 RewardParcelId(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCEL_REWARDPARCELID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetRewardParcelIdBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCEL_GETREWARDPARCELIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 rewardParcelAmount(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCEL_REWARDPARCELAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelAmountLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCEL_GET_REWARDPARCELAMOUNTLENGTH_OFFSET))(nullptr);
		}

		::System::Int64 RewardParcelAmount(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCEL_REWARDPARCELAMOUNT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetRewardParcelAmountBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCEL_GETREWARDPARCELAMOUNTBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateDefaultMailExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2, ::System::UInt32 arg3, ::FlatData::MailType* arg4, ::FlatBuffers::StringOffset* arg5, ::FlatBuffers::StringOffset* arg6, ::FlatBuffers::VectorOffset* arg7, ::FlatBuffers::VectorOffset* arg8, ::FlatBuffers::VectorOffset* arg9)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::UInt32, ::FlatData::MailType*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCEL_CREATEDEFAULTMAILEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, nullptr);
		}

		::System::Void StartDefaultMailExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCEL_STARTDEFAULTMAILEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCEL_ADDID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddLocalizeCodeId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCEL_ADDLOCALIZECODEID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddMailType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::MailType* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::MailType*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCEL_ADDMAILTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddMailSendPeriodFrom(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCEL_ADDMAILSENDPERIODFROM_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddMailSendPeriodTo(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCEL_ADDMAILSENDPERIODTO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddRewardParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCEL_ADDREWARDPARCELID_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCEL_CREATEREWARDPARCELIDVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCEL_STARTREWARDPARCELIDVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddRewardParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCEL_ADDREWARDPARCELAMOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCEL_CREATEREWARDPARCELAMOUNTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartRewardParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCEL_STARTREWARDPARCELAMOUNTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndDefaultMailExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTMAILEXCEL_ENDDEFAULTMAILEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

