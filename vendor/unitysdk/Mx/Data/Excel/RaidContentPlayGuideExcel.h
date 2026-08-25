#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class RaidContentPlayGuideExcel; }
namespace FlatData { class RaidBossGroupType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C41650)
#define MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL_GETROOTASRAIDCONTENTPLAYGUIDEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C41660)
#define MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL_GETROOTASRAIDCONTENTPLAYGUIDEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C416C0)
#define MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C41750)
#define MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C41720)
#define MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C41770)
#define MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL_GET_RAIDBOSSGROUPTYPE_OFFSET UNITYSDK_OFFSET(0x1C417C0)
#define MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL_GET_ISPCBUILD_OFFSET UNITYSDK_OFFSET(0x1C41810)
#define MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL_GET_IDEXPORT_OFFSET UNITYSDK_OFFSET(0x1C41860)
#define MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1C418B0)
#define MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL_GET_GUIDETITLE_OFFSET UNITYSDK_OFFSET(0x1C41900)
#define MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL_GET_GUIDEIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1C41950)
#define MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL_GETGUIDEIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1C41990)
#define MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL_GET_GUIDETEXT_OFFSET UNITYSDK_OFFSET(0x1C419B0)
#define MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL_CREATERAIDCONTENTPLAYGUIDEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C41A00)
#define MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL_STARTRAIDCONTENTPLAYGUIDEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C41D50)
#define MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1C41B80)
#define MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL_ADDRAIDBOSSGROUPTYPE_OFFSET UNITYSDK_OFFSET(0x1C41C70)
#define MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL_ADDISPCBUILD_OFFSET UNITYSDK_OFFSET(0x1C41CD0)
#define MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL_ADDIDEXPORT_OFFSET UNITYSDK_OFFSET(0x1C41CA0)
#define MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL_ADDDISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1C41C40)
#define MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL_ADDGUIDETITLE_OFFSET UNITYSDK_OFFSET(0x1C41C10)
#define MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL_ADDGUIDEIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1C41BE0)
#define MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL_ADDGUIDETEXT_OFFSET UNITYSDK_OFFSET(0x1C41BB0)
#define MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL_ENDRAIDCONTENTPLAYGUIDEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C41D00)
#define MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL_FINISHRAIDCONTENTPLAYGUIDEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C41D70)
#define MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL_FINISHSIZEPREFIXEDRAIDCONTENTPLAYGUIDEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C41D90)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int RaidContentPlayGuideExcel_TypeDefinitionIndex = 19151;

	class RaidContentPlayGuideExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::RaidContentPlayGuideExcel* GetRootAsRaidContentPlayGuideExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::RaidContentPlayGuideExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL_GETROOTASRAIDCONTENTPLAYGUIDEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::RaidContentPlayGuideExcel* GetRootAsRaidContentPlayGuideExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::RaidContentPlayGuideExcel* arg)
		{
			return (return (::MX::Data::Excel::RaidContentPlayGuideExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::RaidContentPlayGuideExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL_GETROOTASRAIDCONTENTPLAYGUIDEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::RaidContentPlayGuideExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::RaidContentPlayGuideExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::FlatData::RaidBossGroupType* get_RaidBossGroupType()
		{
			return (return (::FlatData::RaidBossGroupType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL_GET_RAIDBOSSGROUPTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPCBuild()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL_GET_ISPCBUILD_OFFSET))(nullptr);
		}

		::System::Boolean get_IdExport()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL_GET_IDEXPORT_OFFSET))(nullptr);
		}

		::System::Int32 get_DisplayOrder()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL_GET_DISPLAYORDER_OFFSET))(nullptr);
		}

		::System::UInt32 get_GuideTitle()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL_GET_GUIDETITLE_OFFSET))(nullptr);
		}

		::System::String* get_GuideImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL_GET_GUIDEIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetGuideImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL_GETGUIDEIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		::System::UInt32 get_GuideText()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL_GET_GUIDETEXT_OFFSET))(nullptr);
		}

		Il2CppObject* CreateRaidContentPlayGuideExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::RaidBossGroupType* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Int32 arg, ::System::UInt32 arg, ::FlatBuffers::StringOffset* arg, ::System::UInt32 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::RaidBossGroupType*, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::UInt32, ::FlatBuffers::StringOffset*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL_CREATERAIDCONTENTPLAYGUIDEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartRaidContentPlayGuideExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL_STARTRAIDCONTENTPLAYGUIDEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRaidBossGroupType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::RaidBossGroupType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::RaidBossGroupType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL_ADDRAIDBOSSGROUPTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsPCBuild(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL_ADDISPCBUILD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIdExport(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL_ADDIDEXPORT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisplayOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL_ADDDISPLAYORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGuideTitle(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL_ADDGUIDETITLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGuideImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL_ADDGUIDEIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGuideText(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL_ADDGUIDETEXT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndRaidContentPlayGuideExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL_ENDRAIDCONTENTPLAYGUIDEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishRaidContentPlayGuideExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL_FINISHRAIDCONTENTPLAYGUIDEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedRaidContentPlayGuideExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDCONTENTPLAYGUIDEEXCEL_FINISHSIZEPREFIXEDRAIDCONTENTPLAYGUIDEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

