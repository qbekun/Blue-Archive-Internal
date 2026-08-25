#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class TacticTimeAttackSimulatorConfigExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD608D0)
#define FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCEL_GETROOTASTACTICTIMEATTACKSIMULATORCONFIGEXCEL_OFFSET UNITYSDK_OFFSET(0xD608E0)
#define FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCEL_GETROOTASTACTICTIMEATTACKSIMULATORCONFIGEXCEL_OFFSET UNITYSDK_OFFSET(0xD60940)
#define FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD609A0)
#define FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD605F0)
#define FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCEL_GET_ORDER_OFFSET UNITYSDK_OFFSET(0xD609C0)
#define FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCEL_GET_ORDER_OFFSET UNITYSDK_OFFSET(0xD60A10)
#define FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCEL_GET_REPEAT_OFFSET UNITYSDK_OFFSET(0xD60A90)
#define FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCEL_GET_REPEAT_OFFSET UNITYSDK_OFFSET(0xD60AE0)
#define FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCEL_GET_PRESETGROUPID_OFFSET UNITYSDK_OFFSET(0xD60B60)
#define FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCEL_GET_PRESETGROUPID_OFFSET UNITYSDK_OFFSET(0xD60BB0)
#define FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCEL_GET_ATTACKSTRIKERNUM_OFFSET UNITYSDK_OFFSET(0xD60C30)
#define FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCEL_GET_ATTACKSTRIKERNUM_OFFSET UNITYSDK_OFFSET(0xD60C80)
#define FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCEL_GET_ATTACKSPECIALNUM_OFFSET UNITYSDK_OFFSET(0xD60D00)
#define FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCEL_GET_ATTACKSPECIALNUM_OFFSET UNITYSDK_OFFSET(0xD60D50)
#define FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCEL_GET_GEASID_OFFSET UNITYSDK_OFFSET(0xD60DD0)
#define FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCEL_GET_GEASID_OFFSET UNITYSDK_OFFSET(0xD60E20)
#define FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCEL_CREATETACTICTIMEATTACKSIMULATORCONFIGEXCEL_OFFSET UNITYSDK_OFFSET(0xD60EA0)
#define FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCEL_STARTTACTICTIMEATTACKSIMULATORCONFIGEXCEL_OFFSET UNITYSDK_OFFSET(0xD61140)
#define FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCEL_ADDORDER_OFFSET UNITYSDK_OFFSET(0xD610C0)
#define FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCEL_ADDREPEAT_OFFSET UNITYSDK_OFFSET(0xD61090)
#define FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCEL_ADDPRESETGROUPID_OFFSET UNITYSDK_OFFSET(0xD61060)
#define FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCEL_ADDATTACKSTRIKERNUM_OFFSET UNITYSDK_OFFSET(0xD61030)
#define FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCEL_ADDATTACKSPECIALNUM_OFFSET UNITYSDK_OFFSET(0xD61000)
#define FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCEL_ADDGEASID_OFFSET UNITYSDK_OFFSET(0xD60FD0)
#define FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCEL_ENDTACTICTIMEATTACKSIMULATORCONFIGEXCEL_OFFSET UNITYSDK_OFFSET(0xD610F0)

namespace FlatData
{
	inline static constexpr unsigned int TacticTimeAttackSimulatorConfigExcel_TypeDefinitionIndex = 9343;

	class TacticTimeAttackSimulatorConfigExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::TacticTimeAttackSimulatorConfigExcel* GetRootAsTacticTimeAttackSimulatorConfigExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::TacticTimeAttackSimulatorConfigExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCEL_GETROOTASTACTICTIMEATTACKSIMULATORCONFIGEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::TacticTimeAttackSimulatorConfigExcel* GetRootAsTacticTimeAttackSimulatorConfigExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::TacticTimeAttackSimulatorConfigExcel* arg2)
		{
			return ((::FlatData::TacticTimeAttackSimulatorConfigExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::TacticTimeAttackSimulatorConfigExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCEL_GETROOTASTACTICTIMEATTACKSIMULATORCONFIGEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::TacticTimeAttackSimulatorConfigExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::TacticTimeAttackSimulatorConfigExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_order()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCEL_GET_ORDER_OFFSET))(nullptr);
		}

		::System::Int64 get_Order()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCEL_GET_ORDER_OFFSET))(nullptr);
		}

		::System::Int64 get_repeat()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCEL_GET_REPEAT_OFFSET))(nullptr);
		}

		::System::Int64 get_Repeat()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCEL_GET_REPEAT_OFFSET))(nullptr);
		}

		::System::Int64 get_presetGroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCEL_GET_PRESETGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_PresetGroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCEL_GET_PRESETGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_attackStrikerNum()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCEL_GET_ATTACKSTRIKERNUM_OFFSET))(nullptr);
		}

		::System::Int64 get_AttackStrikerNum()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCEL_GET_ATTACKSTRIKERNUM_OFFSET))(nullptr);
		}

		::System::Int64 get_attackSpecialNum()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCEL_GET_ATTACKSPECIALNUM_OFFSET))(nullptr);
		}

		::System::Int64 get_AttackSpecialNum()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCEL_GET_ATTACKSPECIALNUM_OFFSET))(nullptr);
		}

		::System::Int64 get_geasId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCEL_GET_GEASID_OFFSET))(nullptr);
		}

		::System::Int64 get_GeasId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCEL_GET_GEASID_OFFSET))(nullptr);
		}

		Il2CppObject* CreateTacticTimeAttackSimulatorConfigExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Int64 arg4, ::System::Int64 arg5, ::System::Int64 arg6, ::System::Int64 arg7)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCEL_CREATETACTICTIMEATTACKSIMULATORCONFIGEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Void StartTacticTimeAttackSimulatorConfigExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCEL_STARTTACTICTIMEATTACKSIMULATORCONFIGEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCEL_ADDORDER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddRepeat(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCEL_ADDREPEAT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddPresetGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCEL_ADDPRESETGROUPID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddAttackStrikerNum(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCEL_ADDATTACKSTRIKERNUM_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddAttackSpecialNum(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCEL_ADDATTACKSPECIALNUM_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddGeasId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCEL_ADDGEASID_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndTacticTimeAttackSimulatorConfigExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICTIMEATTACKSIMULATORCONFIGEXCEL_ENDTACTICTIMEATTACKSIMULATORCONFIGEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

