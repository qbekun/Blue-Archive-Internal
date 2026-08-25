#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class StageFileRefreshSettingExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_STAGEFILEREFRESHSETTINGEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C92030)
#define MX_DATA_EXCEL_STAGEFILEREFRESHSETTINGEXCEL_GETROOTASSTAGEFILEREFRESHSETTINGEXCEL_OFFSET UNITYSDK_OFFSET(0x1C92040)
#define MX_DATA_EXCEL_STAGEFILEREFRESHSETTINGEXCEL_GETROOTASSTAGEFILEREFRESHSETTINGEXCEL_OFFSET UNITYSDK_OFFSET(0x1C920A0)
#define MX_DATA_EXCEL_STAGEFILEREFRESHSETTINGEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C92130)
#define MX_DATA_EXCEL_STAGEFILEREFRESHSETTINGEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C92100)
#define MX_DATA_EXCEL_STAGEFILEREFRESHSETTINGEXCEL_GET_GROUNDID_OFFSET UNITYSDK_OFFSET(0x1C92150)
#define MX_DATA_EXCEL_STAGEFILEREFRESHSETTINGEXCEL_GET_FORCESAVE_OFFSET UNITYSDK_OFFSET(0x1C921A0)
#define MX_DATA_EXCEL_STAGEFILEREFRESHSETTINGEXCEL_CREATESTAGEFILEREFRESHSETTINGEXCEL_OFFSET UNITYSDK_OFFSET(0x1C921F0)
#define MX_DATA_EXCEL_STAGEFILEREFRESHSETTINGEXCEL_STARTSTAGEFILEREFRESHSETTINGEXCEL_OFFSET UNITYSDK_OFFSET(0x1C92330)
#define MX_DATA_EXCEL_STAGEFILEREFRESHSETTINGEXCEL_ADDGROUNDID_OFFSET UNITYSDK_OFFSET(0x1C92280)
#define MX_DATA_EXCEL_STAGEFILEREFRESHSETTINGEXCEL_ADDFORCESAVE_OFFSET UNITYSDK_OFFSET(0x1C922B0)
#define MX_DATA_EXCEL_STAGEFILEREFRESHSETTINGEXCEL_ENDSTAGEFILEREFRESHSETTINGEXCEL_OFFSET UNITYSDK_OFFSET(0x1C922E0)
#define MX_DATA_EXCEL_STAGEFILEREFRESHSETTINGEXCEL_FINISHSTAGEFILEREFRESHSETTINGEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C92350)
#define MX_DATA_EXCEL_STAGEFILEREFRESHSETTINGEXCEL_FINISHSIZEPREFIXEDSTAGEFILEREFRESHSETTINGEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C92370)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int StageFileRefreshSettingExcel_TypeDefinitionIndex = 19523;

	class StageFileRefreshSettingExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STAGEFILEREFRESHSETTINGEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::StageFileRefreshSettingExcel* GetRootAsStageFileRefreshSettingExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::StageFileRefreshSettingExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STAGEFILEREFRESHSETTINGEXCEL_GETROOTASSTAGEFILEREFRESHSETTINGEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::StageFileRefreshSettingExcel* GetRootAsStageFileRefreshSettingExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::StageFileRefreshSettingExcel* arg)
		{
			return (return (::MX::Data::Excel::StageFileRefreshSettingExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::StageFileRefreshSettingExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STAGEFILEREFRESHSETTINGEXCEL_GETROOTASSTAGEFILEREFRESHSETTINGEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STAGEFILEREFRESHSETTINGEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::StageFileRefreshSettingExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::StageFileRefreshSettingExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STAGEFILEREFRESHSETTINGEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_GroundId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STAGEFILEREFRESHSETTINGEXCEL_GET_GROUNDID_OFFSET))(nullptr);
		}

		::System::Boolean get_ForceSave()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STAGEFILEREFRESHSETTINGEXCEL_GET_FORCESAVE_OFFSET))(nullptr);
		}

		Il2CppObject* CreateStageFileRefreshSettingExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STAGEFILEREFRESHSETTINGEXCEL_CREATESTAGEFILEREFRESHSETTINGEXCEL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void StartStageFileRefreshSettingExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STAGEFILEREFRESHSETTINGEXCEL_STARTSTAGEFILEREFRESHSETTINGEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddGroundId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STAGEFILEREFRESHSETTINGEXCEL_ADDGROUNDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddForceSave(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STAGEFILEREFRESHSETTINGEXCEL_ADDFORCESAVE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndStageFileRefreshSettingExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STAGEFILEREFRESHSETTINGEXCEL_ENDSTAGEFILEREFRESHSETTINGEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishStageFileRefreshSettingExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STAGEFILEREFRESHSETTINGEXCEL_FINISHSTAGEFILEREFRESHSETTINGEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedStageFileRefreshSettingExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STAGEFILEREFRESHSETTINGEXCEL_FINISHSIZEPREFIXEDSTAGEFILEREFRESHSETTINGEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

