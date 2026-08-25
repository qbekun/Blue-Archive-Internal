#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MiniGameDreamParameterExcel; }
namespace FlatData { class DreamMakerParameterType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1BB4B70)
#define MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_GETROOTASMINIGAMEDREAMPARAMETEREXCEL_OFFSET UNITYSDK_OFFSET(0x1BB4B80)
#define MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_GETROOTASMINIGAMEDREAMPARAMETEREXCEL_OFFSET UNITYSDK_OFFSET(0x1BB4BE0)
#define MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1BB4C70)
#define MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1BB4C40)
#define MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1BB4C90)
#define MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BB4CE0)
#define MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_GET_PARAMETERTYPE_OFFSET UNITYSDK_OFFSET(0x1BB4D30)
#define MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_GET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1BB4D80)
#define MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1BB4DD0)
#define MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_GETICONPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1BB4E10)
#define MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_GET_PARAMETERBASE_OFFSET UNITYSDK_OFFSET(0x1BB4E30)
#define MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_GET_PARAMETERBASEMAX_OFFSET UNITYSDK_OFFSET(0x1BB4E80)
#define MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_GET_PARAMETERMIN_OFFSET UNITYSDK_OFFSET(0x1BB4ED0)
#define MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_GET_PARAMETERMAX_OFFSET UNITYSDK_OFFSET(0x1BB4F20)
#define MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_CREATEMINIGAMEDREAMPARAMETEREXCEL_OFFSET UNITYSDK_OFFSET(0x1BB4F70)
#define MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_STARTMINIGAMEDREAMPARAMETEREXCEL_OFFSET UNITYSDK_OFFSET(0x1BB5310)
#define MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1BB5200)
#define MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BB51D0)
#define MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_ADDPARAMETERTYPE_OFFSET UNITYSDK_OFFSET(0x1BB5290)
#define MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_ADDLOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1BB5260)
#define MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_ADDICONPATH_OFFSET UNITYSDK_OFFSET(0x1BB5230)
#define MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_ADDPARAMETERBASE_OFFSET UNITYSDK_OFFSET(0x1BB51A0)
#define MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_ADDPARAMETERBASEMAX_OFFSET UNITYSDK_OFFSET(0x1BB5170)
#define MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_ADDPARAMETERMIN_OFFSET UNITYSDK_OFFSET(0x1BB5140)
#define MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_ADDPARAMETERMAX_OFFSET UNITYSDK_OFFSET(0x1BB5110)
#define MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_ENDMINIGAMEDREAMPARAMETEREXCEL_OFFSET UNITYSDK_OFFSET(0x1BB52C0)
#define MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_FINISHMINIGAMEDREAMPARAMETEREXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BB5330)
#define MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_FINISHSIZEPREFIXEDMINIGAMEDREAMPARAMETEREXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BB5350)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameDreamParameterExcel_TypeDefinitionIndex = 18641;

	class MiniGameDreamParameterExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MiniGameDreamParameterExcel* GetRootAsMiniGameDreamParameterExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameDreamParameterExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_GETROOTASMINIGAMEDREAMPARAMETEREXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MiniGameDreamParameterExcel* GetRootAsMiniGameDreamParameterExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MiniGameDreamParameterExcel* arg)
		{
			return (return (::MX::Data::Excel::MiniGameDreamParameterExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MiniGameDreamParameterExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_GETROOTASMINIGAMEDREAMPARAMETEREXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MiniGameDreamParameterExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameDreamParameterExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::FlatData::DreamMakerParameterType* get_ParameterType()
		{
			return (return (::FlatData::DreamMakerParameterType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_GET_PARAMETERTYPE_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_GET_LOCALIZEETCID_OFFSET))(nullptr);
		}

		::System::String* get_IconPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_GET_ICONPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetIconPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_GETICONPATHBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_ParameterBase()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_GET_PARAMETERBASE_OFFSET))(nullptr);
		}

		::System::Int64 get_ParameterBaseMax()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_GET_PARAMETERBASEMAX_OFFSET))(nullptr);
		}

		::System::Int64 get_ParameterMin()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_GET_PARAMETERMIN_OFFSET))(nullptr);
		}

		::System::Int64 get_ParameterMax()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_GET_PARAMETERMAX_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMiniGameDreamParameterExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::DreamMakerParameterType* arg, ::System::UInt32 arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatData::DreamMakerParameterType*, ::System::UInt32, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_CREATEMINIGAMEDREAMPARAMETEREXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMiniGameDreamParameterExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_STARTMINIGAMEDREAMPARAMETEREXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParameterType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::DreamMakerParameterType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::DreamMakerParameterType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_ADDPARAMETERTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeEtcId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_ADDLOCALIZEETCID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIconPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_ADDICONPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParameterBase(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_ADDPARAMETERBASE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParameterBaseMax(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_ADDPARAMETERBASEMAX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParameterMin(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_ADDPARAMETERMIN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParameterMax(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_ADDPARAMETERMAX_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMiniGameDreamParameterExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_ENDMINIGAMEDREAMPARAMETEREXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMiniGameDreamParameterExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_FINISHMINIGAMEDREAMPARAMETEREXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMiniGameDreamParameterExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMPARAMETEREXCEL_FINISHSIZEPREFIXEDMINIGAMEDREAMPARAMETEREXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

