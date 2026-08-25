#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ScenarioEffectExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_SCENARIOEFFECTEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C5E390)
#define MX_DATA_EXCEL_SCENARIOEFFECTEXCEL_GETROOTASSCENARIOEFFECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1C5E3A0)
#define MX_DATA_EXCEL_SCENARIOEFFECTEXCEL_GETROOTASSCENARIOEFFECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1C5E400)
#define MX_DATA_EXCEL_SCENARIOEFFECTEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C5E490)
#define MX_DATA_EXCEL_SCENARIOEFFECTEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C5E460)
#define MX_DATA_EXCEL_SCENARIOEFFECTEXCEL_GET_EFFECTNAME_OFFSET UNITYSDK_OFFSET(0x1C5E4B0)
#define MX_DATA_EXCEL_SCENARIOEFFECTEXCEL_GETEFFECTNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1C5E4F0)
#define MX_DATA_EXCEL_SCENARIOEFFECTEXCEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C5E510)
#define MX_DATA_EXCEL_SCENARIOEFFECTEXCEL_CREATESCENARIOEFFECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1C5E560)
#define MX_DATA_EXCEL_SCENARIOEFFECTEXCEL_STARTSCENARIOEFFECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1C5E6A0)
#define MX_DATA_EXCEL_SCENARIOEFFECTEXCEL_ADDEFFECTNAME_OFFSET UNITYSDK_OFFSET(0x1C5E620)
#define MX_DATA_EXCEL_SCENARIOEFFECTEXCEL_ADDNAME_OFFSET UNITYSDK_OFFSET(0x1C5E5F0)
#define MX_DATA_EXCEL_SCENARIOEFFECTEXCEL_ENDSCENARIOEFFECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1C5E650)
#define MX_DATA_EXCEL_SCENARIOEFFECTEXCEL_FINISHSCENARIOEFFECTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C5E6C0)
#define MX_DATA_EXCEL_SCENARIOEFFECTEXCEL_FINISHSIZEPREFIXEDSCENARIOEFFECTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C5E6E0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ScenarioEffectExcel_TypeDefinitionIndex = 19283;

	class ScenarioEffectExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOEFFECTEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ScenarioEffectExcel* GetRootAsScenarioEffectExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ScenarioEffectExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOEFFECTEXCEL_GETROOTASSCENARIOEFFECTEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ScenarioEffectExcel* GetRootAsScenarioEffectExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ScenarioEffectExcel* arg)
		{
			return (return (::MX::Data::Excel::ScenarioEffectExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ScenarioEffectExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOEFFECTEXCEL_GETROOTASSCENARIOEFFECTEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOEFFECTEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ScenarioEffectExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ScenarioEffectExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOEFFECTEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_EffectName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOEFFECTEXCEL_GET_EFFECTNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetEffectNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOEFFECTEXCEL_GETEFFECTNAMEBYTES_OFFSET))(nullptr);
		}

		::System::UInt32 get_Name()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOEFFECTEXCEL_GET_NAME_OFFSET))(nullptr);
		}

		Il2CppObject* CreateScenarioEffectExcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg, ::System::UInt32 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOEFFECTEXCEL_CREATESCENARIOEFFECTEXCEL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void StartScenarioEffectExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOEFFECTEXCEL_STARTSCENARIOEFFECTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEffectName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOEFFECTEXCEL_ADDEFFECTNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddName(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOEFFECTEXCEL_ADDNAME_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndScenarioEffectExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOEFFECTEXCEL_ENDSCENARIOEFFECTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishScenarioEffectExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOEFFECTEXCEL_FINISHSCENARIOEFFECTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedScenarioEffectExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOEFFECTEXCEL_FINISHSIZEPREFIXEDSCENARIOEFFECTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

