#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class GooglePlayAchievementExcel; }
namespace FlatData { class ConditionType; }
namespace FlatData { class AchievementType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B3DA90)
#define MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTEXCEL_GETROOTASGOOGLEPLAYACHIEVEMENTEXCEL_OFFSET UNITYSDK_OFFSET(0x1B3DAA0)
#define MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTEXCEL_GETROOTASGOOGLEPLAYACHIEVEMENTEXCEL_OFFSET UNITYSDK_OFFSET(0x1B3DB00)
#define MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B3DB90)
#define MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B3DB60)
#define MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B3DBB0)
#define MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTEXCEL_GET_CONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1B3DC00)
#define MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTEXCEL_GET_CONDITIONVALUE_OFFSET UNITYSDK_OFFSET(0x1B3DC50)
#define MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTEXCEL_GET_GOOGLEPLAYID_OFFSET UNITYSDK_OFFSET(0x1B3DCA0)
#define MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTEXCEL_GETGOOGLEPLAYIDBYTES_OFFSET UNITYSDK_OFFSET(0x1B3DCE0)
#define MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTEXCEL_GET_ACHIEVEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x1B3DD00)
#define MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTEXCEL_CREATEGOOGLEPLAYACHIEVEMENTEXCEL_OFFSET UNITYSDK_OFFSET(0x1B3DD50)
#define MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTEXCEL_STARTGOOGLEPLAYACHIEVEMENTEXCEL_OFFSET UNITYSDK_OFFSET(0x1B3DF90)
#define MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1B3DE80)
#define MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTEXCEL_ADDCONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1B3DF10)
#define MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTEXCEL_ADDCONDITIONVALUE_OFFSET UNITYSDK_OFFSET(0x1B3DE50)
#define MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTEXCEL_ADDGOOGLEPLAYID_OFFSET UNITYSDK_OFFSET(0x1B3DEE0)
#define MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTEXCEL_ADDACHIEVEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x1B3DEB0)
#define MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTEXCEL_ENDGOOGLEPLAYACHIEVEMENTEXCEL_OFFSET UNITYSDK_OFFSET(0x1B3DF40)
#define MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTEXCEL_FINISHGOOGLEPLAYACHIEVEMENTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B3DFB0)
#define MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTEXCEL_FINISHSIZEPREFIXEDGOOGLEPLAYACHIEVEMENTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B3DFD0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int GooglePlayAchievementExcel_TypeDefinitionIndex = 18114;

	class GooglePlayAchievementExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::GooglePlayAchievementExcel* GetRootAsGooglePlayAchievementExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::GooglePlayAchievementExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTEXCEL_GETROOTASGOOGLEPLAYACHIEVEMENTEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::GooglePlayAchievementExcel* GetRootAsGooglePlayAchievementExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::GooglePlayAchievementExcel* arg)
		{
			return (return (::MX::Data::Excel::GooglePlayAchievementExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::GooglePlayAchievementExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTEXCEL_GETROOTASGOOGLEPLAYACHIEVEMENTEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::GooglePlayAchievementExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::GooglePlayAchievementExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::FlatData::ConditionType* get_ConditionType()
		{
			return (return (::FlatData::ConditionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTEXCEL_GET_CONDITIONTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ConditionValue()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTEXCEL_GET_CONDITIONVALUE_OFFSET))(nullptr);
		}

		::System::String* get_GooglePlayId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTEXCEL_GET_GOOGLEPLAYID_OFFSET))(nullptr);
		}

		Il2CppObject* GetGooglePlayIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTEXCEL_GETGOOGLEPLAYIDBYTES_OFFSET))(nullptr);
		}

		::FlatData::AchievementType* get_AchievementType()
		{
			return (return (::FlatData::AchievementType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTEXCEL_GET_ACHIEVEMENTTYPE_OFFSET))(nullptr);
		}

		Il2CppObject* CreateGooglePlayAchievementExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::ConditionType* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatData::AchievementType* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::ConditionType*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatData::AchievementType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTEXCEL_CREATEGOOGLEPLAYACHIEVEMENTEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartGooglePlayAchievementExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTEXCEL_STARTGOOGLEPLAYACHIEVEMENTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConditionType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ConditionType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ConditionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTEXCEL_ADDCONDITIONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConditionValue(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTEXCEL_ADDCONDITIONVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGooglePlayId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTEXCEL_ADDGOOGLEPLAYID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAchievementType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::AchievementType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::AchievementType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTEXCEL_ADDACHIEVEMENTTYPE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndGooglePlayAchievementExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTEXCEL_ENDGOOGLEPLAYACHIEVEMENTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishGooglePlayAchievementExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTEXCEL_FINISHGOOGLEPLAYACHIEVEMENTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedGooglePlayAchievementExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTEXCEL_FINISHSIZEPREFIXEDGOOGLEPLAYACHIEVEMENTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

