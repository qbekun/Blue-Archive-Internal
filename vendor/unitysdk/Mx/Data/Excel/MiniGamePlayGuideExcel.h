#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MiniGamePlayGuideExcel; }
namespace FlatData { class EventContentType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1BC3D70)
#define MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_GETROOTASMINIGAMEPLAYGUIDEEXCEL_OFFSET UNITYSDK_OFFSET(0x1BC3D80)
#define MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_GETROOTASMINIGAMEPLAYGUIDEEXCEL_OFFSET UNITYSDK_OFFSET(0x1BC3DE0)
#define MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1BC3E70)
#define MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1BC3E40)
#define MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1BC3E90)
#define MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BC3EE0)
#define MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_GET_MINIGAMETYPE_OFFSET UNITYSDK_OFFSET(0x1BC3F30)
#define MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_GET_ISPCBUILD_OFFSET UNITYSDK_OFFSET(0x1BC3F80)
#define MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1BC3FD0)
#define MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_GET_GUIDETITLE_OFFSET UNITYSDK_OFFSET(0x1BC4020)
#define MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_GETGUIDETITLEBYTES_OFFSET UNITYSDK_OFFSET(0x1BC4060)
#define MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_GET_GUIDEIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1BC4080)
#define MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_GETGUIDEIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1BC40C0)
#define MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_GET_GUIDETEXT_OFFSET UNITYSDK_OFFSET(0x1BC40E0)
#define MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_GETGUIDETEXTBYTES_OFFSET UNITYSDK_OFFSET(0x1BC4120)
#define MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_CREATEMINIGAMEPLAYGUIDEEXCEL_OFFSET UNITYSDK_OFFSET(0x1BC4140)
#define MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_STARTMINIGAMEPLAYGUIDEEXCEL_OFFSET UNITYSDK_OFFSET(0x1BC4490)
#define MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1BC42F0)
#define MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BC42C0)
#define MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_ADDMINIGAMETYPE_OFFSET UNITYSDK_OFFSET(0x1BC43E0)
#define MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_ADDISPCBUILD_OFFSET UNITYSDK_OFFSET(0x1BC4410)
#define MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_ADDDISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1BC43B0)
#define MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_ADDGUIDETITLE_OFFSET UNITYSDK_OFFSET(0x1BC4380)
#define MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_ADDGUIDEIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1BC4350)
#define MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_ADDGUIDETEXT_OFFSET UNITYSDK_OFFSET(0x1BC4320)
#define MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_ENDMINIGAMEPLAYGUIDEEXCEL_OFFSET UNITYSDK_OFFSET(0x1BC4440)
#define MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_FINISHMINIGAMEPLAYGUIDEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BC44B0)
#define MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_FINISHSIZEPREFIXEDMINIGAMEPLAYGUIDEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BC44D0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGamePlayGuideExcel_TypeDefinitionIndex = 18702;

	class MiniGamePlayGuideExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MiniGamePlayGuideExcel* GetRootAsMiniGamePlayGuideExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGamePlayGuideExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_GETROOTASMINIGAMEPLAYGUIDEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MiniGamePlayGuideExcel* GetRootAsMiniGamePlayGuideExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MiniGamePlayGuideExcel* arg)
		{
			return (return (::MX::Data::Excel::MiniGamePlayGuideExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MiniGamePlayGuideExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_GETROOTASMINIGAMEPLAYGUIDEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MiniGamePlayGuideExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGamePlayGuideExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::FlatData::EventContentType* get_MiniGameType()
		{
			return (return (::FlatData::EventContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_GET_MINIGAMETYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPcBuild()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_GET_ISPCBUILD_OFFSET))(nullptr);
		}

		::System::Int32 get_DisplayOrder()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_GET_DISPLAYORDER_OFFSET))(nullptr);
		}

		::System::String* get_GuideTitle()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_GET_GUIDETITLE_OFFSET))(nullptr);
		}

		Il2CppObject* GetGuideTitleBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_GETGUIDETITLEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_GuideImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_GET_GUIDEIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetGuideImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_GETGUIDEIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_GuideText()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_GET_GUIDETEXT_OFFSET))(nullptr);
		}

		Il2CppObject* GetGuideTextBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_GETGUIDETEXTBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMiniGamePlayGuideExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::EventContentType* arg, ::System::Boolean arg, ::System::Int32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatData::EventContentType*, ::System::Boolean, ::System::Int32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_CREATEMINIGAMEPLAYGUIDEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMiniGamePlayGuideExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_STARTMINIGAMEPLAYGUIDEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMiniGameType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EventContentType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EventContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_ADDMINIGAMETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsPcBuild(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_ADDISPCBUILD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisplayOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_ADDDISPLAYORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGuideTitle(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_ADDGUIDETITLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGuideImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_ADDGUIDEIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGuideText(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_ADDGUIDETEXT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMiniGamePlayGuideExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_ENDMINIGAMEPLAYGUIDEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMiniGamePlayGuideExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_FINISHMINIGAMEPLAYGUIDEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMiniGamePlayGuideExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCEL_FINISHSIZEPREFIXEDMINIGAMEPLAYGUIDEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

