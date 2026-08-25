#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class LocalizeErrorExcel; }
namespace FlatData { class WebAPIErrorLevel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_LOCALIZEERROREXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B7E950)
#define MX_DATA_EXCEL_LOCALIZEERROREXCEL_GETROOTASLOCALIZEERROREXCEL_OFFSET UNITYSDK_OFFSET(0x1B7E960)
#define MX_DATA_EXCEL_LOCALIZEERROREXCEL_GETROOTASLOCALIZEERROREXCEL_OFFSET UNITYSDK_OFFSET(0x1B7E9C0)
#define MX_DATA_EXCEL_LOCALIZEERROREXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B7EA50)
#define MX_DATA_EXCEL_LOCALIZEERROREXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B7EA20)
#define MX_DATA_EXCEL_LOCALIZEERROREXCEL_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1B7EA70)
#define MX_DATA_EXCEL_LOCALIZEERROREXCEL_GET_ERRORLEVEL_OFFSET UNITYSDK_OFFSET(0x1B7EAC0)
#define MX_DATA_EXCEL_LOCALIZEERROREXCEL_GET_KR_OFFSET UNITYSDK_OFFSET(0x1B7EB10)
#define MX_DATA_EXCEL_LOCALIZEERROREXCEL_GETKRBYTES_OFFSET UNITYSDK_OFFSET(0x1B7EB50)
#define MX_DATA_EXCEL_LOCALIZEERROREXCEL_GET_JP_OFFSET UNITYSDK_OFFSET(0x1B7EB70)
#define MX_DATA_EXCEL_LOCALIZEERROREXCEL_GETJPBYTES_OFFSET UNITYSDK_OFFSET(0x1B7EBB0)
#define MX_DATA_EXCEL_LOCALIZEERROREXCEL_GET_TH_OFFSET UNITYSDK_OFFSET(0x1B7EBD0)
#define MX_DATA_EXCEL_LOCALIZEERROREXCEL_GETTHBYTES_OFFSET UNITYSDK_OFFSET(0x1B7EC10)
#define MX_DATA_EXCEL_LOCALIZEERROREXCEL_GET_TW_OFFSET UNITYSDK_OFFSET(0x1B7EC30)
#define MX_DATA_EXCEL_LOCALIZEERROREXCEL_GETTWBYTES_OFFSET UNITYSDK_OFFSET(0x1B7EC70)
#define MX_DATA_EXCEL_LOCALIZEERROREXCEL_GET_EN_OFFSET UNITYSDK_OFFSET(0x1B7EC90)
#define MX_DATA_EXCEL_LOCALIZEERROREXCEL_GETENBYTES_OFFSET UNITYSDK_OFFSET(0x1B7ECD0)
#define MX_DATA_EXCEL_LOCALIZEERROREXCEL_CREATELOCALIZEERROREXCEL_OFFSET UNITYSDK_OFFSET(0x1B7ECF0)
#define MX_DATA_EXCEL_LOCALIZEERROREXCEL_STARTLOCALIZEERROREXCEL_OFFSET UNITYSDK_OFFSET(0x1B7EFE0)
#define MX_DATA_EXCEL_LOCALIZEERROREXCEL_ADDKEY_OFFSET UNITYSDK_OFFSET(0x1B7EF60)
#define MX_DATA_EXCEL_LOCALIZEERROREXCEL_ADDERRORLEVEL_OFFSET UNITYSDK_OFFSET(0x1B7EF30)
#define MX_DATA_EXCEL_LOCALIZEERROREXCEL_ADDKR_OFFSET UNITYSDK_OFFSET(0x1B7EF00)
#define MX_DATA_EXCEL_LOCALIZEERROREXCEL_ADDJP_OFFSET UNITYSDK_OFFSET(0x1B7EED0)
#define MX_DATA_EXCEL_LOCALIZEERROREXCEL_ADDTH_OFFSET UNITYSDK_OFFSET(0x1B7EEA0)
#define MX_DATA_EXCEL_LOCALIZEERROREXCEL_ADDTW_OFFSET UNITYSDK_OFFSET(0x1B7EE70)
#define MX_DATA_EXCEL_LOCALIZEERROREXCEL_ADDEN_OFFSET UNITYSDK_OFFSET(0x1B7EE40)
#define MX_DATA_EXCEL_LOCALIZEERROREXCEL_ENDLOCALIZEERROREXCEL_OFFSET UNITYSDK_OFFSET(0x1B7EF90)
#define MX_DATA_EXCEL_LOCALIZEERROREXCEL_FINISHLOCALIZEERROREXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B7F000)
#define MX_DATA_EXCEL_LOCALIZEERROREXCEL_FINISHSIZEPREFIXEDLOCALIZEERROREXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B7F020)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int LocalizeErrorExcel_TypeDefinitionIndex = 18374;

	class LocalizeErrorExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEERROREXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::LocalizeErrorExcel* GetRootAsLocalizeErrorExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::LocalizeErrorExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEERROREXCEL_GETROOTASLOCALIZEERROREXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::LocalizeErrorExcel* GetRootAsLocalizeErrorExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::LocalizeErrorExcel* arg)
		{
			return (return (::MX::Data::Excel::LocalizeErrorExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::LocalizeErrorExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEERROREXCEL_GETROOTASLOCALIZEERROREXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEERROREXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::LocalizeErrorExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::LocalizeErrorExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEERROREXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 get_Key()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEERROREXCEL_GET_KEY_OFFSET))(nullptr);
		}

		::FlatData::WebAPIErrorLevel* get_ErrorLevel()
		{
			return (return (::FlatData::WebAPIErrorLevel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEERROREXCEL_GET_ERRORLEVEL_OFFSET))(nullptr);
		}

		::System::String* get_Kr()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEERROREXCEL_GET_KR_OFFSET))(nullptr);
		}

		Il2CppObject* GetKrBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEERROREXCEL_GETKRBYTES_OFFSET))(nullptr);
		}

		::System::String* get_Jp()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEERROREXCEL_GET_JP_OFFSET))(nullptr);
		}

		Il2CppObject* GetJpBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEERROREXCEL_GETJPBYTES_OFFSET))(nullptr);
		}

		::System::String* get_Th()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEERROREXCEL_GET_TH_OFFSET))(nullptr);
		}

		Il2CppObject* GetThBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEERROREXCEL_GETTHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_Tw()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEERROREXCEL_GET_TW_OFFSET))(nullptr);
		}

		Il2CppObject* GetTwBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEERROREXCEL_GETTWBYTES_OFFSET))(nullptr);
		}

		::System::String* get_En()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEERROREXCEL_GET_EN_OFFSET))(nullptr);
		}

		Il2CppObject* GetEnBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEERROREXCEL_GETENBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateLocalizeErrorExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg, ::FlatData::WebAPIErrorLevel* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::FlatData::WebAPIErrorLevel*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEERROREXCEL_CREATELOCALIZEERROREXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartLocalizeErrorExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEERROREXCEL_STARTLOCALIZEERROREXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddKey(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEERROREXCEL_ADDKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddErrorLevel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::WebAPIErrorLevel* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::WebAPIErrorLevel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEERROREXCEL_ADDERRORLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddKr(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEERROREXCEL_ADDKR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddJp(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEERROREXCEL_ADDJP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTh(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEERROREXCEL_ADDTH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTw(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEERROREXCEL_ADDTW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEn(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEERROREXCEL_ADDEN_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndLocalizeErrorExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEERROREXCEL_ENDLOCALIZEERROREXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishLocalizeErrorExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEERROREXCEL_FINISHLOCALIZEERROREXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedLocalizeErrorExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEERROREXCEL_FINISHSIZEPREFIXEDLOCALIZEERROREXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

