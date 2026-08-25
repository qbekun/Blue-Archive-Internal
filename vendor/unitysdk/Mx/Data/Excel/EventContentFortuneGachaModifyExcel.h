#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentFortuneGachaModifyExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1AE16B0)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL_GETROOTASEVENTCONTENTFORTUNEGACHAMODIFYEXCEL_OFFSET UNITYSDK_OFFSET(0x1AE16C0)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL_GETROOTASEVENTCONTENTFORTUNEGACHAMODIFYEXCEL_OFFSET UNITYSDK_OFFSET(0x1AE1720)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1AE17B0)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1AE1780)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AE17D0)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL_GET_TARGETGRADE_OFFSET UNITYSDK_OFFSET(0x1AE1820)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL_GET_PROBMODIFYSTARTCOUNT_OFFSET UNITYSDK_OFFSET(0x1AE1870)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL_GET_USEPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1AE18C0)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL_GETUSEPREFABNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1AE1900)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL_GET_BUCKETIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1AE1920)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL_GETBUCKETIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1AE1960)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL_GET_SHOPBGIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1AE1980)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL_GETSHOPBGIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1AE19C0)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL_GET_TITLELOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0x1AE19E0)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL_GETTITLELOCALIZEKEYBYTES_OFFSET UNITYSDK_OFFSET(0x1AE1A20)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL_CREATEEVENTCONTENTFORTUNEGACHAMODIFYEXCEL_OFFSET UNITYSDK_OFFSET(0x1AE1A40)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL_STARTEVENTCONTENTFORTUNEGACHAMODIFYEXCEL_OFFSET UNITYSDK_OFFSET(0x1AE1D30)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AE1CB0)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL_ADDTARGETGRADE_OFFSET UNITYSDK_OFFSET(0x1AE1C80)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL_ADDPROBMODIFYSTARTCOUNT_OFFSET UNITYSDK_OFFSET(0x1AE1C50)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL_ADDUSEPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1AE1C20)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL_ADDBUCKETIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1AE1BF0)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL_ADDSHOPBGIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1AE1BC0)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL_ADDTITLELOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0x1AE1B90)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL_ENDEVENTCONTENTFORTUNEGACHAMODIFYEXCEL_OFFSET UNITYSDK_OFFSET(0x1AE1CE0)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL_FINISHEVENTCONTENTFORTUNEGACHAMODIFYEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AE1D50)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTFORTUNEGACHAMODIFYEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AE1D70)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentFortuneGachaModifyExcel_TypeDefinitionIndex = 17706;

	class EventContentFortuneGachaModifyExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentFortuneGachaModifyExcel* GetRootAsEventContentFortuneGachaModifyExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentFortuneGachaModifyExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL_GETROOTASEVENTCONTENTFORTUNEGACHAMODIFYEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentFortuneGachaModifyExcel* GetRootAsEventContentFortuneGachaModifyExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentFortuneGachaModifyExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentFortuneGachaModifyExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentFortuneGachaModifyExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL_GETROOTASEVENTCONTENTFORTUNEGACHAMODIFYEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentFortuneGachaModifyExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentFortuneGachaModifyExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_EventContentId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int32 get_TargetGrade()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL_GET_TARGETGRADE_OFFSET))(nullptr);
		}

		::System::Int32 get_ProbModifyStartCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL_GET_PROBMODIFYSTARTCOUNT_OFFSET))(nullptr);
		}

		::System::String* get_UsePrefabName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL_GET_USEPREFABNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetUsePrefabNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL_GETUSEPREFABNAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_BucketImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL_GET_BUCKETIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetBucketImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL_GETBUCKETIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ShopBgImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL_GET_SHOPBGIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetShopBgImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL_GETSHOPBGIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_TitleLocalizeKey()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL_GET_TITLELOCALIZEKEY_OFFSET))(nullptr);
		}

		Il2CppObject* GetTitleLocalizeKeyBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL_GETTITLELOCALIZEKEYBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentFortuneGachaModifyExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::System::Int32, ::System::Int32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL_CREATEEVENTCONTENTFORTUNEGACHAMODIFYEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentFortuneGachaModifyExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL_STARTEVENTCONTENTFORTUNEGACHAMODIFYEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTargetGrade(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL_ADDTARGETGRADE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProbModifyStartCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL_ADDPROBMODIFYSTARTCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUsePrefabName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL_ADDUSEPREFABNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBucketImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL_ADDBUCKETIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShopBgImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL_ADDSHOPBGIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTitleLocalizeKey(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL_ADDTITLELOCALIZEKEY_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentFortuneGachaModifyExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL_ENDEVENTCONTENTFORTUNEGACHAMODIFYEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentFortuneGachaModifyExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL_FINISHEVENTCONTENTFORTUNEGACHAMODIFYEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentFortuneGachaModifyExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTFORTUNEGACHAMODIFYEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

