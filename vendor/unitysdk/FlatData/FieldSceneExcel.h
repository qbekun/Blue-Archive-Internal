#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class FieldSceneExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_FIELDSCENEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD438A0)
#define FLATDATA_FIELDSCENEEXCEL_GETROOTASFIELDSCENEEXCEL_OFFSET UNITYSDK_OFFSET(0xD438B0)
#define FLATDATA_FIELDSCENEEXCEL_GETROOTASFIELDSCENEEXCEL_OFFSET UNITYSDK_OFFSET(0xD43910)
#define FLATDATA_FIELDSCENEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD43970)
#define FLATDATA_FIELDSCENEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD435C0)
#define FLATDATA_FIELDSCENEEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xD43990)
#define FLATDATA_FIELDSCENEEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xD439E0)
#define FLATDATA_FIELDSCENEEXCEL_GET_DATEID_OFFSET UNITYSDK_OFFSET(0xD43A60)
#define FLATDATA_FIELDSCENEEXCEL_GET_DATEID_OFFSET UNITYSDK_OFFSET(0xD43AB0)
#define FLATDATA_FIELDSCENEEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xD43B30)
#define FLATDATA_FIELDSCENEEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xD43B80)
#define FLATDATA_FIELDSCENEEXCEL_GET_ARTLEVELPATH_OFFSET UNITYSDK_OFFSET(0xD43C00)
#define FLATDATA_FIELDSCENEEXCEL_GET_ARTLEVELPATH_OFFSET UNITYSDK_OFFSET(0xD43C40)
#define FLATDATA_FIELDSCENEEXCEL_GETARTLEVELPATHBYTES_OFFSET UNITYSDK_OFFSET(0xD43CB0)
#define FLATDATA_FIELDSCENEEXCEL_GET_DESIGNLEVELPATH_OFFSET UNITYSDK_OFFSET(0xD43CD0)
#define FLATDATA_FIELDSCENEEXCEL_GET_DESIGNLEVELPATH_OFFSET UNITYSDK_OFFSET(0xD43D10)
#define FLATDATA_FIELDSCENEEXCEL_GETDESIGNLEVELPATHBYTES_OFFSET UNITYSDK_OFFSET(0xD43D80)
#define FLATDATA_FIELDSCENEEXCEL_GET_BGMID_OFFSET UNITYSDK_OFFSET(0xD43DA0)
#define FLATDATA_FIELDSCENEEXCEL_GET_BGMID_OFFSET UNITYSDK_OFFSET(0xD43DF0)
#define FLATDATA_FIELDSCENEEXCEL_CONDITIONALBGMQUESTID_OFFSET UNITYSDK_OFFSET(0xD43E70)
#define FLATDATA_FIELDSCENEEXCEL_GET_CONDITIONALBGMQUESTIDLENGTH_OFFSET UNITYSDK_OFFSET(0xD43ED0)
#define FLATDATA_FIELDSCENEEXCEL_CONDITIONALBGMQUESTID_OFFSET UNITYSDK_OFFSET(0xD43F10)
#define FLATDATA_FIELDSCENEEXCEL_GETCONDITIONALBGMQUESTIDBYTES_OFFSET UNITYSDK_OFFSET(0xD43FA0)
#define FLATDATA_FIELDSCENEEXCEL_BEGINCONDITIONALBGMSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0xD43FC0)
#define FLATDATA_FIELDSCENEEXCEL_GET_BEGINCONDITIONALBGMSCENARIOGROUPIDLENGTH_OFFSET UNITYSDK_OFFSET(0xD44020)
#define FLATDATA_FIELDSCENEEXCEL_BEGINCONDITIONALBGMSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0xD44060)
#define FLATDATA_FIELDSCENEEXCEL_GETBEGINCONDITIONALBGMSCENARIOGROUPIDBYTES_OFFSET UNITYSDK_OFFSET(0xD440F0)
#define FLATDATA_FIELDSCENEEXCEL_BEGINCONDITIONALBGMINTERACTIONID_OFFSET UNITYSDK_OFFSET(0xD44110)
#define FLATDATA_FIELDSCENEEXCEL_GET_BEGINCONDITIONALBGMINTERACTIONIDLENGTH_OFFSET UNITYSDK_OFFSET(0xD44170)
#define FLATDATA_FIELDSCENEEXCEL_BEGINCONDITIONALBGMINTERACTIONID_OFFSET UNITYSDK_OFFSET(0xD441B0)
#define FLATDATA_FIELDSCENEEXCEL_GETBEGINCONDITIONALBGMINTERACTIONIDBYTES_OFFSET UNITYSDK_OFFSET(0xD44240)
#define FLATDATA_FIELDSCENEEXCEL_ENDCONDITIONALBGMSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0xD44260)
#define FLATDATA_FIELDSCENEEXCEL_GET_ENDCONDITIONALBGMSCENARIOGROUPIDLENGTH_OFFSET UNITYSDK_OFFSET(0xD442C0)
#define FLATDATA_FIELDSCENEEXCEL_ENDCONDITIONALBGMSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0xD44300)
#define FLATDATA_FIELDSCENEEXCEL_GETENDCONDITIONALBGMSCENARIOGROUPIDBYTES_OFFSET UNITYSDK_OFFSET(0xD44390)
#define FLATDATA_FIELDSCENEEXCEL_ENDCONDITIONALBGMINTERACTIONID_OFFSET UNITYSDK_OFFSET(0xD443B0)
#define FLATDATA_FIELDSCENEEXCEL_GET_ENDCONDITIONALBGMINTERACTIONIDLENGTH_OFFSET UNITYSDK_OFFSET(0xD44410)
#define FLATDATA_FIELDSCENEEXCEL_ENDCONDITIONALBGMINTERACTIONID_OFFSET UNITYSDK_OFFSET(0xD44450)
#define FLATDATA_FIELDSCENEEXCEL_GETENDCONDITIONALBGMINTERACTIONIDBYTES_OFFSET UNITYSDK_OFFSET(0xD444E0)
#define FLATDATA_FIELDSCENEEXCEL_CONDITIONALBGMID_OFFSET UNITYSDK_OFFSET(0xD44500)
#define FLATDATA_FIELDSCENEEXCEL_GET_CONDITIONALBGMIDLENGTH_OFFSET UNITYSDK_OFFSET(0xD44560)
#define FLATDATA_FIELDSCENEEXCEL_CONDITIONALBGMID_OFFSET UNITYSDK_OFFSET(0xD445A0)
#define FLATDATA_FIELDSCENEEXCEL_GETCONDITIONALBGMIDBYTES_OFFSET UNITYSDK_OFFSET(0xD44630)
#define FLATDATA_FIELDSCENEEXCEL_CREATEFIELDSCENEEXCEL_OFFSET UNITYSDK_OFFSET(0xD44650)
#define FLATDATA_FIELDSCENEEXCEL_STARTFIELDSCENEEXCEL_OFFSET UNITYSDK_OFFSET(0xD44B00)
#define FLATDATA_FIELDSCENEEXCEL_ADDUNIQUEID_OFFSET UNITYSDK_OFFSET(0xD44900)
#define FLATDATA_FIELDSCENEEXCEL_ADDDATEID_OFFSET UNITYSDK_OFFSET(0xD448D0)
#define FLATDATA_FIELDSCENEEXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0xD448A0)
#define FLATDATA_FIELDSCENEEXCEL_ADDARTLEVELPATH_OFFSET UNITYSDK_OFFSET(0xD44A80)
#define FLATDATA_FIELDSCENEEXCEL_ADDDESIGNLEVELPATH_OFFSET UNITYSDK_OFFSET(0xD44A50)
#define FLATDATA_FIELDSCENEEXCEL_ADDBGMID_OFFSET UNITYSDK_OFFSET(0xD44870)
#define FLATDATA_FIELDSCENEEXCEL_ADDCONDITIONALBGMQUESTID_OFFSET UNITYSDK_OFFSET(0xD44A20)
#define FLATDATA_FIELDSCENEEXCEL_CREATECONDITIONALBGMQUESTIDVECTOR_OFFSET UNITYSDK_OFFSET(0xD44B20)
#define FLATDATA_FIELDSCENEEXCEL_STARTCONDITIONALBGMQUESTIDVECTOR_OFFSET UNITYSDK_OFFSET(0xD44BB0)
#define FLATDATA_FIELDSCENEEXCEL_ADDBEGINCONDITIONALBGMSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0xD449F0)
#define FLATDATA_FIELDSCENEEXCEL_CREATEBEGINCONDITIONALBGMSCENARIOGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0xD44BF0)
#define FLATDATA_FIELDSCENEEXCEL_STARTBEGINCONDITIONALBGMSCENARIOGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0xD44C80)
#define FLATDATA_FIELDSCENEEXCEL_ADDBEGINCONDITIONALBGMINTERACTIONID_OFFSET UNITYSDK_OFFSET(0xD449C0)
#define FLATDATA_FIELDSCENEEXCEL_CREATEBEGINCONDITIONALBGMINTERACTIONIDVECTOR_OFFSET UNITYSDK_OFFSET(0xD44CC0)
#define FLATDATA_FIELDSCENEEXCEL_STARTBEGINCONDITIONALBGMINTERACTIONIDVECTOR_OFFSET UNITYSDK_OFFSET(0xD44D50)
#define FLATDATA_FIELDSCENEEXCEL_ADDENDCONDITIONALBGMSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0xD44990)
#define FLATDATA_FIELDSCENEEXCEL_CREATEENDCONDITIONALBGMSCENARIOGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0xD44D90)
#define FLATDATA_FIELDSCENEEXCEL_STARTENDCONDITIONALBGMSCENARIOGROUPIDVECTOR_OFFSET UNITYSDK_OFFSET(0xD44E20)
#define FLATDATA_FIELDSCENEEXCEL_ADDENDCONDITIONALBGMINTERACTIONID_OFFSET UNITYSDK_OFFSET(0xD44960)
#define FLATDATA_FIELDSCENEEXCEL_CREATEENDCONDITIONALBGMINTERACTIONIDVECTOR_OFFSET UNITYSDK_OFFSET(0xD44E60)
#define FLATDATA_FIELDSCENEEXCEL_STARTENDCONDITIONALBGMINTERACTIONIDVECTOR_OFFSET UNITYSDK_OFFSET(0xD44EF0)
#define FLATDATA_FIELDSCENEEXCEL_ADDCONDITIONALBGMID_OFFSET UNITYSDK_OFFSET(0xD44930)
#define FLATDATA_FIELDSCENEEXCEL_CREATECONDITIONALBGMIDVECTOR_OFFSET UNITYSDK_OFFSET(0xD44F30)
#define FLATDATA_FIELDSCENEEXCEL_STARTCONDITIONALBGMIDVECTOR_OFFSET UNITYSDK_OFFSET(0xD44FC0)
#define FLATDATA_FIELDSCENEEXCEL_ENDFIELDSCENEEXCEL_OFFSET UNITYSDK_OFFSET(0xD44AB0)

namespace FlatData
{
	inline static constexpr unsigned int FieldSceneExcel_TypeDefinitionIndex = 9283;

	class FieldSceneExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::FieldSceneExcel* GetRootAsFieldSceneExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::FieldSceneExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_GETROOTASFIELDSCENEEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::FieldSceneExcel* GetRootAsFieldSceneExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::FieldSceneExcel* arg2)
		{
			return ((::FlatData::FieldSceneExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::FieldSceneExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_GETROOTASFIELDSCENEEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::FieldSceneExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::FieldSceneExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_uniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_dateId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_GET_DATEID_OFFSET))(nullptr);
		}

		::System::Int64 get_DateId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_GET_DATEID_OFFSET))(nullptr);
		}

		::System::Int64 get_groupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::String* get_artLevelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_GET_ARTLEVELPATH_OFFSET))(nullptr);
		}

		::System::String* get_ArtLevelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_GET_ARTLEVELPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetArtLevelPathBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_GETARTLEVELPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_designLevelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_GET_DESIGNLEVELPATH_OFFSET))(nullptr);
		}

		::System::String* get_DesignLevelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_GET_DESIGNLEVELPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetDesignLevelPathBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_GETDESIGNLEVELPATHBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_bGMId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_GET_BGMID_OFFSET))(nullptr);
		}

		::System::Int64 get_BGMId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_GET_BGMID_OFFSET))(nullptr);
		}

		::System::Int64 conditionalBGMQuestId(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_CONDITIONALBGMQUESTID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ConditionalBGMQuestIdLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_GET_CONDITIONALBGMQUESTIDLENGTH_OFFSET))(nullptr);
		}

		::System::Int64 ConditionalBGMQuestId(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_CONDITIONALBGMQUESTID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetConditionalBGMQuestIdBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_GETCONDITIONALBGMQUESTIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 beginConditionalBGMScenarioGroupId(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_BEGINCONDITIONALBGMSCENARIOGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BeginConditionalBGMScenarioGroupIdLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_GET_BEGINCONDITIONALBGMSCENARIOGROUPIDLENGTH_OFFSET))(nullptr);
		}

		::System::Int64 BeginConditionalBGMScenarioGroupId(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_BEGINCONDITIONALBGMSCENARIOGROUPID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetBeginConditionalBGMScenarioGroupIdBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_GETBEGINCONDITIONALBGMSCENARIOGROUPIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 beginConditionalBGMInteractionId(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_BEGINCONDITIONALBGMINTERACTIONID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BeginConditionalBGMInteractionIdLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_GET_BEGINCONDITIONALBGMINTERACTIONIDLENGTH_OFFSET))(nullptr);
		}

		::System::Int64 BeginConditionalBGMInteractionId(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_BEGINCONDITIONALBGMINTERACTIONID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetBeginConditionalBGMInteractionIdBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_GETBEGINCONDITIONALBGMINTERACTIONIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 endConditionalBGMScenarioGroupId(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_ENDCONDITIONALBGMSCENARIOGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_EndConditionalBGMScenarioGroupIdLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_GET_ENDCONDITIONALBGMSCENARIOGROUPIDLENGTH_OFFSET))(nullptr);
		}

		::System::Int64 EndConditionalBGMScenarioGroupId(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_ENDCONDITIONALBGMSCENARIOGROUPID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetEndConditionalBGMScenarioGroupIdBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_GETENDCONDITIONALBGMSCENARIOGROUPIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 endConditionalBGMInteractionId(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_ENDCONDITIONALBGMINTERACTIONID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_EndConditionalBGMInteractionIdLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_GET_ENDCONDITIONALBGMINTERACTIONIDLENGTH_OFFSET))(nullptr);
		}

		::System::Int64 EndConditionalBGMInteractionId(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_ENDCONDITIONALBGMINTERACTIONID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetEndConditionalBGMInteractionIdBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_GETENDCONDITIONALBGMINTERACTIONIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 conditionalBGMId(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_CONDITIONALBGMID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ConditionalBGMIdLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_GET_CONDITIONALBGMIDLENGTH_OFFSET))(nullptr);
		}

		::System::Int64 ConditionalBGMId(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_CONDITIONALBGMID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetConditionalBGMIdBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_GETCONDITIONALBGMIDBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateFieldSceneExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Int64 arg4, ::FlatBuffers::StringOffset* arg5, ::FlatBuffers::StringOffset* arg6, ::System::Int64 arg7, ::FlatBuffers::VectorOffset* arg8, ::FlatBuffers::VectorOffset* arg9, ::FlatBuffers::VectorOffset* arg10, ::FlatBuffers::VectorOffset* arg11, ::FlatBuffers::VectorOffset* arg12, ::FlatBuffers::VectorOffset* arg13)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_CREATEFIELDSCENEEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, nullptr);
		}

		::System::Void StartFieldSceneExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_STARTFIELDSCENEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_ADDUNIQUEID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddDateId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_ADDDATEID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_ADDGROUPID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddArtLevelPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_ADDARTLEVELPATH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddDesignLevelPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_ADDDESIGNLEVELPATH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddBGMId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_ADDBGMID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddConditionalBGMQuestId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_ADDCONDITIONALBGMQUESTID_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateConditionalBGMQuestIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_CREATECONDITIONALBGMQUESTIDVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartConditionalBGMQuestIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_STARTCONDITIONALBGMQUESTIDVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddBeginConditionalBGMScenarioGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_ADDBEGINCONDITIONALBGMSCENARIOGROUPID_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateBeginConditionalBGMScenarioGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_CREATEBEGINCONDITIONALBGMSCENARIOGROUPIDVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartBeginConditionalBGMScenarioGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_STARTBEGINCONDITIONALBGMSCENARIOGROUPIDVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddBeginConditionalBGMInteractionId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_ADDBEGINCONDITIONALBGMINTERACTIONID_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateBeginConditionalBGMInteractionIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_CREATEBEGINCONDITIONALBGMINTERACTIONIDVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartBeginConditionalBGMInteractionIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_STARTBEGINCONDITIONALBGMINTERACTIONIDVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddEndConditionalBGMScenarioGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_ADDENDCONDITIONALBGMSCENARIOGROUPID_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateEndConditionalBGMScenarioGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_CREATEENDCONDITIONALBGMSCENARIOGROUPIDVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartEndConditionalBGMScenarioGroupIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_STARTENDCONDITIONALBGMSCENARIOGROUPIDVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddEndConditionalBGMInteractionId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_ADDENDCONDITIONALBGMINTERACTIONID_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateEndConditionalBGMInteractionIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_CREATEENDCONDITIONALBGMINTERACTIONIDVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartEndConditionalBGMInteractionIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_STARTENDCONDITIONALBGMINTERACTIONIDVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddConditionalBGMId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_ADDCONDITIONALBGMID_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateConditionalBGMIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_CREATECONDITIONALBGMIDVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartConditionalBGMIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_STARTCONDITIONALBGMIDVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndFieldSceneExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSCENEEXCEL_ENDFIELDSCENEEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

