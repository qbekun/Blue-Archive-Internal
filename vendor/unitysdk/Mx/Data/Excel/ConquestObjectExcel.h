#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ConquestObjectExcel; }
namespace FlatData { class ConquestObjectType; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A60960)
#define MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_GETROOTASCONQUESTOBJECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1A60970)
#define MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_GETROOTASCONQUESTOBJECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1A609D0)
#define MX_DATA_EXCEL_CONQUESTOBJECTEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A60A60)
#define MX_DATA_EXCEL_CONQUESTOBJECTEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A60A30)
#define MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A60A80)
#define MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A60AD0)
#define MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_GET_CONQUESTOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x1A60B20)
#define MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1A60B70)
#define MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A60BC0)
#define MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_GETNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1A60C00)
#define MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_GET_PREFABNAME_OFFSET UNITYSDK_OFFSET(0x1A60C20)
#define MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_GETPREFABNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1A60C60)
#define MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_GET_CONQUESTREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1A60C80)
#define MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_GET_CONQUESTREWARDID_OFFSET UNITYSDK_OFFSET(0x1A60CD0)
#define MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_GET_CONQUESTREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A60D20)
#define MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_GET_DISPOSABLE_OFFSET UNITYSDK_OFFSET(0x1A60D70)
#define MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_GET_STEPINDEX_OFFSET UNITYSDK_OFFSET(0x1A60DC0)
#define MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_GET_STEPOBJECTCOUNT_OFFSET UNITYSDK_OFFSET(0x1A60E10)
#define MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_CREATECONQUESTOBJECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1A60E60)
#define MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_STARTCONQUESTOBJECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1A61310)
#define MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1A610E0)
#define MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A610B0)
#define MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_ADDCONQUESTOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x1A61260)
#define MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_ADDKEY_OFFSET UNITYSDK_OFFSET(0x1A61230)
#define MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_ADDNAME_OFFSET UNITYSDK_OFFSET(0x1A61200)
#define MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_ADDPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1A611D0)
#define MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_ADDCONQUESTREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1A611A0)
#define MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_ADDCONQUESTREWARDID_OFFSET UNITYSDK_OFFSET(0x1A61080)
#define MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_ADDCONQUESTREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A61170)
#define MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_ADDDISPOSABLE_OFFSET UNITYSDK_OFFSET(0x1A61290)
#define MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_ADDSTEPINDEX_OFFSET UNITYSDK_OFFSET(0x1A61140)
#define MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_ADDSTEPOBJECTCOUNT_OFFSET UNITYSDK_OFFSET(0x1A61110)
#define MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_ENDCONQUESTOBJECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1A612C0)
#define MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_FINISHCONQUESTOBJECTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A61330)
#define MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_FINISHSIZEPREFIXEDCONQUESTOBJECTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A61350)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ConquestObjectExcel_TypeDefinitionIndex = 17254;

	class ConquestObjectExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ConquestObjectExcel* GetRootAsConquestObjectExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ConquestObjectExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_GETROOTASCONQUESTOBJECTEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ConquestObjectExcel* GetRootAsConquestObjectExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ConquestObjectExcel* arg)
		{
			return (return (::MX::Data::Excel::ConquestObjectExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ConquestObjectExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_GETROOTASCONQUESTOBJECTEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ConquestObjectExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ConquestObjectExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::FlatData::ConquestObjectType* get_ConquestObjectType()
		{
			return (return (::FlatData::ConquestObjectType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_GET_CONQUESTOBJECTTYPE_OFFSET))(nullptr);
		}

		::System::UInt32 get_Key()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_GET_KEY_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_GET_NAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_GETNAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_PrefabName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_GET_PREFABNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetPrefabNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_GETPREFABNAMEBYTES_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_ConquestRewardParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_GET_CONQUESTREWARDPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ConquestRewardID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_GET_CONQUESTREWARDID_OFFSET))(nullptr);
		}

		::System::Int32 get_ConquestRewardAmount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_GET_CONQUESTREWARDAMOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_Disposable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_GET_DISPOSABLE_OFFSET))(nullptr);
		}

		::System::Int32 get_StepIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_GET_STEPINDEX_OFFSET))(nullptr);
		}

		::System::Int32 get_StepObjectCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_GET_STEPOBJECTCOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* CreateConquestObjectExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::ConquestObjectType* arg, ::System::UInt32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatData::ConquestObjectType*, ::System::UInt32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatData::ParcelType*, ::System::Int64, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_CREATECONQUESTOBJECTEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartConquestObjectExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_STARTCONQUESTOBJECTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConquestObjectType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ConquestObjectType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ConquestObjectType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_ADDCONQUESTOBJECTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddKey(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_ADDKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_ADDNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPrefabName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_ADDPREFABNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConquestRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_ADDCONQUESTREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConquestRewardID(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_ADDCONQUESTREWARDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConquestRewardAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_ADDCONQUESTREWARDAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisposable(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_ADDDISPOSABLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStepIndex(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_ADDSTEPINDEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStepObjectCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_ADDSTEPOBJECTCOUNT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndConquestObjectExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_ENDCONQUESTOBJECTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishConquestObjectExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_FINISHCONQUESTOBJECTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedConquestObjectExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTEXCEL_FINISHSIZEPREFIXEDCONQUESTOBJECTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

