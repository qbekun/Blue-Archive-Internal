#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class KeyMappingGroupInfoExcel; }
namespace FlatData { class DisplayGroupType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_KEYMAPPINGGROUPINFOEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B6F980)
#define MX_DATA_EXCEL_KEYMAPPINGGROUPINFOEXCEL_GETROOTASKEYMAPPINGGROUPINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1B6F990)
#define MX_DATA_EXCEL_KEYMAPPINGGROUPINFOEXCEL_GETROOTASKEYMAPPINGGROUPINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1B6F9F0)
#define MX_DATA_EXCEL_KEYMAPPINGGROUPINFOEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B6FA80)
#define MX_DATA_EXCEL_KEYMAPPINGGROUPINFOEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B6FA50)
#define MX_DATA_EXCEL_KEYMAPPINGGROUPINFOEXCEL_GET_DISPLAYGROUPTYPE_OFFSET UNITYSDK_OFFSET(0x1B6FAA0)
#define MX_DATA_EXCEL_KEYMAPPINGGROUPINFOEXCEL_GET_LOCALIZEKEYMAPPINGDISPLAYGROUPID_OFFSET UNITYSDK_OFFSET(0x1B6FAF0)
#define MX_DATA_EXCEL_KEYMAPPINGGROUPINFOEXCEL_CREATEKEYMAPPINGGROUPINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1B6FB40)
#define MX_DATA_EXCEL_KEYMAPPINGGROUPINFOEXCEL_STARTKEYMAPPINGGROUPINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1B6FC80)
#define MX_DATA_EXCEL_KEYMAPPINGGROUPINFOEXCEL_ADDDISPLAYGROUPTYPE_OFFSET UNITYSDK_OFFSET(0x1B6FC00)
#define MX_DATA_EXCEL_KEYMAPPINGGROUPINFOEXCEL_ADDLOCALIZEKEYMAPPINGDISPLAYGROUPID_OFFSET UNITYSDK_OFFSET(0x1B6FBD0)
#define MX_DATA_EXCEL_KEYMAPPINGGROUPINFOEXCEL_ENDKEYMAPPINGGROUPINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1B6FC30)
#define MX_DATA_EXCEL_KEYMAPPINGGROUPINFOEXCEL_FINISHKEYMAPPINGGROUPINFOEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B6FCA0)
#define MX_DATA_EXCEL_KEYMAPPINGGROUPINFOEXCEL_FINISHSIZEPREFIXEDKEYMAPPINGGROUPINFOEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B6FCC0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int KeyMappingGroupInfoExcel_TypeDefinitionIndex = 18311;

	class KeyMappingGroupInfoExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGGROUPINFOEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::KeyMappingGroupInfoExcel* GetRootAsKeyMappingGroupInfoExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::KeyMappingGroupInfoExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGGROUPINFOEXCEL_GETROOTASKEYMAPPINGGROUPINFOEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::KeyMappingGroupInfoExcel* GetRootAsKeyMappingGroupInfoExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::KeyMappingGroupInfoExcel* arg)
		{
			return (return (::MX::Data::Excel::KeyMappingGroupInfoExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::KeyMappingGroupInfoExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGGROUPINFOEXCEL_GETROOTASKEYMAPPINGGROUPINFOEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGGROUPINFOEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::KeyMappingGroupInfoExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::KeyMappingGroupInfoExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGGROUPINFOEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::FlatData::DisplayGroupType* get_DisplayGroupType()
		{
			return (return (::FlatData::DisplayGroupType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGGROUPINFOEXCEL_GET_DISPLAYGROUPTYPE_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeKeyMappingDisplayGroupId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGGROUPINFOEXCEL_GET_LOCALIZEKEYMAPPINGDISPLAYGROUPID_OFFSET))(nullptr);
		}

		Il2CppObject* CreateKeyMappingGroupInfoExcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::DisplayGroupType* arg, ::System::UInt32 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::DisplayGroupType*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGGROUPINFOEXCEL_CREATEKEYMAPPINGGROUPINFOEXCEL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void StartKeyMappingGroupInfoExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGGROUPINFOEXCEL_STARTKEYMAPPINGGROUPINFOEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddDisplayGroupType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::DisplayGroupType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::DisplayGroupType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGGROUPINFOEXCEL_ADDDISPLAYGROUPTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeKeyMappingDisplayGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGGROUPINFOEXCEL_ADDLOCALIZEKEYMAPPINGDISPLAYGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndKeyMappingGroupInfoExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGGROUPINFOEXCEL_ENDKEYMAPPINGGROUPINFOEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishKeyMappingGroupInfoExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGGROUPINFOEXCEL_FINISHKEYMAPPINGGROUPINFOEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedKeyMappingGroupInfoExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGGROUPINFOEXCEL_FINISHSIZEPREFIXEDKEYMAPPINGGROUPINFOEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

