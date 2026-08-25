#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class BattlePassLevelExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_BATTLEPASSLEVELEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x19E6590)
#define MX_DATA_EXCEL_BATTLEPASSLEVELEXCEL_GETROOTASBATTLEPASSLEVELEXCEL_OFFSET UNITYSDK_OFFSET(0x19E65A0)
#define MX_DATA_EXCEL_BATTLEPASSLEVELEXCEL_GETROOTASBATTLEPASSLEVELEXCEL_OFFSET UNITYSDK_OFFSET(0x19E6600)
#define MX_DATA_EXCEL_BATTLEPASSLEVELEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x19E6690)
#define MX_DATA_EXCEL_BATTLEPASSLEVELEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x19E6660)
#define MX_DATA_EXCEL_BATTLEPASSLEVELEXCEL_GET_BATTLEPASSID_OFFSET UNITYSDK_OFFSET(0x19E66B0)
#define MX_DATA_EXCEL_BATTLEPASSLEVELEXCEL_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x19E6700)
#define MX_DATA_EXCEL_BATTLEPASSLEVELEXCEL_GET_ISPICKUPREWARD_OFFSET UNITYSDK_OFFSET(0x19E6750)
#define MX_DATA_EXCEL_BATTLEPASSLEVELEXCEL_CREATEBATTLEPASSLEVELEXCEL_OFFSET UNITYSDK_OFFSET(0x19E67A0)
#define MX_DATA_EXCEL_BATTLEPASSLEVELEXCEL_STARTBATTLEPASSLEVELEXCEL_OFFSET UNITYSDK_OFFSET(0x19E6940)
#define MX_DATA_EXCEL_BATTLEPASSLEVELEXCEL_ADDBATTLEPASSID_OFFSET UNITYSDK_OFFSET(0x19E6890)
#define MX_DATA_EXCEL_BATTLEPASSLEVELEXCEL_ADDLEVEL_OFFSET UNITYSDK_OFFSET(0x19E6860)
#define MX_DATA_EXCEL_BATTLEPASSLEVELEXCEL_ADDISPICKUPREWARD_OFFSET UNITYSDK_OFFSET(0x19E68C0)
#define MX_DATA_EXCEL_BATTLEPASSLEVELEXCEL_ENDBATTLEPASSLEVELEXCEL_OFFSET UNITYSDK_OFFSET(0x19E68F0)
#define MX_DATA_EXCEL_BATTLEPASSLEVELEXCEL_FINISHBATTLEPASSLEVELEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19E6960)
#define MX_DATA_EXCEL_BATTLEPASSLEVELEXCEL_FINISHSIZEPREFIXEDBATTLEPASSLEVELEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19E6980)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int BattlePassLevelExcel_TypeDefinitionIndex = 16755;

	class BattlePassLevelExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSLEVELEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::BattlePassLevelExcel* GetRootAsBattlePassLevelExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::BattlePassLevelExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSLEVELEXCEL_GETROOTASBATTLEPASSLEVELEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::BattlePassLevelExcel* GetRootAsBattlePassLevelExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::BattlePassLevelExcel* arg)
		{
			return (return (::MX::Data::Excel::BattlePassLevelExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::BattlePassLevelExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSLEVELEXCEL_GETROOTASBATTLEPASSLEVELEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSLEVELEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::BattlePassLevelExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::BattlePassLevelExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSLEVELEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_BattlePassId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSLEVELEXCEL_GET_BATTLEPASSID_OFFSET))(nullptr);
		}

		::System::Int64 get_Level()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSLEVELEXCEL_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPickUpReward()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSLEVELEXCEL_GET_ISPICKUPREWARD_OFFSET))(nullptr);
		}

		Il2CppObject* CreateBattlePassLevelExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSLEVELEXCEL_CREATEBATTLEPASSLEVELEXCEL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void StartBattlePassLevelExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSLEVELEXCEL_STARTBATTLEPASSLEVELEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddBattlePassId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSLEVELEXCEL_ADDBATTLEPASSID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSLEVELEXCEL_ADDLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsPickUpReward(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSLEVELEXCEL_ADDISPICKUPREWARD_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndBattlePassLevelExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSLEVELEXCEL_ENDBATTLEPASSLEVELEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishBattlePassLevelExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSLEVELEXCEL_FINISHBATTLEPASSLEVELEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedBattlePassLevelExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSLEVELEXCEL_FINISHSIZEPREFIXEDBATTLEPASSLEVELEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

