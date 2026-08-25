#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class FieldWorldMapZoneExcel; }
namespace FlatData { class FieldConditionType; }
namespace FlatData { class FieldWorldMapButtonType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define FLATDATA_FIELDWORLDMAPZONEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD48B20)
#define FLATDATA_FIELDWORLDMAPZONEEXCEL_GETROOTASFIELDWORLDMAPZONEEXCEL_OFFSET UNITYSDK_OFFSET(0xD48B30)
#define FLATDATA_FIELDWORLDMAPZONEEXCEL_GETROOTASFIELDWORLDMAPZONEEXCEL_OFFSET UNITYSDK_OFFSET(0xD48B90)
#define FLATDATA_FIELDWORLDMAPZONEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD48BF0)
#define FLATDATA_FIELDWORLDMAPZONEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD48840)
#define FLATDATA_FIELDWORLDMAPZONEEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0xD48C10)
#define FLATDATA_FIELDWORLDMAPZONEEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0xD48C60)
#define FLATDATA_FIELDWORLDMAPZONEEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xD48CE0)
#define FLATDATA_FIELDWORLDMAPZONEEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xD48D30)
#define FLATDATA_FIELDWORLDMAPZONEEXCEL_GET_DATE_OFFSET UNITYSDK_OFFSET(0xD48DB0)
#define FLATDATA_FIELDWORLDMAPZONEEXCEL_GET_DATE_OFFSET UNITYSDK_OFFSET(0xD48E00)
#define FLATDATA_FIELDWORLDMAPZONEEXCEL_GET_OPENCONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0xD48E80)
#define FLATDATA_FIELDWORLDMAPZONEEXCEL_GET_OPENCONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0xD48ED0)
#define FLATDATA_FIELDWORLDMAPZONEEXCEL_GET_OPENCONDITIONID_OFFSET UNITYSDK_OFFSET(0xD48F50)
#define FLATDATA_FIELDWORLDMAPZONEEXCEL_GET_OPENCONDITIONID_OFFSET UNITYSDK_OFFSET(0xD48FA0)
#define FLATDATA_FIELDWORLDMAPZONEEXCEL_GET_CLOSECONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0xD49020)
#define FLATDATA_FIELDWORLDMAPZONEEXCEL_GET_CLOSECONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0xD49070)
#define FLATDATA_FIELDWORLDMAPZONEEXCEL_GET_CLOSECONDITIONID_OFFSET UNITYSDK_OFFSET(0xD490F0)
#define FLATDATA_FIELDWORLDMAPZONEEXCEL_GET_CLOSECONDITIONID_OFFSET UNITYSDK_OFFSET(0xD49140)
#define FLATDATA_FIELDWORLDMAPZONEEXCEL_GET_RESULTFIELDSCENE_OFFSET UNITYSDK_OFFSET(0xD491C0)
#define FLATDATA_FIELDWORLDMAPZONEEXCEL_GET_RESULTFIELDSCENE_OFFSET UNITYSDK_OFFSET(0xD49210)
#define FLATDATA_FIELDWORLDMAPZONEEXCEL_GET_FIELDSTAGEINTERACTIONID_OFFSET UNITYSDK_OFFSET(0xD49290)
#define FLATDATA_FIELDWORLDMAPZONEEXCEL_GET_FIELDSTAGEINTERACTIONID_OFFSET UNITYSDK_OFFSET(0xD492E0)
#define FLATDATA_FIELDWORLDMAPZONEEXCEL_GET_WORLDMAPBUTTONTYPE_OFFSET UNITYSDK_OFFSET(0xD49360)
#define FLATDATA_FIELDWORLDMAPZONEEXCEL_GET_WORLDMAPBUTTONTYPE_OFFSET UNITYSDK_OFFSET(0xD493B0)
#define FLATDATA_FIELDWORLDMAPZONEEXCEL_GET_LOCALIZECODE_OFFSET UNITYSDK_OFFSET(0xD49430)
#define FLATDATA_FIELDWORLDMAPZONEEXCEL_GET_LOCALIZECODE_OFFSET UNITYSDK_OFFSET(0xD49480)
#define FLATDATA_FIELDWORLDMAPZONEEXCEL_GET_NEWTAGDISPLAY_OFFSET UNITYSDK_OFFSET(0xD49500)
#define FLATDATA_FIELDWORLDMAPZONEEXCEL_GET_NEWTAGDISPLAY_OFFSET UNITYSDK_OFFSET(0xD49550)
#define FLATDATA_FIELDWORLDMAPZONEEXCEL_CREATEFIELDWORLDMAPZONEEXCEL_OFFSET UNITYSDK_OFFSET(0xD495A0)
#define FLATDATA_FIELDWORLDMAPZONEEXCEL_STARTFIELDWORLDMAPZONEEXCEL_OFFSET UNITYSDK_OFFSET(0xD49A50)
#define FLATDATA_FIELDWORLDMAPZONEEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0xD49880)
#define FLATDATA_FIELDWORLDMAPZONEEXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0xD499A0)
#define FLATDATA_FIELDWORLDMAPZONEEXCEL_ADDDATE_OFFSET UNITYSDK_OFFSET(0xD49970)
#define FLATDATA_FIELDWORLDMAPZONEEXCEL_ADDOPENCONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0xD49940)
#define FLATDATA_FIELDWORLDMAPZONEEXCEL_ADDOPENCONDITIONID_OFFSET UNITYSDK_OFFSET(0xD49850)
#define FLATDATA_FIELDWORLDMAPZONEEXCEL_ADDCLOSECONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0xD49910)
#define FLATDATA_FIELDWORLDMAPZONEEXCEL_ADDCLOSECONDITIONID_OFFSET UNITYSDK_OFFSET(0xD49820)
#define FLATDATA_FIELDWORLDMAPZONEEXCEL_ADDRESULTFIELDSCENE_OFFSET UNITYSDK_OFFSET(0xD497F0)
#define FLATDATA_FIELDWORLDMAPZONEEXCEL_ADDFIELDSTAGEINTERACTIONID_OFFSET UNITYSDK_OFFSET(0xD497C0)
#define FLATDATA_FIELDWORLDMAPZONEEXCEL_ADDWORLDMAPBUTTONTYPE_OFFSET UNITYSDK_OFFSET(0xD498E0)
#define FLATDATA_FIELDWORLDMAPZONEEXCEL_ADDLOCALIZECODE_OFFSET UNITYSDK_OFFSET(0xD498B0)
#define FLATDATA_FIELDWORLDMAPZONEEXCEL_ADDNEWTAGDISPLAY_OFFSET UNITYSDK_OFFSET(0xD499D0)
#define FLATDATA_FIELDWORLDMAPZONEEXCEL_ENDFIELDWORLDMAPZONEEXCEL_OFFSET UNITYSDK_OFFSET(0xD49A00)

namespace FlatData
{
	inline static constexpr unsigned int FieldWorldMapZoneExcel_TypeDefinitionIndex = 9291;

	class FieldWorldMapZoneExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::FieldWorldMapZoneExcel* GetRootAsFieldWorldMapZoneExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::FieldWorldMapZoneExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCEL_GETROOTASFIELDWORLDMAPZONEEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::FieldWorldMapZoneExcel* GetRootAsFieldWorldMapZoneExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::FieldWorldMapZoneExcel* arg2)
		{
			return ((::FlatData::FieldWorldMapZoneExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::FieldWorldMapZoneExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCEL_GETROOTASFIELDWORLDMAPZONEEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::FieldWorldMapZoneExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::FieldWorldMapZoneExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int32 get_groupId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Int32 get_GroupId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Int32 get_date()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCEL_GET_DATE_OFFSET))(nullptr);
		}

		::System::Int32 get_Date()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCEL_GET_DATE_OFFSET))(nullptr);
		}

		::FlatData::FieldConditionType* get_openConditionType()
		{
			return ((::FlatData::FieldConditionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCEL_GET_OPENCONDITIONTYPE_OFFSET))(nullptr);
		}

		::FlatData::FieldConditionType* get_OpenConditionType()
		{
			return ((::FlatData::FieldConditionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCEL_GET_OPENCONDITIONTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_openConditionId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCEL_GET_OPENCONDITIONID_OFFSET))(nullptr);
		}

		::System::Int64 get_OpenConditionId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCEL_GET_OPENCONDITIONID_OFFSET))(nullptr);
		}

		::FlatData::FieldConditionType* get_closeConditionType()
		{
			return ((::FlatData::FieldConditionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCEL_GET_CLOSECONDITIONTYPE_OFFSET))(nullptr);
		}

		::FlatData::FieldConditionType* get_CloseConditionType()
		{
			return ((::FlatData::FieldConditionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCEL_GET_CLOSECONDITIONTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_closeConditionId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCEL_GET_CLOSECONDITIONID_OFFSET))(nullptr);
		}

		::System::Int64 get_CloseConditionId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCEL_GET_CLOSECONDITIONID_OFFSET))(nullptr);
		}

		::System::Int64 get_resultFieldScene()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCEL_GET_RESULTFIELDSCENE_OFFSET))(nullptr);
		}

		::System::Int64 get_ResultFieldScene()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCEL_GET_RESULTFIELDSCENE_OFFSET))(nullptr);
		}

		::System::Int64 get_fieldStageInteractionId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCEL_GET_FIELDSTAGEINTERACTIONID_OFFSET))(nullptr);
		}

		::System::Int64 get_FieldStageInteractionId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCEL_GET_FIELDSTAGEINTERACTIONID_OFFSET))(nullptr);
		}

		::FlatData::FieldWorldMapButtonType* get_worldMapButtonType()
		{
			return ((::FlatData::FieldWorldMapButtonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCEL_GET_WORLDMAPBUTTONTYPE_OFFSET))(nullptr);
		}

		::FlatData::FieldWorldMapButtonType* get_WorldMapButtonType()
		{
			return ((::FlatData::FieldWorldMapButtonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCEL_GET_WORLDMAPBUTTONTYPE_OFFSET))(nullptr);
		}

		::System::UInt32 get_localizeCode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCEL_GET_LOCALIZECODE_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeCode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCEL_GET_LOCALIZECODE_OFFSET))(nullptr);
		}

		::System::Boolean get_newTagDisplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCEL_GET_NEWTAGDISPLAY_OFFSET))(nullptr);
		}

		::System::Boolean get_NewTagDisplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCEL_GET_NEWTAGDISPLAY_OFFSET))(nullptr);
		}

		Il2CppObject* CreateFieldWorldMapZoneExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2, ::System::Int32 arg3, ::System::Int32 arg4, ::FlatData::FieldConditionType* arg5, ::System::Int64 arg6, ::FlatData::FieldConditionType* arg7, ::System::Int64 arg8, ::System::Int64 arg9, ::System::Int64 arg10, ::FlatData::FieldWorldMapButtonType* arg11, ::System::UInt32 arg12, ::System::Boolean arg13)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int32, ::System::Int32, ::FlatData::FieldConditionType*, ::System::Int64, ::FlatData::FieldConditionType*, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatData::FieldWorldMapButtonType*, ::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCEL_CREATEFIELDWORLDMAPZONEEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, nullptr);
		}

		::System::Void StartFieldWorldMapZoneExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCEL_STARTFIELDWORLDMAPZONEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCEL_ADDID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCEL_ADDGROUPID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddDate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCEL_ADDDATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddOpenConditionType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::FieldConditionType* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::FieldConditionType*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCEL_ADDOPENCONDITIONTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddOpenConditionId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCEL_ADDOPENCONDITIONID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddCloseConditionType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::FieldConditionType* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::FieldConditionType*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCEL_ADDCLOSECONDITIONTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddCloseConditionId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCEL_ADDCLOSECONDITIONID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddResultFieldScene(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCEL_ADDRESULTFIELDSCENE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddFieldStageInteractionId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCEL_ADDFIELDSTAGEINTERACTIONID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddWorldMapButtonType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::FieldWorldMapButtonType* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::FieldWorldMapButtonType*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCEL_ADDWORLDMAPBUTTONTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddLocalizeCode(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCEL_ADDLOCALIZECODE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddNewTagDisplay(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCEL_ADDNEWTAGDISPLAY_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndFieldWorldMapZoneExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDWORLDMAPZONEEXCEL_ENDFIELDWORLDMAPZONEEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

