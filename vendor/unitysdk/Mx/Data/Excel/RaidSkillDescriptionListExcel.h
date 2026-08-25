#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class RaidSkillDescriptionListExcel; }
namespace FlatData { class SkillSlotShowType; }
namespace FlatData { class SkillSlotHighLightType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C463B0)
#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_GETROOTASRAIDSKILLDESCRIPTIONLISTEXCEL_OFFSET UNITYSDK_OFFSET(0x1C463C0)
#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_GETROOTASRAIDSKILLDESCRIPTIONLISTEXCEL_OFFSET UNITYSDK_OFFSET(0x1C46420)
#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C464B0)
#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C46480)
#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_GET_BOSSGROUP_OFFSET UNITYSDK_OFFSET(0x1C464D0)
#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_GETBOSSGROUPBYTES_OFFSET UNITYSDK_OFFSET(0x1C46510)
#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1C46530)
#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_GETDIFFICULTYBYTES_OFFSET UNITYSDK_OFFSET(0x1C46570)
#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_GET_PHASENAMEOVERRIDEKEY_OFFSET UNITYSDK_OFFSET(0x1C46590)
#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_GETPHASENAMEOVERRIDEKEYBYTES_OFFSET UNITYSDK_OFFSET(0x1C465D0)
#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_SKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x1C465F0)
#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_GET_SKILLGROUPIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1C46640)
#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_SKILLUSEPHASE_OFFSET UNITYSDK_OFFSET(0x1C46680)
#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_GET_SKILLUSEPHASELENGTH_OFFSET UNITYSDK_OFFSET(0x1C466E0)
#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_GETSKILLUSEPHASEBYTES_OFFSET UNITYSDK_OFFSET(0x1C46720)
#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_SHOWSKILLSLOT_OFFSET UNITYSDK_OFFSET(0x1C46740)
#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_GET_SHOWSKILLSLOTLENGTH_OFFSET UNITYSDK_OFFSET(0x1C467A0)
#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_GETSHOWSKILLSLOTBYTES_OFFSET UNITYSDK_OFFSET(0x1C467E0)
#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_HIGHLIGHTRESOURCE_OFFSET UNITYSDK_OFFSET(0x1C46800)
#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_GET_HIGHLIGHTRESOURCELENGTH_OFFSET UNITYSDK_OFFSET(0x1C46860)
#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_GETHIGHLIGHTRESOURCEBYTES_OFFSET UNITYSDK_OFFSET(0x1C468A0)
#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_CREATERAIDSKILLDESCRIPTIONLISTEXCEL_OFFSET UNITYSDK_OFFSET(0x1C468C0)
#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_STARTRAIDSKILLDESCRIPTIONLISTEXCEL_OFFSET UNITYSDK_OFFSET(0x1C46BB0)
#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_ADDBOSSGROUP_OFFSET UNITYSDK_OFFSET(0x1C46B30)
#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_ADDDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1C46B00)
#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_ADDPHASENAMEOVERRIDEKEY_OFFSET UNITYSDK_OFFSET(0x1C46AD0)
#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_ADDSKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x1C46AA0)
#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_CREATESKILLGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C46BD0)
#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_STARTSKILLGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C46C60)
#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_ADDSKILLUSEPHASE_OFFSET UNITYSDK_OFFSET(0x1C46A70)
#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_CREATESKILLUSEPHASEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C46CA0)
#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_STARTSKILLUSEPHASEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C46D30)
#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_ADDSHOWSKILLSLOT_OFFSET UNITYSDK_OFFSET(0x1C46A40)
#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_CREATESHOWSKILLSLOTVECTOR_OFFSET UNITYSDK_OFFSET(0x1C46D70)
#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_STARTSHOWSKILLSLOTVECTOR_OFFSET UNITYSDK_OFFSET(0x1C46E00)
#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_ADDHIGHLIGHTRESOURCE_OFFSET UNITYSDK_OFFSET(0x1C46A10)
#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_CREATEHIGHLIGHTRESOURCEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C46E40)
#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_STARTHIGHLIGHTRESOURCEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C46ED0)
#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_ENDRAIDSKILLDESCRIPTIONLISTEXCEL_OFFSET UNITYSDK_OFFSET(0x1C46B60)
#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_FINISHRAIDSKILLDESCRIPTIONLISTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C46F10)
#define MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_FINISHSIZEPREFIXEDRAIDSKILLDESCRIPTIONLISTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C46F30)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int RaidSkillDescriptionListExcel_TypeDefinitionIndex = 19172;

	class RaidSkillDescriptionListExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::RaidSkillDescriptionListExcel* GetRootAsRaidSkillDescriptionListExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::RaidSkillDescriptionListExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_GETROOTASRAIDSKILLDESCRIPTIONLISTEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::RaidSkillDescriptionListExcel* GetRootAsRaidSkillDescriptionListExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::RaidSkillDescriptionListExcel* arg)
		{
			return (return (::MX::Data::Excel::RaidSkillDescriptionListExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::RaidSkillDescriptionListExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_GETROOTASRAIDSKILLDESCRIPTIONLISTEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::RaidSkillDescriptionListExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::RaidSkillDescriptionListExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_BossGroup()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_GET_BOSSGROUP_OFFSET))(nullptr);
		}

		Il2CppObject* GetBossGroupBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_GETBOSSGROUPBYTES_OFFSET))(nullptr);
		}

		::System::String* get_Difficulty()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_GET_DIFFICULTY_OFFSET))(nullptr);
		}

		Il2CppObject* GetDifficultyBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_GETDIFFICULTYBYTES_OFFSET))(nullptr);
		}

		::System::String* get_PhaseNameOverrideKey()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_GET_PHASENAMEOVERRIDEKEY_OFFSET))(nullptr);
		}

		Il2CppObject* GetPhaseNameOverrideKeyBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_GETPHASENAMEOVERRIDEKEYBYTES_OFFSET))(nullptr);
		}

		::System::String* SkillGroupId(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_SKILLGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SkillGroupIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_GET_SKILLGROUPIDLENGTH_OFFSET))(nullptr);
		}

		::System::Int64 SkillUsePhase(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_SKILLUSEPHASE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SkillUsePhaseLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_GET_SKILLUSEPHASELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetSkillUsePhaseBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_GETSKILLUSEPHASEBYTES_OFFSET))(nullptr);
		}

		::FlatData::SkillSlotShowType* ShowSkillSlot(::System::Int32 arg)
		{
			return (return (::FlatData::SkillSlotShowType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_SHOWSKILLSLOT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ShowSkillSlotLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_GET_SHOWSKILLSLOTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetShowSkillSlotBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_GETSHOWSKILLSLOTBYTES_OFFSET))(nullptr);
		}

		::FlatData::SkillSlotHighLightType* HighlightResource(::System::Int32 arg)
		{
			return (return (::FlatData::SkillSlotHighLightType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_HIGHLIGHTRESOURCE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_HighlightResourceLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_GET_HIGHLIGHTRESOURCELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetHighlightResourceBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_GETHIGHLIGHTRESOURCEBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateRaidSkillDescriptionListExcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_CREATERAIDSKILLDESCRIPTIONLISTEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartRaidSkillDescriptionListExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_STARTRAIDSKILLDESCRIPTIONLISTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddBossGroup(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_ADDBOSSGROUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDifficulty(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_ADDDIFFICULTY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPhaseNameOverrideKey(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_ADDPHASENAMEOVERRIDEKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSkillGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_ADDSKILLGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateSkillGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_CREATESKILLGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartSkillGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_STARTSKILLGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSkillUsePhase(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_ADDSKILLUSEPHASE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateSkillUsePhaseVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_CREATESKILLUSEPHASEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartSkillUsePhaseVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_STARTSKILLUSEPHASEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShowSkillSlot(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_ADDSHOWSKILLSLOT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateShowSkillSlotVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_CREATESHOWSKILLSLOTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartShowSkillSlotVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_STARTSHOWSKILLSLOTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddHighlightResource(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_ADDHIGHLIGHTRESOURCE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateHighlightResourceVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_CREATEHIGHLIGHTRESOURCEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartHighlightResourceVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_STARTHIGHLIGHTRESOURCEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndRaidSkillDescriptionListExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_ENDRAIDSKILLDESCRIPTIONLISTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishRaidSkillDescriptionListExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_FINISHRAIDSKILLDESCRIPTIONLISTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedRaidSkillDescriptionListExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSKILLDESCRIPTIONLISTEXCEL_FINISHSIZEPREFIXEDRAIDSKILLDESCRIPTIONLISTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

