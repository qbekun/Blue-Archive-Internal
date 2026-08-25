#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class CharacterPotentialExcel; }
namespace FlatData { class PotentialStatBonusRateType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_CHARACTERPOTENTIALEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A2E120)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALEXCEL_GETROOTASCHARACTERPOTENTIALEXCEL_OFFSET UNITYSDK_OFFSET(0x1A2E130)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALEXCEL_GETROOTASCHARACTERPOTENTIALEXCEL_OFFSET UNITYSDK_OFFSET(0x1A2E190)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A2E220)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A2E1F0)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A2E240)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALEXCEL_GET_POTENTIALSTATGROUPID_OFFSET UNITYSDK_OFFSET(0x1A2E290)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALEXCEL_GET_POTENTIALSTATBONUSRATETYPE_OFFSET UNITYSDK_OFFSET(0x1A2E2E0)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALEXCEL_GET_ISUNNECESSARYSTAT_OFFSET UNITYSDK_OFFSET(0x1A2E330)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALEXCEL_CREATECHARACTERPOTENTIALEXCEL_OFFSET UNITYSDK_OFFSET(0x1A2E380)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALEXCEL_STARTCHARACTERPOTENTIALEXCEL_OFFSET UNITYSDK_OFFSET(0x1A2E570)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1A2E490)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALEXCEL_ADDPOTENTIALSTATGROUPID_OFFSET UNITYSDK_OFFSET(0x1A2E460)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALEXCEL_ADDPOTENTIALSTATBONUSRATETYPE_OFFSET UNITYSDK_OFFSET(0x1A2E4C0)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALEXCEL_ADDISUNNECESSARYSTAT_OFFSET UNITYSDK_OFFSET(0x1A2E4F0)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALEXCEL_ENDCHARACTERPOTENTIALEXCEL_OFFSET UNITYSDK_OFFSET(0x1A2E520)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALEXCEL_FINISHCHARACTERPOTENTIALEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A2E590)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALEXCEL_FINISHSIZEPREFIXEDCHARACTERPOTENTIALEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A2E5B0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterPotentialExcel_TypeDefinitionIndex = 17048;

	class CharacterPotentialExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CharacterPotentialExcel* GetRootAsCharacterPotentialExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterPotentialExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALEXCEL_GETROOTASCHARACTERPOTENTIALEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CharacterPotentialExcel* GetRootAsCharacterPotentialExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::CharacterPotentialExcel* arg)
		{
			return (return (::MX::Data::Excel::CharacterPotentialExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::CharacterPotentialExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALEXCEL_GETROOTASCHARACTERPOTENTIALEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::CharacterPotentialExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterPotentialExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_PotentialStatGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALEXCEL_GET_POTENTIALSTATGROUPID_OFFSET))(nullptr);
		}

		::FlatData::PotentialStatBonusRateType* get_PotentialStatBonusRateType()
		{
			return (return (::FlatData::PotentialStatBonusRateType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALEXCEL_GET_POTENTIALSTATBONUSRATETYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsUnnecessaryStat()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALEXCEL_GET_ISUNNECESSARYSTAT_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCharacterPotentialExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::PotentialStatBonusRateType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatData::PotentialStatBonusRateType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALEXCEL_CREATECHARACTERPOTENTIALEXCEL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartCharacterPotentialExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALEXCEL_STARTCHARACTERPOTENTIALEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPotentialStatGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALEXCEL_ADDPOTENTIALSTATGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPotentialStatBonusRateType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::PotentialStatBonusRateType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::PotentialStatBonusRateType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALEXCEL_ADDPOTENTIALSTATBONUSRATETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsUnnecessaryStat(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALEXCEL_ADDISUNNECESSARYSTAT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndCharacterPotentialExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALEXCEL_ENDCHARACTERPOTENTIALEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishCharacterPotentialExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALEXCEL_FINISHCHARACTERPOTENTIALEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedCharacterPotentialExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALEXCEL_FINISHSIZEPREFIXEDCHARACTERPOTENTIALEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

