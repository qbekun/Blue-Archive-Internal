#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class BossExternalBTExcel; }
namespace FlatData { class ExternalBTNodeType; }
namespace FlatData { class ExternalBTTrigger; }
namespace FlatData { class ExternalBehavior; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x19F3680)
#define MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL_GETROOTASBOSSEXTERNALBTEXCEL_OFFSET UNITYSDK_OFFSET(0x19F3690)
#define MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL_GETROOTASBOSSEXTERNALBTEXCEL_OFFSET UNITYSDK_OFFSET(0x19F36F0)
#define MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x19F3780)
#define MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x19F3750)
#define MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL_GET_EXTERNALBTID_OFFSET UNITYSDK_OFFSET(0x19F37A0)
#define MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL_GET_AIPHASE_OFFSET UNITYSDK_OFFSET(0x19F37F0)
#define MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL_GET_EXTERNALBTNODETYPE_OFFSET UNITYSDK_OFFSET(0x19F3840)
#define MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL_GET_EXTERNALBTTRIGGER_OFFSET UNITYSDK_OFFSET(0x19F3890)
#define MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL_GET_TRIGGERARGUMENT_OFFSET UNITYSDK_OFFSET(0x19F38E0)
#define MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL_GETTRIGGERARGUMENTBYTES_OFFSET UNITYSDK_OFFSET(0x19F3920)
#define MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL_GET_BEHAVIORRATE_OFFSET UNITYSDK_OFFSET(0x19F3940)
#define MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL_GET_EXTERNALBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x19F3990)
#define MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL_GET_BEHAVIORARGUMENT_OFFSET UNITYSDK_OFFSET(0x19F39E0)
#define MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL_GETBEHAVIORARGUMENTBYTES_OFFSET UNITYSDK_OFFSET(0x19F3A20)
#define MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL_CREATEBOSSEXTERNALBTEXCEL_OFFSET UNITYSDK_OFFSET(0x19F3A40)
#define MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL_STARTBOSSEXTERNALBTEXCEL_OFFSET UNITYSDK_OFFSET(0x19F3D90)
#define MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL_ADDEXTERNALBTID_OFFSET UNITYSDK_OFFSET(0x19F3C20)
#define MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL_ADDAIPHASE_OFFSET UNITYSDK_OFFSET(0x19F3BF0)
#define MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL_ADDEXTERNALBTNODETYPE_OFFSET UNITYSDK_OFFSET(0x19F3D10)
#define MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL_ADDEXTERNALBTTRIGGER_OFFSET UNITYSDK_OFFSET(0x19F3CE0)
#define MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL_ADDTRIGGERARGUMENT_OFFSET UNITYSDK_OFFSET(0x19F3CB0)
#define MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL_ADDBEHAVIORRATE_OFFSET UNITYSDK_OFFSET(0x19F3BC0)
#define MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL_ADDEXTERNALBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x19F3C80)
#define MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL_ADDBEHAVIORARGUMENT_OFFSET UNITYSDK_OFFSET(0x19F3C50)
#define MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL_ENDBOSSEXTERNALBTEXCEL_OFFSET UNITYSDK_OFFSET(0x19F3D40)
#define MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL_FINISHBOSSEXTERNALBTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19F3DB0)
#define MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL_FINISHSIZEPREFIXEDBOSSEXTERNALBTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19F3DD0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int BossExternalBTExcel_TypeDefinitionIndex = 16816;

	class BossExternalBTExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::BossExternalBTExcel* GetRootAsBossExternalBTExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::BossExternalBTExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL_GETROOTASBOSSEXTERNALBTEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::BossExternalBTExcel* GetRootAsBossExternalBTExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::BossExternalBTExcel* arg)
		{
			return (return (::MX::Data::Excel::BossExternalBTExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::BossExternalBTExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL_GETROOTASBOSSEXTERNALBTEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::BossExternalBTExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::BossExternalBTExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_ExternalBTId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL_GET_EXTERNALBTID_OFFSET))(nullptr);
		}

		::System::Int64 get_AIPhase()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL_GET_AIPHASE_OFFSET))(nullptr);
		}

		::FlatData::ExternalBTNodeType* get_ExternalBTNodeType()
		{
			return (return (::FlatData::ExternalBTNodeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL_GET_EXTERNALBTNODETYPE_OFFSET))(nullptr);
		}

		::FlatData::ExternalBTTrigger* get_ExternalBTTrigger()
		{
			return (return (::FlatData::ExternalBTTrigger*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL_GET_EXTERNALBTTRIGGER_OFFSET))(nullptr);
		}

		::System::String* get_TriggerArgument()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL_GET_TRIGGERARGUMENT_OFFSET))(nullptr);
		}

		Il2CppObject* GetTriggerArgumentBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL_GETTRIGGERARGUMENTBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_BehaviorRate()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL_GET_BEHAVIORRATE_OFFSET))(nullptr);
		}

		::FlatData::ExternalBehavior* get_ExternalBehavior()
		{
			return (return (::FlatData::ExternalBehavior*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL_GET_EXTERNALBEHAVIOR_OFFSET))(nullptr);
		}

		::System::String* get_BehaviorArgument()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL_GET_BEHAVIORARGUMENT_OFFSET))(nullptr);
		}

		Il2CppObject* GetBehaviorArgumentBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL_GETBEHAVIORARGUMENTBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateBossExternalBTExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::ExternalBTNodeType* arg, ::FlatData::ExternalBTTrigger* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::FlatData::ExternalBehavior* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatData::ExternalBTNodeType*, ::FlatData::ExternalBTTrigger*, ::FlatBuffers::StringOffset*, ::System::Int64, ::FlatData::ExternalBehavior*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL_CREATEBOSSEXTERNALBTEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartBossExternalBTExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL_STARTBOSSEXTERNALBTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddExternalBTId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL_ADDEXTERNALBTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAIPhase(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL_ADDAIPHASE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExternalBTNodeType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ExternalBTNodeType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ExternalBTNodeType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL_ADDEXTERNALBTNODETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExternalBTTrigger(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ExternalBTTrigger* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ExternalBTTrigger*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL_ADDEXTERNALBTTRIGGER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTriggerArgument(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL_ADDTRIGGERARGUMENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBehaviorRate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL_ADDBEHAVIORRATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExternalBehavior(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ExternalBehavior* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ExternalBehavior*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL_ADDEXTERNALBEHAVIOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBehaviorArgument(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL_ADDBEHAVIORARGUMENT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndBossExternalBTExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL_ENDBOSSEXTERNALBTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishBossExternalBTExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL_FINISHBOSSEXTERNALBTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedBossExternalBTExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BOSSEXTERNALBTEXCEL_FINISHSIZEPREFIXEDBOSSEXTERNALBTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

