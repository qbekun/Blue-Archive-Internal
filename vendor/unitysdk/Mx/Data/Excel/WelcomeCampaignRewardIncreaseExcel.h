#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class WelcomeCampaignRewardIncreaseExcel; }
namespace FlatData { class EventTargetType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1CC5AF0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCEL_GETROOTASWELCOMECAMPAIGNREWARDINCREASEEXCEL_OFFSET UNITYSDK_OFFSET(0x1CC5B00)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCEL_GETROOTASWELCOMECAMPAIGNREWARDINCREASEEXCEL_OFFSET UNITYSDK_OFFSET(0x1CC5B60)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1CC5BF0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1CC5BC0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1CC5C10)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1CC5C60)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCEL_GET_LOCALIZECODEID_OFFSET UNITYSDK_OFFSET(0x1CC5CB0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCEL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1CC5D00)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCEL_GETICONPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1CC5D40)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCEL_GET_EVENTTARGETTYPE_OFFSET UNITYSDK_OFFSET(0x1CC5D60)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCEL_GET_INCREASERATIO_OFFSET UNITYSDK_OFFSET(0x1CC5DB0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCEL_GET_SHORTCUTEVENTTARGETTYPE_OFFSET UNITYSDK_OFFSET(0x1CC5E00)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCEL_CREATEWELCOMECAMPAIGNREWARDINCREASEEXCEL_OFFSET UNITYSDK_OFFSET(0x1CC5E50)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCEL_STARTWELCOMECAMPAIGNREWARDINCREASEEXCEL_OFFSET UNITYSDK_OFFSET(0x1CC6140)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1CC60C0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0x1CC5FA0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCEL_ADDLOCALIZECODEID_OFFSET UNITYSDK_OFFSET(0x1CC6090)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCEL_ADDICONPATH_OFFSET UNITYSDK_OFFSET(0x1CC6060)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCEL_ADDEVENTTARGETTYPE_OFFSET UNITYSDK_OFFSET(0x1CC6030)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCEL_ADDINCREASERATIO_OFFSET UNITYSDK_OFFSET(0x1CC6000)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCEL_ADDSHORTCUTEVENTTARGETTYPE_OFFSET UNITYSDK_OFFSET(0x1CC5FD0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCEL_ENDWELCOMECAMPAIGNREWARDINCREASEEXCEL_OFFSET UNITYSDK_OFFSET(0x1CC60F0)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCEL_FINISHWELCOMECAMPAIGNREWARDINCREASEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CC6160)
#define MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCEL_FINISHSIZEPREFIXEDWELCOMECAMPAIGNREWARDINCREASEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CC6180)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int WelcomeCampaignRewardIncreaseExcel_TypeDefinitionIndex = 19781;

	class WelcomeCampaignRewardIncreaseExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::WelcomeCampaignRewardIncreaseExcel* GetRootAsWelcomeCampaignRewardIncreaseExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::WelcomeCampaignRewardIncreaseExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCEL_GETROOTASWELCOMECAMPAIGNREWARDINCREASEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::WelcomeCampaignRewardIncreaseExcel* GetRootAsWelcomeCampaignRewardIncreaseExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::WelcomeCampaignRewardIncreaseExcel* arg)
		{
			return (return (::MX::Data::Excel::WelcomeCampaignRewardIncreaseExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::WelcomeCampaignRewardIncreaseExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCEL_GETROOTASWELCOMECAMPAIGNREWARDINCREASEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::WelcomeCampaignRewardIncreaseExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::WelcomeCampaignRewardIncreaseExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_Id()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeCodeId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCEL_GET_LOCALIZECODEID_OFFSET))(nullptr);
		}

		::System::String* get_IconPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCEL_GET_ICONPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetIconPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCEL_GETICONPATHBYTES_OFFSET))(nullptr);
		}

		::FlatData::EventTargetType* get_EventTargetType()
		{
			return (return (::FlatData::EventTargetType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCEL_GET_EVENTTARGETTYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_IncreaseRatio()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCEL_GET_INCREASERATIO_OFFSET))(nullptr);
		}

		::FlatData::EventTargetType* get_ShortcutEventTargetType()
		{
			return (return (::FlatData::EventTargetType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCEL_GET_SHORTCUTEVENTTARGETTYPE_OFFSET))(nullptr);
		}

		Il2CppObject* CreateWelcomeCampaignRewardIncreaseExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg, ::System::Int64 arg, ::System::UInt32 arg, ::FlatBuffers::StringOffset* arg, ::FlatData::EventTargetType* arg, ::System::Int32 arg, ::FlatData::EventTargetType* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::System::Int64, ::System::UInt32, ::FlatBuffers::StringOffset*, ::FlatData::EventTargetType*, ::System::Int32, ::FlatData::EventTargetType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCEL_CREATEWELCOMECAMPAIGNREWARDINCREASEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartWelcomeCampaignRewardIncreaseExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCEL_STARTWELCOMECAMPAIGNREWARDINCREASEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCEL_ADDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeCodeId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCEL_ADDLOCALIZECODEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIconPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCEL_ADDICONPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventTargetType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EventTargetType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EventTargetType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCEL_ADDEVENTTARGETTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIncreaseRatio(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCEL_ADDINCREASERATIO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShortcutEventTargetType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EventTargetType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EventTargetType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCEL_ADDSHORTCUTEVENTTARGETTYPE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndWelcomeCampaignRewardIncreaseExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCEL_ENDWELCOMECAMPAIGNREWARDINCREASEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishWelcomeCampaignRewardIncreaseExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCEL_FINISHWELCOMECAMPAIGNREWARDINCREASEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedWelcomeCampaignRewardIncreaseExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WELCOMECAMPAIGNREWARDINCREASEEXCEL_FINISHSIZEPREFIXEDWELCOMECAMPAIGNREWARDINCREASEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

