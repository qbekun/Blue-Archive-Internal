#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class SkillExcel; }
namespace FlatData { class BulletType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_SKILLEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C87C40)
#define MX_DATA_EXCEL_SKILLEXCEL_GETROOTASSKILLEXCEL_OFFSET UNITYSDK_OFFSET(0x1C87C50)
#define MX_DATA_EXCEL_SKILLEXCEL_GETROOTASSKILLEXCEL_OFFSET UNITYSDK_OFFSET(0x1C87CB0)
#define MX_DATA_EXCEL_SKILLEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C87D40)
#define MX_DATA_EXCEL_SKILLEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C87D10)
#define MX_DATA_EXCEL_SKILLEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C87D60)
#define MX_DATA_EXCEL_SKILLEXCEL_GET_LOCALIZESKILLID_OFFSET UNITYSDK_OFFSET(0x1C87DB0)
#define MX_DATA_EXCEL_SKILLEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1C87E00)
#define MX_DATA_EXCEL_SKILLEXCEL_GETGROUPIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C87E40)
#define MX_DATA_EXCEL_SKILLEXCEL_GET_SKILLDATAKEY_OFFSET UNITYSDK_OFFSET(0x1C87E60)
#define MX_DATA_EXCEL_SKILLEXCEL_GETSKILLDATAKEYBYTES_OFFSET UNITYSDK_OFFSET(0x1C87EA0)
#define MX_DATA_EXCEL_SKILLEXCEL_GET_VISUALDATAKEY_OFFSET UNITYSDK_OFFSET(0x1C87EC0)
#define MX_DATA_EXCEL_SKILLEXCEL_GETVISUALDATAKEYBYTES_OFFSET UNITYSDK_OFFSET(0x1C87F00)
#define MX_DATA_EXCEL_SKILLEXCEL_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1C87F20)
#define MX_DATA_EXCEL_SKILLEXCEL_GET_SKILLCOST_OFFSET UNITYSDK_OFFSET(0x1C87F70)
#define MX_DATA_EXCEL_SKILLEXCEL_GET_EXTRASKILLCOST_OFFSET UNITYSDK_OFFSET(0x1C87FC0)
#define MX_DATA_EXCEL_SKILLEXCEL_GET_ENEMYSKILLCOST_OFFSET UNITYSDK_OFFSET(0x1C88010)
#define MX_DATA_EXCEL_SKILLEXCEL_GET_EXTRAENEMYSKILLCOST_OFFSET UNITYSDK_OFFSET(0x1C88060)
#define MX_DATA_EXCEL_SKILLEXCEL_GET_NPCSKILLCOST_OFFSET UNITYSDK_OFFSET(0x1C880B0)
#define MX_DATA_EXCEL_SKILLEXCEL_GET_EXTRANPCSKILLCOST_OFFSET UNITYSDK_OFFSET(0x1C88100)
#define MX_DATA_EXCEL_SKILLEXCEL_GET_BULLETTYPE_OFFSET UNITYSDK_OFFSET(0x1C88150)
#define MX_DATA_EXCEL_SKILLEXCEL_GET_STARTCOOLTIME_OFFSET UNITYSDK_OFFSET(0x1C881A0)
#define MX_DATA_EXCEL_SKILLEXCEL_GET_COOLTIME_OFFSET UNITYSDK_OFFSET(0x1C881F0)
#define MX_DATA_EXCEL_SKILLEXCEL_GET_ENEMYSTARTCOOLTIME_OFFSET UNITYSDK_OFFSET(0x1C88240)
#define MX_DATA_EXCEL_SKILLEXCEL_GET_ENEMYCOOLTIME_OFFSET UNITYSDK_OFFSET(0x1C88290)
#define MX_DATA_EXCEL_SKILLEXCEL_GET_NPCSTARTCOOLTIME_OFFSET UNITYSDK_OFFSET(0x1C882E0)
#define MX_DATA_EXCEL_SKILLEXCEL_GET_NPCCOOLTIME_OFFSET UNITYSDK_OFFSET(0x1C88330)
#define MX_DATA_EXCEL_SKILLEXCEL_GET_USEATG_OFFSET UNITYSDK_OFFSET(0x1C88380)
#define MX_DATA_EXCEL_SKILLEXCEL_GET_REQUIRECHARACTERLEVEL_OFFSET UNITYSDK_OFFSET(0x1C883D0)
#define MX_DATA_EXCEL_SKILLEXCEL_GET_REQUIRELEVELUPMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C88420)
#define MX_DATA_EXCEL_SKILLEXCEL_GET_ICONNAME_OFFSET UNITYSDK_OFFSET(0x1C88470)
#define MX_DATA_EXCEL_SKILLEXCEL_GETICONNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1C884B0)
#define MX_DATA_EXCEL_SKILLEXCEL_GET_ISSHOWINFO_OFFSET UNITYSDK_OFFSET(0x1C884D0)
#define MX_DATA_EXCEL_SKILLEXCEL_GET_ISSHOWSPEECHBUBBLE_OFFSET UNITYSDK_OFFSET(0x1C88520)
#define MX_DATA_EXCEL_SKILLEXCEL_GET_PUBLICSPEECHDURATION_OFFSET UNITYSDK_OFFSET(0x1C88570)
#define MX_DATA_EXCEL_SKILLEXCEL_GET_ADDITIONALTOOLTIPID_OFFSET UNITYSDK_OFFSET(0x1C885C0)
#define MX_DATA_EXCEL_SKILLEXCEL_GET_SELECTEXSKILLTOOLTIPID_OFFSET UNITYSDK_OFFSET(0x1C88610)
#define MX_DATA_EXCEL_SKILLEXCEL_GET_TEXTURESKILLCARDFORFORMCONVERSION_OFFSET UNITYSDK_OFFSET(0x1C88660)
#define MX_DATA_EXCEL_SKILLEXCEL_GETTEXTURESKILLCARDFORFORMCONVERSIONBYTES_OFFSET UNITYSDK_OFFSET(0x1C886A0)
#define MX_DATA_EXCEL_SKILLEXCEL_GET_SKILLCARDLABELPATH_OFFSET UNITYSDK_OFFSET(0x1C886C0)
#define MX_DATA_EXCEL_SKILLEXCEL_GETSKILLCARDLABELPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1C88700)
#define MX_DATA_EXCEL_SKILLEXCEL_CREATESKILLEXCEL_OFFSET UNITYSDK_OFFSET(0x1C88720)
#define MX_DATA_EXCEL_SKILLEXCEL_STARTSKILLEXCEL_OFFSET UNITYSDK_OFFSET(0x1C89230)
#define MX_DATA_EXCEL_SKILLEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1C88CD0)
#define MX_DATA_EXCEL_SKILLEXCEL_ADDLOCALIZESKILLID_OFFSET UNITYSDK_OFFSET(0x1C89150)
#define MX_DATA_EXCEL_SKILLEXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0x1C89120)
#define MX_DATA_EXCEL_SKILLEXCEL_ADDSKILLDATAKEY_OFFSET UNITYSDK_OFFSET(0x1C890F0)
#define MX_DATA_EXCEL_SKILLEXCEL_ADDVISUALDATAKEY_OFFSET UNITYSDK_OFFSET(0x1C890C0)
#define MX_DATA_EXCEL_SKILLEXCEL_ADDLEVEL_OFFSET UNITYSDK_OFFSET(0x1C89090)
#define MX_DATA_EXCEL_SKILLEXCEL_ADDSKILLCOST_OFFSET UNITYSDK_OFFSET(0x1C89060)
#define MX_DATA_EXCEL_SKILLEXCEL_ADDEXTRASKILLCOST_OFFSET UNITYSDK_OFFSET(0x1C89030)
#define MX_DATA_EXCEL_SKILLEXCEL_ADDENEMYSKILLCOST_OFFSET UNITYSDK_OFFSET(0x1C89000)
#define MX_DATA_EXCEL_SKILLEXCEL_ADDEXTRAENEMYSKILLCOST_OFFSET UNITYSDK_OFFSET(0x1C88FD0)
#define MX_DATA_EXCEL_SKILLEXCEL_ADDNPCSKILLCOST_OFFSET UNITYSDK_OFFSET(0x1C88FA0)
#define MX_DATA_EXCEL_SKILLEXCEL_ADDEXTRANPCSKILLCOST_OFFSET UNITYSDK_OFFSET(0x1C88F70)
#define MX_DATA_EXCEL_SKILLEXCEL_ADDBULLETTYPE_OFFSET UNITYSDK_OFFSET(0x1C88F40)
#define MX_DATA_EXCEL_SKILLEXCEL_ADDSTARTCOOLTIME_OFFSET UNITYSDK_OFFSET(0x1C88F10)
#define MX_DATA_EXCEL_SKILLEXCEL_ADDCOOLTIME_OFFSET UNITYSDK_OFFSET(0x1C88EE0)
#define MX_DATA_EXCEL_SKILLEXCEL_ADDENEMYSTARTCOOLTIME_OFFSET UNITYSDK_OFFSET(0x1C88EB0)
#define MX_DATA_EXCEL_SKILLEXCEL_ADDENEMYCOOLTIME_OFFSET UNITYSDK_OFFSET(0x1C88E80)
#define MX_DATA_EXCEL_SKILLEXCEL_ADDNPCSTARTCOOLTIME_OFFSET UNITYSDK_OFFSET(0x1C88E50)
#define MX_DATA_EXCEL_SKILLEXCEL_ADDNPCCOOLTIME_OFFSET UNITYSDK_OFFSET(0x1C88E20)
#define MX_DATA_EXCEL_SKILLEXCEL_ADDUSEATG_OFFSET UNITYSDK_OFFSET(0x1C88DF0)
#define MX_DATA_EXCEL_SKILLEXCEL_ADDREQUIRECHARACTERLEVEL_OFFSET UNITYSDK_OFFSET(0x1C88DC0)
#define MX_DATA_EXCEL_SKILLEXCEL_ADDREQUIRELEVELUPMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C88CA0)
#define MX_DATA_EXCEL_SKILLEXCEL_ADDICONNAME_OFFSET UNITYSDK_OFFSET(0x1C88D90)
#define MX_DATA_EXCEL_SKILLEXCEL_ADDISSHOWINFO_OFFSET UNITYSDK_OFFSET(0x1C891B0)
#define MX_DATA_EXCEL_SKILLEXCEL_ADDISSHOWSPEECHBUBBLE_OFFSET UNITYSDK_OFFSET(0x1C89180)
#define MX_DATA_EXCEL_SKILLEXCEL_ADDPUBLICSPEECHDURATION_OFFSET UNITYSDK_OFFSET(0x1C88D60)
#define MX_DATA_EXCEL_SKILLEXCEL_ADDADDITIONALTOOLTIPID_OFFSET UNITYSDK_OFFSET(0x1C88C70)
#define MX_DATA_EXCEL_SKILLEXCEL_ADDSELECTEXSKILLTOOLTIPID_OFFSET UNITYSDK_OFFSET(0x1C88C40)
#define MX_DATA_EXCEL_SKILLEXCEL_ADDTEXTURESKILLCARDFORFORMCONVERSION_OFFSET UNITYSDK_OFFSET(0x1C88D30)
#define MX_DATA_EXCEL_SKILLEXCEL_ADDSKILLCARDLABELPATH_OFFSET UNITYSDK_OFFSET(0x1C88D00)
#define MX_DATA_EXCEL_SKILLEXCEL_ENDSKILLEXCEL_OFFSET UNITYSDK_OFFSET(0x1C891E0)
#define MX_DATA_EXCEL_SKILLEXCEL_FINISHSKILLEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C89250)
#define MX_DATA_EXCEL_SKILLEXCEL_FINISHSIZEPREFIXEDSKILLEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C89270)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int SkillExcel_TypeDefinitionIndex = 19471;

	class SkillExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::SkillExcel* GetRootAsSkillExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::SkillExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_GETROOTASSKILLEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::SkillExcel* GetRootAsSkillExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::SkillExcel* arg)
		{
			return (return (::MX::Data::Excel::SkillExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::SkillExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_GETROOTASSKILLEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::SkillExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::SkillExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeSkillId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_GET_LOCALIZESKILLID_OFFSET))(nullptr);
		}

		::System::String* get_GroupId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		Il2CppObject* GetGroupIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_GETGROUPIDBYTES_OFFSET))(nullptr);
		}

		::System::String* get_SkillDataKey()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_GET_SKILLDATAKEY_OFFSET))(nullptr);
		}

		Il2CppObject* GetSkillDataKeyBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_GETSKILLDATAKEYBYTES_OFFSET))(nullptr);
		}

		::System::String* get_VisualDataKey()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_GET_VISUALDATAKEY_OFFSET))(nullptr);
		}

		Il2CppObject* GetVisualDataKeyBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_GETVISUALDATAKEYBYTES_OFFSET))(nullptr);
		}

		::System::Int32 get_Level()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_SkillCost()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_GET_SKILLCOST_OFFSET))(nullptr);
		}

		::System::Int32 get_ExtraSkillCost()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_GET_EXTRASKILLCOST_OFFSET))(nullptr);
		}

		::System::Int32 get_EnemySkillCost()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_GET_ENEMYSKILLCOST_OFFSET))(nullptr);
		}

		::System::Int32 get_ExtraEnemySkillCost()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_GET_EXTRAENEMYSKILLCOST_OFFSET))(nullptr);
		}

		::System::Int32 get_NPCSkillCost()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_GET_NPCSKILLCOST_OFFSET))(nullptr);
		}

		::System::Int32 get_ExtraNPCSkillCost()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_GET_EXTRANPCSKILLCOST_OFFSET))(nullptr);
		}

		::FlatData::BulletType* get_BulletType()
		{
			return (return (::FlatData::BulletType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_GET_BULLETTYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_StartCoolTime()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_GET_STARTCOOLTIME_OFFSET))(nullptr);
		}

		::System::Int32 get_CoolTime()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_GET_COOLTIME_OFFSET))(nullptr);
		}

		::System::Int32 get_EnemyStartCoolTime()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_GET_ENEMYSTARTCOOLTIME_OFFSET))(nullptr);
		}

		::System::Int32 get_EnemyCoolTime()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_GET_ENEMYCOOLTIME_OFFSET))(nullptr);
		}

		::System::Int32 get_NPCStartCoolTime()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_GET_NPCSTARTCOOLTIME_OFFSET))(nullptr);
		}

		::System::Int32 get_NPCCoolTime()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_GET_NPCCOOLTIME_OFFSET))(nullptr);
		}

		::System::Int32 get_UseAtg()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_GET_USEATG_OFFSET))(nullptr);
		}

		::System::Int32 get_RequireCharacterLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_GET_REQUIRECHARACTERLEVEL_OFFSET))(nullptr);
		}

		::System::Int64 get_RequireLevelUpMaterial()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_GET_REQUIRELEVELUPMATERIAL_OFFSET))(nullptr);
		}

		::System::String* get_IconName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_GET_ICONNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetIconNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_GETICONNAMEBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_IsShowInfo()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_GET_ISSHOWINFO_OFFSET))(nullptr);
		}

		::System::Boolean get_IsShowSpeechbubble()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_GET_ISSHOWSPEECHBUBBLE_OFFSET))(nullptr);
		}

		::System::Int32 get_PublicSpeechDuration()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_GET_PUBLICSPEECHDURATION_OFFSET))(nullptr);
		}

		::System::Int64 get_AdditionalToolTipId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_GET_ADDITIONALTOOLTIPID_OFFSET))(nullptr);
		}

		::System::Int64 get_SelectExSkillToolTipId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_GET_SELECTEXSKILLTOOLTIPID_OFFSET))(nullptr);
		}

		::System::String* get_TextureSkillCardForFormConversion()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_GET_TEXTURESKILLCARDFORFORMCONVERSION_OFFSET))(nullptr);
		}

		Il2CppObject* GetTextureSkillCardForFormConversionBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_GETTEXTURESKILLCARDFORFORMCONVERSIONBYTES_OFFSET))(nullptr);
		}

		::System::String* get_SkillCardLabelPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_GET_SKILLCARDLABELPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetSkillCardLabelPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_GETSKILLCARDLABELPATHBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateSkillExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::UInt32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::FlatData::BulletType* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Int32 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::UInt32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::FlatData::BulletType*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int64, ::FlatBuffers::StringOffset*, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_CREATESKILLEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartSkillExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_STARTSKILLEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeSkillId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_ADDLOCALIZESKILLID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_ADDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSkillDataKey(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_ADDSKILLDATAKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVisualDataKey(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_ADDVISUALDATAKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_ADDLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSkillCost(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_ADDSKILLCOST_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExtraSkillCost(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_ADDEXTRASKILLCOST_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnemySkillCost(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_ADDENEMYSKILLCOST_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExtraEnemySkillCost(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_ADDEXTRAENEMYSKILLCOST_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNPCSkillCost(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_ADDNPCSKILLCOST_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExtraNPCSkillCost(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_ADDEXTRANPCSKILLCOST_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBulletType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::BulletType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::BulletType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_ADDBULLETTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStartCoolTime(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_ADDSTARTCOOLTIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCoolTime(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_ADDCOOLTIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnemyStartCoolTime(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_ADDENEMYSTARTCOOLTIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnemyCoolTime(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_ADDENEMYCOOLTIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNPCStartCoolTime(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_ADDNPCSTARTCOOLTIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNPCCoolTime(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_ADDNPCCOOLTIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUseAtg(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_ADDUSEATG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRequireCharacterLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_ADDREQUIRECHARACTERLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRequireLevelUpMaterial(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_ADDREQUIRELEVELUPMATERIAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIconName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_ADDICONNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsShowInfo(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_ADDISSHOWINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsShowSpeechbubble(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_ADDISSHOWSPEECHBUBBLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPublicSpeechDuration(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_ADDPUBLICSPEECHDURATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAdditionalToolTipId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_ADDADDITIONALTOOLTIPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSelectExSkillToolTipId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_ADDSELECTEXSKILLTOOLTIPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTextureSkillCardForFormConversion(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_ADDTEXTURESKILLCARDFORFORMCONVERSION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSkillCardLabelPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_ADDSKILLCARDLABELPATH_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndSkillExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_ENDSKILLEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishSkillExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_FINISHSKILLEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedSkillExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLEXCEL_FINISHSIZEPREFIXEDSKILLEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

