#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentBuffExcel; }
namespace FlatData { class Tag; }
namespace FlatData { class EventContentBuffFindRule; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A973E0)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_GETROOTASEVENTCONTENTBUFFEXCEL_OFFSET UNITYSDK_OFFSET(0x1A973F0)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_GETROOTASEVENTCONTENTBUFFEXCEL_OFFSET UNITYSDK_OFFSET(0x1A97450)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A974E0)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A974B0)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_GET_EVENTCONTENTBUFFID_OFFSET UNITYSDK_OFFSET(0x1A97500)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_GET_ISBUFF_OFFSET UNITYSDK_OFFSET(0x1A97550)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_GET_CHARACTERTAG_OFFSET UNITYSDK_OFFSET(0x1A975A0)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_GET_ENUMTYPE_OFFSET UNITYSDK_OFFSET(0x1A975F0)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_ENUMTYPEVALUE_OFFSET UNITYSDK_OFFSET(0x1A97640)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_GET_ENUMTYPEVALUELENGTH_OFFSET UNITYSDK_OFFSET(0x1A97690)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_GET_SKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x1A976D0)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_GETSKILLGROUPIDBYTES_OFFSET UNITYSDK_OFFSET(0x1A97710)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1A97730)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_GETICONPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1A97770)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_GET_SPRITENAME_OFFSET UNITYSDK_OFFSET(0x1A97790)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_GETSPRITENAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1A977D0)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_GET_BUFFDESCRIPTIONLOCALIZECODEID_OFFSET UNITYSDK_OFFSET(0x1A977F0)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_GETBUFFDESCRIPTIONLOCALIZECODEIDBYTES_OFFSET UNITYSDK_OFFSET(0x1A97830)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_CREATEEVENTCONTENTBUFFEXCEL_OFFSET UNITYSDK_OFFSET(0x1A97850)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_STARTEVENTCONTENTBUFFEXCEL_OFFSET UNITYSDK_OFFSET(0x1A97BF0)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_ADDEVENTCONTENTBUFFID_OFFSET UNITYSDK_OFFSET(0x1A979F0)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_ADDISBUFF_OFFSET UNITYSDK_OFFSET(0x1A97B70)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_ADDCHARACTERTAG_OFFSET UNITYSDK_OFFSET(0x1A97B40)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_ADDENUMTYPE_OFFSET UNITYSDK_OFFSET(0x1A97B10)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_ADDENUMTYPEVALUE_OFFSET UNITYSDK_OFFSET(0x1A97AE0)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_CREATEENUMTYPEVALUEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A97C10)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_STARTENUMTYPEVALUEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A97CA0)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_ADDSKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x1A97AB0)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_ADDICONPATH_OFFSET UNITYSDK_OFFSET(0x1A97A80)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_ADDSPRITENAME_OFFSET UNITYSDK_OFFSET(0x1A97A50)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_ADDBUFFDESCRIPTIONLOCALIZECODEID_OFFSET UNITYSDK_OFFSET(0x1A97A20)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_ENDEVENTCONTENTBUFFEXCEL_OFFSET UNITYSDK_OFFSET(0x1A97BA0)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_FINISHEVENTCONTENTBUFFEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A97CE0)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTBUFFEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A97D00)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentBuffExcel_TypeDefinitionIndex = 17489;

	class EventContentBuffExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentBuffExcel* GetRootAsEventContentBuffExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentBuffExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_GETROOTASEVENTCONTENTBUFFEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentBuffExcel* GetRootAsEventContentBuffExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentBuffExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentBuffExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentBuffExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_GETROOTASEVENTCONTENTBUFFEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentBuffExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentBuffExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentBuffId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_GET_EVENTCONTENTBUFFID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsBuff()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_GET_ISBUFF_OFFSET))(nullptr);
		}

		::FlatData::Tag* get_CharacterTag()
		{
			return (return (::FlatData::Tag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_GET_CHARACTERTAG_OFFSET))(nullptr);
		}

		::FlatData::EventContentBuffFindRule* get_EnumType()
		{
			return (return (::FlatData::EventContentBuffFindRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_GET_ENUMTYPE_OFFSET))(nullptr);
		}

		::System::String* EnumTypeValue(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_ENUMTYPEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_EnumTypeValueLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_GET_ENUMTYPEVALUELENGTH_OFFSET))(nullptr);
		}

		::System::String* get_SkillGroupId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_GET_SKILLGROUPID_OFFSET))(nullptr);
		}

		Il2CppObject* GetSkillGroupIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_GETSKILLGROUPIDBYTES_OFFSET))(nullptr);
		}

		::System::String* get_IconPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_GET_ICONPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetIconPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_GETICONPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_SpriteName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_GET_SPRITENAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetSpriteNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_GETSPRITENAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_BuffDescriptionLocalizeCodeId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_GET_BUFFDESCRIPTIONLOCALIZECODEID_OFFSET))(nullptr);
		}

		Il2CppObject* GetBuffDescriptionLocalizeCodeIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_GETBUFFDESCRIPTIONLOCALIZECODEIDBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentBuffExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Boolean arg, ::FlatData::Tag* arg, ::FlatData::EventContentBuffFindRule* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Boolean, ::FlatData::Tag*, ::FlatData::EventContentBuffFindRule*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_CREATEEVENTCONTENTBUFFEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentBuffExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_STARTEVENTCONTENTBUFFEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentBuffId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_ADDEVENTCONTENTBUFFID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsBuff(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_ADDISBUFF_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCharacterTag(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::Tag* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::Tag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_ADDCHARACTERTAG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnumType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EventContentBuffFindRule* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EventContentBuffFindRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_ADDENUMTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnumTypeValue(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_ADDENUMTYPEVALUE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateEnumTypeValueVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_CREATEENUMTYPEVALUEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartEnumTypeValueVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_STARTENUMTYPEVALUEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSkillGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_ADDSKILLGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIconPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_ADDICONPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSpriteName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_ADDSPRITENAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBuffDescriptionLocalizeCodeId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_ADDBUFFDESCRIPTIONLOCALIZECODEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentBuffExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_ENDEVENTCONTENTBUFFEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentBuffExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_FINISHEVENTCONTENTBUFFEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentBuffExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTBUFFEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

