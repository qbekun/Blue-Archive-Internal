#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentCardExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A9B4F0)
#define MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_GETROOTASEVENTCONTENTCARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1A9B500)
#define MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_GETROOTASEVENTCONTENTCARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1A9B560)
#define MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A9B5F0)
#define MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A9B5C0)
#define MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_GET_CARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1A9B610)
#define MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A9B660)
#define MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_GET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1A9B6B0)
#define MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1A9B700)
#define MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_GETICONPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1A9B740)
#define MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_GET_BACKICONPATH_OFFSET UNITYSDK_OFFSET(0x1A9B760)
#define MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_GETBACKICONPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1A9B7A0)
#define MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1A9B7C0)
#define MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1A9B820)
#define MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1A9B860)
#define MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_REWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1A9B880)
#define MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_GET_REWARDPARCELIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1A9B8E0)
#define MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_GETREWARDPARCELIDBYTES_OFFSET UNITYSDK_OFFSET(0x1A9B920)
#define MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_CREATEEVENTCONTENTCARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1A9B940)
#define MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_STARTEVENTCONTENTCARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1A9BC30)
#define MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_ADDCARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1A9BBB0)
#define MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A9BA90)
#define MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_ADDLOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1A9BB80)
#define MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_ADDICONPATH_OFFSET UNITYSDK_OFFSET(0x1A9BB50)
#define MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_ADDBACKICONPATH_OFFSET UNITYSDK_OFFSET(0x1A9BB20)
#define MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1A9BAF0)
#define MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A9BC50)
#define MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A9BCE0)
#define MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_ADDREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1A9BAC0)
#define MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_CREATEREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A9BD20)
#define MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_STARTREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A9BDB0)
#define MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_ENDEVENTCONTENTCARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1A9BBE0)
#define MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_FINISHEVENTCONTENTCARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A9BDF0)
#define MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTCARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A9BE10)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentCardExcel_TypeDefinitionIndex = 17506;

	class EventContentCardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentCardExcel* GetRootAsEventContentCardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentCardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_GETROOTASEVENTCONTENTCARDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentCardExcel* GetRootAsEventContentCardExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentCardExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentCardExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentCardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_GETROOTASEVENTCONTENTCARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentCardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentCardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_CardGroupId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_GET_CARDGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_GET_LOCALIZEETCID_OFFSET))(nullptr);
		}

		::System::String* get_IconPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_GET_ICONPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetIconPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_GETICONPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_BackIconPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_GET_BACKICONPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetBackIconPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_GETBACKICONPATHBYTES_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* RewardParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_REWARDPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardParcelId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_REWARDPARCELID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_GET_REWARDPARCELIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_GETREWARDPARCELIDBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentCardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg, ::System::Int64 arg, ::System::UInt32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::System::Int64, ::System::UInt32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_CREATEEVENTCONTENTCARDEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentCardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_STARTEVENTCONTENTCARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddCardGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_ADDCARDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeEtcId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_ADDLOCALIZEETCID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIconPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_ADDICONPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBackIconPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_ADDBACKICONPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_ADDREWARDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_CREATEREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_STARTREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentCardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_ENDEVENTCONTENTCARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentCardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_FINISHEVENTCONTENTCARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentCardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTCARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

