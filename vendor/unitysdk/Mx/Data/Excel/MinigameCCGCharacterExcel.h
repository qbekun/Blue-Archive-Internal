#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MinigameCCGCharacterExcel; }
namespace FlatData { class CCGCharacterType; }
namespace FlatData { class CCGTagType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B8F7F0)
#define MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_GETROOTASMINIGAMECCGCHARACTEREXCEL_OFFSET UNITYSDK_OFFSET(0x1B8F800)
#define MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_GETROOTASMINIGAMECCGCHARACTEREXCEL_OFFSET UNITYSDK_OFFSET(0x1B8F860)
#define MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B8F8F0)
#define MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B8F8C0)
#define MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B8F910)
#define MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1B8F960)
#define MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_GET_ACTIVESKILLID_OFFSET UNITYSDK_OFFSET(0x1B8F9B0)
#define MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_GET_ACTIVESKILLCOST_OFFSET UNITYSDK_OFFSET(0x1B8FA00)
#define MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_GET_ACTIVESKILLECOSTVISIBLE_OFFSET UNITYSDK_OFFSET(0x1B8FA50)
#define MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_GET_ACTIVESKILLCOOLDOWN_OFFSET UNITYSDK_OFFSET(0x1B8FAA0)
#define MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_GET_MAXHEALTH_OFFSET UNITYSDK_OFFSET(0x1B8FAF0)
#define MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_PASSIVESKILLID_OFFSET UNITYSDK_OFFSET(0x1B8FB40)
#define MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_GET_PASSIVESKILLIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1B8FBA0)
#define MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_GETPASSIVESKILLIDBYTES_OFFSET UNITYSDK_OFFSET(0x1B8FBE0)
#define MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1B8FC00)
#define MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1B8FC50)
#define MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_GETDESCRIPTIONBYTES_OFFSET UNITYSDK_OFFSET(0x1B8FC90)
#define MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1B8FCB0)
#define MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_GETIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1B8FCF0)
#define MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_GET_UIIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1B8FD10)
#define MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_GETUIIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1B8FD50)
#define MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_TAGS_OFFSET UNITYSDK_OFFSET(0x1B8FD70)
#define MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_GET_TAGSLENGTH_OFFSET UNITYSDK_OFFSET(0x1B8FDD0)
#define MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_GETTAGSBYTES_OFFSET UNITYSDK_OFFSET(0x1B8FE10)
#define MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_CREATEMINIGAMECCGCHARACTEREXCEL_OFFSET UNITYSDK_OFFSET(0x1B8FE30)
#define MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_STARTMINIGAMECCGCHARACTEREXCEL_OFFSET UNITYSDK_OFFSET(0x1B90340)
#define MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1B900B0)
#define MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_ADDTYPE_OFFSET UNITYSDK_OFFSET(0x1B90290)
#define MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_ADDACTIVESKILLID_OFFSET UNITYSDK_OFFSET(0x1B90080)
#define MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_ADDACTIVESKILLCOST_OFFSET UNITYSDK_OFFSET(0x1B90260)
#define MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_ADDACTIVESKILLECOSTVISIBLE_OFFSET UNITYSDK_OFFSET(0x1B902C0)
#define MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_ADDACTIVESKILLCOOLDOWN_OFFSET UNITYSDK_OFFSET(0x1B90230)
#define MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_ADDMAXHEALTH_OFFSET UNITYSDK_OFFSET(0x1B90200)
#define MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_ADDPASSIVESKILLID_OFFSET UNITYSDK_OFFSET(0x1B901D0)
#define MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_CREATEPASSIVESKILLIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B90360)
#define MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_STARTPASSIVESKILLIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B903F0)
#define MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_ADDNAME_OFFSET UNITYSDK_OFFSET(0x1B901A0)
#define MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_ADDDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1B90170)
#define MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_ADDIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1B90140)
#define MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_ADDUIIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1B90110)
#define MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_ADDTAGS_OFFSET UNITYSDK_OFFSET(0x1B900E0)
#define MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_CREATETAGSVECTOR_OFFSET UNITYSDK_OFFSET(0x1B90430)
#define MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_STARTTAGSVECTOR_OFFSET UNITYSDK_OFFSET(0x1B904C0)
#define MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_ENDMINIGAMECCGCHARACTEREXCEL_OFFSET UNITYSDK_OFFSET(0x1B902F0)
#define MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_FINISHMINIGAMECCGCHARACTEREXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B90500)
#define MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_FINISHSIZEPREFIXEDMINIGAMECCGCHARACTEREXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B90520)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameCCGCharacterExcel_TypeDefinitionIndex = 18451;

	class MinigameCCGCharacterExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MinigameCCGCharacterExcel* GetRootAsMinigameCCGCharacterExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameCCGCharacterExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_GETROOTASMINIGAMECCGCHARACTEREXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MinigameCCGCharacterExcel* GetRootAsMinigameCCGCharacterExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MinigameCCGCharacterExcel* arg)
		{
			return (return (::MX::Data::Excel::MinigameCCGCharacterExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MinigameCCGCharacterExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_GETROOTASMINIGAMECCGCHARACTEREXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MinigameCCGCharacterExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameCCGCharacterExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_GET_ID_OFFSET))(nullptr);
		}

		::FlatData::CCGCharacterType* get_Type()
		{
			return (return (::FlatData::CCGCharacterType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ActiveSkillId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_GET_ACTIVESKILLID_OFFSET))(nullptr);
		}

		::System::Int32 get_ActiveSkillCost()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_GET_ACTIVESKILLCOST_OFFSET))(nullptr);
		}

		::System::Boolean get_ActiveSkilleCostVisible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_GET_ACTIVESKILLECOSTVISIBLE_OFFSET))(nullptr);
		}

		::System::Int32 get_ActiveSkillCooldown()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_GET_ACTIVESKILLCOOLDOWN_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxHealth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_GET_MAXHEALTH_OFFSET))(nullptr);
		}

		::System::Int64 PassiveSkillId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_PASSIVESKILLID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PassiveSkillIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_GET_PASSIVESKILLIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetPassiveSkillIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_GETPASSIVESKILLIDBYTES_OFFSET))(nullptr);
		}

		::System::UInt32 get_Name()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_Description()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_GET_DESCRIPTION_OFFSET))(nullptr);
		}

		Il2CppObject* GetDescriptionBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_GETDESCRIPTIONBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_GET_IMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_GETIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_UIImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_GET_UIIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetUIImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_GETUIIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		::FlatData::CCGTagType* Tags(::System::Int32 arg)
		{
			return (return (::FlatData::CCGTagType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_TAGS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_TagsLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_GET_TAGSLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetTagsBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_GETTAGSBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMinigameCCGCharacterExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::CCGCharacterType* arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Int32 arg, ::System::Int32 arg, ::FlatBuffers::VectorOffset* arg, ::System::UInt32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::CCGCharacterType*, ::System::Int64, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Int32, ::FlatBuffers::VectorOffset*, ::System::UInt32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_CREATEMINIGAMECCGCHARACTEREXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMinigameCCGCharacterExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_STARTMINIGAMECCGCHARACTEREXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::CCGCharacterType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::CCGCharacterType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_ADDTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddActiveSkillId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_ADDACTIVESKILLID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddActiveSkillCost(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_ADDACTIVESKILLCOST_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddActiveSkilleCostVisible(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_ADDACTIVESKILLECOSTVISIBLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddActiveSkillCooldown(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_ADDACTIVESKILLCOOLDOWN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMaxHealth(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_ADDMAXHEALTH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPassiveSkillId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_ADDPASSIVESKILLID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreatePassiveSkillIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_CREATEPASSIVESKILLIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartPassiveSkillIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_STARTPASSIVESKILLIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddName(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_ADDNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDescription(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_ADDDESCRIPTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_ADDIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUIImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_ADDUIIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTags(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_ADDTAGS_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateTagsVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_CREATETAGSVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartTagsVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_STARTTAGSVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMinigameCCGCharacterExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_ENDMINIGAMECCGCHARACTEREXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMinigameCCGCharacterExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_FINISHMINIGAMECCGCHARACTEREXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMinigameCCGCharacterExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCEL_FINISHSIZEPREFIXEDMINIGAMECCGCHARACTEREXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

