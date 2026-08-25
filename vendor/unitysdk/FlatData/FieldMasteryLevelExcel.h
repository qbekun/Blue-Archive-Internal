#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class FieldMasteryLevelExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_FIELDMASTERYLEVELEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD3FCF0)
#define FLATDATA_FIELDMASTERYLEVELEXCEL_GETROOTASFIELDMASTERYLEVELEXCEL_OFFSET UNITYSDK_OFFSET(0xD3FD00)
#define FLATDATA_FIELDMASTERYLEVELEXCEL_GETROOTASFIELDMASTERYLEVELEXCEL_OFFSET UNITYSDK_OFFSET(0xD3FD60)
#define FLATDATA_FIELDMASTERYLEVELEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD3FDC0)
#define FLATDATA_FIELDMASTERYLEVELEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD3FA10)
#define FLATDATA_FIELDMASTERYLEVELEXCEL_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xD3FDE0)
#define FLATDATA_FIELDMASTERYLEVELEXCEL_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xD3FE30)
#define FLATDATA_FIELDMASTERYLEVELEXCEL_ID_OFFSET UNITYSDK_OFFSET(0xD3FEB0)
#define FLATDATA_FIELDMASTERYLEVELEXCEL_GET_IDLENGTH_OFFSET UNITYSDK_OFFSET(0xD3FF10)
#define FLATDATA_FIELDMASTERYLEVELEXCEL_ID_OFFSET UNITYSDK_OFFSET(0xD3FF50)
#define FLATDATA_FIELDMASTERYLEVELEXCEL_GETIDBYTES_OFFSET UNITYSDK_OFFSET(0xD3FFE0)
#define FLATDATA_FIELDMASTERYLEVELEXCEL_EXP_OFFSET UNITYSDK_OFFSET(0xD40000)
#define FLATDATA_FIELDMASTERYLEVELEXCEL_GET_EXPLENGTH_OFFSET UNITYSDK_OFFSET(0xD40060)
#define FLATDATA_FIELDMASTERYLEVELEXCEL_EXP_OFFSET UNITYSDK_OFFSET(0xD400A0)
#define FLATDATA_FIELDMASTERYLEVELEXCEL_GETEXPBYTES_OFFSET UNITYSDK_OFFSET(0xD40130)
#define FLATDATA_FIELDMASTERYLEVELEXCEL_TOTALEXP_OFFSET UNITYSDK_OFFSET(0xD40150)
#define FLATDATA_FIELDMASTERYLEVELEXCEL_GET_TOTALEXPLENGTH_OFFSET UNITYSDK_OFFSET(0xD401B0)
#define FLATDATA_FIELDMASTERYLEVELEXCEL_TOTALEXP_OFFSET UNITYSDK_OFFSET(0xD401F0)
#define FLATDATA_FIELDMASTERYLEVELEXCEL_GETTOTALEXPBYTES_OFFSET UNITYSDK_OFFSET(0xD40280)
#define FLATDATA_FIELDMASTERYLEVELEXCEL_REWARDID_OFFSET UNITYSDK_OFFSET(0xD402A0)
#define FLATDATA_FIELDMASTERYLEVELEXCEL_GET_REWARDIDLENGTH_OFFSET UNITYSDK_OFFSET(0xD40300)
#define FLATDATA_FIELDMASTERYLEVELEXCEL_REWARDID_OFFSET UNITYSDK_OFFSET(0xD40340)
#define FLATDATA_FIELDMASTERYLEVELEXCEL_GETREWARDIDBYTES_OFFSET UNITYSDK_OFFSET(0xD403D0)
#define FLATDATA_FIELDMASTERYLEVELEXCEL_CREATEFIELDMASTERYLEVELEXCEL_OFFSET UNITYSDK_OFFSET(0xD403F0)
#define FLATDATA_FIELDMASTERYLEVELEXCEL_STARTFIELDMASTERYLEVELEXCEL_OFFSET UNITYSDK_OFFSET(0xD40630)
#define FLATDATA_FIELDMASTERYLEVELEXCEL_ADDLEVEL_OFFSET UNITYSDK_OFFSET(0xD405B0)
#define FLATDATA_FIELDMASTERYLEVELEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0xD40580)
#define FLATDATA_FIELDMASTERYLEVELEXCEL_CREATEIDVECTOR_OFFSET UNITYSDK_OFFSET(0xD40650)
#define FLATDATA_FIELDMASTERYLEVELEXCEL_STARTIDVECTOR_OFFSET UNITYSDK_OFFSET(0xD406E0)
#define FLATDATA_FIELDMASTERYLEVELEXCEL_ADDEXP_OFFSET UNITYSDK_OFFSET(0xD40550)
#define FLATDATA_FIELDMASTERYLEVELEXCEL_CREATEEXPVECTOR_OFFSET UNITYSDK_OFFSET(0xD40720)
#define FLATDATA_FIELDMASTERYLEVELEXCEL_STARTEXPVECTOR_OFFSET UNITYSDK_OFFSET(0xD407B0)
#define FLATDATA_FIELDMASTERYLEVELEXCEL_ADDTOTALEXP_OFFSET UNITYSDK_OFFSET(0xD40520)
#define FLATDATA_FIELDMASTERYLEVELEXCEL_CREATETOTALEXPVECTOR_OFFSET UNITYSDK_OFFSET(0xD407F0)
#define FLATDATA_FIELDMASTERYLEVELEXCEL_STARTTOTALEXPVECTOR_OFFSET UNITYSDK_OFFSET(0xD40880)
#define FLATDATA_FIELDMASTERYLEVELEXCEL_ADDREWARDID_OFFSET UNITYSDK_OFFSET(0xD404F0)
#define FLATDATA_FIELDMASTERYLEVELEXCEL_CREATEREWARDIDVECTOR_OFFSET UNITYSDK_OFFSET(0xD408C0)
#define FLATDATA_FIELDMASTERYLEVELEXCEL_STARTREWARDIDVECTOR_OFFSET UNITYSDK_OFFSET(0xD40950)
#define FLATDATA_FIELDMASTERYLEVELEXCEL_ENDFIELDMASTERYLEVELEXCEL_OFFSET UNITYSDK_OFFSET(0xD405E0)

namespace FlatData
{
	inline static constexpr unsigned int FieldMasteryLevelExcel_TypeDefinitionIndex = 9275;

	class FieldMasteryLevelExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::FieldMasteryLevelExcel* GetRootAsFieldMasteryLevelExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::FieldMasteryLevelExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCEL_GETROOTASFIELDMASTERYLEVELEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::FieldMasteryLevelExcel* GetRootAsFieldMasteryLevelExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::FieldMasteryLevelExcel* arg2)
		{
			return ((::FlatData::FieldMasteryLevelExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::FieldMasteryLevelExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCEL_GETROOTASFIELDMASTERYLEVELEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::FieldMasteryLevelExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::FieldMasteryLevelExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 get_level()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCEL_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_Level()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCEL_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Int64 id(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCEL_ID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_IdLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCEL_GET_IDLENGTH_OFFSET))(nullptr);
		}

		::System::Int64 Id(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCEL_ID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetIdBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCEL_GETIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 exp(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCEL_EXP_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ExpLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCEL_GET_EXPLENGTH_OFFSET))(nullptr);
		}

		::System::Int64 Exp(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCEL_EXP_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetExpBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCEL_GETEXPBYTES_OFFSET))(nullptr);
		}

		::System::Int64 totalExp(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCEL_TOTALEXP_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_TotalExpLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCEL_GET_TOTALEXPLENGTH_OFFSET))(nullptr);
		}

		::System::Int64 TotalExp(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCEL_TOTALEXP_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetTotalExpBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCEL_GETTOTALEXPBYTES_OFFSET))(nullptr);
		}

		::System::Int64 rewardId(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCEL_REWARDID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardIdLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCEL_GET_REWARDIDLENGTH_OFFSET))(nullptr);
		}

		::System::Int64 RewardId(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCEL_REWARDID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetRewardIdBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCEL_GETREWARDIDBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateFieldMasteryLevelExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2, ::FlatBuffers::VectorOffset* arg3, ::FlatBuffers::VectorOffset* arg4, ::FlatBuffers::VectorOffset* arg5, ::FlatBuffers::VectorOffset* arg6)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCEL_CREATEFIELDMASTERYLEVELEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void StartFieldMasteryLevelExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCEL_STARTFIELDMASTERYLEVELEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCEL_ADDLEVEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCEL_ADDID_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCEL_CREATEIDVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCEL_STARTIDVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddExp(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCEL_ADDEXP_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateExpVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCEL_CREATEEXPVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartExpVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCEL_STARTEXPVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddTotalExp(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCEL_ADDTOTALEXP_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateTotalExpVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCEL_CREATETOTALEXPVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartTotalExpVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCEL_STARTTOTALEXPVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddRewardId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCEL_ADDREWARDID_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCEL_CREATEREWARDIDVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartRewardIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCEL_STARTREWARDIDVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndFieldMasteryLevelExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYLEVELEXCEL_ENDFIELDMASTERYLEVELEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

