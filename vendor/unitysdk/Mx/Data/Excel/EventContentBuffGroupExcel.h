#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentBuffGroupExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A98A30)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_GETROOTASEVENTCONTENTBUFFGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1A98A40)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_GETROOTASEVENTCONTENTBUFFGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1A98AA0)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A98B30)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A98B00)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A98B50)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_GET_BUFFCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A98BA0)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_GET_BUFFGROUPID_OFFSET UNITYSDK_OFFSET(0x1A98BF0)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_GET_BUFFGROUPNAMELOCALIZECODEID_OFFSET UNITYSDK_OFFSET(0x1A98C40)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_GETBUFFGROUPNAMELOCALIZECODEIDBYTES_OFFSET UNITYSDK_OFFSET(0x1A98C80)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_GET_EVENTCONTENTBUFFID1_OFFSET UNITYSDK_OFFSET(0x1A98CA0)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_GET_BUFFNAMELOCALIZECODEID1_OFFSET UNITYSDK_OFFSET(0x1A98CF0)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_GETBUFFNAMELOCALIZECODEID1BYTES_OFFSET UNITYSDK_OFFSET(0x1A98D30)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_GET_BUFFDESCRIPTIONICONPATH1_OFFSET UNITYSDK_OFFSET(0x1A98D50)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_GETBUFFDESCRIPTIONICONPATH1BYTES_OFFSET UNITYSDK_OFFSET(0x1A98D90)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_GET_EVENTCONTENTBUFFID2_OFFSET UNITYSDK_OFFSET(0x1A98DB0)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_GET_BUFFNAMELOCALIZECODEID2_OFFSET UNITYSDK_OFFSET(0x1A98E00)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_GETBUFFNAMELOCALIZECODEID2BYTES_OFFSET UNITYSDK_OFFSET(0x1A98E40)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_GET_BUFFDESCRIPTIONICONPATH2_OFFSET UNITYSDK_OFFSET(0x1A98E60)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_GETBUFFDESCRIPTIONICONPATH2BYTES_OFFSET UNITYSDK_OFFSET(0x1A98EA0)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_GET_EVENTCONTENTDEBUFFID_OFFSET UNITYSDK_OFFSET(0x1A98EC0)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_GET_DEBUFFNAMELOCALIZECODEID_OFFSET UNITYSDK_OFFSET(0x1A98F10)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_GETDEBUFFNAMELOCALIZECODEIDBYTES_OFFSET UNITYSDK_OFFSET(0x1A98F50)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_GET_DEBUFFDESCRIPTIONICONPATH_OFFSET UNITYSDK_OFFSET(0x1A98F70)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_GETDEBUFFDESCRIPTIONICONPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1A98FB0)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_GET_BUFFGROUPPROB_OFFSET UNITYSDK_OFFSET(0x1A98FD0)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_CREATEEVENTCONTENTBUFFGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1A99020)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_STARTEVENTCONTENTBUFFGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1A99580)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A993B0)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_ADDBUFFCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A99380)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_ADDBUFFGROUPID_OFFSET UNITYSDK_OFFSET(0x1A99350)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_ADDBUFFGROUPNAMELOCALIZECODEID_OFFSET UNITYSDK_OFFSET(0x1A99500)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_ADDEVENTCONTENTBUFFID1_OFFSET UNITYSDK_OFFSET(0x1A99320)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_ADDBUFFNAMELOCALIZECODEID1_OFFSET UNITYSDK_OFFSET(0x1A994D0)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_ADDBUFFDESCRIPTIONICONPATH1_OFFSET UNITYSDK_OFFSET(0x1A994A0)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_ADDEVENTCONTENTBUFFID2_OFFSET UNITYSDK_OFFSET(0x1A992F0)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_ADDBUFFNAMELOCALIZECODEID2_OFFSET UNITYSDK_OFFSET(0x1A99470)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_ADDBUFFDESCRIPTIONICONPATH2_OFFSET UNITYSDK_OFFSET(0x1A99440)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_ADDEVENTCONTENTDEBUFFID_OFFSET UNITYSDK_OFFSET(0x1A992C0)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_ADDDEBUFFNAMELOCALIZECODEID_OFFSET UNITYSDK_OFFSET(0x1A99410)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_ADDDEBUFFDESCRIPTIONICONPATH_OFFSET UNITYSDK_OFFSET(0x1A993E0)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_ADDBUFFGROUPPROB_OFFSET UNITYSDK_OFFSET(0x1A99290)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_ENDEVENTCONTENTBUFFGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1A99530)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_FINISHEVENTCONTENTBUFFGROUPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A995A0)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTBUFFGROUPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A995C0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentBuffGroupExcel_TypeDefinitionIndex = 17496;

	class EventContentBuffGroupExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentBuffGroupExcel* GetRootAsEventContentBuffGroupExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentBuffGroupExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_GETROOTASEVENTCONTENTBUFFGROUPEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentBuffGroupExcel* GetRootAsEventContentBuffGroupExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentBuffGroupExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentBuffGroupExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentBuffGroupExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_GETROOTASEVENTCONTENTBUFFGROUPEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentBuffGroupExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentBuffGroupExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_BuffContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_GET_BUFFCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_BuffGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_GET_BUFFGROUPID_OFFSET))(nullptr);
		}

		::System::String* get_BuffGroupNameLocalizeCodeId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_GET_BUFFGROUPNAMELOCALIZECODEID_OFFSET))(nullptr);
		}

		Il2CppObject* GetBuffGroupNameLocalizeCodeIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_GETBUFFGROUPNAMELOCALIZECODEIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentBuffId1()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_GET_EVENTCONTENTBUFFID1_OFFSET))(nullptr);
		}

		::System::String* get_BuffNameLocalizeCodeId1()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_GET_BUFFNAMELOCALIZECODEID1_OFFSET))(nullptr);
		}

		Il2CppObject* GetBuffNameLocalizeCodeId1Bytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_GETBUFFNAMELOCALIZECODEID1BYTES_OFFSET))(nullptr);
		}

		::System::String* get_BuffDescriptionIconPath1()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_GET_BUFFDESCRIPTIONICONPATH1_OFFSET))(nullptr);
		}

		Il2CppObject* GetBuffDescriptionIconPath1Bytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_GETBUFFDESCRIPTIONICONPATH1BYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentBuffId2()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_GET_EVENTCONTENTBUFFID2_OFFSET))(nullptr);
		}

		::System::String* get_BuffNameLocalizeCodeId2()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_GET_BUFFNAMELOCALIZECODEID2_OFFSET))(nullptr);
		}

		Il2CppObject* GetBuffNameLocalizeCodeId2Bytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_GETBUFFNAMELOCALIZECODEID2BYTES_OFFSET))(nullptr);
		}

		::System::String* get_BuffDescriptionIconPath2()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_GET_BUFFDESCRIPTIONICONPATH2_OFFSET))(nullptr);
		}

		Il2CppObject* GetBuffDescriptionIconPath2Bytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_GETBUFFDESCRIPTIONICONPATH2BYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentDebuffId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_GET_EVENTCONTENTDEBUFFID_OFFSET))(nullptr);
		}

		::System::String* get_DebuffNameLocalizeCodeId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_GET_DEBUFFNAMELOCALIZECODEID_OFFSET))(nullptr);
		}

		Il2CppObject* GetDebuffNameLocalizeCodeIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_GETDEBUFFNAMELOCALIZECODEIDBYTES_OFFSET))(nullptr);
		}

		::System::String* get_DeBuffDescriptionIconPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_GET_DEBUFFDESCRIPTIONICONPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetDeBuffDescriptionIconPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_GETDEBUFFDESCRIPTIONICONPATHBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_BuffGroupProb()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_GET_BUFFGROUPPROB_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentBuffGroupExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_CREATEEVENTCONTENTBUFFGROUPEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentBuffGroupExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_STARTEVENTCONTENTBUFFGROUPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBuffContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_ADDBUFFCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBuffGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_ADDBUFFGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBuffGroupNameLocalizeCodeId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_ADDBUFFGROUPNAMELOCALIZECODEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventContentBuffId1(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_ADDEVENTCONTENTBUFFID1_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBuffNameLocalizeCodeId1(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_ADDBUFFNAMELOCALIZECODEID1_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBuffDescriptionIconPath1(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_ADDBUFFDESCRIPTIONICONPATH1_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventContentBuffId2(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_ADDEVENTCONTENTBUFFID2_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBuffNameLocalizeCodeId2(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_ADDBUFFNAMELOCALIZECODEID2_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBuffDescriptionIconPath2(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_ADDBUFFDESCRIPTIONICONPATH2_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventContentDebuffId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_ADDEVENTCONTENTDEBUFFID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDebuffNameLocalizeCodeId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_ADDDEBUFFNAMELOCALIZECODEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDeBuffDescriptionIconPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_ADDDEBUFFDESCRIPTIONICONPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBuffGroupProb(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_ADDBUFFGROUPPROB_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentBuffGroupExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_ENDEVENTCONTENTBUFFGROUPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentBuffGroupExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_FINISHEVENTCONTENTBUFFGROUPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentBuffGroupExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTBUFFGROUPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

