#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class StatLevelInterpolationExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_STATLEVELINTERPOLATIONEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C930A0)
#define MX_DATA_EXCEL_STATLEVELINTERPOLATIONEXCEL_GETROOTASSTATLEVELINTERPOLATIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1C930B0)
#define MX_DATA_EXCEL_STATLEVELINTERPOLATIONEXCEL_GETROOTASSTATLEVELINTERPOLATIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1C93110)
#define MX_DATA_EXCEL_STATLEVELINTERPOLATIONEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C931A0)
#define MX_DATA_EXCEL_STATLEVELINTERPOLATIONEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C93170)
#define MX_DATA_EXCEL_STATLEVELINTERPOLATIONEXCEL_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1C931C0)
#define MX_DATA_EXCEL_STATLEVELINTERPOLATIONEXCEL_STATTYPEINDEX_OFFSET UNITYSDK_OFFSET(0x1C93210)
#define MX_DATA_EXCEL_STATLEVELINTERPOLATIONEXCEL_GET_STATTYPEINDEXLENGTH_OFFSET UNITYSDK_OFFSET(0x1C93270)
#define MX_DATA_EXCEL_STATLEVELINTERPOLATIONEXCEL_GETSTATTYPEINDEXBYTES_OFFSET UNITYSDK_OFFSET(0x1C932B0)
#define MX_DATA_EXCEL_STATLEVELINTERPOLATIONEXCEL_CREATESTATLEVELINTERPOLATIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1C932D0)
#define MX_DATA_EXCEL_STATLEVELINTERPOLATIONEXCEL_STARTSTATLEVELINTERPOLATIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1C93410)
#define MX_DATA_EXCEL_STATLEVELINTERPOLATIONEXCEL_ADDLEVEL_OFFSET UNITYSDK_OFFSET(0x1C93360)
#define MX_DATA_EXCEL_STATLEVELINTERPOLATIONEXCEL_ADDSTATTYPEINDEX_OFFSET UNITYSDK_OFFSET(0x1C93390)
#define MX_DATA_EXCEL_STATLEVELINTERPOLATIONEXCEL_CREATESTATTYPEINDEXVECTOR_OFFSET UNITYSDK_OFFSET(0x1C93430)
#define MX_DATA_EXCEL_STATLEVELINTERPOLATIONEXCEL_STARTSTATTYPEINDEXVECTOR_OFFSET UNITYSDK_OFFSET(0x1C934C0)
#define MX_DATA_EXCEL_STATLEVELINTERPOLATIONEXCEL_ENDSTATLEVELINTERPOLATIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1C933C0)
#define MX_DATA_EXCEL_STATLEVELINTERPOLATIONEXCEL_FINISHSTATLEVELINTERPOLATIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C93500)
#define MX_DATA_EXCEL_STATLEVELINTERPOLATIONEXCEL_FINISHSIZEPREFIXEDSTATLEVELINTERPOLATIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C93520)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int StatLevelInterpolationExcel_TypeDefinitionIndex = 19530;

	class StatLevelInterpolationExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STATLEVELINTERPOLATIONEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::StatLevelInterpolationExcel* GetRootAsStatLevelInterpolationExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::StatLevelInterpolationExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STATLEVELINTERPOLATIONEXCEL_GETROOTASSTATLEVELINTERPOLATIONEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::StatLevelInterpolationExcel* GetRootAsStatLevelInterpolationExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::StatLevelInterpolationExcel* arg)
		{
			return (return (::MX::Data::Excel::StatLevelInterpolationExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::StatLevelInterpolationExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STATLEVELINTERPOLATIONEXCEL_GETROOTASSTATLEVELINTERPOLATIONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STATLEVELINTERPOLATIONEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::StatLevelInterpolationExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::StatLevelInterpolationExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STATLEVELINTERPOLATIONEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Level()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STATLEVELINTERPOLATIONEXCEL_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Int64 StatTypeIndex(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STATLEVELINTERPOLATIONEXCEL_STATTYPEINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StatTypeIndexLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STATLEVELINTERPOLATIONEXCEL_GET_STATTYPEINDEXLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetStatTypeIndexBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STATLEVELINTERPOLATIONEXCEL_GETSTATTYPEINDEXBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateStatLevelInterpolationExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STATLEVELINTERPOLATIONEXCEL_CREATESTATLEVELINTERPOLATIONEXCEL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void StartStatLevelInterpolationExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STATLEVELINTERPOLATIONEXCEL_STARTSTATLEVELINTERPOLATIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STATLEVELINTERPOLATIONEXCEL_ADDLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStatTypeIndex(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STATLEVELINTERPOLATIONEXCEL_ADDSTATTYPEINDEX_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateStatTypeIndexVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STATLEVELINTERPOLATIONEXCEL_CREATESTATTYPEINDEXVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartStatTypeIndexVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STATLEVELINTERPOLATIONEXCEL_STARTSTATTYPEINDEXVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndStatLevelInterpolationExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STATLEVELINTERPOLATIONEXCEL_ENDSTATLEVELINTERPOLATIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishStatLevelInterpolationExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STATLEVELINTERPOLATIONEXCEL_FINISHSTATLEVELINTERPOLATIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedStatLevelInterpolationExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STATLEVELINTERPOLATIONEXCEL_FINISHSIZEPREFIXEDSTATLEVELINTERPOLATIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

