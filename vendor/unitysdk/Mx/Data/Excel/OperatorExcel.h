#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class OperatorExcel; }
namespace FlatData { class OperatorCondition; }
namespace FlatData { class CharacterVoiceOverridePriority; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_OPERATOREXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C21930)
#define MX_DATA_EXCEL_OPERATOREXCEL_GETROOTASOPERATOREXCEL_OFFSET UNITYSDK_OFFSET(0x1C21940)
#define MX_DATA_EXCEL_OPERATOREXCEL_GETROOTASOPERATOREXCEL_OFFSET UNITYSDK_OFFSET(0x1C219A0)
#define MX_DATA_EXCEL_OPERATOREXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C21A30)
#define MX_DATA_EXCEL_OPERATOREXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C21A00)
#define MX_DATA_EXCEL_OPERATOREXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C21A50)
#define MX_DATA_EXCEL_OPERATOREXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1C21AA0)
#define MX_DATA_EXCEL_OPERATOREXCEL_GETGROUPIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C21AE0)
#define MX_DATA_EXCEL_OPERATOREXCEL_GET_OPERATORCONDITION_OFFSET UNITYSDK_OFFSET(0x1C21B00)
#define MX_DATA_EXCEL_OPERATOREXCEL_GET_OUTPUTSEQUENCE_OFFSET UNITYSDK_OFFSET(0x1C21B50)
#define MX_DATA_EXCEL_OPERATOREXCEL_GET_RANDOMWEIGHT_OFFSET UNITYSDK_OFFSET(0x1C21BA0)
#define MX_DATA_EXCEL_OPERATOREXCEL_GET_OUTPUTDELAY_OFFSET UNITYSDK_OFFSET(0x1C21BF0)
#define MX_DATA_EXCEL_OPERATOREXCEL_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1C21C40)
#define MX_DATA_EXCEL_OPERATOREXCEL_GET_OPERATOROUTPUTPRIORITY_OFFSET UNITYSDK_OFFSET(0x1C21C90)
#define MX_DATA_EXCEL_OPERATOREXCEL_GET_PORTRAITPATH_OFFSET UNITYSDK_OFFSET(0x1C21CE0)
#define MX_DATA_EXCEL_OPERATOREXCEL_GETPORTRAITPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1C21D20)
#define MX_DATA_EXCEL_OPERATOREXCEL_GET_TEXTLOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0x1C21D40)
#define MX_DATA_EXCEL_OPERATOREXCEL_GETTEXTLOCALIZEKEYBYTES_OFFSET UNITYSDK_OFFSET(0x1C21D80)
#define MX_DATA_EXCEL_OPERATOREXCEL_VOICEID_OFFSET UNITYSDK_OFFSET(0x1C21DA0)
#define MX_DATA_EXCEL_OPERATOREXCEL_GET_VOICEIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1C21E00)
#define MX_DATA_EXCEL_OPERATOREXCEL_GETVOICEIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C21E40)
#define MX_DATA_EXCEL_OPERATOREXCEL_GET_OPERATORWAITQUEUE_OFFSET UNITYSDK_OFFSET(0x1C21E60)
#define MX_DATA_EXCEL_OPERATOREXCEL_GET_CHARACTERVOICEOVERRIDEPRIORITY_OFFSET UNITYSDK_OFFSET(0x1C21EB0)
#define MX_DATA_EXCEL_OPERATOREXCEL_CREATEOPERATOREXCEL_OFFSET UNITYSDK_OFFSET(0x1C21F00)
#define MX_DATA_EXCEL_OPERATOREXCEL_STARTOPERATOREXCEL_OFFSET UNITYSDK_OFFSET(0x1C22410)
#define MX_DATA_EXCEL_OPERATOREXCEL_ADDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C22150)
#define MX_DATA_EXCEL_OPERATOREXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0x1C22360)
#define MX_DATA_EXCEL_OPERATOREXCEL_ADDOPERATORCONDITION_OFFSET UNITYSDK_OFFSET(0x1C22330)
#define MX_DATA_EXCEL_OPERATOREXCEL_ADDOUTPUTSEQUENCE_OFFSET UNITYSDK_OFFSET(0x1C22300)
#define MX_DATA_EXCEL_OPERATOREXCEL_ADDRANDOMWEIGHT_OFFSET UNITYSDK_OFFSET(0x1C222D0)
#define MX_DATA_EXCEL_OPERATOREXCEL_ADDOUTPUTDELAY_OFFSET UNITYSDK_OFFSET(0x1C222A0)
#define MX_DATA_EXCEL_OPERATOREXCEL_ADDDURATION_OFFSET UNITYSDK_OFFSET(0x1C22270)
#define MX_DATA_EXCEL_OPERATOREXCEL_ADDOPERATOROUTPUTPRIORITY_OFFSET UNITYSDK_OFFSET(0x1C22240)
#define MX_DATA_EXCEL_OPERATOREXCEL_ADDPORTRAITPATH_OFFSET UNITYSDK_OFFSET(0x1C22210)
#define MX_DATA_EXCEL_OPERATOREXCEL_ADDTEXTLOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0x1C221E0)
#define MX_DATA_EXCEL_OPERATOREXCEL_ADDVOICEID_OFFSET UNITYSDK_OFFSET(0x1C221B0)
#define MX_DATA_EXCEL_OPERATOREXCEL_CREATEVOICEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C22430)
#define MX_DATA_EXCEL_OPERATOREXCEL_STARTVOICEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C224C0)
#define MX_DATA_EXCEL_OPERATOREXCEL_ADDOPERATORWAITQUEUE_OFFSET UNITYSDK_OFFSET(0x1C22390)
#define MX_DATA_EXCEL_OPERATOREXCEL_ADDCHARACTERVOICEOVERRIDEPRIORITY_OFFSET UNITYSDK_OFFSET(0x1C22180)
#define MX_DATA_EXCEL_OPERATOREXCEL_ENDOPERATOREXCEL_OFFSET UNITYSDK_OFFSET(0x1C223C0)
#define MX_DATA_EXCEL_OPERATOREXCEL_FINISHOPERATOREXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C22500)
#define MX_DATA_EXCEL_OPERATOREXCEL_FINISHSIZEPREFIXEDOPERATOREXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C22520)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int OperatorExcel_TypeDefinitionIndex = 19002;

	class OperatorExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATOREXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::OperatorExcel* GetRootAsOperatorExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::OperatorExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATOREXCEL_GETROOTASOPERATOREXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::OperatorExcel* GetRootAsOperatorExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::OperatorExcel* arg)
		{
			return (return (::MX::Data::Excel::OperatorExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::OperatorExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATOREXCEL_GETROOTASOPERATOREXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATOREXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::OperatorExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::OperatorExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATOREXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATOREXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::String* get_GroupId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATOREXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		Il2CppObject* GetGroupIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATOREXCEL_GETGROUPIDBYTES_OFFSET))(nullptr);
		}

		::FlatData::OperatorCondition* get_OperatorCondition()
		{
			return (return (::FlatData::OperatorCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATOREXCEL_GET_OPERATORCONDITION_OFFSET))(nullptr);
		}

		::System::Int32 get_OutputSequence()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATOREXCEL_GET_OUTPUTSEQUENCE_OFFSET))(nullptr);
		}

		::System::Int32 get_RandomWeight()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATOREXCEL_GET_RANDOMWEIGHT_OFFSET))(nullptr);
		}

		::System::Int32 get_OutputDelay()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATOREXCEL_GET_OUTPUTDELAY_OFFSET))(nullptr);
		}

		::System::Int32 get_Duration()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATOREXCEL_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Int32 get_OperatorOutputPriority()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATOREXCEL_GET_OPERATOROUTPUTPRIORITY_OFFSET))(nullptr);
		}

		::System::String* get_PortraitPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATOREXCEL_GET_PORTRAITPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetPortraitPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATOREXCEL_GETPORTRAITPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_TextLocalizeKey()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATOREXCEL_GET_TEXTLOCALIZEKEY_OFFSET))(nullptr);
		}

		Il2CppObject* GetTextLocalizeKeyBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATOREXCEL_GETTEXTLOCALIZEKEYBYTES_OFFSET))(nullptr);
		}

		::System::UInt32 VoiceId(::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATOREXCEL_VOICEID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_VoiceIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATOREXCEL_GET_VOICEIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetVoiceIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATOREXCEL_GETVOICEIDBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_OperatorWaitQueue()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATOREXCEL_GET_OPERATORWAITQUEUE_OFFSET))(nullptr);
		}

		::FlatData::CharacterVoiceOverridePriority* get_CharacterVoiceOverridePriority()
		{
			return (return (::FlatData::CharacterVoiceOverridePriority*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATOREXCEL_GET_CHARACTERVOICEOVERRIDEPRIORITY_OFFSET))(nullptr);
		}

		Il2CppObject* CreateOperatorExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatData::OperatorCondition* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::VectorOffset* arg, ::System::Boolean arg, ::FlatData::CharacterVoiceOverridePriority* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatData::OperatorCondition*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::VectorOffset*, ::System::Boolean, ::FlatData::CharacterVoiceOverridePriority*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATOREXCEL_CREATEOPERATOREXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartOperatorExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATOREXCEL_STARTOPERATOREXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATOREXCEL_ADDUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATOREXCEL_ADDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOperatorCondition(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::OperatorCondition* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::OperatorCondition*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATOREXCEL_ADDOPERATORCONDITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOutputSequence(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATOREXCEL_ADDOUTPUTSEQUENCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRandomWeight(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATOREXCEL_ADDRANDOMWEIGHT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOutputDelay(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATOREXCEL_ADDOUTPUTDELAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDuration(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATOREXCEL_ADDDURATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOperatorOutputPriority(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATOREXCEL_ADDOPERATOROUTPUTPRIORITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPortraitPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATOREXCEL_ADDPORTRAITPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTextLocalizeKey(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATOREXCEL_ADDTEXTLOCALIZEKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVoiceId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATOREXCEL_ADDVOICEID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateVoiceIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATOREXCEL_CREATEVOICEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartVoiceIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATOREXCEL_STARTVOICEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOperatorWaitQueue(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATOREXCEL_ADDOPERATORWAITQUEUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCharacterVoiceOverridePriority(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::CharacterVoiceOverridePriority* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::CharacterVoiceOverridePriority*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATOREXCEL_ADDCHARACTERVOICEOVERRIDEPRIORITY_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndOperatorExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATOREXCEL_ENDOPERATOREXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishOperatorExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATOREXCEL_FINISHOPERATOREXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedOperatorExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATOREXCEL_FINISHSIZEPREFIXEDOPERATOREXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

