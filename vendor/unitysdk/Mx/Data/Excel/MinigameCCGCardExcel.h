#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MinigameCCGCardExcel; }
namespace FlatData { class CCGCardType; }
namespace FlatData { class CCGTagType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B8DD90)
#define MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_GETROOTASMINIGAMECCGCARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B8DDA0)
#define MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_GETROOTASMINIGAMECCGCARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B8DE00)
#define MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B8DE90)
#define MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B8DE60)
#define MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B8DEB0)
#define MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1B8DF00)
#define MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_GET_ISDISPOSAL_OFFSET UNITYSDK_OFFSET(0x1B8DF50)
#define MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_GET_ACTIVESKILLID_OFFSET UNITYSDK_OFFSET(0x1B8DFA0)
#define MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_GET_ACTIVESKILLCOST_OFFSET UNITYSDK_OFFSET(0x1B8DFF0)
#define MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_GET_ACTIVESKILLECOSTVISIBLE_OFFSET UNITYSDK_OFFSET(0x1B8E040)
#define MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_PASSIVESKILLID_OFFSET UNITYSDK_OFFSET(0x1B8E090)
#define MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_GET_PASSIVESKILLIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1B8E0F0)
#define MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_GETPASSIVESKILLIDBYTES_OFFSET UNITYSDK_OFFSET(0x1B8E130)
#define MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_GET_PASSIVEACTIVATECOUNT_OFFSET UNITYSDK_OFFSET(0x1B8E150)
#define MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1B8E1A0)
#define MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1B8E1F0)
#define MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_GETDESCRIPTIONBYTES_OFFSET UNITYSDK_OFFSET(0x1B8E230)
#define MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1B8E250)
#define MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_GETIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1B8E290)
#define MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_GET_UIIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1B8E2B0)
#define MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_GETUIIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1B8E2F0)
#define MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_TAGS_OFFSET UNITYSDK_OFFSET(0x1B8E310)
#define MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_GET_TAGSLENGTH_OFFSET UNITYSDK_OFFSET(0x1B8E370)
#define MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_GETTAGSBYTES_OFFSET UNITYSDK_OFFSET(0x1B8E3B0)
#define MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_CREATEMINIGAMECCGCARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B8E3D0)
#define MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_STARTMINIGAMECCGCARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B8E8E0)
#define MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1B8E620)
#define MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_ADDTYPE_OFFSET UNITYSDK_OFFSET(0x1B8E800)
#define MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_ADDISDISPOSAL_OFFSET UNITYSDK_OFFSET(0x1B8E860)
#define MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_ADDACTIVESKILLID_OFFSET UNITYSDK_OFFSET(0x1B8E7D0)
#define MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_ADDACTIVESKILLCOST_OFFSET UNITYSDK_OFFSET(0x1B8E7A0)
#define MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_ADDACTIVESKILLECOSTVISIBLE_OFFSET UNITYSDK_OFFSET(0x1B8E830)
#define MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_ADDPASSIVESKILLID_OFFSET UNITYSDK_OFFSET(0x1B8E770)
#define MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_CREATEPASSIVESKILLIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B8E900)
#define MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_STARTPASSIVESKILLIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B8E990)
#define MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_ADDPASSIVEACTIVATECOUNT_OFFSET UNITYSDK_OFFSET(0x1B8E740)
#define MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_ADDNAME_OFFSET UNITYSDK_OFFSET(0x1B8E710)
#define MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_ADDDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1B8E6E0)
#define MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_ADDIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1B8E6B0)
#define MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_ADDUIIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1B8E680)
#define MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_ADDTAGS_OFFSET UNITYSDK_OFFSET(0x1B8E650)
#define MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_CREATETAGSVECTOR_OFFSET UNITYSDK_OFFSET(0x1B8E9D0)
#define MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_STARTTAGSVECTOR_OFFSET UNITYSDK_OFFSET(0x1B8EA60)
#define MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_ENDMINIGAMECCGCARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B8E890)
#define MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_FINISHMINIGAMECCGCARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B8EAA0)
#define MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_FINISHSIZEPREFIXEDMINIGAMECCGCARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B8EAC0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameCCGCardExcel_TypeDefinitionIndex = 18444;

	class MinigameCCGCardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MinigameCCGCardExcel* GetRootAsMinigameCCGCardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameCCGCardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_GETROOTASMINIGAMECCGCARDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MinigameCCGCardExcel* GetRootAsMinigameCCGCardExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MinigameCCGCardExcel* arg)
		{
			return (return (::MX::Data::Excel::MinigameCCGCardExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MinigameCCGCardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_GETROOTASMINIGAMECCGCARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MinigameCCGCardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameCCGCardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::FlatData::CCGCardType* get_Type()
		{
			return (return (::FlatData::CCGCardType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDisposal()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_GET_ISDISPOSAL_OFFSET))(nullptr);
		}

		::System::Int32 get_ActiveSkillId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_GET_ACTIVESKILLID_OFFSET))(nullptr);
		}

		::System::Int32 get_ActiveSkillCost()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_GET_ACTIVESKILLCOST_OFFSET))(nullptr);
		}

		::System::Boolean get_ActiveSkilleCostVisible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_GET_ACTIVESKILLECOSTVISIBLE_OFFSET))(nullptr);
		}

		::System::Int32 PassiveSkillId(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_PASSIVESKILLID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PassiveSkillIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_GET_PASSIVESKILLIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetPassiveSkillIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_GETPASSIVESKILLIDBYTES_OFFSET))(nullptr);
		}

		::System::Int32 get_PassiveActivateCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_GET_PASSIVEACTIVATECOUNT_OFFSET))(nullptr);
		}

		::System::UInt32 get_Name()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_Description()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_GET_DESCRIPTION_OFFSET))(nullptr);
		}

		Il2CppObject* GetDescriptionBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_GETDESCRIPTIONBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_GET_IMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_GETIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_UIImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_GET_UIIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetUIImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_GETUIIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		::FlatData::CCGTagType* Tags(::System::Int32 arg)
		{
			return (return (::FlatData::CCGTagType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_TAGS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_TagsLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_GET_TAGSLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetTagsBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_GETTAGSBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMinigameCCGCardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::CCGCardType* arg, ::System::Boolean arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg, ::FlatBuffers::VectorOffset* arg, ::System::Int32 arg, ::System::UInt32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::CCGCardType*, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Boolean, ::FlatBuffers::VectorOffset*, ::System::Int32, ::System::UInt32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_CREATEMINIGAMECCGCARDEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMinigameCCGCardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_STARTMINIGAMECCGCARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::CCGCardType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::CCGCardType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_ADDTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsDisposal(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_ADDISDISPOSAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddActiveSkillId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_ADDACTIVESKILLID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddActiveSkillCost(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_ADDACTIVESKILLCOST_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddActiveSkilleCostVisible(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_ADDACTIVESKILLECOSTVISIBLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPassiveSkillId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_ADDPASSIVESKILLID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreatePassiveSkillIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_CREATEPASSIVESKILLIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartPassiveSkillIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_STARTPASSIVESKILLIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPassiveActivateCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_ADDPASSIVEACTIVATECOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddName(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_ADDNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDescription(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_ADDDESCRIPTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_ADDIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUIImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_ADDUIIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTags(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_ADDTAGS_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateTagsVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_CREATETAGSVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartTagsVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_STARTTAGSVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMinigameCCGCardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_ENDMINIGAMECCGCARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMinigameCCGCardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_FINISHMINIGAMECCGCARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMinigameCCGCardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCARDEXCEL_FINISHSIZEPREFIXEDMINIGAMECCGCARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

