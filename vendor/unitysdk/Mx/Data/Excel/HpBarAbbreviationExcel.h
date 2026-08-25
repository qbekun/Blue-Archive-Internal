#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class HpBarAbbreviationExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_HPBARABBREVIATIONEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B4AD60)
#define MX_DATA_EXCEL_HPBARABBREVIATIONEXCEL_GETROOTASHPBARABBREVIATIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1B4AD70)
#define MX_DATA_EXCEL_HPBARABBREVIATIONEXCEL_GETROOTASHPBARABBREVIATIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1B4ADD0)
#define MX_DATA_EXCEL_HPBARABBREVIATIONEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B4AE60)
#define MX_DATA_EXCEL_HPBARABBREVIATIONEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B4AE30)
#define MX_DATA_EXCEL_HPBARABBREVIATIONEXCEL_GET_MONSTERLV_OFFSET UNITYSDK_OFFSET(0x1B4AE80)
#define MX_DATA_EXCEL_HPBARABBREVIATIONEXCEL_GET_STANDARDHPBAR_OFFSET UNITYSDK_OFFSET(0x1B4AED0)
#define MX_DATA_EXCEL_HPBARABBREVIATIONEXCEL_GET_RAIDBOSSHPBAR_OFFSET UNITYSDK_OFFSET(0x1B4AF20)
#define MX_DATA_EXCEL_HPBARABBREVIATIONEXCEL_CREATEHPBARABBREVIATIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1B4AF70)
#define MX_DATA_EXCEL_HPBARABBREVIATIONEXCEL_STARTHPBARABBREVIATIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1B4B100)
#define MX_DATA_EXCEL_HPBARABBREVIATIONEXCEL_ADDMONSTERLV_OFFSET UNITYSDK_OFFSET(0x1B4B080)
#define MX_DATA_EXCEL_HPBARABBREVIATIONEXCEL_ADDSTANDARDHPBAR_OFFSET UNITYSDK_OFFSET(0x1B4B050)
#define MX_DATA_EXCEL_HPBARABBREVIATIONEXCEL_ADDRAIDBOSSHPBAR_OFFSET UNITYSDK_OFFSET(0x1B4B020)
#define MX_DATA_EXCEL_HPBARABBREVIATIONEXCEL_ENDHPBARABBREVIATIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1B4B0B0)
#define MX_DATA_EXCEL_HPBARABBREVIATIONEXCEL_FINISHHPBARABBREVIATIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B4B120)
#define MX_DATA_EXCEL_HPBARABBREVIATIONEXCEL_FINISHSIZEPREFIXEDHPBARABBREVIATIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B4B140)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int HpBarAbbreviationExcel_TypeDefinitionIndex = 18163;

	class HpBarAbbreviationExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_HPBARABBREVIATIONEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::HpBarAbbreviationExcel* GetRootAsHpBarAbbreviationExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::HpBarAbbreviationExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_HPBARABBREVIATIONEXCEL_GETROOTASHPBARABBREVIATIONEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::HpBarAbbreviationExcel* GetRootAsHpBarAbbreviationExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::HpBarAbbreviationExcel* arg)
		{
			return (return (::MX::Data::Excel::HpBarAbbreviationExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::HpBarAbbreviationExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_HPBARABBREVIATIONEXCEL_GETROOTASHPBARABBREVIATIONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_HPBARABBREVIATIONEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::HpBarAbbreviationExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::HpBarAbbreviationExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_HPBARABBREVIATIONEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_MonsterLv()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_HPBARABBREVIATIONEXCEL_GET_MONSTERLV_OFFSET))(nullptr);
		}

		::System::Int32 get_StandardHpBar()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_HPBARABBREVIATIONEXCEL_GET_STANDARDHPBAR_OFFSET))(nullptr);
		}

		::System::Int32 get_RaidBossHpBar()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_HPBARABBREVIATIONEXCEL_GET_RAIDBOSSHPBAR_OFFSET))(nullptr);
		}

		Il2CppObject* CreateHpBarAbbreviationExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_HPBARABBREVIATIONEXCEL_CREATEHPBARABBREVIATIONEXCEL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void StartHpBarAbbreviationExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_HPBARABBREVIATIONEXCEL_STARTHPBARABBREVIATIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddMonsterLv(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_HPBARABBREVIATIONEXCEL_ADDMONSTERLV_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStandardHpBar(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_HPBARABBREVIATIONEXCEL_ADDSTANDARDHPBAR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRaidBossHpBar(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_HPBARABBREVIATIONEXCEL_ADDRAIDBOSSHPBAR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndHpBarAbbreviationExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_HPBARABBREVIATIONEXCEL_ENDHPBARABBREVIATIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishHpBarAbbreviationExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_HPBARABBREVIATIONEXCEL_FINISHHPBARABBREVIATIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedHpBarAbbreviationExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_HPBARABBREVIATIONEXCEL_FINISHSIZEPREFIXEDHPBARABBREVIATIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

