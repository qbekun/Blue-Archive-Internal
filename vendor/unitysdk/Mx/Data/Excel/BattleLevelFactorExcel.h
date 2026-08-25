#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class BattleLevelFactorExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_BATTLELEVELFACTOREXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x19E13E0)
#define MX_DATA_EXCEL_BATTLELEVELFACTOREXCEL_GETROOTASBATTLELEVELFACTOREXCEL_OFFSET UNITYSDK_OFFSET(0x19E13F0)
#define MX_DATA_EXCEL_BATTLELEVELFACTOREXCEL_GETROOTASBATTLELEVELFACTOREXCEL_OFFSET UNITYSDK_OFFSET(0x19E1450)
#define MX_DATA_EXCEL_BATTLELEVELFACTOREXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x19E14E0)
#define MX_DATA_EXCEL_BATTLELEVELFACTOREXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x19E14B0)
#define MX_DATA_EXCEL_BATTLELEVELFACTOREXCEL_GET_LEVELDIFF_OFFSET UNITYSDK_OFFSET(0x19E1500)
#define MX_DATA_EXCEL_BATTLELEVELFACTOREXCEL_GET_DAMAGERATE_OFFSET UNITYSDK_OFFSET(0x19E1550)
#define MX_DATA_EXCEL_BATTLELEVELFACTOREXCEL_CREATEBATTLELEVELFACTOREXCEL_OFFSET UNITYSDK_OFFSET(0x19E15A0)
#define MX_DATA_EXCEL_BATTLELEVELFACTOREXCEL_STARTBATTLELEVELFACTOREXCEL_OFFSET UNITYSDK_OFFSET(0x19E16E0)
#define MX_DATA_EXCEL_BATTLELEVELFACTOREXCEL_ADDLEVELDIFF_OFFSET UNITYSDK_OFFSET(0x19E1660)
#define MX_DATA_EXCEL_BATTLELEVELFACTOREXCEL_ADDDAMAGERATE_OFFSET UNITYSDK_OFFSET(0x19E1630)
#define MX_DATA_EXCEL_BATTLELEVELFACTOREXCEL_ENDBATTLELEVELFACTOREXCEL_OFFSET UNITYSDK_OFFSET(0x19E1690)
#define MX_DATA_EXCEL_BATTLELEVELFACTOREXCEL_FINISHBATTLELEVELFACTOREXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19E1700)
#define MX_DATA_EXCEL_BATTLELEVELFACTOREXCEL_FINISHSIZEPREFIXEDBATTLELEVELFACTOREXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19E1720)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int BattleLevelFactorExcel_TypeDefinitionIndex = 16727;

	class BattleLevelFactorExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLELEVELFACTOREXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::BattleLevelFactorExcel* GetRootAsBattleLevelFactorExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::BattleLevelFactorExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLELEVELFACTOREXCEL_GETROOTASBATTLELEVELFACTOREXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::BattleLevelFactorExcel* GetRootAsBattleLevelFactorExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::BattleLevelFactorExcel* arg)
		{
			return (return (::MX::Data::Excel::BattleLevelFactorExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::BattleLevelFactorExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLELEVELFACTOREXCEL_GETROOTASBATTLELEVELFACTOREXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLELEVELFACTOREXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::BattleLevelFactorExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::BattleLevelFactorExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLELEVELFACTOREXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_LevelDiff()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLELEVELFACTOREXCEL_GET_LEVELDIFF_OFFSET))(nullptr);
		}

		::System::Int64 get_DamageRate()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLELEVELFACTOREXCEL_GET_DAMAGERATE_OFFSET))(nullptr);
		}

		Il2CppObject* CreateBattleLevelFactorExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLELEVELFACTOREXCEL_CREATEBATTLELEVELFACTOREXCEL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void StartBattleLevelFactorExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLELEVELFACTOREXCEL_STARTBATTLELEVELFACTOREXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddLevelDiff(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLELEVELFACTOREXCEL_ADDLEVELDIFF_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDamageRate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLELEVELFACTOREXCEL_ADDDAMAGERATE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndBattleLevelFactorExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLELEVELFACTOREXCEL_ENDBATTLELEVELFACTOREXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishBattleLevelFactorExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLELEVELFACTOREXCEL_FINISHBATTLELEVELFACTOREXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedBattleLevelFactorExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLELEVELFACTOREXCEL_FINISHSIZEPREFIXEDBATTLELEVELFACTOREXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

