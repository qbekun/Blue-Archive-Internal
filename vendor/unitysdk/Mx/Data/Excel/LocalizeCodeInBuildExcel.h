#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class LocalizeCodeInBuildExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B7D5E0)
#define MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL_GETROOTASLOCALIZECODEINBUILDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B7D5F0)
#define MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL_GETROOTASLOCALIZECODEINBUILDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B7D650)
#define MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B7D6E0)
#define MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B7D6B0)
#define MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1B7D700)
#define MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL_GET_KR_OFFSET UNITYSDK_OFFSET(0x1B7D750)
#define MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL_GETKRBYTES_OFFSET UNITYSDK_OFFSET(0x1B7D790)
#define MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL_GET_JP_OFFSET UNITYSDK_OFFSET(0x1B7D7B0)
#define MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL_GETJPBYTES_OFFSET UNITYSDK_OFFSET(0x1B7D7F0)
#define MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL_GET_TH_OFFSET UNITYSDK_OFFSET(0x1B7D810)
#define MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL_GETTHBYTES_OFFSET UNITYSDK_OFFSET(0x1B7D850)
#define MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL_GET_TW_OFFSET UNITYSDK_OFFSET(0x1B7D870)
#define MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL_GETTWBYTES_OFFSET UNITYSDK_OFFSET(0x1B7D8B0)
#define MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL_GET_EN_OFFSET UNITYSDK_OFFSET(0x1B7D8D0)
#define MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL_GETENBYTES_OFFSET UNITYSDK_OFFSET(0x1B7D910)
#define MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL_CREATELOCALIZECODEINBUILDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B7D930)
#define MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL_STARTLOCALIZECODEINBUILDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B7DBD0)
#define MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL_ADDKEY_OFFSET UNITYSDK_OFFSET(0x1B7DB50)
#define MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL_ADDKR_OFFSET UNITYSDK_OFFSET(0x1B7DB20)
#define MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL_ADDJP_OFFSET UNITYSDK_OFFSET(0x1B7DAF0)
#define MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL_ADDTH_OFFSET UNITYSDK_OFFSET(0x1B7DAC0)
#define MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL_ADDTW_OFFSET UNITYSDK_OFFSET(0x1B7DA90)
#define MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL_ADDEN_OFFSET UNITYSDK_OFFSET(0x1B7DA60)
#define MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL_ENDLOCALIZECODEINBUILDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B7DB80)
#define MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL_FINISHLOCALIZECODEINBUILDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B7DBF0)
#define MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL_FINISHSIZEPREFIXEDLOCALIZECODEINBUILDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B7DC10)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int LocalizeCodeInBuildExcel_TypeDefinitionIndex = 18367;

	class LocalizeCodeInBuildExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::LocalizeCodeInBuildExcel* GetRootAsLocalizeCodeInBuildExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::LocalizeCodeInBuildExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL_GETROOTASLOCALIZECODEINBUILDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::LocalizeCodeInBuildExcel* GetRootAsLocalizeCodeInBuildExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::LocalizeCodeInBuildExcel* arg)
		{
			return (return (::MX::Data::Excel::LocalizeCodeInBuildExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::LocalizeCodeInBuildExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL_GETROOTASLOCALIZECODEINBUILDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::LocalizeCodeInBuildExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::LocalizeCodeInBuildExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 get_Key()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL_GET_KEY_OFFSET))(nullptr);
		}

		::System::String* get_Kr()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL_GET_KR_OFFSET))(nullptr);
		}

		Il2CppObject* GetKrBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL_GETKRBYTES_OFFSET))(nullptr);
		}

		::System::String* get_Jp()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL_GET_JP_OFFSET))(nullptr);
		}

		Il2CppObject* GetJpBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL_GETJPBYTES_OFFSET))(nullptr);
		}

		::System::String* get_Th()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL_GET_TH_OFFSET))(nullptr);
		}

		Il2CppObject* GetThBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL_GETTHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_Tw()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL_GET_TW_OFFSET))(nullptr);
		}

		Il2CppObject* GetTwBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL_GETTWBYTES_OFFSET))(nullptr);
		}

		::System::String* get_En()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL_GET_EN_OFFSET))(nullptr);
		}

		Il2CppObject* GetEnBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL_GETENBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateLocalizeCodeInBuildExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL_CREATELOCALIZECODEINBUILDEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartLocalizeCodeInBuildExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL_STARTLOCALIZECODEINBUILDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddKey(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL_ADDKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddKr(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL_ADDKR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddJp(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL_ADDJP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTh(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL_ADDTH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTw(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL_ADDTW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEn(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL_ADDEN_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndLocalizeCodeInBuildExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL_ENDLOCALIZECODEINBUILDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishLocalizeCodeInBuildExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL_FINISHLOCALIZECODEINBUILDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedLocalizeCodeInBuildExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECODEINBUILDEXCEL_FINISHSIZEPREFIXEDLOCALIZECODEINBUILDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

