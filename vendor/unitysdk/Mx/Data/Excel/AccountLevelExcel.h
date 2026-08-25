#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class AccountLevelExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_ACCOUNTLEVELEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x19CA640)
#define MX_DATA_EXCEL_ACCOUNTLEVELEXCEL_GETROOTASACCOUNTLEVELEXCEL_OFFSET UNITYSDK_OFFSET(0x19CA650)
#define MX_DATA_EXCEL_ACCOUNTLEVELEXCEL_GETROOTASACCOUNTLEVELEXCEL_OFFSET UNITYSDK_OFFSET(0x19CA6B0)
#define MX_DATA_EXCEL_ACCOUNTLEVELEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x19CA740)
#define MX_DATA_EXCEL_ACCOUNTLEVELEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x19CA710)
#define MX_DATA_EXCEL_ACCOUNTLEVELEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x19CA760)
#define MX_DATA_EXCEL_ACCOUNTLEVELEXCEL_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x19CA7B0)
#define MX_DATA_EXCEL_ACCOUNTLEVELEXCEL_GET_EXP_OFFSET UNITYSDK_OFFSET(0x19CA800)
#define MX_DATA_EXCEL_ACCOUNTLEVELEXCEL_GET_NEWBIEEXPRATIO_OFFSET UNITYSDK_OFFSET(0x19CA850)
#define MX_DATA_EXCEL_ACCOUNTLEVELEXCEL_GET_CLOSEINTERVAL_OFFSET UNITYSDK_OFFSET(0x19CA8A0)
#define MX_DATA_EXCEL_ACCOUNTLEVELEXCEL_GET_APAUTOCHARGEMAX_OFFSET UNITYSDK_OFFSET(0x19CA8F0)
#define MX_DATA_EXCEL_ACCOUNTLEVELEXCEL_GET_NEEDREPORTEVENT_OFFSET UNITYSDK_OFFSET(0x19CA940)
#define MX_DATA_EXCEL_ACCOUNTLEVELEXCEL_CREATEACCOUNTLEVELEXCEL_OFFSET UNITYSDK_OFFSET(0x19CA990)
#define MX_DATA_EXCEL_ACCOUNTLEVELEXCEL_STARTACCOUNTLEVELEXCEL_OFFSET UNITYSDK_OFFSET(0x19CAC80)
#define MX_DATA_EXCEL_ACCOUNTLEVELEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x19CAB70)
#define MX_DATA_EXCEL_ACCOUNTLEVELEXCEL_ADDLEVEL_OFFSET UNITYSDK_OFFSET(0x19CAB40)
#define MX_DATA_EXCEL_ACCOUNTLEVELEXCEL_ADDEXP_OFFSET UNITYSDK_OFFSET(0x19CAB10)
#define MX_DATA_EXCEL_ACCOUNTLEVELEXCEL_ADDNEWBIEEXPRATIO_OFFSET UNITYSDK_OFFSET(0x19CABD0)
#define MX_DATA_EXCEL_ACCOUNTLEVELEXCEL_ADDCLOSEINTERVAL_OFFSET UNITYSDK_OFFSET(0x19CABA0)
#define MX_DATA_EXCEL_ACCOUNTLEVELEXCEL_ADDAPAUTOCHARGEMAX_OFFSET UNITYSDK_OFFSET(0x19CAAE0)
#define MX_DATA_EXCEL_ACCOUNTLEVELEXCEL_ADDNEEDREPORTEVENT_OFFSET UNITYSDK_OFFSET(0x19CAC00)
#define MX_DATA_EXCEL_ACCOUNTLEVELEXCEL_ENDACCOUNTLEVELEXCEL_OFFSET UNITYSDK_OFFSET(0x19CAC30)
#define MX_DATA_EXCEL_ACCOUNTLEVELEXCEL_FINISHACCOUNTLEVELEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19CACA0)
#define MX_DATA_EXCEL_ACCOUNTLEVELEXCEL_FINISHSIZEPREFIXEDACCOUNTLEVELEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19CACC0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int AccountLevelExcel_TypeDefinitionIndex = 16613;

	class AccountLevelExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::AccountLevelExcel* GetRootAsAccountLevelExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::AccountLevelExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELEXCEL_GETROOTASACCOUNTLEVELEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::AccountLevelExcel* GetRootAsAccountLevelExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::AccountLevelExcel* arg)
		{
			return (return (::MX::Data::Excel::AccountLevelExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::AccountLevelExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELEXCEL_GETROOTASACCOUNTLEVELEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::AccountLevelExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::AccountLevelExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_Level()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELEXCEL_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Int64 get_Exp()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELEXCEL_GET_EXP_OFFSET))(nullptr);
		}

		::System::Int32 get_NewbieExpRatio()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELEXCEL_GET_NEWBIEEXPRATIO_OFFSET))(nullptr);
		}

		::System::Int32 get_CloseInterval()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELEXCEL_GET_CLOSEINTERVAL_OFFSET))(nullptr);
		}

		::System::Int64 get_APAutoChargeMax()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELEXCEL_GET_APAUTOCHARGEMAX_OFFSET))(nullptr);
		}

		::System::Boolean get_NeedReportEvent()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELEXCEL_GET_NEEDREPORTEVENT_OFFSET))(nullptr);
		}

		Il2CppObject* CreateAccountLevelExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int32, ::System::Int32, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELEXCEL_CREATEACCOUNTLEVELEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartAccountLevelExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELEXCEL_STARTACCOUNTLEVELEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELEXCEL_ADDLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExp(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELEXCEL_ADDEXP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNewbieExpRatio(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELEXCEL_ADDNEWBIEEXPRATIO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCloseInterval(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELEXCEL_ADDCLOSEINTERVAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAPAutoChargeMax(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELEXCEL_ADDAPAUTOCHARGEMAX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNeedReportEvent(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELEXCEL_ADDNEEDREPORTEVENT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndAccountLevelExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELEXCEL_ENDACCOUNTLEVELEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishAccountLevelExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELEXCEL_FINISHACCOUNTLEVELEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedAccountLevelExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELEXCEL_FINISHSIZEPREFIXEDACCOUNTLEVELEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

