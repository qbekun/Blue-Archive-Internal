#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class ConstFieldExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define FLATDATA_CONSTFIELDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD06B10)
#define FLATDATA_CONSTFIELDEXCEL_GETROOTASCONSTFIELDEXCEL_OFFSET UNITYSDK_OFFSET(0xD06B20)
#define FLATDATA_CONSTFIELDEXCEL_GETROOTASCONSTFIELDEXCEL_OFFSET UNITYSDK_OFFSET(0xD06B80)
#define FLATDATA_CONSTFIELDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD06BE0)
#define FLATDATA_CONSTFIELDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD06830)
#define FLATDATA_CONSTFIELDEXCEL_GET_DIALOGSMOOTHTIME_OFFSET UNITYSDK_OFFSET(0xD06C00)
#define FLATDATA_CONSTFIELDEXCEL_GET_DIALOGSMOOTHTIME_OFFSET UNITYSDK_OFFSET(0xD06C50)
#define FLATDATA_CONSTFIELDEXCEL_GET_TALKDIALOGDURATIONDEFAULT_OFFSET UNITYSDK_OFFSET(0xD06CD0)
#define FLATDATA_CONSTFIELDEXCEL_GET_TALKDIALOGDURATIONDEFAULT_OFFSET UNITYSDK_OFFSET(0xD06D20)
#define FLATDATA_CONSTFIELDEXCEL_GET_THINKDIALOGDURATIONDEFAULT_OFFSET UNITYSDK_OFFSET(0xD06DA0)
#define FLATDATA_CONSTFIELDEXCEL_GET_THINKDIALOGDURATIONDEFAULT_OFFSET UNITYSDK_OFFSET(0xD06DF0)
#define FLATDATA_CONSTFIELDEXCEL_GET_IDLETHINKDELAYMIN_OFFSET UNITYSDK_OFFSET(0xD06E70)
#define FLATDATA_CONSTFIELDEXCEL_GET_IDLETHINKDELAYMIN_OFFSET UNITYSDK_OFFSET(0xD06EC0)
#define FLATDATA_CONSTFIELDEXCEL_GET_IDLETHINKDELAYMAX_OFFSET UNITYSDK_OFFSET(0xD06F40)
#define FLATDATA_CONSTFIELDEXCEL_GET_IDLETHINKDELAYMAX_OFFSET UNITYSDK_OFFSET(0xD06F90)
#define FLATDATA_CONSTFIELDEXCEL_CREATECONSTFIELDEXCEL_OFFSET UNITYSDK_OFFSET(0xD07010)
#define FLATDATA_CONSTFIELDEXCEL_STARTCONSTFIELDEXCEL_OFFSET UNITYSDK_OFFSET(0xD07250)
#define FLATDATA_CONSTFIELDEXCEL_ADDDIALOGSMOOTHTIME_OFFSET UNITYSDK_OFFSET(0xD071D0)
#define FLATDATA_CONSTFIELDEXCEL_ADDTALKDIALOGDURATIONDEFAULT_OFFSET UNITYSDK_OFFSET(0xD071A0)
#define FLATDATA_CONSTFIELDEXCEL_ADDTHINKDIALOGDURATIONDEFAULT_OFFSET UNITYSDK_OFFSET(0xD07170)
#define FLATDATA_CONSTFIELDEXCEL_ADDIDLETHINKDELAYMIN_OFFSET UNITYSDK_OFFSET(0xD07140)
#define FLATDATA_CONSTFIELDEXCEL_ADDIDLETHINKDELAYMAX_OFFSET UNITYSDK_OFFSET(0xD07110)
#define FLATDATA_CONSTFIELDEXCEL_ENDCONSTFIELDEXCEL_OFFSET UNITYSDK_OFFSET(0xD07200)

namespace FlatData
{
	inline static constexpr unsigned int ConstFieldExcel_TypeDefinitionIndex = 9223;

	class ConstFieldExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTFIELDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::ConstFieldExcel* GetRootAsConstFieldExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::ConstFieldExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTFIELDEXCEL_GETROOTASCONSTFIELDEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::ConstFieldExcel* GetRootAsConstFieldExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::ConstFieldExcel* arg2)
		{
			return ((::FlatData::ConstFieldExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::ConstFieldExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTFIELDEXCEL_GETROOTASCONSTFIELDEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTFIELDEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::ConstFieldExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::ConstFieldExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTFIELDEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 get_dialogSmoothTime()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTFIELDEXCEL_GET_DIALOGSMOOTHTIME_OFFSET))(nullptr);
		}

		::System::Int32 get_DialogSmoothTime()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTFIELDEXCEL_GET_DIALOGSMOOTHTIME_OFFSET))(nullptr);
		}

		::System::Int32 get_talkDialogDurationDefault()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTFIELDEXCEL_GET_TALKDIALOGDURATIONDEFAULT_OFFSET))(nullptr);
		}

		::System::Int32 get_TalkDialogDurationDefault()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTFIELDEXCEL_GET_TALKDIALOGDURATIONDEFAULT_OFFSET))(nullptr);
		}

		::System::Int32 get_thinkDialogDurationDefault()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTFIELDEXCEL_GET_THINKDIALOGDURATIONDEFAULT_OFFSET))(nullptr);
		}

		::System::Int32 get_ThinkDialogDurationDefault()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTFIELDEXCEL_GET_THINKDIALOGDURATIONDEFAULT_OFFSET))(nullptr);
		}

		::System::Int32 get_idleThinkDelayMin()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTFIELDEXCEL_GET_IDLETHINKDELAYMIN_OFFSET))(nullptr);
		}

		::System::Int32 get_IdleThinkDelayMin()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTFIELDEXCEL_GET_IDLETHINKDELAYMIN_OFFSET))(nullptr);
		}

		::System::Int32 get_idleThinkDelayMax()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTFIELDEXCEL_GET_IDLETHINKDELAYMAX_OFFSET))(nullptr);
		}

		::System::Int32 get_IdleThinkDelayMax()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTFIELDEXCEL_GET_IDLETHINKDELAYMAX_OFFSET))(nullptr);
		}

		Il2CppObject* CreateConstFieldExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2, ::System::Int32 arg3, ::System::Int32 arg4, ::System::Int32 arg5, ::System::Int32 arg6)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTFIELDEXCEL_CREATECONSTFIELDEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void StartConstFieldExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTFIELDEXCEL_STARTCONSTFIELDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddDialogSmoothTime(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTFIELDEXCEL_ADDDIALOGSMOOTHTIME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddTalkDialogDurationDefault(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTFIELDEXCEL_ADDTALKDIALOGDURATIONDEFAULT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddThinkDialogDurationDefault(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTFIELDEXCEL_ADDTHINKDIALOGDURATIONDEFAULT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddIdleThinkDelayMin(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTFIELDEXCEL_ADDIDLETHINKDELAYMIN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddIdleThinkDelayMax(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTFIELDEXCEL_ADDIDLETHINKDELAYMAX_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndConstFieldExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTFIELDEXCEL_ENDCONSTFIELDEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

