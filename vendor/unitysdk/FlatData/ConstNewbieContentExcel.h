#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class ConstNewbieContentExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define FLATDATA_CONSTNEWBIECONTENTEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD2A1A0)
#define FLATDATA_CONSTNEWBIECONTENTEXCEL_GETROOTASCONSTNEWBIECONTENTEXCEL_OFFSET UNITYSDK_OFFSET(0xD2A1B0)
#define FLATDATA_CONSTNEWBIECONTENTEXCEL_GETROOTASCONSTNEWBIECONTENTEXCEL_OFFSET UNITYSDK_OFFSET(0xD2A210)
#define FLATDATA_CONSTNEWBIECONTENTEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD2A270)
#define FLATDATA_CONSTNEWBIECONTENTEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD29EC0)
#define FLATDATA_CONSTNEWBIECONTENTEXCEL_GET_NEWBIEGACHARELEASEDATE_OFFSET UNITYSDK_OFFSET(0xD2A290)
#define FLATDATA_CONSTNEWBIECONTENTEXCEL_GET_NEWBIEGACHARELEASEDATE_OFFSET UNITYSDK_OFFSET(0xD2A2D0)
#define FLATDATA_CONSTNEWBIECONTENTEXCEL_GETNEWBIEGACHARELEASEDATEBYTES_OFFSET UNITYSDK_OFFSET(0xD2A340)
#define FLATDATA_CONSTNEWBIECONTENTEXCEL_GET_NEWBIEGACHACHECKDAYS_OFFSET UNITYSDK_OFFSET(0xD2A360)
#define FLATDATA_CONSTNEWBIECONTENTEXCEL_GET_NEWBIEGACHACHECKDAYS_OFFSET UNITYSDK_OFFSET(0xD2A3B0)
#define FLATDATA_CONSTNEWBIECONTENTEXCEL_GET_NEWBIEGACHATOKENGRACETIME_OFFSET UNITYSDK_OFFSET(0xD2A430)
#define FLATDATA_CONSTNEWBIECONTENTEXCEL_GET_NEWBIEGACHATOKENGRACETIME_OFFSET UNITYSDK_OFFSET(0xD2A480)
#define FLATDATA_CONSTNEWBIECONTENTEXCEL_GET_NEWBIEATTENDANCERELEASEDATE_OFFSET UNITYSDK_OFFSET(0xD2A500)
#define FLATDATA_CONSTNEWBIECONTENTEXCEL_GET_NEWBIEATTENDANCERELEASEDATE_OFFSET UNITYSDK_OFFSET(0xD2A540)
#define FLATDATA_CONSTNEWBIECONTENTEXCEL_GETNEWBIEATTENDANCERELEASEDATEBYTES_OFFSET UNITYSDK_OFFSET(0xD2A5B0)
#define FLATDATA_CONSTNEWBIECONTENTEXCEL_GET_NEWBIEATTENDANCESTARTABLEENDDAY_OFFSET UNITYSDK_OFFSET(0xD2A5D0)
#define FLATDATA_CONSTNEWBIECONTENTEXCEL_GET_NEWBIEATTENDANCESTARTABLEENDDAY_OFFSET UNITYSDK_OFFSET(0xD2A620)
#define FLATDATA_CONSTNEWBIECONTENTEXCEL_GET_NEWBIEATTENDANCEENDDAY_OFFSET UNITYSDK_OFFSET(0xD2A6A0)
#define FLATDATA_CONSTNEWBIECONTENTEXCEL_GET_NEWBIEATTENDANCEENDDAY_OFFSET UNITYSDK_OFFSET(0xD2A6F0)
#define FLATDATA_CONSTNEWBIECONTENTEXCEL_CREATECONSTNEWBIECONTENTEXCEL_OFFSET UNITYSDK_OFFSET(0xD2A770)
#define FLATDATA_CONSTNEWBIECONTENTEXCEL_STARTCONSTNEWBIECONTENTEXCEL_OFFSET UNITYSDK_OFFSET(0xD2AA10)
#define FLATDATA_CONSTNEWBIECONTENTEXCEL_ADDNEWBIEGACHARELEASEDATE_OFFSET UNITYSDK_OFFSET(0xD2A990)
#define FLATDATA_CONSTNEWBIECONTENTEXCEL_ADDNEWBIEGACHACHECKDAYS_OFFSET UNITYSDK_OFFSET(0xD2A960)
#define FLATDATA_CONSTNEWBIECONTENTEXCEL_ADDNEWBIEGACHATOKENGRACETIME_OFFSET UNITYSDK_OFFSET(0xD2A930)
#define FLATDATA_CONSTNEWBIECONTENTEXCEL_ADDNEWBIEATTENDANCERELEASEDATE_OFFSET UNITYSDK_OFFSET(0xD2A900)
#define FLATDATA_CONSTNEWBIECONTENTEXCEL_ADDNEWBIEATTENDANCESTARTABLEENDDAY_OFFSET UNITYSDK_OFFSET(0xD2A8D0)
#define FLATDATA_CONSTNEWBIECONTENTEXCEL_ADDNEWBIEATTENDANCEENDDAY_OFFSET UNITYSDK_OFFSET(0xD2A8A0)
#define FLATDATA_CONSTNEWBIECONTENTEXCEL_ENDCONSTNEWBIECONTENTEXCEL_OFFSET UNITYSDK_OFFSET(0xD2A9C0)

namespace FlatData
{
	inline static constexpr unsigned int ConstNewbieContentExcel_TypeDefinitionIndex = 9235;

	class ConstNewbieContentExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTNEWBIECONTENTEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::ConstNewbieContentExcel* GetRootAsConstNewbieContentExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::ConstNewbieContentExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTNEWBIECONTENTEXCEL_GETROOTASCONSTNEWBIECONTENTEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::ConstNewbieContentExcel* GetRootAsConstNewbieContentExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::ConstNewbieContentExcel* arg2)
		{
			return ((::FlatData::ConstNewbieContentExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::ConstNewbieContentExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTNEWBIECONTENTEXCEL_GETROOTASCONSTNEWBIECONTENTEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTNEWBIECONTENTEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::ConstNewbieContentExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::ConstNewbieContentExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTNEWBIECONTENTEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* get_newbieGachaReleaseDate()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTNEWBIECONTENTEXCEL_GET_NEWBIEGACHARELEASEDATE_OFFSET))(nullptr);
		}

		::System::String* get_NewbieGachaReleaseDate()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTNEWBIECONTENTEXCEL_GET_NEWBIEGACHARELEASEDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetNewbieGachaReleaseDateBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTNEWBIECONTENTEXCEL_GETNEWBIEGACHARELEASEDATEBYTES_OFFSET))(nullptr);
		}

		::System::Int32 get_newbieGachaCheckDays()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTNEWBIECONTENTEXCEL_GET_NEWBIEGACHACHECKDAYS_OFFSET))(nullptr);
		}

		::System::Int32 get_NewbieGachaCheckDays()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTNEWBIECONTENTEXCEL_GET_NEWBIEGACHACHECKDAYS_OFFSET))(nullptr);
		}

		::System::Int32 get_newbieGachaTokenGraceTime()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTNEWBIECONTENTEXCEL_GET_NEWBIEGACHATOKENGRACETIME_OFFSET))(nullptr);
		}

		::System::Int32 get_NewbieGachaTokenGraceTime()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTNEWBIECONTENTEXCEL_GET_NEWBIEGACHATOKENGRACETIME_OFFSET))(nullptr);
		}

		::System::String* get_newbieAttendanceReleaseDate()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTNEWBIECONTENTEXCEL_GET_NEWBIEATTENDANCERELEASEDATE_OFFSET))(nullptr);
		}

		::System::String* get_NewbieAttendanceReleaseDate()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTNEWBIECONTENTEXCEL_GET_NEWBIEATTENDANCERELEASEDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetNewbieAttendanceReleaseDateBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTNEWBIECONTENTEXCEL_GETNEWBIEATTENDANCERELEASEDATEBYTES_OFFSET))(nullptr);
		}

		::System::Int32 get_newbieAttendanceStartableEndDay()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTNEWBIECONTENTEXCEL_GET_NEWBIEATTENDANCESTARTABLEENDDAY_OFFSET))(nullptr);
		}

		::System::Int32 get_NewbieAttendanceStartableEndDay()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTNEWBIECONTENTEXCEL_GET_NEWBIEATTENDANCESTARTABLEENDDAY_OFFSET))(nullptr);
		}

		::System::Int32 get_newbieAttendanceEndDay()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTNEWBIECONTENTEXCEL_GET_NEWBIEATTENDANCEENDDAY_OFFSET))(nullptr);
		}

		::System::Int32 get_NewbieAttendanceEndDay()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTNEWBIECONTENTEXCEL_GET_NEWBIEATTENDANCEENDDAY_OFFSET))(nullptr);
		}

		Il2CppObject* CreateConstNewbieContentExcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2, ::System::Int32 arg3, ::System::Int32 arg4, ::FlatBuffers::StringOffset* arg5, ::System::Int32 arg6, ::System::Int32 arg7)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::System::Int32, ::System::Int32, ::FlatBuffers::StringOffset*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTNEWBIECONTENTEXCEL_CREATECONSTNEWBIECONTENTEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Void StartConstNewbieContentExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTNEWBIECONTENTEXCEL_STARTCONSTNEWBIECONTENTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddNewbieGachaReleaseDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTNEWBIECONTENTEXCEL_ADDNEWBIEGACHARELEASEDATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddNewbieGachaCheckDays(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTNEWBIECONTENTEXCEL_ADDNEWBIEGACHACHECKDAYS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddNewbieGachaTokenGraceTime(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTNEWBIECONTENTEXCEL_ADDNEWBIEGACHATOKENGRACETIME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddNewbieAttendanceReleaseDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTNEWBIECONTENTEXCEL_ADDNEWBIEATTENDANCERELEASEDATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddNewbieAttendanceStartableEndDay(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTNEWBIECONTENTEXCEL_ADDNEWBIEATTENDANCESTARTABLEENDDAY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddNewbieAttendanceEndDay(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTNEWBIECONTENTEXCEL_ADDNEWBIEATTENDANCEENDDAY_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndConstNewbieContentExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTNEWBIECONTENTEXCEL_ENDCONSTNEWBIECONTENTEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

