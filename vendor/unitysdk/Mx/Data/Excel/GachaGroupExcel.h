#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class GachaGroupExcel; }
namespace FlatData { class GachaGroupType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_GACHAGROUPEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B38C30)
#define MX_DATA_EXCEL_GACHAGROUPEXCEL_GETROOTASGACHAGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B38C40)
#define MX_DATA_EXCEL_GACHAGROUPEXCEL_GETROOTASGACHAGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B38CA0)
#define MX_DATA_EXCEL_GACHAGROUPEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B38D30)
#define MX_DATA_EXCEL_GACHAGROUPEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B38D00)
#define MX_DATA_EXCEL_GACHAGROUPEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B38D50)
#define MX_DATA_EXCEL_GACHAGROUPEXCEL_GET_NAMEKR_OFFSET UNITYSDK_OFFSET(0x1B38DA0)
#define MX_DATA_EXCEL_GACHAGROUPEXCEL_GETNAMEKRBYTES_OFFSET UNITYSDK_OFFSET(0x1B38DE0)
#define MX_DATA_EXCEL_GACHAGROUPEXCEL_GET_ISRECURSIVE_OFFSET UNITYSDK_OFFSET(0x1B38E00)
#define MX_DATA_EXCEL_GACHAGROUPEXCEL_GET_GROUPTYPE_OFFSET UNITYSDK_OFFSET(0x1B38E50)
#define MX_DATA_EXCEL_GACHAGROUPEXCEL_CREATEGACHAGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B38EA0)
#define MX_DATA_EXCEL_GACHAGROUPEXCEL_STARTGACHAGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B39090)
#define MX_DATA_EXCEL_GACHAGROUPEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1B38F80)
#define MX_DATA_EXCEL_GACHAGROUPEXCEL_ADDNAMEKR_OFFSET UNITYSDK_OFFSET(0x1B38FE0)
#define MX_DATA_EXCEL_GACHAGROUPEXCEL_ADDISRECURSIVE_OFFSET UNITYSDK_OFFSET(0x1B39010)
#define MX_DATA_EXCEL_GACHAGROUPEXCEL_ADDGROUPTYPE_OFFSET UNITYSDK_OFFSET(0x1B38FB0)
#define MX_DATA_EXCEL_GACHAGROUPEXCEL_ENDGACHAGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B39040)
#define MX_DATA_EXCEL_GACHAGROUPEXCEL_FINISHGACHAGROUPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B390B0)
#define MX_DATA_EXCEL_GACHAGROUPEXCEL_FINISHSIZEPREFIXEDGACHAGROUPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B390D0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int GachaGroupExcel_TypeDefinitionIndex = 18093;

	class GachaGroupExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAGROUPEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::GachaGroupExcel* GetRootAsGachaGroupExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::GachaGroupExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAGROUPEXCEL_GETROOTASGACHAGROUPEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::GachaGroupExcel* GetRootAsGachaGroupExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::GachaGroupExcel* arg)
		{
			return (return (::MX::Data::Excel::GachaGroupExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::GachaGroupExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAGROUPEXCEL_GETROOTASGACHAGROUPEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAGROUPEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::GachaGroupExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::GachaGroupExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAGROUPEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_ID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAGROUPEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::String* get_NameKr()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAGROUPEXCEL_GET_NAMEKR_OFFSET))(nullptr);
		}

		Il2CppObject* GetNameKrBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAGROUPEXCEL_GETNAMEKRBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_IsRecursive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAGROUPEXCEL_GET_ISRECURSIVE_OFFSET))(nullptr);
		}

		::FlatData::GachaGroupType* get_GroupType()
		{
			return (return (::FlatData::GachaGroupType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAGROUPEXCEL_GET_GROUPTYPE_OFFSET))(nullptr);
		}

		Il2CppObject* CreateGachaGroupExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::System::Boolean arg, ::FlatData::GachaGroupType* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::System::Boolean, ::FlatData::GachaGroupType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAGROUPEXCEL_CREATEGACHAGROUPEXCEL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartGachaGroupExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAGROUPEXCEL_STARTGACHAGROUPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddID(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAGROUPEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNameKr(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAGROUPEXCEL_ADDNAMEKR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsRecursive(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAGROUPEXCEL_ADDISRECURSIVE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGroupType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::GachaGroupType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::GachaGroupType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAGROUPEXCEL_ADDGROUPTYPE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndGachaGroupExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAGROUPEXCEL_ENDGACHAGROUPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishGachaGroupExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAGROUPEXCEL_FINISHGACHAGROUPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedGachaGroupExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAGROUPEXCEL_FINISHSIZEPREFIXEDGACHAGROUPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

