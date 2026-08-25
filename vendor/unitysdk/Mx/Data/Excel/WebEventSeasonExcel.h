#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class WebEventSeasonExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1CB8D50)
#define MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_GETROOTASWEBEVENTSEASONEXCEL_OFFSET UNITYSDK_OFFSET(0x1CB8D60)
#define MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_GETROOTASWEBEVENTSEASONEXCEL_OFFSET UNITYSDK_OFFSET(0x1CB8DC0)
#define MX_DATA_EXCEL_WEBEVENTSEASONEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1CB8E50)
#define MX_DATA_EXCEL_WEBEVENTSEASONEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1CB8E20)
#define MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1CB8E70)
#define MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1CB8EC0)
#define MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_GET_ICONORDER_OFFSET UNITYSDK_OFFSET(0x1CB8F10)
#define MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_WEBEVENTID_OFFSET UNITYSDK_OFFSET(0x1CB8F60)
#define MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_GET_WEBEVENTIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1CB8FC0)
#define MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_GETWEBEVENTIDBYTES_OFFSET UNITYSDK_OFFSET(0x1CB9000)
#define MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_GET_ISFULL_OFFSET UNITYSDK_OFFSET(0x1CB9020)
#define MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_GET_USEEXTERNALBROWSER_OFFSET UNITYSDK_OFFSET(0x1CB9070)
#define MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_GET_STARTDATE_OFFSET UNITYSDK_OFFSET(0x1CB90C0)
#define MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_GETSTARTDATEBYTES_OFFSET UNITYSDK_OFFSET(0x1CB9100)
#define MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_GET_ENDDATE_OFFSET UNITYSDK_OFFSET(0x1CB9120)
#define MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_GETENDDATEBYTES_OFFSET UNITYSDK_OFFSET(0x1CB9160)
#define MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_GET_LOBBYBANNERIMAGE_OFFSET UNITYSDK_OFFSET(0x1CB9180)
#define MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_GETLOBBYBANNERIMAGEBYTES_OFFSET UNITYSDK_OFFSET(0x1CB91C0)
#define MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_GET_POPUPTITLELOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0x1CB91E0)
#define MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_GETPOPUPTITLELOCALIZEKEYBYTES_OFFSET UNITYSDK_OFFSET(0x1CB9220)
#define MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_GET_STAGEEVENTURL_OFFSET UNITYSDK_OFFSET(0x1CB9240)
#define MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_GETSTAGEEVENTURLBYTES_OFFSET UNITYSDK_OFFSET(0x1CB9280)
#define MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_GET_LIVEEVENTURL_OFFSET UNITYSDK_OFFSET(0x1CB92A0)
#define MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_GETLIVEEVENTURLBYTES_OFFSET UNITYSDK_OFFSET(0x1CB92E0)
#define MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_CREATEWEBEVENTSEASONEXCEL_OFFSET UNITYSDK_OFFSET(0x1CB9300)
#define MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_STARTWEBEVENTSEASONEXCEL_OFFSET UNITYSDK_OFFSET(0x1CB97B0)
#define MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1CB9550)
#define MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_ADDENABLED_OFFSET UNITYSDK_OFFSET(0x1CB9730)
#define MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_ADDICONORDER_OFFSET UNITYSDK_OFFSET(0x1CB9520)
#define MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_ADDWEBEVENTID_OFFSET UNITYSDK_OFFSET(0x1CB96A0)
#define MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_CREATEWEBEVENTIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1CB97D0)
#define MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_STARTWEBEVENTIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1CB9860)
#define MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_ADDISFULL_OFFSET UNITYSDK_OFFSET(0x1CB9700)
#define MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_ADDUSEEXTERNALBROWSER_OFFSET UNITYSDK_OFFSET(0x1CB96D0)
#define MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_ADDSTARTDATE_OFFSET UNITYSDK_OFFSET(0x1CB9670)
#define MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_ADDENDDATE_OFFSET UNITYSDK_OFFSET(0x1CB9640)
#define MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_ADDLOBBYBANNERIMAGE_OFFSET UNITYSDK_OFFSET(0x1CB9610)
#define MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_ADDPOPUPTITLELOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0x1CB95E0)
#define MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_ADDSTAGEEVENTURL_OFFSET UNITYSDK_OFFSET(0x1CB95B0)
#define MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_ADDLIVEEVENTURL_OFFSET UNITYSDK_OFFSET(0x1CB9580)
#define MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_ENDWEBEVENTSEASONEXCEL_OFFSET UNITYSDK_OFFSET(0x1CB9760)
#define MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_FINISHWEBEVENTSEASONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CB98A0)
#define MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_FINISHSIZEPREFIXEDWEBEVENTSEASONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CB98C0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int WebEventSeasonExcel_TypeDefinitionIndex = 19722;

	class WebEventSeasonExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::WebEventSeasonExcel* GetRootAsWebEventSeasonExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::WebEventSeasonExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_GETROOTASWEBEVENTSEASONEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::WebEventSeasonExcel* GetRootAsWebEventSeasonExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::WebEventSeasonExcel* arg)
		{
			return (return (::MX::Data::Excel::WebEventSeasonExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::WebEventSeasonExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_GETROOTASWEBEVENTSEASONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEBEVENTSEASONEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::WebEventSeasonExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::WebEventSeasonExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEBEVENTSEASONEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Boolean get_Enabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_GET_ENABLED_OFFSET))(nullptr);
		}

		::System::Int64 get_IconOrder()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_GET_ICONORDER_OFFSET))(nullptr);
		}

		::System::Int64 WebEventId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_WEBEVENTID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_WebEventIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_GET_WEBEVENTIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetWebEventIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_GETWEBEVENTIDBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_IsFull()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_GET_ISFULL_OFFSET))(nullptr);
		}

		::System::Boolean get_UseExternalBrowser()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_GET_USEEXTERNALBROWSER_OFFSET))(nullptr);
		}

		::System::String* get_StartDate()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_GET_STARTDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetStartDateBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_GETSTARTDATEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_EndDate()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_GET_ENDDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetEndDateBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_GETENDDATEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_LobbyBannerImage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_GET_LOBBYBANNERIMAGE_OFFSET))(nullptr);
		}

		Il2CppObject* GetLobbyBannerImageBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_GETLOBBYBANNERIMAGEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_PopupTitleLocalizeKey()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_GET_POPUPTITLELOCALIZEKEY_OFFSET))(nullptr);
		}

		Il2CppObject* GetPopupTitleLocalizeKeyBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_GETPOPUPTITLELOCALIZEKEYBYTES_OFFSET))(nullptr);
		}

		::System::String* get_StageEventUrl()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_GET_STAGEEVENTURL_OFFSET))(nullptr);
		}

		Il2CppObject* GetStageEventUrlBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_GETSTAGEEVENTURLBYTES_OFFSET))(nullptr);
		}

		::System::String* get_LiveEventUrl()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_GET_LIVEEVENTURL_OFFSET))(nullptr);
		}

		Il2CppObject* GetLiveEventUrlBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_GETLIVEEVENTURLBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateWebEventSeasonExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Boolean arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::System::Boolean arg, ::System::Boolean arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Boolean, ::System::Int64, ::FlatBuffers::VectorOffset*, ::System::Boolean, ::System::Boolean, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_CREATEWEBEVENTSEASONEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartWebEventSeasonExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_STARTWEBEVENTSEASONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnabled(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_ADDENABLED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIconOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_ADDICONORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddWebEventId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_ADDWEBEVENTID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateWebEventIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_CREATEWEBEVENTIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartWebEventIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_STARTWEBEVENTIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsFull(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_ADDISFULL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUseExternalBrowser(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_ADDUSEEXTERNALBROWSER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStartDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_ADDSTARTDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEndDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_ADDENDDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLobbyBannerImage(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_ADDLOBBYBANNERIMAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPopupTitleLocalizeKey(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_ADDPOPUPTITLELOCALIZEKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageEventUrl(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_ADDSTAGEEVENTURL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLiveEventUrl(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_ADDLIVEEVENTURL_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndWebEventSeasonExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_ENDWEBEVENTSEASONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishWebEventSeasonExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_FINISHWEBEVENTSEASONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedWebEventSeasonExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEBEVENTSEASONEXCEL_FINISHSIZEPREFIXEDWEBEVENTSEASONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

