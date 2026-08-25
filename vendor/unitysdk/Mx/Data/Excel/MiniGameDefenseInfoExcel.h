#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MiniGameDefenseInfoExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_MINIGAMEDEFENSEINFOEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1BA8580)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEINFOEXCEL_GETROOTASMINIGAMEDEFENSEINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1BA8590)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEINFOEXCEL_GETROOTASMINIGAMEDEFENSEINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1BA85F0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEINFOEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1BA8680)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEINFOEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1BA8650)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEINFOEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BA86A0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEINFOEXCEL_GET_DEFENSEBATTLEPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1BA86F0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEINFOEXCEL_GET_DEFENSEBATTLEPARCELID_OFFSET UNITYSDK_OFFSET(0x1BA8740)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEINFOEXCEL_GET_DEFENSEBATTLEMULTIPLIERMAX_OFFSET UNITYSDK_OFFSET(0x1BA8790)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEINFOEXCEL_GET_DISABLEROOTMOTION_OFFSET UNITYSDK_OFFSET(0x1BA87E0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEINFOEXCEL_CREATEMINIGAMEDEFENSEINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1BA8830)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEINFOEXCEL_STARTMINIGAMEDEFENSEINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1BA8A80)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEINFOEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BA89A0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEINFOEXCEL_ADDDEFENSEBATTLEPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1BA89D0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEINFOEXCEL_ADDDEFENSEBATTLEPARCELID_OFFSET UNITYSDK_OFFSET(0x1BA8970)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEINFOEXCEL_ADDDEFENSEBATTLEMULTIPLIERMAX_OFFSET UNITYSDK_OFFSET(0x1BA8940)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEINFOEXCEL_ADDDISABLEROOTMOTION_OFFSET UNITYSDK_OFFSET(0x1BA8A00)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEINFOEXCEL_ENDMINIGAMEDEFENSEINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1BA8A30)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEINFOEXCEL_FINISHMINIGAMEDEFENSEINFOEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BA8AA0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEINFOEXCEL_FINISHSIZEPREFIXEDMINIGAMEDEFENSEINFOEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BA8AC0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameDefenseInfoExcel_TypeDefinitionIndex = 18586;

	class MiniGameDefenseInfoExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEINFOEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MiniGameDefenseInfoExcel* GetRootAsMiniGameDefenseInfoExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameDefenseInfoExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEINFOEXCEL_GETROOTASMINIGAMEDEFENSEINFOEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MiniGameDefenseInfoExcel* GetRootAsMiniGameDefenseInfoExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MiniGameDefenseInfoExcel* arg)
		{
			return (return (::MX::Data::Excel::MiniGameDefenseInfoExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MiniGameDefenseInfoExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEINFOEXCEL_GETROOTASMINIGAMEDEFENSEINFOEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEINFOEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MiniGameDefenseInfoExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameDefenseInfoExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEINFOEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEINFOEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_DefenseBattleParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEINFOEXCEL_GET_DEFENSEBATTLEPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_DefenseBattleParcelId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEINFOEXCEL_GET_DEFENSEBATTLEPARCELID_OFFSET))(nullptr);
		}

		::System::Int64 get_DefenseBattleMultiplierMax()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEINFOEXCEL_GET_DEFENSEBATTLEMULTIPLIERMAX_OFFSET))(nullptr);
		}

		::System::Boolean get_DisableRootMotion()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEINFOEXCEL_GET_DISABLEROOTMOTION_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMiniGameDefenseInfoExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEINFOEXCEL_CREATEMINIGAMEDEFENSEINFOEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMiniGameDefenseInfoExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEINFOEXCEL_STARTMINIGAMEDEFENSEINFOEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEINFOEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDefenseBattleParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEINFOEXCEL_ADDDEFENSEBATTLEPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDefenseBattleParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEINFOEXCEL_ADDDEFENSEBATTLEPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDefenseBattleMultiplierMax(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEINFOEXCEL_ADDDEFENSEBATTLEMULTIPLIERMAX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisableRootMotion(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEINFOEXCEL_ADDDISABLEROOTMOTION_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMiniGameDefenseInfoExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEINFOEXCEL_ENDMINIGAMEDEFENSEINFOEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMiniGameDefenseInfoExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEINFOEXCEL_FINISHMINIGAMEDEFENSEINFOEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMiniGameDefenseInfoExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEINFOEXCEL_FINISHSIZEPREFIXEDMINIGAMEDEFENSEINFOEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

