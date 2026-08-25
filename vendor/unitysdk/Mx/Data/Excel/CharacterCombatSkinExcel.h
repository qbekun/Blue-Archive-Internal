#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class CharacterCombatSkinExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_CHARACTERCOMBATSKINEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A0E760)
#define MX_DATA_EXCEL_CHARACTERCOMBATSKINEXCEL_GETROOTASCHARACTERCOMBATSKINEXCEL_OFFSET UNITYSDK_OFFSET(0x1A0E770)
#define MX_DATA_EXCEL_CHARACTERCOMBATSKINEXCEL_GETROOTASCHARACTERCOMBATSKINEXCEL_OFFSET UNITYSDK_OFFSET(0x1A0E7D0)
#define MX_DATA_EXCEL_CHARACTERCOMBATSKINEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A0E860)
#define MX_DATA_EXCEL_CHARACTERCOMBATSKINEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A0E830)
#define MX_DATA_EXCEL_CHARACTERCOMBATSKINEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1A0E880)
#define MX_DATA_EXCEL_CHARACTERCOMBATSKINEXCEL_GETGROUPIDBYTES_OFFSET UNITYSDK_OFFSET(0x1A0E8C0)
#define MX_DATA_EXCEL_CHARACTERCOMBATSKINEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1A0E8E0)
#define MX_DATA_EXCEL_CHARACTERCOMBATSKINEXCEL_GET_RESOURCEPATH_OFFSET UNITYSDK_OFFSET(0x1A0E930)
#define MX_DATA_EXCEL_CHARACTERCOMBATSKINEXCEL_GETRESOURCEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1A0E970)
#define MX_DATA_EXCEL_CHARACTERCOMBATSKINEXCEL_CREATECHARACTERCOMBATSKINEXCEL_OFFSET UNITYSDK_OFFSET(0x1A0E990)
#define MX_DATA_EXCEL_CHARACTERCOMBATSKINEXCEL_STARTCHARACTERCOMBATSKINEXCEL_OFFSET UNITYSDK_OFFSET(0x1A0EB20)
#define MX_DATA_EXCEL_CHARACTERCOMBATSKINEXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0x1A0EAA0)
#define MX_DATA_EXCEL_CHARACTERCOMBATSKINEXCEL_ADDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1A0EA40)
#define MX_DATA_EXCEL_CHARACTERCOMBATSKINEXCEL_ADDRESOURCEPATH_OFFSET UNITYSDK_OFFSET(0x1A0EA70)
#define MX_DATA_EXCEL_CHARACTERCOMBATSKINEXCEL_ENDCHARACTERCOMBATSKINEXCEL_OFFSET UNITYSDK_OFFSET(0x1A0EAD0)
#define MX_DATA_EXCEL_CHARACTERCOMBATSKINEXCEL_FINISHCHARACTERCOMBATSKINEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A0EB40)
#define MX_DATA_EXCEL_CHARACTERCOMBATSKINEXCEL_FINISHSIZEPREFIXEDCHARACTERCOMBATSKINEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A0EB60)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterCombatSkinExcel_TypeDefinitionIndex = 16934;

	class CharacterCombatSkinExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCOMBATSKINEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CharacterCombatSkinExcel* GetRootAsCharacterCombatSkinExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterCombatSkinExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCOMBATSKINEXCEL_GETROOTASCHARACTERCOMBATSKINEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CharacterCombatSkinExcel* GetRootAsCharacterCombatSkinExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::CharacterCombatSkinExcel* arg)
		{
			return (return (::MX::Data::Excel::CharacterCombatSkinExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::CharacterCombatSkinExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCOMBATSKINEXCEL_GETROOTASCHARACTERCOMBATSKINEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCOMBATSKINEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::CharacterCombatSkinExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterCombatSkinExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCOMBATSKINEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_GroupId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCOMBATSKINEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		Il2CppObject* GetGroupIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCOMBATSKINEXCEL_GETGROUPIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCOMBATSKINEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::String* get_ResourcePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCOMBATSKINEXCEL_GET_RESOURCEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetResourcePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCOMBATSKINEXCEL_GETRESOURCEPATHBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCharacterCombatSkinExcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::System::Int64, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCOMBATSKINEXCEL_CREATECHARACTERCOMBATSKINEXCEL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void StartCharacterCombatSkinExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCOMBATSKINEXCEL_STARTCHARACTERCOMBATSKINEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCOMBATSKINEXCEL_ADDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCOMBATSKINEXCEL_ADDUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddResourcePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCOMBATSKINEXCEL_ADDRESOURCEPATH_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndCharacterCombatSkinExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCOMBATSKINEXCEL_ENDCHARACTERCOMBATSKINEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishCharacterCombatSkinExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCOMBATSKINEXCEL_FINISHCHARACTERCOMBATSKINEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedCharacterCombatSkinExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCOMBATSKINEXCEL_FINISHSIZEPREFIXEDCHARACTERCOMBATSKINEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

