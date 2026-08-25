#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class InformationStrategyObjectExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B4FC00)
#define MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTEXCEL_GETROOTASINFORMATIONSTRATEGYOBJECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1B4FC10)
#define MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTEXCEL_GETROOTASINFORMATIONSTRATEGYOBJECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1B4FC70)
#define MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B4FD00)
#define MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B4FCD0)
#define MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B4FD20)
#define MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTEXCEL_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0x1B4FD70)
#define MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTEXCEL_GET_PAGENAME_OFFSET UNITYSDK_OFFSET(0x1B4FDC0)
#define MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTEXCEL_GETPAGENAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1B4FE00)
#define MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTEXCEL_GET_LOCALIZECODEID_OFFSET UNITYSDK_OFFSET(0x1B4FE20)
#define MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTEXCEL_GETLOCALIZECODEIDBYTES_OFFSET UNITYSDK_OFFSET(0x1B4FE60)
#define MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTEXCEL_CREATEINFORMATIONSTRATEGYOBJECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1B4FE80)
#define MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTEXCEL_STARTINFORMATIONSTRATEGYOBJECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1B50070)
#define MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1B4FF90)
#define MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTEXCEL_ADDSTAGEID_OFFSET UNITYSDK_OFFSET(0x1B4FF60)
#define MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTEXCEL_ADDPAGENAME_OFFSET UNITYSDK_OFFSET(0x1B4FFF0)
#define MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTEXCEL_ADDLOCALIZECODEID_OFFSET UNITYSDK_OFFSET(0x1B4FFC0)
#define MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTEXCEL_ENDINFORMATIONSTRATEGYOBJECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1B50020)
#define MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTEXCEL_FINISHINFORMATIONSTRATEGYOBJECTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B50090)
#define MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTEXCEL_FINISHSIZEPREFIXEDINFORMATIONSTRATEGYOBJECTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B500B0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int InformationStrategyObjectExcel_TypeDefinitionIndex = 18191;

	class InformationStrategyObjectExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::InformationStrategyObjectExcel* GetRootAsInformationStrategyObjectExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::InformationStrategyObjectExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTEXCEL_GETROOTASINFORMATIONSTRATEGYOBJECTEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::InformationStrategyObjectExcel* GetRootAsInformationStrategyObjectExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::InformationStrategyObjectExcel* arg)
		{
			return (return (::MX::Data::Excel::InformationStrategyObjectExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::InformationStrategyObjectExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTEXCEL_GETROOTASINFORMATIONSTRATEGYOBJECTEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::InformationStrategyObjectExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::InformationStrategyObjectExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_StageId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTEXCEL_GET_STAGEID_OFFSET))(nullptr);
		}

		::System::String* get_PageName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTEXCEL_GET_PAGENAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetPageNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTEXCEL_GETPAGENAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeCodeId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTEXCEL_GET_LOCALIZECODEID_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeCodeIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTEXCEL_GETLOCALIZECODEIDBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateInformationStrategyObjectExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTEXCEL_CREATEINFORMATIONSTRATEGYOBJECTEXCEL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartInformationStrategyObjectExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTEXCEL_STARTINFORMATIONSTRATEGYOBJECTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTEXCEL_ADDSTAGEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPageName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTEXCEL_ADDPAGENAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeCodeId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTEXCEL_ADDLOCALIZECODEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndInformationStrategyObjectExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTEXCEL_ENDINFORMATIONSTRATEGYOBJECTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishInformationStrategyObjectExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTEXCEL_FINISHINFORMATIONSTRATEGYOBJECTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedInformationStrategyObjectExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONSTRATEGYOBJECTEXCEL_FINISHSIZEPREFIXEDINFORMATIONSTRATEGYOBJECTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

