#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MiniGameDreamScheduleExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1BB8FF0)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_GETROOTASMINIGAMEDREAMSCHEDULEEXCEL_OFFSET UNITYSDK_OFFSET(0x1BB9000)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_GETROOTASMINIGAMEDREAMSCHEDULEEXCEL_OFFSET UNITYSDK_OFFSET(0x1BB9060)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1BB90F0)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1BB90C0)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BB9110)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_GET_DREAMMAKERSCHEDULEGROUPID_OFFSET UNITYSDK_OFFSET(0x1BB9160)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1BB91B0)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_GET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1BB9200)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1BB9250)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_GETICONPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1BB9290)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_GET_LOADINGRESOURCE01_OFFSET UNITYSDK_OFFSET(0x1BB92B0)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_GETLOADINGRESOURCE01BYTES_OFFSET UNITYSDK_OFFSET(0x1BB92F0)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_GET_LOADINGRESOURCE02_OFFSET UNITYSDK_OFFSET(0x1BB9310)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_GETLOADINGRESOURCE02BYTES_OFFSET UNITYSDK_OFFSET(0x1BB9350)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_GET_ANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0x1BB9370)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_GETANIMATIONNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1BB93B0)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_CREATEMINIGAMEDREAMSCHEDULEEXCEL_OFFSET UNITYSDK_OFFSET(0x1BB93D0)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_STARTMINIGAMEDREAMSCHEDULEEXCEL_OFFSET UNITYSDK_OFFSET(0x1BB9720)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BB95B0)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_ADDDREAMMAKERSCHEDULEGROUPID_OFFSET UNITYSDK_OFFSET(0x1BB9580)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_ADDDISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1BB9550)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_ADDLOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1BB96A0)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_ADDICONPATH_OFFSET UNITYSDK_OFFSET(0x1BB9670)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_ADDLOADINGRESOURCE01_OFFSET UNITYSDK_OFFSET(0x1BB9640)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_ADDLOADINGRESOURCE02_OFFSET UNITYSDK_OFFSET(0x1BB9610)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_ADDANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0x1BB95E0)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_ENDMINIGAMEDREAMSCHEDULEEXCEL_OFFSET UNITYSDK_OFFSET(0x1BB96D0)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_FINISHMINIGAMEDREAMSCHEDULEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BB9740)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_FINISHSIZEPREFIXEDMINIGAMEDREAMSCHEDULEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BB9760)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameDreamScheduleExcel_TypeDefinitionIndex = 18661;

	class MiniGameDreamScheduleExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MiniGameDreamScheduleExcel* GetRootAsMiniGameDreamScheduleExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameDreamScheduleExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_GETROOTASMINIGAMEDREAMSCHEDULEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MiniGameDreamScheduleExcel* GetRootAsMiniGameDreamScheduleExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MiniGameDreamScheduleExcel* arg)
		{
			return (return (::MX::Data::Excel::MiniGameDreamScheduleExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MiniGameDreamScheduleExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_GETROOTASMINIGAMEDREAMSCHEDULEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MiniGameDreamScheduleExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameDreamScheduleExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_DreamMakerScheduleGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_GET_DREAMMAKERSCHEDULEGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_DisplayOrder()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_GET_DISPLAYORDER_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_GET_LOCALIZEETCID_OFFSET))(nullptr);
		}

		::System::String* get_IconPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_GET_ICONPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetIconPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_GETICONPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_LoadingResource01()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_GET_LOADINGRESOURCE01_OFFSET))(nullptr);
		}

		Il2CppObject* GetLoadingResource01Bytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_GETLOADINGRESOURCE01BYTES_OFFSET))(nullptr);
		}

		::System::String* get_LoadingResource02()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_GET_LOADINGRESOURCE02_OFFSET))(nullptr);
		}

		Il2CppObject* GetLoadingResource02Bytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_GETLOADINGRESOURCE02BYTES_OFFSET))(nullptr);
		}

		::System::String* get_AnimationName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_GET_ANIMATIONNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetAnimationNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_GETANIMATIONNAMEBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMiniGameDreamScheduleExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::UInt32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::UInt32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_CREATEMINIGAMEDREAMSCHEDULEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMiniGameDreamScheduleExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_STARTMINIGAMEDREAMSCHEDULEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDreamMakerScheduleGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_ADDDREAMMAKERSCHEDULEGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisplayOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_ADDDISPLAYORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeEtcId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_ADDLOCALIZEETCID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIconPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_ADDICONPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLoadingResource01(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_ADDLOADINGRESOURCE01_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLoadingResource02(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_ADDLOADINGRESOURCE02_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAnimationName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_ADDANIMATIONNAME_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMiniGameDreamScheduleExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_ENDMINIGAMEDREAMSCHEDULEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMiniGameDreamScheduleExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_FINISHMINIGAMEDREAMSCHEDULEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMiniGameDreamScheduleExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCEL_FINISHSIZEPREFIXEDMINIGAMEDREAMSCHEDULEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

