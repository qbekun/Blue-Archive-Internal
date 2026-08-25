#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MinigameTBGObjectExcel; }
namespace FlatData { class TBGObjectType; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C07A40)
#define MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_GETROOTASMINIGAMETBGOBJECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1C07A50)
#define MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_GETROOTASMINIGAMETBGOBJECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1C07AB0)
#define MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C07B40)
#define MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C07B10)
#define MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C07B60)
#define MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1C07BB0)
#define MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_GETKEYBYTES_OFFSET UNITYSDK_OFFSET(0x1C07BF0)
#define MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_GET_PREFABNAME_OFFSET UNITYSDK_OFFSET(0x1C07C10)
#define MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_GETPREFABNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1C07C50)
#define MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_GET_OBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x1C07C70)
#define MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_GET_OBJECTCOSTTYPE_OFFSET UNITYSDK_OFFSET(0x1C07CC0)
#define MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_GET_OBJECTCOSTID_OFFSET UNITYSDK_OFFSET(0x1C07D10)
#define MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_GET_OBJECTCOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C07D60)
#define MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_GET_DISPOSABLE_OFFSET UNITYSDK_OFFSET(0x1C07DB0)
#define MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_GET_REENCOUNTERCOST_OFFSET UNITYSDK_OFFSET(0x1C07E00)
#define MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_CREATEMINIGAMETBGOBJECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1C07E50)
#define MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_STARTMINIGAMETBGOBJECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1C08200)
#define MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_ADDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C08030)
#define MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_ADDKEY_OFFSET UNITYSDK_OFFSET(0x1C08120)
#define MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_ADDPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1C080F0)
#define MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_ADDOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x1C080C0)
#define MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_ADDOBJECTCOSTTYPE_OFFSET UNITYSDK_OFFSET(0x1C08090)
#define MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_ADDOBJECTCOSTID_OFFSET UNITYSDK_OFFSET(0x1C08000)
#define MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_ADDOBJECTCOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C08060)
#define MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_ADDDISPOSABLE_OFFSET UNITYSDK_OFFSET(0x1C08180)
#define MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_ADDREENCOUNTERCOST_OFFSET UNITYSDK_OFFSET(0x1C08150)
#define MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_ENDMINIGAMETBGOBJECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1C081B0)
#define MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_FINISHMINIGAMETBGOBJECTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C08220)
#define MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_FINISHSIZEPREFIXEDMINIGAMETBGOBJECTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C08240)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameTBGObjectExcel_TypeDefinitionIndex = 18894;

	class MinigameTBGObjectExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MinigameTBGObjectExcel* GetRootAsMinigameTBGObjectExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameTBGObjectExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_GETROOTASMINIGAMETBGOBJECTEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MinigameTBGObjectExcel* GetRootAsMinigameTBGObjectExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MinigameTBGObjectExcel* arg)
		{
			return (return (::MX::Data::Excel::MinigameTBGObjectExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MinigameTBGObjectExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_GETROOTASMINIGAMETBGOBJECTEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MinigameTBGObjectExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameTBGObjectExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::String* get_Key()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_GET_KEY_OFFSET))(nullptr);
		}

		Il2CppObject* GetKeyBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_GETKEYBYTES_OFFSET))(nullptr);
		}

		::System::String* get_PrefabName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_GET_PREFABNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetPrefabNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_GETPREFABNAMEBYTES_OFFSET))(nullptr);
		}

		::FlatData::TBGObjectType* get_ObjectType()
		{
			return (return (::FlatData::TBGObjectType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_GET_OBJECTTYPE_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_ObjectCostType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_GET_OBJECTCOSTTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ObjectCostId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_GET_OBJECTCOSTID_OFFSET))(nullptr);
		}

		::System::Int32 get_ObjectCostAmount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_GET_OBJECTCOSTAMOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_Disposable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_GET_DISPOSABLE_OFFSET))(nullptr);
		}

		::System::Boolean get_ReEncounterCost()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_GET_REENCOUNTERCOST_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMinigameTBGObjectExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatData::TBGObjectType* arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatData::TBGObjectType*, ::FlatData::ParcelType*, ::System::Int64, ::System::Int32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_CREATEMINIGAMETBGOBJECTEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMinigameTBGObjectExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_STARTMINIGAMETBGOBJECTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_ADDUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddKey(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_ADDKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPrefabName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_ADDPREFABNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddObjectType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::TBGObjectType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::TBGObjectType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_ADDOBJECTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddObjectCostType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_ADDOBJECTCOSTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddObjectCostId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_ADDOBJECTCOSTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddObjectCostAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_ADDOBJECTCOSTAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisposable(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_ADDDISPOSABLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddReEncounterCost(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_ADDREENCOUNTERCOST_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMinigameTBGObjectExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_ENDMINIGAMETBGOBJECTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMinigameTBGObjectExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_FINISHMINIGAMETBGOBJECTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMinigameTBGObjectExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGOBJECTEXCEL_FINISHSIZEPREFIXEDMINIGAMETBGOBJECTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

