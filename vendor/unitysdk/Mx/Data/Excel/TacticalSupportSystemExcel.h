#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class TacticalSupportSystemExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C99F00)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GETROOTASTACTICALSUPPORTSYSTEMEXCEL_OFFSET UNITYSDK_OFFSET(0x1C99F10)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GETROOTASTACTICALSUPPORTSYSTEMEXCEL_OFFSET UNITYSDK_OFFSET(0x1C99F70)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C9A000)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C99FD0)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C9A020)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_SUMMONEDTIME_OFFSET UNITYSDK_OFFSET(0x1C9A070)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_DEFAULTPERSONALITYID_OFFSET UNITYSDK_OFFSET(0x1C9A0C0)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_CANTARGETING_OFFSET UNITYSDK_OFFSET(0x1C9A110)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_CANCOVER_OFFSET UNITYSDK_OFFSET(0x1C9A160)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_OBSTACLEUNIQUENAME_OFFSET UNITYSDK_OFFSET(0x1C9A1B0)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GETOBSTACLEUNIQUENAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1C9A1F0)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_OBSTACLECOVERRANGE_OFFSET UNITYSDK_OFFSET(0x1C9A210)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_SUMMONSKILLLGROUPID_OFFSET UNITYSDK_OFFSET(0x1C9A260)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GETSUMMONSKILLLGROUPIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C9A2A0)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_CRASHOBSTACLEOBBWIDTH_OFFSET UNITYSDK_OFFSET(0x1C9A2C0)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_CRASHOBSTACLEOBBHEIGHT_OFFSET UNITYSDK_OFFSET(0x1C9A310)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_ISTSSBLOCKEDNODECHECK_OFFSET UNITYSDK_OFFSET(0x1C9A360)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_NUMBEROFUSES_OFFSET UNITYSDK_OFFSET(0x1C9A3B0)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_INVENTORYOFFSETX_OFFSET UNITYSDK_OFFSET(0x1C9A400)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_INVENTORYOFFSETY_OFFSET UNITYSDK_OFFSET(0x1C9A450)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_INVENTORYOFFSETZ_OFFSET UNITYSDK_OFFSET(0x1C9A4A0)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_INTERACTIONCHAR_OFFSET UNITYSDK_OFFSET(0x1C9A4F0)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_CHARACTERINTERACTIONSTARTDELAY_OFFSET UNITYSDK_OFFSET(0x1C9A540)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_GETONSTARTEFFECTPATH_OFFSET UNITYSDK_OFFSET(0x1C9A590)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GETGETONSTARTEFFECTPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1C9A5D0)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_GETONENDEFFECTPATH_OFFSET UNITYSDK_OFFSET(0x1C9A5F0)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GETGETONENDEFFECTPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1C9A630)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_SUMMONERCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1C9A650)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_INTERACTIONFRAME_OFFSET UNITYSDK_OFFSET(0x1C9A6A0)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_TSAINTERACTIONADDDURATION_OFFSET UNITYSDK_OFFSET(0x1C9A6F0)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_INTERACTIONSTUDENTEXSKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x1C9A740)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GETINTERACTIONSTUDENTEXSKILLGROUPIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C9A780)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_INTERACTIONSKILLCARDTEXTURE_OFFSET UNITYSDK_OFFSET(0x1C9A7A0)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GETINTERACTIONSKILLCARDTEXTUREBYTES_OFFSET UNITYSDK_OFFSET(0x1C9A7E0)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_INTERACTIONSKILLSPINE_OFFSET UNITYSDK_OFFSET(0x1C9A800)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GETINTERACTIONSKILLSPINEBYTES_OFFSET UNITYSDK_OFFSET(0x1C9A840)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_RETREATFRAME_OFFSET UNITYSDK_OFFSET(0x1C9A860)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_DESTROYFRAME_OFFSET UNITYSDK_OFFSET(0x1C9A8B0)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_CREATETACTICALSUPPORTSYSTEMEXCEL_OFFSET UNITYSDK_OFFSET(0x1C9A900)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_STARTTACTICALSUPPORTSYSTEMEXCEL_OFFSET UNITYSDK_OFFSET(0x1C9B310)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1C9AF60)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDSUMMONEDTIME_OFFSET UNITYSDK_OFFSET(0x1C9AF30)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDDEFAULTPERSONALITYID_OFFSET UNITYSDK_OFFSET(0x1C9AF00)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDCANTARGETING_OFFSET UNITYSDK_OFFSET(0x1C9B290)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDCANCOVER_OFFSET UNITYSDK_OFFSET(0x1C9B260)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDOBSTACLEUNIQUENAME_OFFSET UNITYSDK_OFFSET(0x1C9B200)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDOBSTACLECOVERRANGE_OFFSET UNITYSDK_OFFSET(0x1C9AED0)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDSUMMONSKILLLGROUPID_OFFSET UNITYSDK_OFFSET(0x1C9B1D0)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDCRASHOBSTACLEOBBWIDTH_OFFSET UNITYSDK_OFFSET(0x1C9AEA0)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDCRASHOBSTACLEOBBHEIGHT_OFFSET UNITYSDK_OFFSET(0x1C9AE70)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDISTSSBLOCKEDNODECHECK_OFFSET UNITYSDK_OFFSET(0x1C9B230)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDNUMBEROFUSES_OFFSET UNITYSDK_OFFSET(0x1C9B1A0)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDINVENTORYOFFSETX_OFFSET UNITYSDK_OFFSET(0x1C9B170)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDINVENTORYOFFSETY_OFFSET UNITYSDK_OFFSET(0x1C9B140)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDINVENTORYOFFSETZ_OFFSET UNITYSDK_OFFSET(0x1C9B110)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDINTERACTIONCHAR_OFFSET UNITYSDK_OFFSET(0x1C9AE40)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDCHARACTERINTERACTIONSTARTDELAY_OFFSET UNITYSDK_OFFSET(0x1C9AE10)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDGETONSTARTEFFECTPATH_OFFSET UNITYSDK_OFFSET(0x1C9B0E0)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDGETONENDEFFECTPATH_OFFSET UNITYSDK_OFFSET(0x1C9B0B0)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDSUMMONERCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1C9ADE0)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDINTERACTIONFRAME_OFFSET UNITYSDK_OFFSET(0x1C9B080)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDTSAINTERACTIONADDDURATION_OFFSET UNITYSDK_OFFSET(0x1C9ADB0)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDINTERACTIONSTUDENTEXSKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x1C9B050)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDINTERACTIONSKILLCARDTEXTURE_OFFSET UNITYSDK_OFFSET(0x1C9B020)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDINTERACTIONSKILLSPINE_OFFSET UNITYSDK_OFFSET(0x1C9AFF0)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDRETREATFRAME_OFFSET UNITYSDK_OFFSET(0x1C9AFC0)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDDESTROYFRAME_OFFSET UNITYSDK_OFFSET(0x1C9AF90)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ENDTACTICALSUPPORTSYSTEMEXCEL_OFFSET UNITYSDK_OFFSET(0x1C9B2C0)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_FINISHTACTICALSUPPORTSYSTEMEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C9B330)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_FINISHSIZEPREFIXEDTACTICALSUPPORTSYSTEMEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C9B350)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int TacticalSupportSystemExcel_TypeDefinitionIndex = 19565;

	class TacticalSupportSystemExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::TacticalSupportSystemExcel* GetRootAsTacticalSupportSystemExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::TacticalSupportSystemExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GETROOTASTACTICALSUPPORTSYSTEMEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::TacticalSupportSystemExcel* GetRootAsTacticalSupportSystemExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::TacticalSupportSystemExcel* arg)
		{
			return (return (::MX::Data::Excel::TacticalSupportSystemExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::TacticalSupportSystemExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GETROOTASTACTICALSUPPORTSYSTEMEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::TacticalSupportSystemExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::TacticalSupportSystemExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_SummonedTime()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_SUMMONEDTIME_OFFSET))(nullptr);
		}

		::System::Int64 get_DefaultPersonalityId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_DEFAULTPERSONALITYID_OFFSET))(nullptr);
		}

		::System::Boolean get_CanTargeting()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_CANTARGETING_OFFSET))(nullptr);
		}

		::System::Boolean get_CanCover()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_CANCOVER_OFFSET))(nullptr);
		}

		::System::String* get_ObstacleUniqueName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_OBSTACLEUNIQUENAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetObstacleUniqueNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GETOBSTACLEUNIQUENAMEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_ObstacleCoverRange()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_OBSTACLECOVERRANGE_OFFSET))(nullptr);
		}

		::System::String* get_SummonSkilllGroupId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_SUMMONSKILLLGROUPID_OFFSET))(nullptr);
		}

		Il2CppObject* GetSummonSkilllGroupIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GETSUMMONSKILLLGROUPIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_CrashObstacleOBBWidth()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_CRASHOBSTACLEOBBWIDTH_OFFSET))(nullptr);
		}

		::System::Int64 get_CrashObstacleOBBHeight()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_CRASHOBSTACLEOBBHEIGHT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsTSSBlockedNodeCheck()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_ISTSSBLOCKEDNODECHECK_OFFSET))(nullptr);
		}

		::System::Int32 get_NumberOfUses()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_NUMBEROFUSES_OFFSET))(nullptr);
		}

		::System::Single get_InventoryOffsetX()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_INVENTORYOFFSETX_OFFSET))(nullptr);
		}

		::System::Single get_InventoryOffsetY()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_INVENTORYOFFSETY_OFFSET))(nullptr);
		}

		::System::Single get_InventoryOffsetZ()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_INVENTORYOFFSETZ_OFFSET))(nullptr);
		}

		::System::Int64 get_InteractionChar()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_INTERACTIONCHAR_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterInteractionStartDelay()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_CHARACTERINTERACTIONSTARTDELAY_OFFSET))(nullptr);
		}

		::System::String* get_GetOnStartEffectPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_GETONSTARTEFFECTPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetGetOnStartEffectPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GETGETONSTARTEFFECTPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_GetOnEndEffectPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_GETONENDEFFECTPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetGetOnEndEffectPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GETGETONENDEFFECTPATHBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_SummonerCharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_SUMMONERCHARACTERID_OFFSET))(nullptr);
		}

		::System::Int32 get_InteractionFrame()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_INTERACTIONFRAME_OFFSET))(nullptr);
		}

		::System::Int64 get_TSAInteractionAddDuration()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_TSAINTERACTIONADDDURATION_OFFSET))(nullptr);
		}

		::System::String* get_InteractionStudentExSkillGroupId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_INTERACTIONSTUDENTEXSKILLGROUPID_OFFSET))(nullptr);
		}

		Il2CppObject* GetInteractionStudentExSkillGroupIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GETINTERACTIONSTUDENTEXSKILLGROUPIDBYTES_OFFSET))(nullptr);
		}

		::System::String* get_InteractionSkillCardTexture()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_INTERACTIONSKILLCARDTEXTURE_OFFSET))(nullptr);
		}

		Il2CppObject* GetInteractionSkillCardTextureBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GETINTERACTIONSKILLCARDTEXTUREBYTES_OFFSET))(nullptr);
		}

		::System::String* get_InteractionSkillSpine()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_INTERACTIONSKILLSPINE_OFFSET))(nullptr);
		}

		Il2CppObject* GetInteractionSkillSpineBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GETINTERACTIONSKILLSPINEBYTES_OFFSET))(nullptr);
		}

		::System::Int32 get_RetreatFrame()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_RETREATFRAME_OFFSET))(nullptr);
		}

		::System::Int32 get_DestroyFrame()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_GET_DESTROYFRAME_OFFSET))(nullptr);
		}

		Il2CppObject* CreateTacticalSupportSystemExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg, ::System::Boolean arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg, ::System::Int32 arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Boolean, ::System::Boolean, ::FlatBuffers::StringOffset*, ::System::Int64, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::Int64, ::System::Boolean, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::Int32, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_CREATETACTICALSUPPORTSYSTEMEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartTacticalSupportSystemExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_STARTTACTICALSUPPORTSYSTEMEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSummonedTime(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDSUMMONEDTIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDefaultPersonalityId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDDEFAULTPERSONALITYID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCanTargeting(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDCANTARGETING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCanCover(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDCANCOVER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddObstacleUniqueName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDOBSTACLEUNIQUENAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddObstacleCoverRange(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDOBSTACLECOVERRANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSummonSkilllGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDSUMMONSKILLLGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCrashObstacleOBBWidth(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDCRASHOBSTACLEOBBWIDTH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCrashObstacleOBBHeight(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDCRASHOBSTACLEOBBHEIGHT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsTSSBlockedNodeCheck(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDISTSSBLOCKEDNODECHECK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNumberOfUses(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDNUMBEROFUSES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddInventoryOffsetX(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDINVENTORYOFFSETX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddInventoryOffsetY(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDINVENTORYOFFSETY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddInventoryOffsetZ(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDINVENTORYOFFSETZ_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddInteractionChar(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDINTERACTIONCHAR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCharacterInteractionStartDelay(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDCHARACTERINTERACTIONSTARTDELAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGetOnStartEffectPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDGETONSTARTEFFECTPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGetOnEndEffectPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDGETONENDEFFECTPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSummonerCharacterId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDSUMMONERCHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddInteractionFrame(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDINTERACTIONFRAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTSAInteractionAddDuration(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDTSAINTERACTIONADDDURATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddInteractionStudentExSkillGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDINTERACTIONSTUDENTEXSKILLGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddInteractionSkillCardTexture(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDINTERACTIONSKILLCARDTEXTURE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddInteractionSkillSpine(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDINTERACTIONSKILLSPINE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRetreatFrame(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDRETREATFRAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDestroyFrame(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ADDDESTROYFRAME_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndTacticalSupportSystemExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_ENDTACTICALSUPPORTSYSTEMEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishTacticalSupportSystemExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_FINISHTACTICALSUPPORTSYSTEMEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedTacticalSupportSystemExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCEL_FINISHSIZEPREFIXEDTACTICALSUPPORTSYSTEMEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

