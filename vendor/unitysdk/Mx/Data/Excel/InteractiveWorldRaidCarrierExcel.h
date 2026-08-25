#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class InteractiveWorldRaidCarrierExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B55A60)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_GETROOTASINTERACTIVEWORLDRAIDCARRIEREXCEL_OFFSET UNITYSDK_OFFSET(0x1B55A70)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_GETROOTASINTERACTIVEWORLDRAIDCARRIEREXCEL_OFFSET UNITYSDK_OFFSET(0x1B55AD0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B55B60)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B55B30)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_GET_CARRIERSKILLLISTGROUPID_OFFSET UNITYSDK_OFFSET(0x1B55B80)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B55BD0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1B55C20)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_GET_CHARACTERLEVEL_OFFSET UNITYSDK_OFFSET(0x1B55C70)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_GET_CHARACTERGRADE_OFFSET UNITYSDK_OFFSET(0x1B55CC0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_EXSKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x1B55D10)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_GET_EXSKILLGROUPIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1B55D60)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_EXSKILLCARDTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B55DA0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_GET_EXSKILLCARDTEXTURELENGTH_OFFSET UNITYSDK_OFFSET(0x1B55DF0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_FIXEDEXSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x1B55E30)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_GET_FIXEDEXSKILLLEVELLENGTH_OFFSET UNITYSDK_OFFSET(0x1B55E90)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_GETFIXEDEXSKILLLEVELBYTES_OFFSET UNITYSDK_OFFSET(0x1B55ED0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_PASSIVESKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x1B55EF0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_GET_PASSIVESKILLGROUPIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1B55F40)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_PASSIVESKILLCARDTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B55F80)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_GET_PASSIVESKILLCARDTEXTURELENGTH_OFFSET UNITYSDK_OFFSET(0x1B55FD0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_FIXEDPASSIVESKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x1B56010)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_GET_FIXEDPASSIVESKILLLEVELLENGTH_OFFSET UNITYSDK_OFFSET(0x1B56070)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_GETFIXEDPASSIVESKILLLEVELBYTES_OFFSET UNITYSDK_OFFSET(0x1B560B0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_EXTRAPASSIVESKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x1B560D0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_GET_EXTRAPASSIVESKILLGROUPIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1B56120)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_EXTRAPASSIVESKILLCARDTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B56160)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_GET_EXTRAPASSIVESKILLCARDTEXTURELENGTH_OFFSET UNITYSDK_OFFSET(0x1B561B0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_FIXEDEXTRAPASSIVESKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x1B561F0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_GET_FIXEDEXTRAPASSIVESKILLLEVELLENGTH_OFFSET UNITYSDK_OFFSET(0x1B56250)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_GETFIXEDEXTRAPASSIVESKILLLEVELBYTES_OFFSET UNITYSDK_OFFSET(0x1B56290)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_HIDDENPASSIVESKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x1B562B0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_GET_HIDDENPASSIVESKILLGROUPIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1B56300)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_HIDDENPASSIVESKILLCARDTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B56340)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_GET_HIDDENPASSIVESKILLCARDTEXTURELENGTH_OFFSET UNITYSDK_OFFSET(0x1B56390)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_FIXEDHIDDENPASSIVESKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x1B563D0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_GET_FIXEDHIDDENPASSIVESKILLLEVELLENGTH_OFFSET UNITYSDK_OFFSET(0x1B56430)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_GETFIXEDHIDDENPASSIVESKILLLEVELBYTES_OFFSET UNITYSDK_OFFSET(0x1B56470)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_CREATEINTERACTIVEWORLDRAIDCARRIEREXCEL_OFFSET UNITYSDK_OFFSET(0x1B56490)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_STARTINTERACTIVEWORLDRAIDCARRIEREXCEL_OFFSET UNITYSDK_OFFSET(0x1B56B00)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_ADDCARRIERSKILLLISTGROUPID_OFFSET UNITYSDK_OFFSET(0x1B567E0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B567B0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_ADDCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1B56780)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_ADDCHARACTERLEVEL_OFFSET UNITYSDK_OFFSET(0x1B56A80)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_ADDCHARACTERGRADE_OFFSET UNITYSDK_OFFSET(0x1B56A50)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_ADDEXSKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x1B56A20)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_CREATEEXSKILLGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B56B20)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_STARTEXSKILLGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B56BB0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_ADDEXSKILLCARDTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B569F0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_CREATEEXSKILLCARDTEXTUREVECTOR_OFFSET UNITYSDK_OFFSET(0x1B56BF0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_STARTEXSKILLCARDTEXTUREVECTOR_OFFSET UNITYSDK_OFFSET(0x1B56C80)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_ADDFIXEDEXSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x1B569C0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_CREATEFIXEDEXSKILLLEVELVECTOR_OFFSET UNITYSDK_OFFSET(0x1B56CC0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_STARTFIXEDEXSKILLLEVELVECTOR_OFFSET UNITYSDK_OFFSET(0x1B56D50)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_ADDPASSIVESKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x1B56990)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_CREATEPASSIVESKILLGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B56D90)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_STARTPASSIVESKILLGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B56E20)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_ADDPASSIVESKILLCARDTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B56960)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_CREATEPASSIVESKILLCARDTEXTUREVECTOR_OFFSET UNITYSDK_OFFSET(0x1B56E60)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_STARTPASSIVESKILLCARDTEXTUREVECTOR_OFFSET UNITYSDK_OFFSET(0x1B56EF0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_ADDFIXEDPASSIVESKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x1B56930)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_CREATEFIXEDPASSIVESKILLLEVELVECTOR_OFFSET UNITYSDK_OFFSET(0x1B56F30)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_STARTFIXEDPASSIVESKILLLEVELVECTOR_OFFSET UNITYSDK_OFFSET(0x1B56FC0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_ADDEXTRAPASSIVESKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x1B56900)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_CREATEEXTRAPASSIVESKILLGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B57000)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_STARTEXTRAPASSIVESKILLGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B57090)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_ADDEXTRAPASSIVESKILLCARDTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B568D0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_CREATEEXTRAPASSIVESKILLCARDTEXTUREVECTOR_OFFSET UNITYSDK_OFFSET(0x1B570D0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_STARTEXTRAPASSIVESKILLCARDTEXTUREVECTOR_OFFSET UNITYSDK_OFFSET(0x1B57160)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_ADDFIXEDEXTRAPASSIVESKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x1B568A0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_CREATEFIXEDEXTRAPASSIVESKILLLEVELVECTOR_OFFSET UNITYSDK_OFFSET(0x1B571A0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_STARTFIXEDEXTRAPASSIVESKILLLEVELVECTOR_OFFSET UNITYSDK_OFFSET(0x1B57230)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_ADDHIDDENPASSIVESKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x1B56870)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_CREATEHIDDENPASSIVESKILLGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B57270)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_STARTHIDDENPASSIVESKILLGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B57300)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_ADDHIDDENPASSIVESKILLCARDTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B56840)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_CREATEHIDDENPASSIVESKILLCARDTEXTUREVECTOR_OFFSET UNITYSDK_OFFSET(0x1B57340)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_STARTHIDDENPASSIVESKILLCARDTEXTUREVECTOR_OFFSET UNITYSDK_OFFSET(0x1B573D0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_ADDFIXEDHIDDENPASSIVESKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x1B56810)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_CREATEFIXEDHIDDENPASSIVESKILLLEVELVECTOR_OFFSET UNITYSDK_OFFSET(0x1B57410)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_STARTFIXEDHIDDENPASSIVESKILLLEVELVECTOR_OFFSET UNITYSDK_OFFSET(0x1B574A0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_ENDINTERACTIVEWORLDRAIDCARRIEREXCEL_OFFSET UNITYSDK_OFFSET(0x1B56AB0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_FINISHINTERACTIVEWORLDRAIDCARRIEREXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B574E0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_FINISHSIZEPREFIXEDINTERACTIVEWORLDRAIDCARRIEREXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B57500)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int InteractiveWorldRaidCarrierExcel_TypeDefinitionIndex = 18215;

	class InteractiveWorldRaidCarrierExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::InteractiveWorldRaidCarrierExcel* GetRootAsInteractiveWorldRaidCarrierExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::InteractiveWorldRaidCarrierExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_GETROOTASINTERACTIVEWORLDRAIDCARRIEREXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::InteractiveWorldRaidCarrierExcel* GetRootAsInteractiveWorldRaidCarrierExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::InteractiveWorldRaidCarrierExcel* arg)
		{
			return (return (::MX::Data::Excel::InteractiveWorldRaidCarrierExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::InteractiveWorldRaidCarrierExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_GETROOTASINTERACTIVEWORLDRAIDCARRIEREXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::InteractiveWorldRaidCarrierExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::InteractiveWorldRaidCarrierExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_CarrierSkillListGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_GET_CARRIERSKILLLISTGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Int32 get_CharacterLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_GET_CHARACTERLEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_CharacterGrade()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_GET_CHARACTERGRADE_OFFSET))(nullptr);
		}

		::System::String* ExSkillGroupId(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_EXSKILLGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ExSkillGroupIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_GET_EXSKILLGROUPIDLENGTH_OFFSET))(nullptr);
		}

		::System::String* ExSkillCardTexture(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_EXSKILLCARDTEXTURE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ExSkillCardTextureLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_GET_EXSKILLCARDTEXTURELENGTH_OFFSET))(nullptr);
		}

		::System::Int32 FixedExSkillLevel(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_FIXEDEXSKILLLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_FixedExSkillLevelLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_GET_FIXEDEXSKILLLEVELLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetFixedExSkillLevelBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_GETFIXEDEXSKILLLEVELBYTES_OFFSET))(nullptr);
		}

		::System::String* PassiveSkillGroupId(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_PASSIVESKILLGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PassiveSkillGroupIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_GET_PASSIVESKILLGROUPIDLENGTH_OFFSET))(nullptr);
		}

		::System::String* PassiveSkillCardTexture(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_PASSIVESKILLCARDTEXTURE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PassiveSkillCardTextureLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_GET_PASSIVESKILLCARDTEXTURELENGTH_OFFSET))(nullptr);
		}

		::System::Int32 FixedPassiveSkillLevel(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_FIXEDPASSIVESKILLLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_FixedPassiveSkillLevelLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_GET_FIXEDPASSIVESKILLLEVELLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetFixedPassiveSkillLevelBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_GETFIXEDPASSIVESKILLLEVELBYTES_OFFSET))(nullptr);
		}

		::System::String* ExtraPassiveSkillGroupId(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_EXTRAPASSIVESKILLGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ExtraPassiveSkillGroupIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_GET_EXTRAPASSIVESKILLGROUPIDLENGTH_OFFSET))(nullptr);
		}

		::System::String* ExtraPassiveSkillCardTexture(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_EXTRAPASSIVESKILLCARDTEXTURE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ExtraPassiveSkillCardTextureLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_GET_EXTRAPASSIVESKILLCARDTEXTURELENGTH_OFFSET))(nullptr);
		}

		::System::Int32 FixedExtraPassiveSkillLevel(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_FIXEDEXTRAPASSIVESKILLLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_FixedExtraPassiveSkillLevelLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_GET_FIXEDEXTRAPASSIVESKILLLEVELLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetFixedExtraPassiveSkillLevelBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_GETFIXEDEXTRAPASSIVESKILLLEVELBYTES_OFFSET))(nullptr);
		}

		::System::String* HiddenPassiveSkillGroupId(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_HIDDENPASSIVESKILLGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_HiddenPassiveSkillGroupIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_GET_HIDDENPASSIVESKILLGROUPIDLENGTH_OFFSET))(nullptr);
		}

		::System::String* HiddenPassiveSkillCardTexture(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_HIDDENPASSIVESKILLCARDTEXTURE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_HiddenPassiveSkillCardTextureLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_GET_HIDDENPASSIVESKILLCARDTEXTURELENGTH_OFFSET))(nullptr);
		}

		::System::Int32 FixedHiddenPassiveSkillLevel(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_FIXEDHIDDENPASSIVESKILLLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_FixedHiddenPassiveSkillLevelLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_GET_FIXEDHIDDENPASSIVESKILLLEVELLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetFixedHiddenPassiveSkillLevelBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_GETFIXEDHIDDENPASSIVESKILLLEVELBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateInteractiveWorldRaidCarrierExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Int32 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int32, ::System::Int32, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_CREATEINTERACTIVEWORLDRAIDCARRIEREXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartInteractiveWorldRaidCarrierExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_STARTINTERACTIVEWORLDRAIDCARRIEREXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddCarrierSkillListGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_ADDCARRIERSKILLLISTGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCharacterId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_ADDCHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCharacterLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_ADDCHARACTERLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCharacterGrade(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_ADDCHARACTERGRADE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExSkillGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_ADDEXSKILLGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateExSkillGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_CREATEEXSKILLGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartExSkillGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_STARTEXSKILLGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExSkillCardTexture(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_ADDEXSKILLCARDTEXTURE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateExSkillCardTextureVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_CREATEEXSKILLCARDTEXTUREVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartExSkillCardTextureVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_STARTEXSKILLCARDTEXTUREVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFixedExSkillLevel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_ADDFIXEDEXSKILLLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateFixedExSkillLevelVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_CREATEFIXEDEXSKILLLEVELVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartFixedExSkillLevelVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_STARTFIXEDEXSKILLLEVELVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPassiveSkillGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_ADDPASSIVESKILLGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreatePassiveSkillGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_CREATEPASSIVESKILLGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartPassiveSkillGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_STARTPASSIVESKILLGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPassiveSkillCardTexture(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_ADDPASSIVESKILLCARDTEXTURE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreatePassiveSkillCardTextureVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_CREATEPASSIVESKILLCARDTEXTUREVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartPassiveSkillCardTextureVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_STARTPASSIVESKILLCARDTEXTUREVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFixedPassiveSkillLevel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_ADDFIXEDPASSIVESKILLLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateFixedPassiveSkillLevelVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_CREATEFIXEDPASSIVESKILLLEVELVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartFixedPassiveSkillLevelVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_STARTFIXEDPASSIVESKILLLEVELVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExtraPassiveSkillGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_ADDEXTRAPASSIVESKILLGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateExtraPassiveSkillGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_CREATEEXTRAPASSIVESKILLGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartExtraPassiveSkillGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_STARTEXTRAPASSIVESKILLGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExtraPassiveSkillCardTexture(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_ADDEXTRAPASSIVESKILLCARDTEXTURE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateExtraPassiveSkillCardTextureVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_CREATEEXTRAPASSIVESKILLCARDTEXTUREVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartExtraPassiveSkillCardTextureVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_STARTEXTRAPASSIVESKILLCARDTEXTUREVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFixedExtraPassiveSkillLevel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_ADDFIXEDEXTRAPASSIVESKILLLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateFixedExtraPassiveSkillLevelVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_CREATEFIXEDEXTRAPASSIVESKILLLEVELVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartFixedExtraPassiveSkillLevelVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_STARTFIXEDEXTRAPASSIVESKILLLEVELVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddHiddenPassiveSkillGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_ADDHIDDENPASSIVESKILLGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateHiddenPassiveSkillGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_CREATEHIDDENPASSIVESKILLGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartHiddenPassiveSkillGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_STARTHIDDENPASSIVESKILLGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddHiddenPassiveSkillCardTexture(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_ADDHIDDENPASSIVESKILLCARDTEXTURE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateHiddenPassiveSkillCardTextureVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_CREATEHIDDENPASSIVESKILLCARDTEXTUREVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartHiddenPassiveSkillCardTextureVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_STARTHIDDENPASSIVESKILLCARDTEXTUREVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFixedHiddenPassiveSkillLevel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_ADDFIXEDHIDDENPASSIVESKILLLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateFixedHiddenPassiveSkillLevelVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_CREATEFIXEDHIDDENPASSIVESKILLLEVELVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartFixedHiddenPassiveSkillLevelVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_STARTFIXEDHIDDENPASSIVESKILLLEVELVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndInteractiveWorldRaidCarrierExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_ENDINTERACTIVEWORLDRAIDCARRIEREXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishInteractiveWorldRaidCarrierExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_FINISHINTERACTIVEWORLDRAIDCARRIEREXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedInteractiveWorldRaidCarrierExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIEREXCEL_FINISHSIZEPREFIXEDINTERACTIVEWORLDRAIDCARRIEREXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

