#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MiniGameDefenseCharacterBanExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_MINIGAMEDEFENSECHARACTERBANEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1BA5C10)
#define MX_DATA_EXCEL_MINIGAMEDEFENSECHARACTERBANEXCEL_GETROOTASMINIGAMEDEFENSECHARACTERBANEXCEL_OFFSET UNITYSDK_OFFSET(0x1BA5C20)
#define MX_DATA_EXCEL_MINIGAMEDEFENSECHARACTERBANEXCEL_GETROOTASMINIGAMEDEFENSECHARACTERBANEXCEL_OFFSET UNITYSDK_OFFSET(0x1BA5C80)
#define MX_DATA_EXCEL_MINIGAMEDEFENSECHARACTERBANEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1BA5D10)
#define MX_DATA_EXCEL_MINIGAMEDEFENSECHARACTERBANEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1BA5CE0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSECHARACTERBANEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BA5D30)
#define MX_DATA_EXCEL_MINIGAMEDEFENSECHARACTERBANEXCEL_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1BA5D80)
#define MX_DATA_EXCEL_MINIGAMEDEFENSECHARACTERBANEXCEL_CREATEMINIGAMEDEFENSECHARACTERBANEXCEL_OFFSET UNITYSDK_OFFSET(0x1BA5DD0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSECHARACTERBANEXCEL_STARTMINIGAMEDEFENSECHARACTERBANEXCEL_OFFSET UNITYSDK_OFFSET(0x1BA5F10)
#define MX_DATA_EXCEL_MINIGAMEDEFENSECHARACTERBANEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BA5E90)
#define MX_DATA_EXCEL_MINIGAMEDEFENSECHARACTERBANEXCEL_ADDCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1BA5E60)
#define MX_DATA_EXCEL_MINIGAMEDEFENSECHARACTERBANEXCEL_ENDMINIGAMEDEFENSECHARACTERBANEXCEL_OFFSET UNITYSDK_OFFSET(0x1BA5EC0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSECHARACTERBANEXCEL_FINISHMINIGAMEDEFENSECHARACTERBANEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BA5F30)
#define MX_DATA_EXCEL_MINIGAMEDEFENSECHARACTERBANEXCEL_FINISHSIZEPREFIXEDMINIGAMEDEFENSECHARACTERBANEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BA5F50)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameDefenseCharacterBanExcel_TypeDefinitionIndex = 18572;

	class MiniGameDefenseCharacterBanExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSECHARACTERBANEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MiniGameDefenseCharacterBanExcel* GetRootAsMiniGameDefenseCharacterBanExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameDefenseCharacterBanExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSECHARACTERBANEXCEL_GETROOTASMINIGAMEDEFENSECHARACTERBANEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MiniGameDefenseCharacterBanExcel* GetRootAsMiniGameDefenseCharacterBanExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MiniGameDefenseCharacterBanExcel* arg)
		{
			return (return (::MX::Data::Excel::MiniGameDefenseCharacterBanExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MiniGameDefenseCharacterBanExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSECHARACTERBANEXCEL_GETROOTASMINIGAMEDEFENSECHARACTERBANEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSECHARACTERBANEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MiniGameDefenseCharacterBanExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameDefenseCharacterBanExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSECHARACTERBANEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSECHARACTERBANEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSECHARACTERBANEXCEL_GET_CHARACTERID_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMiniGameDefenseCharacterBanExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSECHARACTERBANEXCEL_CREATEMINIGAMEDEFENSECHARACTERBANEXCEL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void StartMiniGameDefenseCharacterBanExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSECHARACTERBANEXCEL_STARTMINIGAMEDEFENSECHARACTERBANEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSECHARACTERBANEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCharacterId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSECHARACTERBANEXCEL_ADDCHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMiniGameDefenseCharacterBanExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSECHARACTERBANEXCEL_ENDMINIGAMEDEFENSECHARACTERBANEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMiniGameDefenseCharacterBanExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSECHARACTERBANEXCEL_FINISHMINIGAMEDEFENSECHARACTERBANEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMiniGameDefenseCharacterBanExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSECHARACTERBANEXCEL_FINISHSIZEPREFIXEDMINIGAMEDEFENSECHARACTERBANEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

