#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class CharacterDialogFieldExcel; }
namespace FlatData { class FieldDialogType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xCE5B50)
#define FLATDATA_CHARACTERDIALOGFIELDEXCEL_GETROOTASCHARACTERDIALOGFIELDEXCEL_OFFSET UNITYSDK_OFFSET(0xCE5B60)
#define FLATDATA_CHARACTERDIALOGFIELDEXCEL_GETROOTASCHARACTERDIALOGFIELDEXCEL_OFFSET UNITYSDK_OFFSET(0xCE5BC0)
#define FLATDATA_CHARACTERDIALOGFIELDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xCE5C20)
#define FLATDATA_CHARACTERDIALOGFIELDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xCE5870)
#define FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xCE5C40)
#define FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xCE5C90)
#define FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_PHASE_OFFSET UNITYSDK_OFFSET(0xCE5D10)
#define FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_PHASE_OFFSET UNITYSDK_OFFSET(0xCE5D60)
#define FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_TARGETINDEX_OFFSET UNITYSDK_OFFSET(0xCE5DE0)
#define FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_TARGETINDEX_OFFSET UNITYSDK_OFFSET(0xCE5E30)
#define FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_DIALOGTYPE_OFFSET UNITYSDK_OFFSET(0xCE5EB0)
#define FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_DIALOGTYPE_OFFSET UNITYSDK_OFFSET(0xCE5F00)
#define FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_DURATION_OFFSET UNITYSDK_OFFSET(0xCE5F80)
#define FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_DURATION_OFFSET UNITYSDK_OFFSET(0xCE5FD0)
#define FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_MOTIONNAME_OFFSET UNITYSDK_OFFSET(0xCE6050)
#define FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_MOTIONNAME_OFFSET UNITYSDK_OFFSET(0xCE6090)
#define FLATDATA_CHARACTERDIALOGFIELDEXCEL_GETMOTIONNAMEBYTES_OFFSET UNITYSDK_OFFSET(0xCE6100)
#define FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_ISINTERACTIONDIALOG_OFFSET UNITYSDK_OFFSET(0xCE6120)
#define FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_ISINTERACTIONDIALOG_OFFSET UNITYSDK_OFFSET(0xCE6170)
#define FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_HIDEUI_OFFSET UNITYSDK_OFFSET(0xCE61C0)
#define FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_HIDEUI_OFFSET UNITYSDK_OFFSET(0xCE6210)
#define FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_LOCALIZEKR_OFFSET UNITYSDK_OFFSET(0xCE6260)
#define FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_LOCALIZEKR_OFFSET UNITYSDK_OFFSET(0xCE62A0)
#define FLATDATA_CHARACTERDIALOGFIELDEXCEL_GETLOCALIZEKRBYTES_OFFSET UNITYSDK_OFFSET(0xCE6310)
#define FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_LOCALIZEJP_OFFSET UNITYSDK_OFFSET(0xCE6330)
#define FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_LOCALIZEJP_OFFSET UNITYSDK_OFFSET(0xCE6370)
#define FLATDATA_CHARACTERDIALOGFIELDEXCEL_GETLOCALIZEJPBYTES_OFFSET UNITYSDK_OFFSET(0xCE63E0)
#define FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_LOCALIZETH_OFFSET UNITYSDK_OFFSET(0xCE6400)
#define FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_LOCALIZETH_OFFSET UNITYSDK_OFFSET(0xCE6440)
#define FLATDATA_CHARACTERDIALOGFIELDEXCEL_GETLOCALIZETHBYTES_OFFSET UNITYSDK_OFFSET(0xCE64B0)
#define FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_LOCALIZETW_OFFSET UNITYSDK_OFFSET(0xCE64D0)
#define FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_LOCALIZETW_OFFSET UNITYSDK_OFFSET(0xCE6510)
#define FLATDATA_CHARACTERDIALOGFIELDEXCEL_GETLOCALIZETWBYTES_OFFSET UNITYSDK_OFFSET(0xCE6580)
#define FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_LOCALIZEEN_OFFSET UNITYSDK_OFFSET(0xCE65A0)
#define FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_LOCALIZEEN_OFFSET UNITYSDK_OFFSET(0xCE65E0)
#define FLATDATA_CHARACTERDIALOGFIELDEXCEL_GETLOCALIZEENBYTES_OFFSET UNITYSDK_OFFSET(0xCE6650)
#define FLATDATA_CHARACTERDIALOGFIELDEXCEL_CREATECHARACTERDIALOGFIELDEXCEL_OFFSET UNITYSDK_OFFSET(0xCE6670)
#define FLATDATA_CHARACTERDIALOGFIELDEXCEL_STARTCHARACTERDIALOGFIELDEXCEL_OFFSET UNITYSDK_OFFSET(0xCE6B80)
#define FLATDATA_CHARACTERDIALOGFIELDEXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0xCE68F0)
#define FLATDATA_CHARACTERDIALOGFIELDEXCEL_ADDPHASE_OFFSET UNITYSDK_OFFSET(0xCE6AA0)
#define FLATDATA_CHARACTERDIALOGFIELDEXCEL_ADDTARGETINDEX_OFFSET UNITYSDK_OFFSET(0xCE6A70)
#define FLATDATA_CHARACTERDIALOGFIELDEXCEL_ADDDIALOGTYPE_OFFSET UNITYSDK_OFFSET(0xCE6A40)
#define FLATDATA_CHARACTERDIALOGFIELDEXCEL_ADDDURATION_OFFSET UNITYSDK_OFFSET(0xCE68C0)
#define FLATDATA_CHARACTERDIALOGFIELDEXCEL_ADDMOTIONNAME_OFFSET UNITYSDK_OFFSET(0xCE6A10)
#define FLATDATA_CHARACTERDIALOGFIELDEXCEL_ADDISINTERACTIONDIALOG_OFFSET UNITYSDK_OFFSET(0xCE6B00)
#define FLATDATA_CHARACTERDIALOGFIELDEXCEL_ADDHIDEUI_OFFSET UNITYSDK_OFFSET(0xCE6AD0)
#define FLATDATA_CHARACTERDIALOGFIELDEXCEL_ADDLOCALIZEKR_OFFSET UNITYSDK_OFFSET(0xCE69E0)
#define FLATDATA_CHARACTERDIALOGFIELDEXCEL_ADDLOCALIZEJP_OFFSET UNITYSDK_OFFSET(0xCE69B0)
#define FLATDATA_CHARACTERDIALOGFIELDEXCEL_ADDLOCALIZETH_OFFSET UNITYSDK_OFFSET(0xCE6980)
#define FLATDATA_CHARACTERDIALOGFIELDEXCEL_ADDLOCALIZETW_OFFSET UNITYSDK_OFFSET(0xCE6950)
#define FLATDATA_CHARACTERDIALOGFIELDEXCEL_ADDLOCALIZEEN_OFFSET UNITYSDK_OFFSET(0xCE6920)
#define FLATDATA_CHARACTERDIALOGFIELDEXCEL_ENDCHARACTERDIALOGFIELDEXCEL_OFFSET UNITYSDK_OFFSET(0xCE6B30)

namespace FlatData
{
	inline static constexpr unsigned int CharacterDialogFieldExcel_TypeDefinitionIndex = 9201;

	class CharacterDialogFieldExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::CharacterDialogFieldExcel* GetRootAsCharacterDialogFieldExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::CharacterDialogFieldExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL_GETROOTASCHARACTERDIALOGFIELDEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::CharacterDialogFieldExcel* GetRootAsCharacterDialogFieldExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::CharacterDialogFieldExcel* arg2)
		{
			return ((::FlatData::CharacterDialogFieldExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::CharacterDialogFieldExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL_GETROOTASCHARACTERDIALOGFIELDEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::CharacterDialogFieldExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::CharacterDialogFieldExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_groupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Int32 get_phase()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_PHASE_OFFSET))(nullptr);
		}

		::System::Int32 get_Phase()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_PHASE_OFFSET))(nullptr);
		}

		::System::Int32 get_targetIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_TARGETINDEX_OFFSET))(nullptr);
		}

		::System::Int32 get_TargetIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_TARGETINDEX_OFFSET))(nullptr);
		}

		::FlatData::FieldDialogType* get_dialogType()
		{
			return ((::FlatData::FieldDialogType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_DIALOGTYPE_OFFSET))(nullptr);
		}

		::FlatData::FieldDialogType* get_DialogType()
		{
			return ((::FlatData::FieldDialogType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_DIALOGTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_duration()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Int64 get_Duration()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_DURATION_OFFSET))(nullptr);
		}

		::System::String* get_motionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_MOTIONNAME_OFFSET))(nullptr);
		}

		::System::String* get_MotionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_MOTIONNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetMotionNameBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL_GETMOTIONNAMEBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_isInteractionDialog()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_ISINTERACTIONDIALOG_OFFSET))(nullptr);
		}

		::System::Boolean get_IsInteractionDialog()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_ISINTERACTIONDIALOG_OFFSET))(nullptr);
		}

		::System::Boolean get_hideUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_HIDEUI_OFFSET))(nullptr);
		}

		::System::Boolean get_HideUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_HIDEUI_OFFSET))(nullptr);
		}

		::System::String* get_localizeKR()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_LOCALIZEKR_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeKR()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_LOCALIZEKR_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeKRBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL_GETLOCALIZEKRBYTES_OFFSET))(nullptr);
		}

		::System::String* get_localizeJP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_LOCALIZEJP_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeJP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_LOCALIZEJP_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeJPBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL_GETLOCALIZEJPBYTES_OFFSET))(nullptr);
		}

		::System::String* get_localizeTH()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_LOCALIZETH_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeTH()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_LOCALIZETH_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeTHBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL_GETLOCALIZETHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_localizeTW()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_LOCALIZETW_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeTW()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_LOCALIZETW_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeTWBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL_GETLOCALIZETWBYTES_OFFSET))(nullptr);
		}

		::System::String* get_localizeEN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_LOCALIZEEN_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeEN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL_GET_LOCALIZEEN_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeENBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL_GETLOCALIZEENBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCharacterDialogFieldExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2, ::System::Int32 arg3, ::System::Int32 arg4, ::FlatData::FieldDialogType* arg5, ::System::Int64 arg6, ::FlatBuffers::StringOffset* arg7, ::System::Boolean arg8, ::System::Boolean arg9, ::FlatBuffers::StringOffset* arg10, ::FlatBuffers::StringOffset* arg11, ::FlatBuffers::StringOffset* arg12, ::FlatBuffers::StringOffset* arg13, ::FlatBuffers::StringOffset* arg14)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int32, ::System::Int32, ::FlatData::FieldDialogType*, ::System::Int64, ::FlatBuffers::StringOffset*, ::System::Boolean, ::System::Boolean, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL_CREATECHARACTERDIALOGFIELDEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, nullptr);
		}

		::System::Void StartCharacterDialogFieldExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL_STARTCHARACTERDIALOGFIELDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL_ADDGROUPID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddPhase(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL_ADDPHASE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddTargetIndex(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL_ADDTARGETINDEX_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddDialogType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::FieldDialogType* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::FieldDialogType*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL_ADDDIALOGTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddDuration(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL_ADDDURATION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddMotionName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL_ADDMOTIONNAME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddIsInteractionDialog(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL_ADDISINTERACTIONDIALOG_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddHideUI(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL_ADDHIDEUI_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddLocalizeKR(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL_ADDLOCALIZEKR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddLocalizeJP(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL_ADDLOCALIZEJP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddLocalizeTH(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL_ADDLOCALIZETH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddLocalizeTW(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL_ADDLOCALIZETW_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddLocalizeEN(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL_ADDLOCALIZEEN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndCharacterDialogFieldExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHARACTERDIALOGFIELDEXCEL_ENDCHARACTERDIALOGFIELDEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

