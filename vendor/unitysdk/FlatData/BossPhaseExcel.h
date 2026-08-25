#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class BossPhaseExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_BOSSPHASEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xCE4580)
#define FLATDATA_BOSSPHASEEXCEL_GETROOTASBOSSPHASEEXCEL_OFFSET UNITYSDK_OFFSET(0xCE4590)
#define FLATDATA_BOSSPHASEEXCEL_GETROOTASBOSSPHASEEXCEL_OFFSET UNITYSDK_OFFSET(0xCE45F0)
#define FLATDATA_BOSSPHASEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xCE4650)
#define FLATDATA_BOSSPHASEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xCE42A0)
#define FLATDATA_BOSSPHASEEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0xCE4670)
#define FLATDATA_BOSSPHASEEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0xCE46C0)
#define FLATDATA_BOSSPHASEEXCEL_GET_AIPHASE_OFFSET UNITYSDK_OFFSET(0xCE4740)
#define FLATDATA_BOSSPHASEEXCEL_GET_AIPHASE_OFFSET UNITYSDK_OFFSET(0xCE4790)
#define FLATDATA_BOSSPHASEEXCEL_GET_NORMALATTACKSKILLUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xCE4810)
#define FLATDATA_BOSSPHASEEXCEL_GET_NORMALATTACKSKILLUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xCE4850)
#define FLATDATA_BOSSPHASEEXCEL_GETNORMALATTACKSKILLUNIQUENAMEBYTES_OFFSET UNITYSDK_OFFSET(0xCE48C0)
#define FLATDATA_BOSSPHASEEXCEL_USEEXSKILL_OFFSET UNITYSDK_OFFSET(0xCE48E0)
#define FLATDATA_BOSSPHASEEXCEL_GET_USEEXSKILLLENGTH_OFFSET UNITYSDK_OFFSET(0xCE4940)
#define FLATDATA_BOSSPHASEEXCEL_USEEXSKILL_OFFSET UNITYSDK_OFFSET(0xCE4980)
#define FLATDATA_BOSSPHASEEXCEL_GETUSEEXSKILLBYTES_OFFSET UNITYSDK_OFFSET(0xCE49E0)
#define FLATDATA_BOSSPHASEEXCEL_CREATEBOSSPHASEEXCEL_OFFSET UNITYSDK_OFFSET(0xCE4A00)
#define FLATDATA_BOSSPHASEEXCEL_STARTBOSSPHASEEXCEL_OFFSET UNITYSDK_OFFSET(0xCE4BF0)
#define FLATDATA_BOSSPHASEEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0xCE4B10)
#define FLATDATA_BOSSPHASEEXCEL_ADDAIPHASE_OFFSET UNITYSDK_OFFSET(0xCE4AE0)
#define FLATDATA_BOSSPHASEEXCEL_ADDNORMALATTACKSKILLUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xCE4B70)
#define FLATDATA_BOSSPHASEEXCEL_ADDUSEEXSKILL_OFFSET UNITYSDK_OFFSET(0xCE4B40)
#define FLATDATA_BOSSPHASEEXCEL_CREATEUSEEXSKILLVECTOR_OFFSET UNITYSDK_OFFSET(0xCE4C10)
#define FLATDATA_BOSSPHASEEXCEL_STARTUSEEXSKILLVECTOR_OFFSET UNITYSDK_OFFSET(0xCE4CA0)
#define FLATDATA_BOSSPHASEEXCEL_ENDBOSSPHASEEXCEL_OFFSET UNITYSDK_OFFSET(0xCE4BA0)

namespace FlatData
{
	inline static constexpr unsigned int BossPhaseExcel_TypeDefinitionIndex = 9197;

	class BossPhaseExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BOSSPHASEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::BossPhaseExcel* GetRootAsBossPhaseExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::BossPhaseExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BOSSPHASEEXCEL_GETROOTASBOSSPHASEEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::BossPhaseExcel* GetRootAsBossPhaseExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::BossPhaseExcel* arg2)
		{
			return ((::FlatData::BossPhaseExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::BossPhaseExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BOSSPHASEEXCEL_GETROOTASBOSSPHASEEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BOSSPHASEEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::BossPhaseExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::BossPhaseExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BOSSPHASEEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BOSSPHASEEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BOSSPHASEEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_aIPhase()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BOSSPHASEEXCEL_GET_AIPHASE_OFFSET))(nullptr);
		}

		::System::Int64 get_AIPhase()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BOSSPHASEEXCEL_GET_AIPHASE_OFFSET))(nullptr);
		}

		::System::String* get_normalAttackSkillUniqueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BOSSPHASEEXCEL_GET_NORMALATTACKSKILLUNIQUENAME_OFFSET))(nullptr);
		}

		::System::String* get_NormalAttackSkillUniqueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BOSSPHASEEXCEL_GET_NORMALATTACKSKILLUNIQUENAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetNormalAttackSkillUniqueNameBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BOSSPHASEEXCEL_GETNORMALATTACKSKILLUNIQUENAMEBYTES_OFFSET))(nullptr);
		}

		::System::Boolean useExSkill(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BOSSPHASEEXCEL_USEEXSKILL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_UseExSkillLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BOSSPHASEEXCEL_GET_USEEXSKILLLENGTH_OFFSET))(nullptr);
		}

		::System::Boolean UseExSkill(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BOSSPHASEEXCEL_USEEXSKILL_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetUseExSkillBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BOSSPHASEEXCEL_GETUSEEXSKILLBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateBossPhaseExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::FlatBuffers::StringOffset* arg4, ::FlatBuffers::VectorOffset* arg5)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BOSSPHASEEXCEL_CREATEBOSSPHASEEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void StartBossPhaseExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BOSSPHASEEXCEL_STARTBOSSPHASEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BOSSPHASEEXCEL_ADDID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddAIPhase(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BOSSPHASEEXCEL_ADDAIPHASE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddNormalAttackSkillUniqueName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BOSSPHASEEXCEL_ADDNORMALATTACKSKILLUNIQUENAME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddUseExSkill(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BOSSPHASEEXCEL_ADDUSEEXSKILL_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateUseExSkillVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BOSSPHASEEXCEL_CREATEUSEEXSKILLVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartUseExSkillVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BOSSPHASEEXCEL_STARTUSEEXSKILLVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndBossPhaseExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BOSSPHASEEXCEL_ENDBOSSPHASEEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

