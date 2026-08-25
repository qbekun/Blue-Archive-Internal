#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class CharacterSkillListExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A33940)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_GETROOTASCHARACTERSKILLLISTEXCEL_OFFSET UNITYSDK_OFFSET(0x1A33950)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_GETROOTASCHARACTERSKILLLISTEXCEL_OFFSET UNITYSDK_OFFSET(0x1A339B0)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A33A40)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A33A10)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_GET_CHARACTERSKILLLISTGROUPID_OFFSET UNITYSDK_OFFSET(0x1A33A60)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_GET_MINIMUMGRADECHARACTERWEAPON_OFFSET UNITYSDK_OFFSET(0x1A33AB0)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_GET_MINIMUMTIERCHARACTERGEAR_OFFSET UNITYSDK_OFFSET(0x1A33B00)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_GET_FORMINDEX_OFFSET UNITYSDK_OFFSET(0x1A33B50)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_GET_ISROOTMOTION_OFFSET UNITYSDK_OFFSET(0x1A33BA0)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_GET_ISMOVELEFTRIGHT_OFFSET UNITYSDK_OFFSET(0x1A33BF0)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_GET_USERANDOMEXSKILLTIMELINE_OFFSET UNITYSDK_OFFSET(0x1A33C40)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_GET_TSAINTERACTIONID_OFFSET UNITYSDK_OFFSET(0x1A33C90)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_NORMALSKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x1A33CE0)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_GET_NORMALSKILLGROUPIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1A33D30)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_NORMALSKILLTIMELINEINDEX_OFFSET UNITYSDK_OFFSET(0x1A33D70)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_GET_NORMALSKILLTIMELINEINDEXLENGTH_OFFSET UNITYSDK_OFFSET(0x1A33DD0)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_GETNORMALSKILLTIMELINEINDEXBYTES_OFFSET UNITYSDK_OFFSET(0x1A33E10)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_GET_SELECTEXSKILLACTIONSKILLSLOT_OFFSET UNITYSDK_OFFSET(0x1A33E30)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_EXSKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x1A33E80)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_GET_EXSKILLGROUPIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1A33ED0)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_EXSKILLCUTINTIMELINEINDEX_OFFSET UNITYSDK_OFFSET(0x1A33F10)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_GET_EXSKILLCUTINTIMELINEINDEXLENGTH_OFFSET UNITYSDK_OFFSET(0x1A33F60)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_EXSKILLLEVELTIMELINEINDEX_OFFSET UNITYSDK_OFFSET(0x1A33FA0)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_GET_EXSKILLLEVELTIMELINEINDEXLENGTH_OFFSET UNITYSDK_OFFSET(0x1A33FF0)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_PUBLICSKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x1A34030)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_GET_PUBLICSKILLGROUPIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1A34080)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_PUBLICSKILLTIMELINEINDEX_OFFSET UNITYSDK_OFFSET(0x1A340C0)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_GET_PUBLICSKILLTIMELINEINDEXLENGTH_OFFSET UNITYSDK_OFFSET(0x1A34120)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_GETPUBLICSKILLTIMELINEINDEXBYTES_OFFSET UNITYSDK_OFFSET(0x1A34160)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_PASSIVESKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x1A34180)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_GET_PASSIVESKILLGROUPIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1A341D0)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_LEADERSKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x1A34210)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_GET_LEADERSKILLGROUPIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1A34260)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_EXTRAPASSIVESKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x1A342A0)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_GET_EXTRAPASSIVESKILLGROUPIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1A342F0)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_HIDDENPASSIVESKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x1A34330)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_GET_HIDDENPASSIVESKILLGROUPIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1A34380)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_CREATECHARACTERSKILLLISTEXCEL_OFFSET UNITYSDK_OFFSET(0x1A343C0)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_STARTCHARACTERSKILLLISTEXCEL_OFFSET UNITYSDK_OFFSET(0x1A34B40)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_ADDCHARACTERSKILLLISTGROUPID_OFFSET UNITYSDK_OFFSET(0x1A34760)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_ADDMINIMUMGRADECHARACTERWEAPON_OFFSET UNITYSDK_OFFSET(0x1A34A30)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_ADDMINIMUMTIERCHARACTERGEAR_OFFSET UNITYSDK_OFFSET(0x1A34A00)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_ADDFORMINDEX_OFFSET UNITYSDK_OFFSET(0x1A349D0)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_ADDISROOTMOTION_OFFSET UNITYSDK_OFFSET(0x1A34AC0)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_ADDISMOVELEFTRIGHT_OFFSET UNITYSDK_OFFSET(0x1A34A90)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_ADDUSERANDOMEXSKILLTIMELINE_OFFSET UNITYSDK_OFFSET(0x1A34A60)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_ADDTSAINTERACTIONID_OFFSET UNITYSDK_OFFSET(0x1A34730)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_ADDNORMALSKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x1A349A0)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_CREATENORMALSKILLGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A34B60)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_STARTNORMALSKILLGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A34BF0)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_ADDNORMALSKILLTIMELINEINDEX_OFFSET UNITYSDK_OFFSET(0x1A34970)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_CREATENORMALSKILLTIMELINEINDEXVECTOR_OFFSET UNITYSDK_OFFSET(0x1A34C30)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_STARTNORMALSKILLTIMELINEINDEXVECTOR_OFFSET UNITYSDK_OFFSET(0x1A34CC0)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_ADDSELECTEXSKILLACTIONSKILLSLOT_OFFSET UNITYSDK_OFFSET(0x1A34940)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_ADDEXSKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x1A34910)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_CREATEEXSKILLGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A34D00)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_STARTEXSKILLGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A34D90)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_ADDEXSKILLCUTINTIMELINEINDEX_OFFSET UNITYSDK_OFFSET(0x1A348E0)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_CREATEEXSKILLCUTINTIMELINEINDEXVECTOR_OFFSET UNITYSDK_OFFSET(0x1A34DD0)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_STARTEXSKILLCUTINTIMELINEINDEXVECTOR_OFFSET UNITYSDK_OFFSET(0x1A34E60)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_ADDEXSKILLLEVELTIMELINEINDEX_OFFSET UNITYSDK_OFFSET(0x1A348B0)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_CREATEEXSKILLLEVELTIMELINEINDEXVECTOR_OFFSET UNITYSDK_OFFSET(0x1A34EA0)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_STARTEXSKILLLEVELTIMELINEINDEXVECTOR_OFFSET UNITYSDK_OFFSET(0x1A34F30)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_ADDPUBLICSKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x1A34880)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_CREATEPUBLICSKILLGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A34F70)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_STARTPUBLICSKILLGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A35000)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_ADDPUBLICSKILLTIMELINEINDEX_OFFSET UNITYSDK_OFFSET(0x1A34850)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_CREATEPUBLICSKILLTIMELINEINDEXVECTOR_OFFSET UNITYSDK_OFFSET(0x1A35040)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_STARTPUBLICSKILLTIMELINEINDEXVECTOR_OFFSET UNITYSDK_OFFSET(0x1A350D0)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_ADDPASSIVESKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x1A34820)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_CREATEPASSIVESKILLGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A35110)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_STARTPASSIVESKILLGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A351A0)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_ADDLEADERSKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x1A347F0)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_CREATELEADERSKILLGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A351E0)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_STARTLEADERSKILLGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A35270)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_ADDEXTRAPASSIVESKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x1A347C0)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_CREATEEXTRAPASSIVESKILLGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A352B0)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_STARTEXTRAPASSIVESKILLGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A35340)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_ADDHIDDENPASSIVESKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x1A34790)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_CREATEHIDDENPASSIVESKILLGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A35380)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_STARTHIDDENPASSIVESKILLGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A35410)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_ENDCHARACTERSKILLLISTEXCEL_OFFSET UNITYSDK_OFFSET(0x1A34AF0)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_FINISHCHARACTERSKILLLISTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A35450)
#define MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_FINISHSIZEPREFIXEDCHARACTERSKILLLISTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A35470)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterSkillListExcel_TypeDefinitionIndex = 17075;

	class CharacterSkillListExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CharacterSkillListExcel* GetRootAsCharacterSkillListExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterSkillListExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_GETROOTASCHARACTERSKILLLISTEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CharacterSkillListExcel* GetRootAsCharacterSkillListExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::CharacterSkillListExcel* arg)
		{
			return (return (::MX::Data::Excel::CharacterSkillListExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::CharacterSkillListExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_GETROOTASCHARACTERSKILLLISTEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::CharacterSkillListExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterSkillListExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_CharacterSkillListGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_GET_CHARACTERSKILLLISTGROUPID_OFFSET))(nullptr);
		}

		::System::Int32 get_MinimumGradeCharacterWeapon()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_GET_MINIMUMGRADECHARACTERWEAPON_OFFSET))(nullptr);
		}

		::System::Int32 get_MinimumTierCharacterGear()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_GET_MINIMUMTIERCHARACTERGEAR_OFFSET))(nullptr);
		}

		::System::Int32 get_FormIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_GET_FORMINDEX_OFFSET))(nullptr);
		}

		::System::Boolean get_IsRootMotion()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_GET_ISROOTMOTION_OFFSET))(nullptr);
		}

		::System::Boolean get_IsMoveLeftRight()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_GET_ISMOVELEFTRIGHT_OFFSET))(nullptr);
		}

		::System::Boolean get_UseRandomExSkillTimeline()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_GET_USERANDOMEXSKILLTIMELINE_OFFSET))(nullptr);
		}

		::System::Int64 get_TSAInteractionId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_GET_TSAINTERACTIONID_OFFSET))(nullptr);
		}

		::System::String* NormalSkillGroupId(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_NORMALSKILLGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_NormalSkillGroupIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_GET_NORMALSKILLGROUPIDLENGTH_OFFSET))(nullptr);
		}

		::System::Int32 NormalSkillTimeLineIndex(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_NORMALSKILLTIMELINEINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_NormalSkillTimeLineIndexLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_GET_NORMALSKILLTIMELINEINDEXLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetNormalSkillTimeLineIndexBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_GETNORMALSKILLTIMELINEINDEXBYTES_OFFSET))(nullptr);
		}

		::System::Int32 get_SelectExSkillActionSkillSlot()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_GET_SELECTEXSKILLACTIONSKILLSLOT_OFFSET))(nullptr);
		}

		::System::String* ExSkillGroupId(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_EXSKILLGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ExSkillGroupIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_GET_EXSKILLGROUPIDLENGTH_OFFSET))(nullptr);
		}

		::System::String* ExSkillCutInTimeLineIndex(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_EXSKILLCUTINTIMELINEINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ExSkillCutInTimeLineIndexLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_GET_EXSKILLCUTINTIMELINEINDEXLENGTH_OFFSET))(nullptr);
		}

		::System::String* ExSkillLevelTimeLineIndex(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_EXSKILLLEVELTIMELINEINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ExSkillLevelTimeLineIndexLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_GET_EXSKILLLEVELTIMELINEINDEXLENGTH_OFFSET))(nullptr);
		}

		::System::String* PublicSkillGroupId(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_PUBLICSKILLGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PublicSkillGroupIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_GET_PUBLICSKILLGROUPIDLENGTH_OFFSET))(nullptr);
		}

		::System::Int32 PublicSkillTimeLineIndex(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_PUBLICSKILLTIMELINEINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PublicSkillTimeLineIndexLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_GET_PUBLICSKILLTIMELINEINDEXLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetPublicSkillTimeLineIndexBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_GETPUBLICSKILLTIMELINEINDEXBYTES_OFFSET))(nullptr);
		}

		::System::String* PassiveSkillGroupId(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_PASSIVESKILLGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PassiveSkillGroupIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_GET_PASSIVESKILLGROUPIDLENGTH_OFFSET))(nullptr);
		}

		::System::String* LeaderSkillGroupId(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_LEADERSKILLGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_LeaderSkillGroupIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_GET_LEADERSKILLGROUPIDLENGTH_OFFSET))(nullptr);
		}

		::System::String* ExtraPassiveSkillGroupId(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_EXTRAPASSIVESKILLGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ExtraPassiveSkillGroupIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_GET_EXTRAPASSIVESKILLGROUPIDLENGTH_OFFSET))(nullptr);
		}

		::System::String* HiddenPassiveSkillGroupId(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_HIDDENPASSIVESKILLGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_HiddenPassiveSkillGroupIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_GET_HIDDENPASSIVESKILLGROUPIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCharacterSkillListExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::System::Int32 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::System::Int32, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_CREATECHARACTERSKILLLISTEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartCharacterSkillListExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_STARTCHARACTERSKILLLISTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddCharacterSkillListGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_ADDCHARACTERSKILLLISTGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMinimumGradeCharacterWeapon(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_ADDMINIMUMGRADECHARACTERWEAPON_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMinimumTierCharacterGear(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_ADDMINIMUMTIERCHARACTERGEAR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFormIndex(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_ADDFORMINDEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsRootMotion(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_ADDISROOTMOTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsMoveLeftRight(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_ADDISMOVELEFTRIGHT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUseRandomExSkillTimeline(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_ADDUSERANDOMEXSKILLTIMELINE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTSAInteractionId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_ADDTSAINTERACTIONID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNormalSkillGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_ADDNORMALSKILLGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateNormalSkillGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_CREATENORMALSKILLGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartNormalSkillGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_STARTNORMALSKILLGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNormalSkillTimeLineIndex(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_ADDNORMALSKILLTIMELINEINDEX_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateNormalSkillTimeLineIndexVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_CREATENORMALSKILLTIMELINEINDEXVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartNormalSkillTimeLineIndexVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_STARTNORMALSKILLTIMELINEINDEXVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSelectExSkillActionSkillSlot(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_ADDSELECTEXSKILLACTIONSKILLSLOT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExSkillGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_ADDEXSKILLGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateExSkillGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_CREATEEXSKILLGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartExSkillGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_STARTEXSKILLGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExSkillCutInTimeLineIndex(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_ADDEXSKILLCUTINTIMELINEINDEX_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateExSkillCutInTimeLineIndexVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_CREATEEXSKILLCUTINTIMELINEINDEXVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartExSkillCutInTimeLineIndexVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_STARTEXSKILLCUTINTIMELINEINDEXVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExSkillLevelTimeLineIndex(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_ADDEXSKILLLEVELTIMELINEINDEX_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateExSkillLevelTimeLineIndexVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_CREATEEXSKILLLEVELTIMELINEINDEXVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartExSkillLevelTimeLineIndexVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_STARTEXSKILLLEVELTIMELINEINDEXVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPublicSkillGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_ADDPUBLICSKILLGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreatePublicSkillGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_CREATEPUBLICSKILLGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartPublicSkillGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_STARTPUBLICSKILLGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPublicSkillTimeLineIndex(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_ADDPUBLICSKILLTIMELINEINDEX_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreatePublicSkillTimeLineIndexVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_CREATEPUBLICSKILLTIMELINEINDEXVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartPublicSkillTimeLineIndexVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_STARTPUBLICSKILLTIMELINEINDEXVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPassiveSkillGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_ADDPASSIVESKILLGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreatePassiveSkillGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_CREATEPASSIVESKILLGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartPassiveSkillGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_STARTPASSIVESKILLGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLeaderSkillGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_ADDLEADERSKILLGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateLeaderSkillGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_CREATELEADERSKILLGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartLeaderSkillGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_STARTLEADERSKILLGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExtraPassiveSkillGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_ADDEXTRAPASSIVESKILLGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateExtraPassiveSkillGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_CREATEEXTRAPASSIVESKILLGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartExtraPassiveSkillGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_STARTEXTRAPASSIVESKILLGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddHiddenPassiveSkillGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_ADDHIDDENPASSIVESKILLGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateHiddenPassiveSkillGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_CREATEHIDDENPASSIVESKILLGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartHiddenPassiveSkillGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_STARTHIDDENPASSIVESKILLGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndCharacterSkillListExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_ENDCHARACTERSKILLLISTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishCharacterSkillListExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_FINISHCHARACTERSKILLLISTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedCharacterSkillListExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSKILLLISTEXCEL_FINISHSIZEPREFIXEDCHARACTERSKILLLISTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

