#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MinigameCCGLevelStageExcel; }
namespace FlatData { class CCGStageType; }
namespace FlatData { class CCGStageRewardType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B98120)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_GETROOTASMINIGAMECCGLEVELSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B98130)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_GETROOTASMINIGAMECCGLEVELSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B98190)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B98220)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B981F0)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B98240)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1B98290)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_ENEMYGROUPID_OFFSET UNITYSDK_OFFSET(0x1B982E0)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_GET_ENEMYGROUPIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1B98340)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_GETENEMYGROUPIDBYTES_OFFSET UNITYSDK_OFFSET(0x1B98380)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_GET_STAGETYPE_OFFSET UNITYSDK_OFFSET(0x1B983A0)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_GET_CAMPDISCARDCARDCOUNT_OFFSET UNITYSDK_OFFSET(0x1B983F0)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_GET_CAMPSPRPATH_OFFSET UNITYSDK_OFFSET(0x1B98440)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_GETCAMPSPRPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1B98480)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_GET_CAMPBACKGROUNDPATH_OFFSET UNITYSDK_OFFSET(0x1B984A0)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_GETCAMPBACKGROUNDPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1B984E0)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_GET_REWARDTYPE_OFFSET UNITYSDK_OFFSET(0x1B98500)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_GET_REWARDCOUNT_OFFSET UNITYSDK_OFFSET(0x1B98550)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_GET_REWARDCARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1B985A0)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_GET_CARDRARITYGROUPID_OFFSET UNITYSDK_OFFSET(0x1B985F0)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_GET_ISSKIPINTROSCENARIO_OFFSET UNITYSDK_OFFSET(0x1B98640)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_GET_INTROSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1B98690)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_GET_ISSKIPOUTROSCENARIO_OFFSET UNITYSDK_OFFSET(0x1B986E0)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_GET_OUTROSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1B98730)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_CREATEMINIGAMECCGLEVELSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B98780)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_STARTMINIGAMECCGLEVELSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B98D40)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1B98B10)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0x1B98AE0)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_ADDENEMYGROUPID_OFFSET UNITYSDK_OFFSET(0x1B98C60)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_CREATEENEMYGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B98D60)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_STARTENEMYGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B98DF0)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_ADDSTAGETYPE_OFFSET UNITYSDK_OFFSET(0x1B98C30)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_ADDCAMPDISCARDCARDCOUNT_OFFSET UNITYSDK_OFFSET(0x1B98C00)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_ADDCAMPSPRPATH_OFFSET UNITYSDK_OFFSET(0x1B98BD0)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_ADDCAMPBACKGROUNDPATH_OFFSET UNITYSDK_OFFSET(0x1B98BA0)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_ADDREWARDTYPE_OFFSET UNITYSDK_OFFSET(0x1B98B70)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_ADDREWARDCOUNT_OFFSET UNITYSDK_OFFSET(0x1B98B40)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_ADDREWARDCARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1B98AB0)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_ADDCARDRARITYGROUPID_OFFSET UNITYSDK_OFFSET(0x1B98A80)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_ADDISSKIPINTROSCENARIO_OFFSET UNITYSDK_OFFSET(0x1B98CC0)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_ADDINTROSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1B98A50)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_ADDISSKIPOUTROSCENARIO_OFFSET UNITYSDK_OFFSET(0x1B98C90)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_ADDOUTROSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1B98A20)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_ENDMINIGAMECCGLEVELSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B98CF0)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_FINISHMINIGAMECCGLEVELSTAGEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B98E30)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_FINISHSIZEPREFIXEDMINIGAMECCGLEVELSTAGEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B98E50)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameCCGLevelStageExcel_TypeDefinitionIndex = 18496;

	class MinigameCCGLevelStageExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MinigameCCGLevelStageExcel* GetRootAsMinigameCCGLevelStageExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameCCGLevelStageExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_GETROOTASMINIGAMECCGLEVELSTAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MinigameCCGLevelStageExcel* GetRootAsMinigameCCGLevelStageExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MinigameCCGLevelStageExcel* arg)
		{
			return (return (::MX::Data::Excel::MinigameCCGLevelStageExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MinigameCCGLevelStageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_GETROOTASMINIGAMECCGLEVELSTAGEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MinigameCCGLevelStageExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameCCGLevelStageExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Int64 EnemyGroupId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_ENEMYGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_EnemyGroupIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_GET_ENEMYGROUPIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetEnemyGroupIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_GETENEMYGROUPIDBYTES_OFFSET))(nullptr);
		}

		::FlatData::CCGStageType* get_StageType()
		{
			return (return (::FlatData::CCGStageType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_GET_STAGETYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_CampDiscardCardCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_GET_CAMPDISCARDCARDCOUNT_OFFSET))(nullptr);
		}

		::System::String* get_CampSprPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_GET_CAMPSPRPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetCampSprPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_GETCAMPSPRPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_CampBackgroundPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_GET_CAMPBACKGROUNDPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetCampBackgroundPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_GETCAMPBACKGROUNDPATHBYTES_OFFSET))(nullptr);
		}

		::FlatData::CCGStageRewardType* get_RewardType()
		{
			return (return (::FlatData::CCGStageRewardType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_GET_REWARDTYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_RewardCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_GET_REWARDCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardCardGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_GET_REWARDCARDGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_CardRarityGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_GET_CARDRARITYGROUPID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSkipIntroScenario()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_GET_ISSKIPINTROSCENARIO_OFFSET))(nullptr);
		}

		::System::Int64 get_IntroScenarioGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_GET_INTROSCENARIOGROUPID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSkipOutroScenario()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_GET_ISSKIPOUTROSCENARIO_OFFSET))(nullptr);
		}

		::System::Int64 get_OutroScenarioGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_GET_OUTROSCENARIOGROUPID_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMinigameCCGLevelStageExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatData::CCGStageType* arg, ::System::Int32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatData::CCGStageRewardType* arg, ::System::Int32 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg, ::System::Int64 arg, ::System::Boolean arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatData::CCGStageType*, ::System::Int32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatData::CCGStageRewardType*, ::System::Int32, ::System::Int64, ::System::Int64, ::System::Boolean, ::System::Int64, ::System::Boolean, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_CREATEMINIGAMECCGLEVELSTAGEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMinigameCCGLevelStageExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_STARTMINIGAMECCGLEVELSTAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_ADDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnemyGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_ADDENEMYGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateEnemyGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_CREATEENEMYGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartEnemyGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_STARTENEMYGROUPIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::CCGStageType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::CCGStageType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_ADDSTAGETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCampDiscardCardCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_ADDCAMPDISCARDCARDCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCampSprPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_ADDCAMPSPRPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCampBackgroundPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_ADDCAMPBACKGROUNDPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::CCGStageRewardType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::CCGStageRewardType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_ADDREWARDTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_ADDREWARDCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardCardGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_ADDREWARDCARDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCardRarityGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_ADDCARDRARITYGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsSkipIntroScenario(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_ADDISSKIPINTROSCENARIO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIntroScenarioGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_ADDINTROSCENARIOGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsSkipOutroScenario(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_ADDISSKIPOUTROSCENARIO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOutroScenarioGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_ADDOUTROSCENARIOGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMinigameCCGLevelStageExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_ENDMINIGAMECCGLEVELSTAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMinigameCCGLevelStageExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_FINISHMINIGAMECCGLEVELSTAGEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMinigameCCGLevelStageExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELSTAGEEXCEL_FINISHSIZEPREFIXEDMINIGAMECCGLEVELSTAGEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

