#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class TutorialExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_TUTORIALEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1CAA550)
#define MX_DATA_EXCEL_TUTORIALEXCEL_GETROOTASTUTORIALEXCEL_OFFSET UNITYSDK_OFFSET(0x1CAA560)
#define MX_DATA_EXCEL_TUTORIALEXCEL_GETROOTASTUTORIALEXCEL_OFFSET UNITYSDK_OFFSET(0x1CAA5C0)
#define MX_DATA_EXCEL_TUTORIALEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1CAA650)
#define MX_DATA_EXCEL_TUTORIALEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1CAA620)
#define MX_DATA_EXCEL_TUTORIALEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1CAA670)
#define MX_DATA_EXCEL_TUTORIALEXCEL_GET_COMPLETIONREPORTEVENTNAME_OFFSET UNITYSDK_OFFSET(0x1CAA6C0)
#define MX_DATA_EXCEL_TUTORIALEXCEL_GETCOMPLETIONREPORTEVENTNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1CAA700)
#define MX_DATA_EXCEL_TUTORIALEXCEL_GET_COMPULSORYTUTORIAL_OFFSET UNITYSDK_OFFSET(0x1CAA720)
#define MX_DATA_EXCEL_TUTORIALEXCEL_GET_DESCRIPTIONTUTORIAL_OFFSET UNITYSDK_OFFSET(0x1CAA770)
#define MX_DATA_EXCEL_TUTORIALEXCEL_GET_TUTORIALSTAGEID_OFFSET UNITYSDK_OFFSET(0x1CAA7C0)
#define MX_DATA_EXCEL_TUTORIALEXCEL_UINAME_OFFSET UNITYSDK_OFFSET(0x1CAA810)
#define MX_DATA_EXCEL_TUTORIALEXCEL_GET_UINAMELENGTH_OFFSET UNITYSDK_OFFSET(0x1CAA860)
#define MX_DATA_EXCEL_TUTORIALEXCEL_TUTORIALPARENTNAME_OFFSET UNITYSDK_OFFSET(0x1CAA8A0)
#define MX_DATA_EXCEL_TUTORIALEXCEL_GET_TUTORIALPARENTNAMELENGTH_OFFSET UNITYSDK_OFFSET(0x1CAA8F0)
#define MX_DATA_EXCEL_TUTORIALEXCEL_CREATETUTORIALEXCEL_OFFSET UNITYSDK_OFFSET(0x1CAA930)
#define MX_DATA_EXCEL_TUTORIALEXCEL_STARTTUTORIALEXCEL_OFFSET UNITYSDK_OFFSET(0x1CAAC20)
#define MX_DATA_EXCEL_TUTORIALEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1CAAAB0)
#define MX_DATA_EXCEL_TUTORIALEXCEL_ADDCOMPLETIONREPORTEVENTNAME_OFFSET UNITYSDK_OFFSET(0x1CAAB40)
#define MX_DATA_EXCEL_TUTORIALEXCEL_ADDCOMPULSORYTUTORIAL_OFFSET UNITYSDK_OFFSET(0x1CAABA0)
#define MX_DATA_EXCEL_TUTORIALEXCEL_ADDDESCRIPTIONTUTORIAL_OFFSET UNITYSDK_OFFSET(0x1CAAB70)
#define MX_DATA_EXCEL_TUTORIALEXCEL_ADDTUTORIALSTAGEID_OFFSET UNITYSDK_OFFSET(0x1CAAA80)
#define MX_DATA_EXCEL_TUTORIALEXCEL_ADDUINAME_OFFSET UNITYSDK_OFFSET(0x1CAAB10)
#define MX_DATA_EXCEL_TUTORIALEXCEL_CREATEUINAMEVECTOR_OFFSET UNITYSDK_OFFSET(0x1CAAC40)
#define MX_DATA_EXCEL_TUTORIALEXCEL_STARTUINAMEVECTOR_OFFSET UNITYSDK_OFFSET(0x1CAACD0)
#define MX_DATA_EXCEL_TUTORIALEXCEL_ADDTUTORIALPARENTNAME_OFFSET UNITYSDK_OFFSET(0x1CAAAE0)
#define MX_DATA_EXCEL_TUTORIALEXCEL_CREATETUTORIALPARENTNAMEVECTOR_OFFSET UNITYSDK_OFFSET(0x1CAAD10)
#define MX_DATA_EXCEL_TUTORIALEXCEL_STARTTUTORIALPARENTNAMEVECTOR_OFFSET UNITYSDK_OFFSET(0x1CAADA0)
#define MX_DATA_EXCEL_TUTORIALEXCEL_ENDTUTORIALEXCEL_OFFSET UNITYSDK_OFFSET(0x1CAABD0)
#define MX_DATA_EXCEL_TUTORIALEXCEL_FINISHTUTORIALEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CAADE0)
#define MX_DATA_EXCEL_TUTORIALEXCEL_FINISHSIZEPREFIXEDTUTORIALEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CAAE00)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int TutorialExcel_TypeDefinitionIndex = 19645;

	class TutorialExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::TutorialExcel* GetRootAsTutorialExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::TutorialExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALEXCEL_GETROOTASTUTORIALEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::TutorialExcel* GetRootAsTutorialExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::TutorialExcel* arg)
		{
			return (return (::MX::Data::Excel::TutorialExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::TutorialExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALEXCEL_GETROOTASTUTORIALEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::TutorialExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::TutorialExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_ID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::String* get_CompletionReportEventName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALEXCEL_GET_COMPLETIONREPORTEVENTNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetCompletionReportEventNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALEXCEL_GETCOMPLETIONREPORTEVENTNAMEBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_CompulsoryTutorial()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALEXCEL_GET_COMPULSORYTUTORIAL_OFFSET))(nullptr);
		}

		::System::Boolean get_DescriptionTutorial()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALEXCEL_GET_DESCRIPTIONTUTORIAL_OFFSET))(nullptr);
		}

		::System::Int64 get_TutorialStageId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALEXCEL_GET_TUTORIALSTAGEID_OFFSET))(nullptr);
		}

		::System::String* UIName(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALEXCEL_UINAME_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_UINameLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALEXCEL_GET_UINAMELENGTH_OFFSET))(nullptr);
		}

		::System::String* TutorialParentName(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALEXCEL_TUTORIALPARENTNAME_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_TutorialParentNameLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALEXCEL_GET_TUTORIALPARENTNAMELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateTutorialExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::System::Boolean, ::System::Boolean, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALEXCEL_CREATETUTORIALEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartTutorialExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALEXCEL_STARTTUTORIALEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddID(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCompletionReportEventName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALEXCEL_ADDCOMPLETIONREPORTEVENTNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCompulsoryTutorial(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALEXCEL_ADDCOMPULSORYTUTORIAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDescriptionTutorial(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALEXCEL_ADDDESCRIPTIONTUTORIAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTutorialStageId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALEXCEL_ADDTUTORIALSTAGEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUIName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALEXCEL_ADDUINAME_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateUINameVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALEXCEL_CREATEUINAMEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartUINameVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALEXCEL_STARTUINAMEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTutorialParentName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALEXCEL_ADDTUTORIALPARENTNAME_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateTutorialParentNameVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALEXCEL_CREATETUTORIALPARENTNAMEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartTutorialParentNameVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALEXCEL_STARTTUTORIALPARENTNAMEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndTutorialExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALEXCEL_ENDTUTORIALEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishTutorialExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALEXCEL_FINISHTUTORIALEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedTutorialExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALEXCEL_FINISHSIZEPREFIXEDTUTORIALEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

