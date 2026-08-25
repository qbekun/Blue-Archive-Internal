#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ScenarioCharacterEmotionExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_SCENARIOCHARACTEREMOTIONEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C58C40)
#define MX_DATA_EXCEL_SCENARIOCHARACTEREMOTIONEXCEL_GETROOTASSCENARIOCHARACTEREMOTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1C58C50)
#define MX_DATA_EXCEL_SCENARIOCHARACTEREMOTIONEXCEL_GETROOTASSCENARIOCHARACTEREMOTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1C58CB0)
#define MX_DATA_EXCEL_SCENARIOCHARACTEREMOTIONEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C58D40)
#define MX_DATA_EXCEL_SCENARIOCHARACTEREMOTIONEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C58D10)
#define MX_DATA_EXCEL_SCENARIOCHARACTEREMOTIONEXCEL_GET_EMOTICONNAME_OFFSET UNITYSDK_OFFSET(0x1C58D60)
#define MX_DATA_EXCEL_SCENARIOCHARACTEREMOTIONEXCEL_GETEMOTICONNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1C58DA0)
#define MX_DATA_EXCEL_SCENARIOCHARACTEREMOTIONEXCEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C58DC0)
#define MX_DATA_EXCEL_SCENARIOCHARACTEREMOTIONEXCEL_CREATESCENARIOCHARACTEREMOTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1C58E10)
#define MX_DATA_EXCEL_SCENARIOCHARACTEREMOTIONEXCEL_STARTSCENARIOCHARACTEREMOTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1C58F50)
#define MX_DATA_EXCEL_SCENARIOCHARACTEREMOTIONEXCEL_ADDEMOTICONNAME_OFFSET UNITYSDK_OFFSET(0x1C58ED0)
#define MX_DATA_EXCEL_SCENARIOCHARACTEREMOTIONEXCEL_ADDNAME_OFFSET UNITYSDK_OFFSET(0x1C58EA0)
#define MX_DATA_EXCEL_SCENARIOCHARACTEREMOTIONEXCEL_ENDSCENARIOCHARACTEREMOTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1C58F00)
#define MX_DATA_EXCEL_SCENARIOCHARACTEREMOTIONEXCEL_FINISHSCENARIOCHARACTEREMOTIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C58F70)
#define MX_DATA_EXCEL_SCENARIOCHARACTEREMOTIONEXCEL_FINISHSIZEPREFIXEDSCENARIOCHARACTEREMOTIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C58F90)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ScenarioCharacterEmotionExcel_TypeDefinitionIndex = 19255;

	class ScenarioCharacterEmotionExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTEREMOTIONEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ScenarioCharacterEmotionExcel* GetRootAsScenarioCharacterEmotionExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ScenarioCharacterEmotionExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTEREMOTIONEXCEL_GETROOTASSCENARIOCHARACTEREMOTIONEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ScenarioCharacterEmotionExcel* GetRootAsScenarioCharacterEmotionExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ScenarioCharacterEmotionExcel* arg)
		{
			return (return (::MX::Data::Excel::ScenarioCharacterEmotionExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ScenarioCharacterEmotionExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTEREMOTIONEXCEL_GETROOTASSCENARIOCHARACTEREMOTIONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTEREMOTIONEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ScenarioCharacterEmotionExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ScenarioCharacterEmotionExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTEREMOTIONEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_EmoticonName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTEREMOTIONEXCEL_GET_EMOTICONNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetEmoticonNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTEREMOTIONEXCEL_GETEMOTICONNAMEBYTES_OFFSET))(nullptr);
		}

		::System::UInt32 get_Name()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTEREMOTIONEXCEL_GET_NAME_OFFSET))(nullptr);
		}

		Il2CppObject* CreateScenarioCharacterEmotionExcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg, ::System::UInt32 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTEREMOTIONEXCEL_CREATESCENARIOCHARACTEREMOTIONEXCEL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void StartScenarioCharacterEmotionExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTEREMOTIONEXCEL_STARTSCENARIOCHARACTEREMOTIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEmoticonName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTEREMOTIONEXCEL_ADDEMOTICONNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddName(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTEREMOTIONEXCEL_ADDNAME_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndScenarioCharacterEmotionExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTEREMOTIONEXCEL_ENDSCENARIOCHARACTEREMOTIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishScenarioCharacterEmotionExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTEREMOTIONEXCEL_FINISHSCENARIOCHARACTEREMOTIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedScenarioCharacterEmotionExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTEREMOTIONEXCEL_FINISHSIZEPREFIXEDSCENARIOCHARACTEREMOTIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

