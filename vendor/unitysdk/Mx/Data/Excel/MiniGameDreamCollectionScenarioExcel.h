#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MiniGameDreamCollectionScenarioExcel; }
namespace FlatData { class DreamMakerParameterType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1BAC9E0)
#define MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_GETROOTASMINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_OFFSET UNITYSDK_OFFSET(0x1BAC9F0)
#define MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_GETROOTASMINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_OFFSET UNITYSDK_OFFSET(0x1BACA50)
#define MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1BACAE0)
#define MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1BACAB0)
#define MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1BACB00)
#define MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_GET_ISSKIP_OFFSET UNITYSDK_OFFSET(0x1BACB50)
#define MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BACBA0)
#define MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_PARAMETER_OFFSET UNITYSDK_OFFSET(0x1BACBF0)
#define MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_GET_PARAMETERLENGTH_OFFSET UNITYSDK_OFFSET(0x1BACC50)
#define MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_GETPARAMETERBYTES_OFFSET UNITYSDK_OFFSET(0x1BACC90)
#define MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_PARAMETERAMOUNT_OFFSET UNITYSDK_OFFSET(0x1BACCB0)
#define MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_GET_PARAMETERAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1BACD10)
#define MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_GETPARAMETERAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1BACD50)
#define MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_GET_SCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1BACD70)
#define MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_CREATEMINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_OFFSET UNITYSDK_OFFSET(0x1BACDC0)
#define MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_STARTMINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_OFFSET UNITYSDK_OFFSET(0x1BAD060)
#define MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1BACF50)
#define MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_ADDISSKIP_OFFSET UNITYSDK_OFFSET(0x1BACFE0)
#define MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BACF20)
#define MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_ADDPARAMETER_OFFSET UNITYSDK_OFFSET(0x1BACFB0)
#define MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_CREATEPARAMETERVECTOR_OFFSET UNITYSDK_OFFSET(0x1BAD080)
#define MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_STARTPARAMETERVECTOR_OFFSET UNITYSDK_OFFSET(0x1BAD110)
#define MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_ADDPARAMETERAMOUNT_OFFSET UNITYSDK_OFFSET(0x1BACF80)
#define MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_CREATEPARAMETERAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1BAD150)
#define MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_STARTPARAMETERAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1BAD1E0)
#define MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_ADDSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1BACEF0)
#define MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_ENDMINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_OFFSET UNITYSDK_OFFSET(0x1BAD010)
#define MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_FINISHMINIGAMEDREAMCOLLECTIONSCENARIOEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BAD220)
#define MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_FINISHSIZEPREFIXEDMINIGAMEDREAMCOLLECTIONSCENARIOEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BAD240)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameDreamCollectionScenarioExcel_TypeDefinitionIndex = 18603;

	class MiniGameDreamCollectionScenarioExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MiniGameDreamCollectionScenarioExcel* GetRootAsMiniGameDreamCollectionScenarioExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameDreamCollectionScenarioExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_GETROOTASMINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MiniGameDreamCollectionScenarioExcel* GetRootAsMiniGameDreamCollectionScenarioExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MiniGameDreamCollectionScenarioExcel* arg)
		{
			return (return (::MX::Data::Excel::MiniGameDreamCollectionScenarioExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MiniGameDreamCollectionScenarioExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_GETROOTASMINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MiniGameDreamCollectionScenarioExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameDreamCollectionScenarioExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSkip()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_GET_ISSKIP_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::FlatData::DreamMakerParameterType* Parameter(::System::Int32 arg)
		{
			return (return (::FlatData::DreamMakerParameterType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_PARAMETER_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ParameterLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_GET_PARAMETERLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetParameterBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_GETPARAMETERBYTES_OFFSET))(nullptr);
		}

		::System::Int64 ParameterAmount(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_PARAMETERAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ParameterAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_GET_PARAMETERAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetParameterAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_GETPARAMETERAMOUNTBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_ScenarioGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_GET_SCENARIOGROUPID_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMiniGameDreamCollectionScenarioExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Boolean arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Boolean, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_CREATEMINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMiniGameDreamCollectionScenarioExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_STARTMINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsSkip(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_ADDISSKIP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParameter(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_ADDPARAMETER_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateParameterVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_CREATEPARAMETERVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartParameterVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_STARTPARAMETERVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParameterAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_ADDPARAMETERAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateParameterAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_CREATEPARAMETERAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartParameterAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_STARTPARAMETERAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddScenarioGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_ADDSCENARIOGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMiniGameDreamCollectionScenarioExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_ENDMINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMiniGameDreamCollectionScenarioExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_FINISHMINIGAMEDREAMCOLLECTIONSCENARIOEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMiniGameDreamCollectionScenarioExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMCOLLECTIONSCENARIOEXCEL_FINISHSIZEPREFIXEDMINIGAMEDREAMCOLLECTIONSCENARIOEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

