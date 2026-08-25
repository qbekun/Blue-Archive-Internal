#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class ConstAudioExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define FLATDATA_CONSTAUDIOEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xCED1F0)
#define FLATDATA_CONSTAUDIOEXCEL_GETROOTASCONSTAUDIOEXCEL_OFFSET UNITYSDK_OFFSET(0xCED200)
#define FLATDATA_CONSTAUDIOEXCEL_GETROOTASCONSTAUDIOEXCEL_OFFSET UNITYSDK_OFFSET(0xCED260)
#define FLATDATA_CONSTAUDIOEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xCED2C0)
#define FLATDATA_CONSTAUDIOEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xCECF10)
#define FLATDATA_CONSTAUDIOEXCEL_GET_DEFAULTSNAPSHOTNAME_OFFSET UNITYSDK_OFFSET(0xCED2E0)
#define FLATDATA_CONSTAUDIOEXCEL_GET_DEFAULTSNAPSHOTNAME_OFFSET UNITYSDK_OFFSET(0xCED320)
#define FLATDATA_CONSTAUDIOEXCEL_GETDEFAULTSNAPSHOTNAMEBYTES_OFFSET UNITYSDK_OFFSET(0xCED390)
#define FLATDATA_CONSTAUDIOEXCEL_GET_BATTLESNAPSHOTNAME_OFFSET UNITYSDK_OFFSET(0xCED3B0)
#define FLATDATA_CONSTAUDIOEXCEL_GET_BATTLESNAPSHOTNAME_OFFSET UNITYSDK_OFFSET(0xCED3F0)
#define FLATDATA_CONSTAUDIOEXCEL_GETBATTLESNAPSHOTNAMEBYTES_OFFSET UNITYSDK_OFFSET(0xCED460)
#define FLATDATA_CONSTAUDIOEXCEL_GET_RAIDSNAPSHOTNAME_OFFSET UNITYSDK_OFFSET(0xCED480)
#define FLATDATA_CONSTAUDIOEXCEL_GET_RAIDSNAPSHOTNAME_OFFSET UNITYSDK_OFFSET(0xCED4C0)
#define FLATDATA_CONSTAUDIOEXCEL_GETRAIDSNAPSHOTNAMEBYTES_OFFSET UNITYSDK_OFFSET(0xCED530)
#define FLATDATA_CONSTAUDIOEXCEL_GET_EXSKILLCUTINSNAPSHOTNAME_OFFSET UNITYSDK_OFFSET(0xCED550)
#define FLATDATA_CONSTAUDIOEXCEL_GET_EXSKILLCUTINSNAPSHOTNAME_OFFSET UNITYSDK_OFFSET(0xCED590)
#define FLATDATA_CONSTAUDIOEXCEL_GETEXSKILLCUTINSNAPSHOTNAMEBYTES_OFFSET UNITYSDK_OFFSET(0xCED600)
#define FLATDATA_CONSTAUDIOEXCEL_CREATECONSTAUDIOEXCEL_OFFSET UNITYSDK_OFFSET(0xCED620)
#define FLATDATA_CONSTAUDIOEXCEL_STARTCONSTAUDIOEXCEL_OFFSET UNITYSDK_OFFSET(0xCED810)
#define FLATDATA_CONSTAUDIOEXCEL_ADDDEFAULTSNAPSHOTNAME_OFFSET UNITYSDK_OFFSET(0xCED790)
#define FLATDATA_CONSTAUDIOEXCEL_ADDBATTLESNAPSHOTNAME_OFFSET UNITYSDK_OFFSET(0xCED760)
#define FLATDATA_CONSTAUDIOEXCEL_ADDRAIDSNAPSHOTNAME_OFFSET UNITYSDK_OFFSET(0xCED730)
#define FLATDATA_CONSTAUDIOEXCEL_ADDEXSKILLCUTINSNAPSHOTNAME_OFFSET UNITYSDK_OFFSET(0xCED700)
#define FLATDATA_CONSTAUDIOEXCEL_ENDCONSTAUDIOEXCEL_OFFSET UNITYSDK_OFFSET(0xCED7C0)

namespace FlatData
{
	inline static constexpr unsigned int ConstAudioExcel_TypeDefinitionIndex = 9211;

	class ConstAudioExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTAUDIOEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::ConstAudioExcel* GetRootAsConstAudioExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::ConstAudioExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTAUDIOEXCEL_GETROOTASCONSTAUDIOEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::ConstAudioExcel* GetRootAsConstAudioExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::ConstAudioExcel* arg2)
		{
			return ((::FlatData::ConstAudioExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::ConstAudioExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTAUDIOEXCEL_GETROOTASCONSTAUDIOEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTAUDIOEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::ConstAudioExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::ConstAudioExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTAUDIOEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* get_defaultSnapShotName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTAUDIOEXCEL_GET_DEFAULTSNAPSHOTNAME_OFFSET))(nullptr);
		}

		::System::String* get_DefaultSnapShotName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTAUDIOEXCEL_GET_DEFAULTSNAPSHOTNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetDefaultSnapShotNameBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTAUDIOEXCEL_GETDEFAULTSNAPSHOTNAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_battleSnapShotName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTAUDIOEXCEL_GET_BATTLESNAPSHOTNAME_OFFSET))(nullptr);
		}

		::System::String* get_BattleSnapShotName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTAUDIOEXCEL_GET_BATTLESNAPSHOTNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetBattleSnapShotNameBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTAUDIOEXCEL_GETBATTLESNAPSHOTNAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_raidSnapShotName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTAUDIOEXCEL_GET_RAIDSNAPSHOTNAME_OFFSET))(nullptr);
		}

		::System::String* get_RaidSnapShotName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTAUDIOEXCEL_GET_RAIDSNAPSHOTNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetRaidSnapShotNameBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTAUDIOEXCEL_GETRAIDSNAPSHOTNAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_exSkillCutInSnapShotName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTAUDIOEXCEL_GET_EXSKILLCUTINSNAPSHOTNAME_OFFSET))(nullptr);
		}

		::System::String* get_ExSkillCutInSnapShotName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTAUDIOEXCEL_GET_EXSKILLCUTINSNAPSHOTNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetExSkillCutInSnapShotNameBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTAUDIOEXCEL_GETEXSKILLCUTINSNAPSHOTNAMEBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateConstAudioExcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2, ::FlatBuffers::StringOffset* arg3, ::FlatBuffers::StringOffset* arg4, ::FlatBuffers::StringOffset* arg5)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTAUDIOEXCEL_CREATECONSTAUDIOEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void StartConstAudioExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTAUDIOEXCEL_STARTCONSTAUDIOEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddDefaultSnapShotName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTAUDIOEXCEL_ADDDEFAULTSNAPSHOTNAME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddBattleSnapShotName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTAUDIOEXCEL_ADDBATTLESNAPSHOTNAME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddRaidSnapShotName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTAUDIOEXCEL_ADDRAIDSNAPSHOTNAME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddExSkillCutInSnapShotName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTAUDIOEXCEL_ADDEXSKILLCUTINSNAPSHOTNAME_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndConstAudioExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTAUDIOEXCEL_ENDCONSTAUDIOEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

