#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentSpineDialogOffsetExcel; }
namespace FlatData { class EventContentType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B03610)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCEL_GETROOTASEVENTCONTENTSPINEDIALOGOFFSETEXCEL_OFFSET UNITYSDK_OFFSET(0x1B03620)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCEL_GETROOTASEVENTCONTENTSPINEDIALOGOFFSETEXCEL_OFFSET UNITYSDK_OFFSET(0x1B03680)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B03710)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B036E0)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B03730)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCEL_GET_EVENTCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1B03780)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCEL_GET_COSTUMEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1B037D0)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCEL_GET_SPINEOFFSETX_OFFSET UNITYSDK_OFFSET(0x1B03820)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCEL_GET_SPINEOFFSETY_OFFSET UNITYSDK_OFFSET(0x1B03870)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCEL_GET_DIALOGOFFSETX_OFFSET UNITYSDK_OFFSET(0x1B038C0)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCEL_GET_DIALOGOFFSETY_OFFSET UNITYSDK_OFFSET(0x1B03910)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCEL_CREATEEVENTCONTENTSPINEDIALOGOFFSETEXCEL_OFFSET UNITYSDK_OFFSET(0x1B03960)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCEL_STARTEVENTCONTENTSPINEDIALOGOFFSETEXCEL_OFFSET UNITYSDK_OFFSET(0x1B03C80)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B03B10)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCEL_ADDEVENTCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1B03C00)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCEL_ADDCOSTUMEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1B03AE0)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCEL_ADDSPINEOFFSETX_OFFSET UNITYSDK_OFFSET(0x1B03BD0)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCEL_ADDSPINEOFFSETY_OFFSET UNITYSDK_OFFSET(0x1B03BA0)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCEL_ADDDIALOGOFFSETX_OFFSET UNITYSDK_OFFSET(0x1B03B70)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCEL_ADDDIALOGOFFSETY_OFFSET UNITYSDK_OFFSET(0x1B03B40)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCEL_ENDEVENTCONTENTSPINEDIALOGOFFSETEXCEL_OFFSET UNITYSDK_OFFSET(0x1B03C30)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCEL_FINISHEVENTCONTENTSPINEDIALOGOFFSETEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B03CA0)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTSPINEDIALOGOFFSETEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B03CC0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentSpineDialogOffsetExcel_TypeDefinitionIndex = 17850;

	class EventContentSpineDialogOffsetExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentSpineDialogOffsetExcel* GetRootAsEventContentSpineDialogOffsetExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentSpineDialogOffsetExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCEL_GETROOTASEVENTCONTENTSPINEDIALOGOFFSETEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentSpineDialogOffsetExcel* GetRootAsEventContentSpineDialogOffsetExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentSpineDialogOffsetExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentSpineDialogOffsetExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentSpineDialogOffsetExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCEL_GETROOTASEVENTCONTENTSPINEDIALOGOFFSETEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentSpineDialogOffsetExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentSpineDialogOffsetExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::FlatData::EventContentType* get_EventContentType()
		{
			return (return (::FlatData::EventContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCEL_GET_EVENTCONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_CostumeUniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCEL_GET_COSTUMEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Single get_SpineOffsetX()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCEL_GET_SPINEOFFSETX_OFFSET))(nullptr);
		}

		::System::Single get_SpineOffsetY()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCEL_GET_SPINEOFFSETY_OFFSET))(nullptr);
		}

		::System::Single get_DialogOffsetX()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCEL_GET_DIALOGOFFSETX_OFFSET))(nullptr);
		}

		::System::Single get_DialogOffsetY()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCEL_GET_DIALOGOFFSETY_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentSpineDialogOffsetExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::EventContentType* arg, ::System::Int64 arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::EventContentType*, ::System::Int64, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCEL_CREATEEVENTCONTENTSPINEDIALOGOFFSETEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentSpineDialogOffsetExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCEL_STARTEVENTCONTENTSPINEDIALOGOFFSETEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventContentType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EventContentType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EventContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCEL_ADDEVENTCONTENTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCostumeUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCEL_ADDCOSTUMEUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSpineOffsetX(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCEL_ADDSPINEOFFSETX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSpineOffsetY(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCEL_ADDSPINEOFFSETY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDialogOffsetX(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCEL_ADDDIALOGOFFSETX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDialogOffsetY(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCEL_ADDDIALOGOFFSETY_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentSpineDialogOffsetExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCEL_ENDEVENTCONTENTSPINEDIALOGOFFSETEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentSpineDialogOffsetExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCEL_FINISHEVENTCONTENTSPINEDIALOGOFFSETEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentSpineDialogOffsetExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTSPINEDIALOGOFFSETEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

