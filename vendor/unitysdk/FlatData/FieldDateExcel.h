#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class FieldDateExcel; }
namespace FlatData { class FieldConditionType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define FLATDATA_FIELDDATEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD39A50)
#define FLATDATA_FIELDDATEEXCEL_GETROOTASFIELDDATEEXCEL_OFFSET UNITYSDK_OFFSET(0xD39A60)
#define FLATDATA_FIELDDATEEXCEL_GETROOTASFIELDDATEEXCEL_OFFSET UNITYSDK_OFFSET(0xD39AC0)
#define FLATDATA_FIELDDATEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD39B20)
#define FLATDATA_FIELDDATEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD39770)
#define FLATDATA_FIELDDATEEXCEL_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0xD39B40)
#define FLATDATA_FIELDDATEEXCEL_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0xD39B90)
#define FLATDATA_FIELDDATEEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xD39C10)
#define FLATDATA_FIELDDATEEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xD39C60)
#define FLATDATA_FIELDDATEEXCEL_GET_OPENDATE_OFFSET UNITYSDK_OFFSET(0xD39CE0)
#define FLATDATA_FIELDDATEEXCEL_GET_OPENDATE_OFFSET UNITYSDK_OFFSET(0xD39D30)
#define FLATDATA_FIELDDATEEXCEL_GET_DATELOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0xD39DB0)
#define FLATDATA_FIELDDATEEXCEL_GET_DATELOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0xD39DF0)
#define FLATDATA_FIELDDATEEXCEL_GETDATELOCALIZEKEYBYTES_OFFSET UNITYSDK_OFFSET(0xD39E60)
#define FLATDATA_FIELDDATEEXCEL_GET_ENTRYSCENEID_OFFSET UNITYSDK_OFFSET(0xD39E80)
#define FLATDATA_FIELDDATEEXCEL_GET_ENTRYSCENEID_OFFSET UNITYSDK_OFFSET(0xD39ED0)
#define FLATDATA_FIELDDATEEXCEL_GET_STARTCONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0xD39F50)
#define FLATDATA_FIELDDATEEXCEL_GET_STARTCONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0xD39FA0)
#define FLATDATA_FIELDDATEEXCEL_GET_STARTCONDITIONID_OFFSET UNITYSDK_OFFSET(0xD3A020)
#define FLATDATA_FIELDDATEEXCEL_GET_STARTCONDITIONID_OFFSET UNITYSDK_OFFSET(0xD3A070)
#define FLATDATA_FIELDDATEEXCEL_GET_ENDCONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0xD3A0F0)
#define FLATDATA_FIELDDATEEXCEL_GET_ENDCONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0xD3A140)
#define FLATDATA_FIELDDATEEXCEL_GET_ENDCONDITIONID_OFFSET UNITYSDK_OFFSET(0xD3A1C0)
#define FLATDATA_FIELDDATEEXCEL_GET_ENDCONDITIONID_OFFSET UNITYSDK_OFFSET(0xD3A210)
#define FLATDATA_FIELDDATEEXCEL_GET_ENDREADYCONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0xD3A290)
#define FLATDATA_FIELDDATEEXCEL_GET_ENDREADYCONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0xD3A2E0)
#define FLATDATA_FIELDDATEEXCEL_GET_ENDREADYCONDITIONID_OFFSET UNITYSDK_OFFSET(0xD3A360)
#define FLATDATA_FIELDDATEEXCEL_GET_ENDREADYCONDITIONID_OFFSET UNITYSDK_OFFSET(0xD3A3B0)
#define FLATDATA_FIELDDATEEXCEL_GET_OPENCONDITIONSTAGE_OFFSET UNITYSDK_OFFSET(0xD3A430)
#define FLATDATA_FIELDDATEEXCEL_GET_OPENCONDITIONSTAGE_OFFSET UNITYSDK_OFFSET(0xD3A480)
#define FLATDATA_FIELDDATEEXCEL_GET_CHARACTERICONPATH_OFFSET UNITYSDK_OFFSET(0xD3A500)
#define FLATDATA_FIELDDATEEXCEL_GET_CHARACTERICONPATH_OFFSET UNITYSDK_OFFSET(0xD3A540)
#define FLATDATA_FIELDDATEEXCEL_GETCHARACTERICONPATHBYTES_OFFSET UNITYSDK_OFFSET(0xD3A5B0)
#define FLATDATA_FIELDDATEEXCEL_GET_DATERESULTBGPATH_OFFSET UNITYSDK_OFFSET(0xD3A5D0)
#define FLATDATA_FIELDDATEEXCEL_GET_DATERESULTBGPATH_OFFSET UNITYSDK_OFFSET(0xD3A610)
#define FLATDATA_FIELDDATEEXCEL_GETDATERESULTBGPATHBYTES_OFFSET UNITYSDK_OFFSET(0xD3A680)
#define FLATDATA_FIELDDATEEXCEL_GET_DATERESULTSPINEPATH_OFFSET UNITYSDK_OFFSET(0xD3A6A0)
#define FLATDATA_FIELDDATEEXCEL_GET_DATERESULTSPINEPATH_OFFSET UNITYSDK_OFFSET(0xD3A6E0)
#define FLATDATA_FIELDDATEEXCEL_GETDATERESULTSPINEPATHBYTES_OFFSET UNITYSDK_OFFSET(0xD3A750)
#define FLATDATA_FIELDDATEEXCEL_GET_DATERESULTSPINEOFFSETX_OFFSET UNITYSDK_OFFSET(0xD3A770)
#define FLATDATA_FIELDDATEEXCEL_GET_DATERESULTSPINEOFFSETX_OFFSET UNITYSDK_OFFSET(0xD3A7C0)
#define FLATDATA_FIELDDATEEXCEL_CREATEFIELDDATEEXCEL_OFFSET UNITYSDK_OFFSET(0xD3A840)
#define FLATDATA_FIELDDATEEXCEL_STARTFIELDDATEEXCEL_OFFSET UNITYSDK_OFFSET(0xD3AE60)
#define FLATDATA_FIELDDATEEXCEL_ADDSEASONID_OFFSET UNITYSDK_OFFSET(0xD3AC60)
#define FLATDATA_FIELDDATEEXCEL_ADDUNIQUEID_OFFSET UNITYSDK_OFFSET(0xD3AC30)
#define FLATDATA_FIELDDATEEXCEL_ADDOPENDATE_OFFSET UNITYSDK_OFFSET(0xD3AC00)
#define FLATDATA_FIELDDATEEXCEL_ADDDATELOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0xD3ADE0)
#define FLATDATA_FIELDDATEEXCEL_ADDENTRYSCENEID_OFFSET UNITYSDK_OFFSET(0xD3ABD0)
#define FLATDATA_FIELDDATEEXCEL_ADDSTARTCONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0xD3ADB0)
#define FLATDATA_FIELDDATEEXCEL_ADDSTARTCONDITIONID_OFFSET UNITYSDK_OFFSET(0xD3ABA0)
#define FLATDATA_FIELDDATEEXCEL_ADDENDCONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0xD3AD80)
#define FLATDATA_FIELDDATEEXCEL_ADDENDCONDITIONID_OFFSET UNITYSDK_OFFSET(0xD3AB70)
#define FLATDATA_FIELDDATEEXCEL_ADDENDREADYCONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0xD3AD50)
#define FLATDATA_FIELDDATEEXCEL_ADDENDREADYCONDITIONID_OFFSET UNITYSDK_OFFSET(0xD3AB40)
#define FLATDATA_FIELDDATEEXCEL_ADDOPENCONDITIONSTAGE_OFFSET UNITYSDK_OFFSET(0xD3AB10)
#define FLATDATA_FIELDDATEEXCEL_ADDCHARACTERICONPATH_OFFSET UNITYSDK_OFFSET(0xD3AD20)
#define FLATDATA_FIELDDATEEXCEL_ADDDATERESULTBGPATH_OFFSET UNITYSDK_OFFSET(0xD3ACF0)
#define FLATDATA_FIELDDATEEXCEL_ADDDATERESULTSPINEPATH_OFFSET UNITYSDK_OFFSET(0xD3ACC0)
#define FLATDATA_FIELDDATEEXCEL_ADDDATERESULTSPINEOFFSETX_OFFSET UNITYSDK_OFFSET(0xD3AC90)
#define FLATDATA_FIELDDATEEXCEL_ENDFIELDDATEEXCEL_OFFSET UNITYSDK_OFFSET(0xD3AE10)

namespace FlatData
{
	inline static constexpr unsigned int FieldDateExcel_TypeDefinitionIndex = 9265;

	class FieldDateExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::FieldDateExcel* GetRootAsFieldDateExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::FieldDateExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_GETROOTASFIELDDATEEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::FieldDateExcel* GetRootAsFieldDateExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::FieldDateExcel* arg2)
		{
			return ((::FlatData::FieldDateExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::FieldDateExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_GETROOTASFIELDDATEEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::FieldDateExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::FieldDateExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_seasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Int64 get_uniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_openDate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_GET_OPENDATE_OFFSET))(nullptr);
		}

		::System::Int64 get_OpenDate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_GET_OPENDATE_OFFSET))(nullptr);
		}

		::System::String* get_dateLocalizeKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_GET_DATELOCALIZEKEY_OFFSET))(nullptr);
		}

		::System::String* get_DateLocalizeKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_GET_DATELOCALIZEKEY_OFFSET))(nullptr);
		}

		Il2CppObject* GetDateLocalizeKeyBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_GETDATELOCALIZEKEYBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_entrySceneId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_GET_ENTRYSCENEID_OFFSET))(nullptr);
		}

		::System::Int64 get_EntrySceneId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_GET_ENTRYSCENEID_OFFSET))(nullptr);
		}

		::FlatData::FieldConditionType* get_startConditionType()
		{
			return ((::FlatData::FieldConditionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_GET_STARTCONDITIONTYPE_OFFSET))(nullptr);
		}

		::FlatData::FieldConditionType* get_StartConditionType()
		{
			return ((::FlatData::FieldConditionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_GET_STARTCONDITIONTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_startConditionId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_GET_STARTCONDITIONID_OFFSET))(nullptr);
		}

		::System::Int64 get_StartConditionId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_GET_STARTCONDITIONID_OFFSET))(nullptr);
		}

		::FlatData::FieldConditionType* get_endConditionType()
		{
			return ((::FlatData::FieldConditionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_GET_ENDCONDITIONTYPE_OFFSET))(nullptr);
		}

		::FlatData::FieldConditionType* get_EndConditionType()
		{
			return ((::FlatData::FieldConditionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_GET_ENDCONDITIONTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_endConditionId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_GET_ENDCONDITIONID_OFFSET))(nullptr);
		}

		::System::Int64 get_EndConditionId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_GET_ENDCONDITIONID_OFFSET))(nullptr);
		}

		::FlatData::FieldConditionType* get_endReadyConditionType()
		{
			return ((::FlatData::FieldConditionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_GET_ENDREADYCONDITIONTYPE_OFFSET))(nullptr);
		}

		::FlatData::FieldConditionType* get_EndReadyConditionType()
		{
			return ((::FlatData::FieldConditionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_GET_ENDREADYCONDITIONTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_endReadyConditionId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_GET_ENDREADYCONDITIONID_OFFSET))(nullptr);
		}

		::System::Int64 get_EndReadyConditionId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_GET_ENDREADYCONDITIONID_OFFSET))(nullptr);
		}

		::System::Int64 get_openConditionStage()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_GET_OPENCONDITIONSTAGE_OFFSET))(nullptr);
		}

		::System::Int64 get_OpenConditionStage()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_GET_OPENCONDITIONSTAGE_OFFSET))(nullptr);
		}

		::System::String* get_characterIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_GET_CHARACTERICONPATH_OFFSET))(nullptr);
		}

		::System::String* get_CharacterIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_GET_CHARACTERICONPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetCharacterIconPathBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_GETCHARACTERICONPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_dateResultBGPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_GET_DATERESULTBGPATH_OFFSET))(nullptr);
		}

		::System::String* get_DateResultBGPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_GET_DATERESULTBGPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetDateResultBGPathBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_GETDATERESULTBGPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_dateResultSpinePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_GET_DATERESULTSPINEPATH_OFFSET))(nullptr);
		}

		::System::String* get_DateResultSpinePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_GET_DATERESULTSPINEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetDateResultSpinePathBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_GETDATERESULTSPINEPATHBYTES_OFFSET))(nullptr);
		}

		::System::Single get_dateResultSpineOffsetX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_GET_DATERESULTSPINEOFFSETX_OFFSET))(nullptr);
		}

		::System::Single get_DateResultSpineOffsetX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_GET_DATERESULTSPINEOFFSETX_OFFSET))(nullptr);
		}

		Il2CppObject* CreateFieldDateExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Int64 arg4, ::FlatBuffers::StringOffset* arg5, ::System::Int64 arg6, ::FlatData::FieldConditionType* arg7, ::System::Int64 arg8, ::FlatData::FieldConditionType* arg9, ::System::Int64 arg10, ::FlatData::FieldConditionType* arg11, ::System::Int64 arg12, ::System::Int64 arg13, ::FlatBuffers::StringOffset* arg14, ::FlatBuffers::StringOffset* arg15, ::FlatBuffers::StringOffset* arg16, ::System::Single arg17)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::System::Int64, ::FlatData::FieldConditionType*, ::System::Int64, ::FlatData::FieldConditionType*, ::System::Int64, ::FlatData::FieldConditionType*, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_CREATEFIELDDATEEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, nullptr);
		}

		::System::Void StartFieldDateExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_STARTFIELDDATEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddSeasonId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_ADDSEASONID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_ADDUNIQUEID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddOpenDate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_ADDOPENDATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddDateLocalizeKey(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_ADDDATELOCALIZEKEY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddEntrySceneId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_ADDENTRYSCENEID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStartConditionType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::FieldConditionType* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::FieldConditionType*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_ADDSTARTCONDITIONTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStartConditionId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_ADDSTARTCONDITIONID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddEndConditionType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::FieldConditionType* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::FieldConditionType*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_ADDENDCONDITIONTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddEndConditionId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_ADDENDCONDITIONID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddEndReadyConditionType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::FieldConditionType* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::FieldConditionType*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_ADDENDREADYCONDITIONTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddEndReadyConditionId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_ADDENDREADYCONDITIONID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddOpenConditionStage(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_ADDOPENCONDITIONSTAGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddCharacterIconPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_ADDCHARACTERICONPATH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddDateResultBGPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_ADDDATERESULTBGPATH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddDateResultSpinePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_ADDDATERESULTSPINEPATH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddDateResultSpineOffsetX(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_ADDDATERESULTSPINEOFFSETX_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndFieldDateExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDDATEEXCEL_ENDFIELDDATEEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

