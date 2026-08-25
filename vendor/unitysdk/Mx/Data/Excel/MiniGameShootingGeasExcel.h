#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MiniGameShootingGeasExcel; }
namespace FlatData { class Geas; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1BFBAA0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL_GETROOTASMINIGAMESHOOTINGGEASEXCEL_OFFSET UNITYSDK_OFFSET(0x1BFBAB0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL_GETROOTASMINIGAMESHOOTINGGEASEXCEL_OFFSET UNITYSDK_OFFSET(0x1BFBB10)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1BFBBA0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1BFBB70)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BFBBC0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL_GET_GEASTYPE_OFFSET UNITYSDK_OFFSET(0x1BFBC10)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL_GET_ICON_OFFSET UNITYSDK_OFFSET(0x1BFBC60)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL_GETICONBYTES_OFFSET UNITYSDK_OFFSET(0x1BFBCA0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL_GET_PROBABILITY_OFFSET UNITYSDK_OFFSET(0x1BFBCC0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL_GET_MAXOVERLAPCOUNT_OFFSET UNITYSDK_OFFSET(0x1BFBD10)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL_GET_GEASDATA_OFFSET UNITYSDK_OFFSET(0x1BFBD60)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL_GETGEASDATABYTES_OFFSET UNITYSDK_OFFSET(0x1BFBDA0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL_GET_NEEDGEASID_OFFSET UNITYSDK_OFFSET(0x1BFBDC0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL_GET_HIDEINPAUSEPOPUP_OFFSET UNITYSDK_OFFSET(0x1BFBE10)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL_CREATEMINIGAMESHOOTINGGEASEXCEL_OFFSET UNITYSDK_OFFSET(0x1BFBE60)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL_STARTMINIGAMESHOOTINGGEASEXCEL_OFFSET UNITYSDK_OFFSET(0x1BFC1B0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL_ADDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BFC040)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL_ADDGEASTYPE_OFFSET UNITYSDK_OFFSET(0x1BFC100)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL_ADDICON_OFFSET UNITYSDK_OFFSET(0x1BFC0D0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL_ADDPROBABILITY_OFFSET UNITYSDK_OFFSET(0x1BFC010)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL_ADDMAXOVERLAPCOUNT_OFFSET UNITYSDK_OFFSET(0x1BFC0A0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL_ADDGEASDATA_OFFSET UNITYSDK_OFFSET(0x1BFC070)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL_ADDNEEDGEASID_OFFSET UNITYSDK_OFFSET(0x1BFBFE0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL_ADDHIDEINPAUSEPOPUP_OFFSET UNITYSDK_OFFSET(0x1BFC130)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL_ENDMINIGAMESHOOTINGGEASEXCEL_OFFSET UNITYSDK_OFFSET(0x1BFC160)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL_FINISHMINIGAMESHOOTINGGEASEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BFC1D0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL_FINISHSIZEPREFIXEDMINIGAMESHOOTINGGEASEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BFC1F0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameShootingGeasExcel_TypeDefinitionIndex = 18838;

	class MiniGameShootingGeasExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MiniGameShootingGeasExcel* GetRootAsMiniGameShootingGeasExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameShootingGeasExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL_GETROOTASMINIGAMESHOOTINGGEASEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MiniGameShootingGeasExcel* GetRootAsMiniGameShootingGeasExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MiniGameShootingGeasExcel* arg)
		{
			return (return (::MX::Data::Excel::MiniGameShootingGeasExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MiniGameShootingGeasExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL_GETROOTASMINIGAMESHOOTINGGEASEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MiniGameShootingGeasExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameShootingGeasExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::FlatData::Geas* get_GeasType()
		{
			return (return (::FlatData::Geas*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL_GET_GEASTYPE_OFFSET))(nullptr);
		}

		::System::String* get_Icon()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL_GET_ICON_OFFSET))(nullptr);
		}

		Il2CppObject* GetIconBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL_GETICONBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_Probability()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL_GET_PROBABILITY_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxOverlapCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL_GET_MAXOVERLAPCOUNT_OFFSET))(nullptr);
		}

		::System::String* get_GeasData()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL_GET_GEASDATA_OFFSET))(nullptr);
		}

		Il2CppObject* GetGeasDataBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL_GETGEASDATABYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_NeedGeasId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL_GET_NEEDGEASID_OFFSET))(nullptr);
		}

		::System::Boolean get_HideInPausePopup()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL_GET_HIDEINPAUSEPOPUP_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMiniGameShootingGeasExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::Geas* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::System::Int32 arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::Geas*, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::Int32, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL_CREATEMINIGAMESHOOTINGGEASEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMiniGameShootingGeasExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL_STARTMINIGAMESHOOTINGGEASEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL_ADDUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGeasType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::Geas* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::Geas*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL_ADDGEASTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIcon(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL_ADDICON_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProbability(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL_ADDPROBABILITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMaxOverlapCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL_ADDMAXOVERLAPCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGeasData(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL_ADDGEASDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNeedGeasId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL_ADDNEEDGEASID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddHideInPausePopup(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL_ADDHIDEINPAUSEPOPUP_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMiniGameShootingGeasExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL_ENDMINIGAMESHOOTINGGEASEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMiniGameShootingGeasExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL_FINISHMINIGAMESHOOTINGGEASEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMiniGameShootingGeasExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGGEASEXCEL_FINISHSIZEPREFIXEDMINIGAMESHOOTINGGEASEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

