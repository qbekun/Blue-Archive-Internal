#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentFortuneGachaExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1AE04D0)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAEXCEL_GETROOTASEVENTCONTENTFORTUNEGACHAEXCEL_OFFSET UNITYSDK_OFFSET(0x1AE04E0)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAEXCEL_GETROOTASEVENTCONTENTFORTUNEGACHAEXCEL_OFFSET UNITYSDK_OFFSET(0x1AE0540)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1AE05D0)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1AE05A0)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAEXCEL_GET_FORTUNEGACHAGROUPID_OFFSET UNITYSDK_OFFSET(0x1AE05F0)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAEXCEL_GET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1AE0640)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAEXCEL_GET_NAMEIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1AE0690)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAEXCEL_GETNAMEIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1AE06D0)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAEXCEL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1AE06F0)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAEXCEL_GETICONPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1AE0730)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAEXCEL_CREATEEVENTCONTENTFORTUNEGACHAEXCEL_OFFSET UNITYSDK_OFFSET(0x1AE0750)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAEXCEL_STARTEVENTCONTENTFORTUNEGACHAEXCEL_OFFSET UNITYSDK_OFFSET(0x1AE0940)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAEXCEL_ADDFORTUNEGACHAGROUPID_OFFSET UNITYSDK_OFFSET(0x1AE08C0)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAEXCEL_ADDLOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1AE0890)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAEXCEL_ADDNAMEIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1AE0860)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAEXCEL_ADDICONPATH_OFFSET UNITYSDK_OFFSET(0x1AE0830)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAEXCEL_ENDEVENTCONTENTFORTUNEGACHAEXCEL_OFFSET UNITYSDK_OFFSET(0x1AE08F0)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAEXCEL_FINISHEVENTCONTENTFORTUNEGACHAEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AE0960)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTFORTUNEGACHAEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AE0980)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentFortuneGachaExcel_TypeDefinitionIndex = 17699;

	class EventContentFortuneGachaExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentFortuneGachaExcel* GetRootAsEventContentFortuneGachaExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentFortuneGachaExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAEXCEL_GETROOTASEVENTCONTENTFORTUNEGACHAEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentFortuneGachaExcel* GetRootAsEventContentFortuneGachaExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentFortuneGachaExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentFortuneGachaExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentFortuneGachaExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAEXCEL_GETROOTASEVENTCONTENTFORTUNEGACHAEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentFortuneGachaExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentFortuneGachaExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_FortuneGachaGroupId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAEXCEL_GET_FORTUNEGACHAGROUPID_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAEXCEL_GET_LOCALIZEETCID_OFFSET))(nullptr);
		}

		::System::String* get_NameImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAEXCEL_GET_NAMEIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetNameImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAEXCEL_GETNAMEIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_IconPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAEXCEL_GET_ICONPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetIconPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAEXCEL_GETICONPATHBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentFortuneGachaExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg, ::System::UInt32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::System::UInt32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAEXCEL_CREATEEVENTCONTENTFORTUNEGACHAEXCEL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentFortuneGachaExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAEXCEL_STARTEVENTCONTENTFORTUNEGACHAEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddFortuneGachaGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAEXCEL_ADDFORTUNEGACHAGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeEtcId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAEXCEL_ADDLOCALIZEETCID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNameImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAEXCEL_ADDNAMEIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIconPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAEXCEL_ADDICONPATH_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentFortuneGachaExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAEXCEL_ENDEVENTCONTENTFORTUNEGACHAEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentFortuneGachaExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAEXCEL_FINISHEVENTCONTENTFORTUNEGACHAEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentFortuneGachaExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTFORTUNEGACHAEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

