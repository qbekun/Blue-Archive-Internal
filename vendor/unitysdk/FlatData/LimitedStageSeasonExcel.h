#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class LimitedStageSeasonExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define FLATDATA_LIMITEDSTAGESEASONEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD4FEC0)
#define FLATDATA_LIMITEDSTAGESEASONEXCEL_GETROOTASLIMITEDSTAGESEASONEXCEL_OFFSET UNITYSDK_OFFSET(0xD4FED0)
#define FLATDATA_LIMITEDSTAGESEASONEXCEL_GETROOTASLIMITEDSTAGESEASONEXCEL_OFFSET UNITYSDK_OFFSET(0xD4FF30)
#define FLATDATA_LIMITEDSTAGESEASONEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD4FFC0)
#define FLATDATA_LIMITEDSTAGESEASONEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD4FF90)
#define FLATDATA_LIMITEDSTAGESEASONEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0xD4FFE0)
#define FLATDATA_LIMITEDSTAGESEASONEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0xD50030)
#define FLATDATA_LIMITEDSTAGESEASONEXCEL_GET_STARTDATE_OFFSET UNITYSDK_OFFSET(0xD500B0)
#define FLATDATA_LIMITEDSTAGESEASONEXCEL_GET_STARTDATE_OFFSET UNITYSDK_OFFSET(0xD500F0)
#define FLATDATA_LIMITEDSTAGESEASONEXCEL_GETSTARTDATEBYTES_OFFSET UNITYSDK_OFFSET(0xD50160)
#define FLATDATA_LIMITEDSTAGESEASONEXCEL_GET_ENDDATE_OFFSET UNITYSDK_OFFSET(0xD50180)
#define FLATDATA_LIMITEDSTAGESEASONEXCEL_GET_ENDDATE_OFFSET UNITYSDK_OFFSET(0xD501C0)
#define FLATDATA_LIMITEDSTAGESEASONEXCEL_GETENDDATEBYTES_OFFSET UNITYSDK_OFFSET(0xD50230)
#define FLATDATA_LIMITEDSTAGESEASONEXCEL_GET_TYPEACOUNT_OFFSET UNITYSDK_OFFSET(0xD50250)
#define FLATDATA_LIMITEDSTAGESEASONEXCEL_GET_TYPEACOUNT_OFFSET UNITYSDK_OFFSET(0xD502A0)
#define FLATDATA_LIMITEDSTAGESEASONEXCEL_GET_TYPEBCOUNT_OFFSET UNITYSDK_OFFSET(0xD50320)
#define FLATDATA_LIMITEDSTAGESEASONEXCEL_GET_TYPEBCOUNT_OFFSET UNITYSDK_OFFSET(0xD50370)
#define FLATDATA_LIMITEDSTAGESEASONEXCEL_GET_TYPECCOUNT_OFFSET UNITYSDK_OFFSET(0xD503F0)
#define FLATDATA_LIMITEDSTAGESEASONEXCEL_GET_TYPECCOUNT_OFFSET UNITYSDK_OFFSET(0xD50440)
#define FLATDATA_LIMITEDSTAGESEASONEXCEL_CREATELIMITEDSTAGESEASONEXCEL_OFFSET UNITYSDK_OFFSET(0xD504C0)
#define FLATDATA_LIMITEDSTAGESEASONEXCEL_STARTLIMITEDSTAGESEASONEXCEL_OFFSET UNITYSDK_OFFSET(0xD50760)
#define FLATDATA_LIMITEDSTAGESEASONEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0xD50680)
#define FLATDATA_LIMITEDSTAGESEASONEXCEL_ADDSTARTDATE_OFFSET UNITYSDK_OFFSET(0xD506E0)
#define FLATDATA_LIMITEDSTAGESEASONEXCEL_ADDENDDATE_OFFSET UNITYSDK_OFFSET(0xD506B0)
#define FLATDATA_LIMITEDSTAGESEASONEXCEL_ADDTYPEACOUNT_OFFSET UNITYSDK_OFFSET(0xD50650)
#define FLATDATA_LIMITEDSTAGESEASONEXCEL_ADDTYPEBCOUNT_OFFSET UNITYSDK_OFFSET(0xD50620)
#define FLATDATA_LIMITEDSTAGESEASONEXCEL_ADDTYPECCOUNT_OFFSET UNITYSDK_OFFSET(0xD505F0)
#define FLATDATA_LIMITEDSTAGESEASONEXCEL_ENDLIMITEDSTAGESEASONEXCEL_OFFSET UNITYSDK_OFFSET(0xD50710)

namespace FlatData
{
	inline static constexpr unsigned int LimitedStageSeasonExcel_TypeDefinitionIndex = 9305;

	class LimitedStageSeasonExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGESEASONEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::LimitedStageSeasonExcel* GetRootAsLimitedStageSeasonExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::LimitedStageSeasonExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGESEASONEXCEL_GETROOTASLIMITEDSTAGESEASONEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::LimitedStageSeasonExcel* GetRootAsLimitedStageSeasonExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::LimitedStageSeasonExcel* arg2)
		{
			return ((::FlatData::LimitedStageSeasonExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::LimitedStageSeasonExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGESEASONEXCEL_GETROOTASLIMITEDSTAGESEASONEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGESEASONEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::LimitedStageSeasonExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::LimitedStageSeasonExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGESEASONEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGESEASONEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGESEASONEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::String* get_startDate()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGESEASONEXCEL_GET_STARTDATE_OFFSET))(nullptr);
		}

		::System::String* get_StartDate()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGESEASONEXCEL_GET_STARTDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetStartDateBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGESEASONEXCEL_GETSTARTDATEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_endDate()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGESEASONEXCEL_GET_ENDDATE_OFFSET))(nullptr);
		}

		::System::String* get_EndDate()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGESEASONEXCEL_GET_ENDDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetEndDateBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGESEASONEXCEL_GETENDDATEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_typeACount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGESEASONEXCEL_GET_TYPEACOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_TypeACount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGESEASONEXCEL_GET_TYPEACOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_typeBCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGESEASONEXCEL_GET_TYPEBCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_TypeBCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGESEASONEXCEL_GET_TYPEBCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_typeCCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGESEASONEXCEL_GET_TYPECCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_TypeCCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGESEASONEXCEL_GET_TYPECCOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* CreateLimitedStageSeasonExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2, ::FlatBuffers::StringOffset* arg3, ::FlatBuffers::StringOffset* arg4, ::System::Int64 arg5, ::System::Int64 arg6, ::System::Int64 arg7)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGESEASONEXCEL_CREATELIMITEDSTAGESEASONEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Void StartLimitedStageSeasonExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGESEASONEXCEL_STARTLIMITEDSTAGESEASONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGESEASONEXCEL_ADDID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStartDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGESEASONEXCEL_ADDSTARTDATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddEndDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGESEASONEXCEL_ADDENDDATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddTypeACount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGESEASONEXCEL_ADDTYPEACOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddTypeBCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGESEASONEXCEL_ADDTYPEBCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddTypeCCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGESEASONEXCEL_ADDTYPECCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndLimitedStageSeasonExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_LIMITEDSTAGESEASONEXCEL_ENDLIMITEDSTAGESEASONEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

