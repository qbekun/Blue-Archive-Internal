#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class StoryStrategyExcel; }
namespace FlatData { class StageTopography; }
namespace FlatData { class StrategyEnvironment; }
namespace FlatData { class ContentType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_STORYSTRATEGYEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C973E0)
#define MX_DATA_EXCEL_STORYSTRATEGYEXCEL_GETROOTASSTORYSTRATEGYEXCEL_OFFSET UNITYSDK_OFFSET(0x1C973F0)
#define MX_DATA_EXCEL_STORYSTRATEGYEXCEL_GETROOTASSTORYSTRATEGYEXCEL_OFFSET UNITYSDK_OFFSET(0x1C97450)
#define MX_DATA_EXCEL_STORYSTRATEGYEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C974E0)
#define MX_DATA_EXCEL_STORYSTRATEGYEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C974B0)
#define MX_DATA_EXCEL_STORYSTRATEGYEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C97500)
#define MX_DATA_EXCEL_STORYSTRATEGYEXCEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C97550)
#define MX_DATA_EXCEL_STORYSTRATEGYEXCEL_GETNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1C97590)
#define MX_DATA_EXCEL_STORYSTRATEGYEXCEL_GET_LOCALIZE_OFFSET UNITYSDK_OFFSET(0x1C975B0)
#define MX_DATA_EXCEL_STORYSTRATEGYEXCEL_GETLOCALIZEBYTES_OFFSET UNITYSDK_OFFSET(0x1C975F0)
#define MX_DATA_EXCEL_STORYSTRATEGYEXCEL_GET_STAGEENTERECHELONCOUNT_OFFSET UNITYSDK_OFFSET(0x1C97610)
#define MX_DATA_EXCEL_STORYSTRATEGYEXCEL_GET_BATTLEDURATION_OFFSET UNITYSDK_OFFSET(0x1C97660)
#define MX_DATA_EXCEL_STORYSTRATEGYEXCEL_GET_WHITELISTID_OFFSET UNITYSDK_OFFSET(0x1C976B0)
#define MX_DATA_EXCEL_STORYSTRATEGYEXCEL_GET_STRATEGYMAP_OFFSET UNITYSDK_OFFSET(0x1C97700)
#define MX_DATA_EXCEL_STORYSTRATEGYEXCEL_GETSTRATEGYMAPBYTES_OFFSET UNITYSDK_OFFSET(0x1C97740)
#define MX_DATA_EXCEL_STORYSTRATEGYEXCEL_GET_STRATEGYMAPBG_OFFSET UNITYSDK_OFFSET(0x1C97760)
#define MX_DATA_EXCEL_STORYSTRATEGYEXCEL_GETSTRATEGYMAPBGBYTES_OFFSET UNITYSDK_OFFSET(0x1C977A0)
#define MX_DATA_EXCEL_STORYSTRATEGYEXCEL_GET_MAXTURN_OFFSET UNITYSDK_OFFSET(0x1C977C0)
#define MX_DATA_EXCEL_STORYSTRATEGYEXCEL_GET_STAGETOPOGRAPHY_OFFSET UNITYSDK_OFFSET(0x1C97810)
#define MX_DATA_EXCEL_STORYSTRATEGYEXCEL_GET_STRATEGYENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x1C97860)
#define MX_DATA_EXCEL_STORYSTRATEGYEXCEL_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1C978B0)
#define MX_DATA_EXCEL_STORYSTRATEGYEXCEL_GET_BGMID_OFFSET UNITYSDK_OFFSET(0x1C97900)
#define MX_DATA_EXCEL_STORYSTRATEGYEXCEL_GET_FIRSTCLEARREPORTEVENTNAME_OFFSET UNITYSDK_OFFSET(0x1C97950)
#define MX_DATA_EXCEL_STORYSTRATEGYEXCEL_GETFIRSTCLEARREPORTEVENTNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1C97990)
#define MX_DATA_EXCEL_STORYSTRATEGYEXCEL_CREATESTORYSTRATEGYEXCEL_OFFSET UNITYSDK_OFFSET(0x1C979B0)
#define MX_DATA_EXCEL_STORYSTRATEGYEXCEL_STARTSTORYSTRATEGYEXCEL_OFFSET UNITYSDK_OFFSET(0x1C97F10)
#define MX_DATA_EXCEL_STORYSTRATEGYEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1C97CB0)
#define MX_DATA_EXCEL_STORYSTRATEGYEXCEL_ADDNAME_OFFSET UNITYSDK_OFFSET(0x1C97E90)
#define MX_DATA_EXCEL_STORYSTRATEGYEXCEL_ADDLOCALIZE_OFFSET UNITYSDK_OFFSET(0x1C97E60)
#define MX_DATA_EXCEL_STORYSTRATEGYEXCEL_ADDSTAGEENTERECHELONCOUNT_OFFSET UNITYSDK_OFFSET(0x1C97E30)
#define MX_DATA_EXCEL_STORYSTRATEGYEXCEL_ADDBATTLEDURATION_OFFSET UNITYSDK_OFFSET(0x1C97C80)
#define MX_DATA_EXCEL_STORYSTRATEGYEXCEL_ADDWHITELISTID_OFFSET UNITYSDK_OFFSET(0x1C97C50)
#define MX_DATA_EXCEL_STORYSTRATEGYEXCEL_ADDSTRATEGYMAP_OFFSET UNITYSDK_OFFSET(0x1C97E00)
#define MX_DATA_EXCEL_STORYSTRATEGYEXCEL_ADDSTRATEGYMAPBG_OFFSET UNITYSDK_OFFSET(0x1C97DD0)
#define MX_DATA_EXCEL_STORYSTRATEGYEXCEL_ADDMAXTURN_OFFSET UNITYSDK_OFFSET(0x1C97DA0)
#define MX_DATA_EXCEL_STORYSTRATEGYEXCEL_ADDSTAGETOPOGRAPHY_OFFSET UNITYSDK_OFFSET(0x1C97D70)
#define MX_DATA_EXCEL_STORYSTRATEGYEXCEL_ADDSTRATEGYENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x1C97D40)
#define MX_DATA_EXCEL_STORYSTRATEGYEXCEL_ADDCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1C97D10)
#define MX_DATA_EXCEL_STORYSTRATEGYEXCEL_ADDBGMID_OFFSET UNITYSDK_OFFSET(0x1C97C20)
#define MX_DATA_EXCEL_STORYSTRATEGYEXCEL_ADDFIRSTCLEARREPORTEVENTNAME_OFFSET UNITYSDK_OFFSET(0x1C97CE0)
#define MX_DATA_EXCEL_STORYSTRATEGYEXCEL_ENDSTORYSTRATEGYEXCEL_OFFSET UNITYSDK_OFFSET(0x1C97EC0)
#define MX_DATA_EXCEL_STORYSTRATEGYEXCEL_FINISHSTORYSTRATEGYEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C97F30)
#define MX_DATA_EXCEL_STORYSTRATEGYEXCEL_FINISHSIZEPREFIXEDSTORYSTRATEGYEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C97F50)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int StoryStrategyExcel_TypeDefinitionIndex = 19551;

	class StoryStrategyExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STORYSTRATEGYEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::StoryStrategyExcel* GetRootAsStoryStrategyExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::StoryStrategyExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STORYSTRATEGYEXCEL_GETROOTASSTORYSTRATEGYEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::StoryStrategyExcel* GetRootAsStoryStrategyExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::StoryStrategyExcel* arg)
		{
			return (return (::MX::Data::Excel::StoryStrategyExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::StoryStrategyExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STORYSTRATEGYEXCEL_GETROOTASSTORYSTRATEGYEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STORYSTRATEGYEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::StoryStrategyExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::StoryStrategyExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STORYSTRATEGYEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STORYSTRATEGYEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STORYSTRATEGYEXCEL_GET_NAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STORYSTRATEGYEXCEL_GETNAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_Localize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STORYSTRATEGYEXCEL_GET_LOCALIZE_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STORYSTRATEGYEXCEL_GETLOCALIZEBYTES_OFFSET))(nullptr);
		}

		::System::Int32 get_StageEnterEchelonCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STORYSTRATEGYEXCEL_GET_STAGEENTERECHELONCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_BattleDuration()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STORYSTRATEGYEXCEL_GET_BATTLEDURATION_OFFSET))(nullptr);
		}

		::System::Int64 get_WhiteListId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STORYSTRATEGYEXCEL_GET_WHITELISTID_OFFSET))(nullptr);
		}

		::System::String* get_StrategyMap()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STORYSTRATEGYEXCEL_GET_STRATEGYMAP_OFFSET))(nullptr);
		}

		Il2CppObject* GetStrategyMapBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STORYSTRATEGYEXCEL_GETSTRATEGYMAPBYTES_OFFSET))(nullptr);
		}

		::System::String* get_StrategyMapBG()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STORYSTRATEGYEXCEL_GET_STRATEGYMAPBG_OFFSET))(nullptr);
		}

		Il2CppObject* GetStrategyMapBGBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STORYSTRATEGYEXCEL_GETSTRATEGYMAPBGBYTES_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxTurn()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STORYSTRATEGYEXCEL_GET_MAXTURN_OFFSET))(nullptr);
		}

		::FlatData::StageTopography* get_StageTopography()
		{
			return (return (::FlatData::StageTopography*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STORYSTRATEGYEXCEL_GET_STAGETOPOGRAPHY_OFFSET))(nullptr);
		}

		::FlatData::StrategyEnvironment* get_StrategyEnvironment()
		{
			return (return (::FlatData::StrategyEnvironment*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STORYSTRATEGYEXCEL_GET_STRATEGYENVIRONMENT_OFFSET))(nullptr);
		}

		::FlatData::ContentType* get_ContentType()
		{
			return (return (::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STORYSTRATEGYEXCEL_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_BGMId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STORYSTRATEGYEXCEL_GET_BGMID_OFFSET))(nullptr);
		}

		::System::String* get_FirstClearReportEventName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STORYSTRATEGYEXCEL_GET_FIRSTCLEARREPORTEVENTNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetFirstClearReportEventNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STORYSTRATEGYEXCEL_GETFIRSTCLEARREPORTEVENTNAMEBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateStoryStrategyExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int32 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int32 arg, ::FlatData::StageTopography* arg, ::FlatData::StrategyEnvironment* arg, ::FlatData::ContentType* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int32, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int32, ::FlatData::StageTopography*, ::FlatData::StrategyEnvironment*, ::FlatData::ContentType*, ::System::Int64, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STORYSTRATEGYEXCEL_CREATESTORYSTRATEGYEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartStoryStrategyExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STORYSTRATEGYEXCEL_STARTSTORYSTRATEGYEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STORYSTRATEGYEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STORYSTRATEGYEXCEL_ADDNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalize(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STORYSTRATEGYEXCEL_ADDLOCALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageEnterEchelonCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STORYSTRATEGYEXCEL_ADDSTAGEENTERECHELONCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBattleDuration(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STORYSTRATEGYEXCEL_ADDBATTLEDURATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddWhiteListId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STORYSTRATEGYEXCEL_ADDWHITELISTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStrategyMap(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STORYSTRATEGYEXCEL_ADDSTRATEGYMAP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStrategyMapBG(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STORYSTRATEGYEXCEL_ADDSTRATEGYMAPBG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMaxTurn(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STORYSTRATEGYEXCEL_ADDMAXTURN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageTopography(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::StageTopography* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::StageTopography*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STORYSTRATEGYEXCEL_ADDSTAGETOPOGRAPHY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStrategyEnvironment(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::StrategyEnvironment* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::StrategyEnvironment*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STORYSTRATEGYEXCEL_ADDSTRATEGYENVIRONMENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddContentType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STORYSTRATEGYEXCEL_ADDCONTENTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBGMId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STORYSTRATEGYEXCEL_ADDBGMID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFirstClearReportEventName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STORYSTRATEGYEXCEL_ADDFIRSTCLEARREPORTEVENTNAME_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndStoryStrategyExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STORYSTRATEGYEXCEL_ENDSTORYSTRATEGYEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishStoryStrategyExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STORYSTRATEGYEXCEL_FINISHSTORYSTRATEGYEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedStoryStrategyExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STORYSTRATEGYEXCEL_FINISHSIZEPREFIXEDSTORYSTRATEGYEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

