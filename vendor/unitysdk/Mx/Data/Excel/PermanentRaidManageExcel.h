#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class PermanentRaidManageExcel; }
namespace FlatData { class RaidBossGroupType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C25740)
#define MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCEL_GETROOTASPERMANENTRAIDMANAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C25750)
#define MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCEL_GETROOTASPERMANENTRAIDMANAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C257B0)
#define MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C25840)
#define MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C25810)
#define MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCEL_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1C25860)
#define MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCEL_OPENRAIDBOSSGROUP_OFFSET UNITYSDK_OFFSET(0x1C258B0)
#define MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCEL_GET_OPENRAIDBOSSGROUPLENGTH_OFFSET UNITYSDK_OFFSET(0x1C25900)
#define MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCEL_HIDEDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1C25940)
#define MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCEL_GET_HIDEDIFFICULTYLENGTH_OFFSET UNITYSDK_OFFSET(0x1C25990)
#define MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCEL_GET_OPENDATE_OFFSET UNITYSDK_OFFSET(0x1C259D0)
#define MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCEL_GETOPENDATEBYTES_OFFSET UNITYSDK_OFFSET(0x1C25A10)
#define MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCEL_CREATEPERMANENTRAIDMANAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C25A30)
#define MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCEL_STARTPERMANENTRAIDMANAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C25C20)
#define MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCEL_ADDTYPE_OFFSET UNITYSDK_OFFSET(0x1C25BA0)
#define MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCEL_ADDOPENRAIDBOSSGROUP_OFFSET UNITYSDK_OFFSET(0x1C25B70)
#define MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCEL_CREATEOPENRAIDBOSSGROUPVECTOR_OFFSET UNITYSDK_OFFSET(0x1C25C40)
#define MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCEL_STARTOPENRAIDBOSSGROUPVECTOR_OFFSET UNITYSDK_OFFSET(0x1C25CD0)
#define MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCEL_ADDHIDEDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1C25B40)
#define MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCEL_CREATEHIDEDIFFICULTYVECTOR_OFFSET UNITYSDK_OFFSET(0x1C25D10)
#define MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCEL_STARTHIDEDIFFICULTYVECTOR_OFFSET UNITYSDK_OFFSET(0x1C25DA0)
#define MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCEL_ADDOPENDATE_OFFSET UNITYSDK_OFFSET(0x1C25B10)
#define MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCEL_ENDPERMANENTRAIDMANAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C25BD0)
#define MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCEL_FINISHPERMANENTRAIDMANAGEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C25DE0)
#define MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCEL_FINISHSIZEPREFIXEDPERMANENTRAIDMANAGEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C25E00)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int PermanentRaidManageExcel_TypeDefinitionIndex = 19019;

	class PermanentRaidManageExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::PermanentRaidManageExcel* GetRootAsPermanentRaidManageExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::PermanentRaidManageExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCEL_GETROOTASPERMANENTRAIDMANAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::PermanentRaidManageExcel* GetRootAsPermanentRaidManageExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::PermanentRaidManageExcel* arg)
		{
			return (return (::MX::Data::Excel::PermanentRaidManageExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::PermanentRaidManageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCEL_GETROOTASPERMANENTRAIDMANAGEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::PermanentRaidManageExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::PermanentRaidManageExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::FlatData::RaidBossGroupType* get_Type()
		{
			return (return (::FlatData::RaidBossGroupType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCEL_GET_TYPE_OFFSET))(nullptr);
		}

		::System::String* OpenRaidBossGroup(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCEL_OPENRAIDBOSSGROUP_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_OpenRaidBossGroupLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCEL_GET_OPENRAIDBOSSGROUPLENGTH_OFFSET))(nullptr);
		}

		::System::String* HideDifficulty(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCEL_HIDEDIFFICULTY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_HideDifficultyLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCEL_GET_HIDEDIFFICULTYLENGTH_OFFSET))(nullptr);
		}

		::System::String* get_OpenDate()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCEL_GET_OPENDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetOpenDateBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCEL_GETOPENDATEBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreatePermanentRaidManageExcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::RaidBossGroupType* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::RaidBossGroupType*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCEL_CREATEPERMANENTRAIDMANAGEEXCEL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartPermanentRaidManageExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCEL_STARTPERMANENTRAIDMANAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::RaidBossGroupType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::RaidBossGroupType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCEL_ADDTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOpenRaidBossGroup(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCEL_ADDOPENRAIDBOSSGROUP_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateOpenRaidBossGroupVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCEL_CREATEOPENRAIDBOSSGROUPVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartOpenRaidBossGroupVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCEL_STARTOPENRAIDBOSSGROUPVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddHideDifficulty(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCEL_ADDHIDEDIFFICULTY_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateHideDifficultyVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCEL_CREATEHIDEDIFFICULTYVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartHideDifficultyVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCEL_STARTHIDEDIFFICULTYVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOpenDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCEL_ADDOPENDATE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndPermanentRaidManageExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCEL_ENDPERMANENTRAIDMANAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishPermanentRaidManageExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCEL_FINISHPERMANENTRAIDMANAGEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedPermanentRaidManageExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCEL_FINISHSIZEPREFIXEDPERMANENTRAIDMANAGEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

