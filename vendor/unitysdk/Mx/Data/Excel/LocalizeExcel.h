#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class LocalizeExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_LOCALIZEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B81440)
#define MX_DATA_EXCEL_LOCALIZEEXCEL_GETROOTASLOCALIZEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B81450)
#define MX_DATA_EXCEL_LOCALIZEEXCEL_GETROOTASLOCALIZEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B814B0)
#define MX_DATA_EXCEL_LOCALIZEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B81540)
#define MX_DATA_EXCEL_LOCALIZEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B81510)
#define MX_DATA_EXCEL_LOCALIZEEXCEL_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1B81560)
#define MX_DATA_EXCEL_LOCALIZEEXCEL_GET_KR_OFFSET UNITYSDK_OFFSET(0x1B815B0)
#define MX_DATA_EXCEL_LOCALIZEEXCEL_GETKRBYTES_OFFSET UNITYSDK_OFFSET(0x1B815F0)
#define MX_DATA_EXCEL_LOCALIZEEXCEL_GET_JP_OFFSET UNITYSDK_OFFSET(0x1B81610)
#define MX_DATA_EXCEL_LOCALIZEEXCEL_GETJPBYTES_OFFSET UNITYSDK_OFFSET(0x1B81650)
#define MX_DATA_EXCEL_LOCALIZEEXCEL_GET_TH_OFFSET UNITYSDK_OFFSET(0x1B81670)
#define MX_DATA_EXCEL_LOCALIZEEXCEL_GETTHBYTES_OFFSET UNITYSDK_OFFSET(0x1B816B0)
#define MX_DATA_EXCEL_LOCALIZEEXCEL_GET_TW_OFFSET UNITYSDK_OFFSET(0x1B816D0)
#define MX_DATA_EXCEL_LOCALIZEEXCEL_GETTWBYTES_OFFSET UNITYSDK_OFFSET(0x1B81710)
#define MX_DATA_EXCEL_LOCALIZEEXCEL_GET_EN_OFFSET UNITYSDK_OFFSET(0x1B81730)
#define MX_DATA_EXCEL_LOCALIZEEXCEL_GETENBYTES_OFFSET UNITYSDK_OFFSET(0x1B81770)
#define MX_DATA_EXCEL_LOCALIZEEXCEL_CREATELOCALIZEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B81790)
#define MX_DATA_EXCEL_LOCALIZEEXCEL_STARTLOCALIZEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B81A30)
#define MX_DATA_EXCEL_LOCALIZEEXCEL_ADDKEY_OFFSET UNITYSDK_OFFSET(0x1B819B0)
#define MX_DATA_EXCEL_LOCALIZEEXCEL_ADDKR_OFFSET UNITYSDK_OFFSET(0x1B81980)
#define MX_DATA_EXCEL_LOCALIZEEXCEL_ADDJP_OFFSET UNITYSDK_OFFSET(0x1B81950)
#define MX_DATA_EXCEL_LOCALIZEEXCEL_ADDTH_OFFSET UNITYSDK_OFFSET(0x1B81920)
#define MX_DATA_EXCEL_LOCALIZEEXCEL_ADDTW_OFFSET UNITYSDK_OFFSET(0x1B818F0)
#define MX_DATA_EXCEL_LOCALIZEEXCEL_ADDEN_OFFSET UNITYSDK_OFFSET(0x1B818C0)
#define MX_DATA_EXCEL_LOCALIZEEXCEL_ENDLOCALIZEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B819E0)
#define MX_DATA_EXCEL_LOCALIZEEXCEL_FINISHLOCALIZEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B81A50)
#define MX_DATA_EXCEL_LOCALIZEEXCEL_FINISHSIZEPREFIXEDLOCALIZEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B81A70)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int LocalizeExcel_TypeDefinitionIndex = 18388;

	class LocalizeExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::LocalizeExcel* GetRootAsLocalizeExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::LocalizeExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEEXCEL_GETROOTASLOCALIZEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::LocalizeExcel* GetRootAsLocalizeExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::LocalizeExcel* arg)
		{
			return (return (::MX::Data::Excel::LocalizeExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::LocalizeExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEEXCEL_GETROOTASLOCALIZEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::LocalizeExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::LocalizeExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 get_Key()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEEXCEL_GET_KEY_OFFSET))(nullptr);
		}

		::System::String* get_Kr()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEEXCEL_GET_KR_OFFSET))(nullptr);
		}

		Il2CppObject* GetKrBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEEXCEL_GETKRBYTES_OFFSET))(nullptr);
		}

		::System::String* get_Jp()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEEXCEL_GET_JP_OFFSET))(nullptr);
		}

		Il2CppObject* GetJpBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEEXCEL_GETJPBYTES_OFFSET))(nullptr);
		}

		::System::String* get_Th()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEEXCEL_GET_TH_OFFSET))(nullptr);
		}

		Il2CppObject* GetThBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEEXCEL_GETTHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_Tw()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEEXCEL_GET_TW_OFFSET))(nullptr);
		}

		Il2CppObject* GetTwBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEEXCEL_GETTWBYTES_OFFSET))(nullptr);
		}

		::System::String* get_En()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEEXCEL_GET_EN_OFFSET))(nullptr);
		}

		Il2CppObject* GetEnBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEEXCEL_GETENBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateLocalizeExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEEXCEL_CREATELOCALIZEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartLocalizeExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEEXCEL_STARTLOCALIZEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddKey(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEEXCEL_ADDKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddKr(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEEXCEL_ADDKR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddJp(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEEXCEL_ADDJP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTh(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEEXCEL_ADDTH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTw(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEEXCEL_ADDTW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEn(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEEXCEL_ADDEN_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndLocalizeExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEEXCEL_ENDLOCALIZEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishLocalizeExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEEXCEL_FINISHLOCALIZEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedLocalizeExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEEXCEL_FINISHSIZEPREFIXEDLOCALIZEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

