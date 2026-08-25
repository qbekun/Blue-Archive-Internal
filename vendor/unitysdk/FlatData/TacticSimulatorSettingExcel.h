#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class TacticSimulatorSettingExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define FLATDATA_TACTICSIMULATORSETTINGEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD60010)
#define FLATDATA_TACTICSIMULATORSETTINGEXCEL_GETROOTASTACTICSIMULATORSETTINGEXCEL_OFFSET UNITYSDK_OFFSET(0xD60020)
#define FLATDATA_TACTICSIMULATORSETTINGEXCEL_GETROOTASTACTICSIMULATORSETTINGEXCEL_OFFSET UNITYSDK_OFFSET(0xD60080)
#define FLATDATA_TACTICSIMULATORSETTINGEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD600E0)
#define FLATDATA_TACTICSIMULATORSETTINGEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD5FD30)
#define FLATDATA_TACTICSIMULATORSETTINGEXCEL_GET_GROUNDID_OFFSET UNITYSDK_OFFSET(0xD60100)
#define FLATDATA_TACTICSIMULATORSETTINGEXCEL_GET_GROUNDID_OFFSET UNITYSDK_OFFSET(0xD60150)
#define FLATDATA_TACTICSIMULATORSETTINGEXCEL_GET_FIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0xD601D0)
#define FLATDATA_TACTICSIMULATORSETTINGEXCEL_GET_FIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0xD60220)
#define FLATDATA_TACTICSIMULATORSETTINGEXCEL_CREATETACTICSIMULATORSETTINGEXCEL_OFFSET UNITYSDK_OFFSET(0xD602A0)
#define FLATDATA_TACTICSIMULATORSETTINGEXCEL_STARTTACTICSIMULATORSETTINGEXCEL_OFFSET UNITYSDK_OFFSET(0xD603E0)
#define FLATDATA_TACTICSIMULATORSETTINGEXCEL_ADDGROUNDID_OFFSET UNITYSDK_OFFSET(0xD60360)
#define FLATDATA_TACTICSIMULATORSETTINGEXCEL_ADDFIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0xD60330)
#define FLATDATA_TACTICSIMULATORSETTINGEXCEL_ENDTACTICSIMULATORSETTINGEXCEL_OFFSET UNITYSDK_OFFSET(0xD60390)

namespace FlatData
{
	inline static constexpr unsigned int TacticSimulatorSettingExcel_TypeDefinitionIndex = 9341;

	class TacticSimulatorSettingExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICSIMULATORSETTINGEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::TacticSimulatorSettingExcel* GetRootAsTacticSimulatorSettingExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::TacticSimulatorSettingExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICSIMULATORSETTINGEXCEL_GETROOTASTACTICSIMULATORSETTINGEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::TacticSimulatorSettingExcel* GetRootAsTacticSimulatorSettingExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::TacticSimulatorSettingExcel* arg2)
		{
			return ((::FlatData::TacticSimulatorSettingExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::TacticSimulatorSettingExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICSIMULATORSETTINGEXCEL_GETROOTASTACTICSIMULATORSETTINGEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICSIMULATORSETTINGEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::TacticSimulatorSettingExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::TacticSimulatorSettingExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICSIMULATORSETTINGEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_groundId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICSIMULATORSETTINGEXCEL_GET_GROUNDID_OFFSET))(nullptr);
		}

		::System::Int64 get_GroundId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICSIMULATORSETTINGEXCEL_GET_GROUNDID_OFFSET))(nullptr);
		}

		::System::Int64 get_fixedEchelonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICSIMULATORSETTINGEXCEL_GET_FIXEDECHELONID_OFFSET))(nullptr);
		}

		::System::Int64 get_FixedEchelonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICSIMULATORSETTINGEXCEL_GET_FIXEDECHELONID_OFFSET))(nullptr);
		}

		Il2CppObject* CreateTacticSimulatorSettingExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICSIMULATORSETTINGEXCEL_CREATETACTICSIMULATORSETTINGEXCEL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void StartTacticSimulatorSettingExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICSIMULATORSETTINGEXCEL_STARTTACTICSIMULATORSETTINGEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddGroundId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICSIMULATORSETTINGEXCEL_ADDGROUNDID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddFixedEchelonId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICSIMULATORSETTINGEXCEL_ADDFIXEDECHELONID_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndTacticSimulatorSettingExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TACTICSIMULATORSETTINGEXCEL_ENDTACTICSIMULATORSETTINGEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

