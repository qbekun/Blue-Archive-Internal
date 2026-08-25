#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class CharacterPotentialStatExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_CHARACTERPOTENTIALSTATEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A31840)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALSTATEXCEL_GETROOTASCHARACTERPOTENTIALSTATEXCEL_OFFSET UNITYSDK_OFFSET(0x1A31850)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALSTATEXCEL_GETROOTASCHARACTERPOTENTIALSTATEXCEL_OFFSET UNITYSDK_OFFSET(0x1A318B0)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALSTATEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A31940)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALSTATEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A31910)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALSTATEXCEL_GET_POTENTIALSTATGROUPID_OFFSET UNITYSDK_OFFSET(0x1A31960)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALSTATEXCEL_GET_POTENTIALLEVEL_OFFSET UNITYSDK_OFFSET(0x1A319B0)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALSTATEXCEL_GET_RECIPEID_OFFSET UNITYSDK_OFFSET(0x1A31A00)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALSTATEXCEL_GET_STATBONUSRATE_OFFSET UNITYSDK_OFFSET(0x1A31A50)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALSTATEXCEL_CREATECHARACTERPOTENTIALSTATEXCEL_OFFSET UNITYSDK_OFFSET(0x1A31AA0)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALSTATEXCEL_STARTCHARACTERPOTENTIALSTATEXCEL_OFFSET UNITYSDK_OFFSET(0x1A31C90)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALSTATEXCEL_ADDPOTENTIALSTATGROUPID_OFFSET UNITYSDK_OFFSET(0x1A31BE0)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALSTATEXCEL_ADDPOTENTIALLEVEL_OFFSET UNITYSDK_OFFSET(0x1A31C10)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALSTATEXCEL_ADDRECIPEID_OFFSET UNITYSDK_OFFSET(0x1A31BB0)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALSTATEXCEL_ADDSTATBONUSRATE_OFFSET UNITYSDK_OFFSET(0x1A31B80)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALSTATEXCEL_ENDCHARACTERPOTENTIALSTATEXCEL_OFFSET UNITYSDK_OFFSET(0x1A31C40)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALSTATEXCEL_FINISHCHARACTERPOTENTIALSTATEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A31CB0)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALSTATEXCEL_FINISHSIZEPREFIXEDCHARACTERPOTENTIALSTATEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A31CD0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterPotentialStatExcel_TypeDefinitionIndex = 17065;

	class CharacterPotentialStatExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALSTATEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CharacterPotentialStatExcel* GetRootAsCharacterPotentialStatExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterPotentialStatExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALSTATEXCEL_GETROOTASCHARACTERPOTENTIALSTATEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CharacterPotentialStatExcel* GetRootAsCharacterPotentialStatExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::CharacterPotentialStatExcel* arg)
		{
			return (return (::MX::Data::Excel::CharacterPotentialStatExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::CharacterPotentialStatExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALSTATEXCEL_GETROOTASCHARACTERPOTENTIALSTATEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALSTATEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::CharacterPotentialStatExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterPotentialStatExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALSTATEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_PotentialStatGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALSTATEXCEL_GET_POTENTIALSTATGROUPID_OFFSET))(nullptr);
		}

		::System::Int32 get_PotentialLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALSTATEXCEL_GET_POTENTIALLEVEL_OFFSET))(nullptr);
		}

		::System::Int64 get_RecipeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALSTATEXCEL_GET_RECIPEID_OFFSET))(nullptr);
		}

		::System::Int64 get_StatBonusRate()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALSTATEXCEL_GET_STATBONUSRATE_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCharacterPotentialStatExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int32, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALSTATEXCEL_CREATECHARACTERPOTENTIALSTATEXCEL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartCharacterPotentialStatExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALSTATEXCEL_STARTCHARACTERPOTENTIALSTATEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddPotentialStatGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALSTATEXCEL_ADDPOTENTIALSTATGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPotentialLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALSTATEXCEL_ADDPOTENTIALLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRecipeId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALSTATEXCEL_ADDRECIPEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStatBonusRate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALSTATEXCEL_ADDSTATBONUSRATE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndCharacterPotentialStatExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALSTATEXCEL_ENDCHARACTERPOTENTIALSTATEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishCharacterPotentialStatExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALSTATEXCEL_FINISHCHARACTERPOTENTIALSTATEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedCharacterPotentialStatExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALSTATEXCEL_FINISHSIZEPREFIXEDCHARACTERPOTENTIALSTATEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

