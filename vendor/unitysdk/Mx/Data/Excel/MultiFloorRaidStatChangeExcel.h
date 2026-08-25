#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MultiFloorRaidStatChangeExcel; }
namespace FlatData { class StatType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C1B310)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_GETROOTASMULTIFLOORRAIDSTATCHANGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C1B320)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_GETROOTASMULTIFLOORRAIDSTATCHANGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C1B380)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C1B410)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C1B3E0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_GET_STATCHANGEID_OFFSET UNITYSDK_OFFSET(0x1C1B430)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_STATTYPE_OFFSET UNITYSDK_OFFSET(0x1C1B480)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_GET_STATTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1C1B4E0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_GETSTATTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1C1B520)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_STATADD_OFFSET UNITYSDK_OFFSET(0x1C1B540)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_GET_STATADDLENGTH_OFFSET UNITYSDK_OFFSET(0x1C1B5A0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_GETSTATADDBYTES_OFFSET UNITYSDK_OFFSET(0x1C1B5E0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_STATMULTIPLY_OFFSET UNITYSDK_OFFSET(0x1C1B600)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_GET_STATMULTIPLYLENGTH_OFFSET UNITYSDK_OFFSET(0x1C1B660)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_GETSTATMULTIPLYBYTES_OFFSET UNITYSDK_OFFSET(0x1C1B6A0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_APPLYCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1C1B6C0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_GET_APPLYCHARACTERIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1C1B720)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_GETAPPLYCHARACTERIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C1B760)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_CREATEMULTIFLOORRAIDSTATCHANGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C1B780)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_STARTMULTIFLOORRAIDSTATCHANGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C1B9C0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_ADDSTATCHANGEID_OFFSET UNITYSDK_OFFSET(0x1C1B880)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_ADDSTATTYPE_OFFSET UNITYSDK_OFFSET(0x1C1B940)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_CREATESTATTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C1B9E0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_STARTSTATTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C1BA70)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_ADDSTATADD_OFFSET UNITYSDK_OFFSET(0x1C1B910)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_CREATESTATADDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C1BAB0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_STARTSTATADDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C1BB40)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_ADDSTATMULTIPLY_OFFSET UNITYSDK_OFFSET(0x1C1B8E0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_CREATESTATMULTIPLYVECTOR_OFFSET UNITYSDK_OFFSET(0x1C1BB80)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_STARTSTATMULTIPLYVECTOR_OFFSET UNITYSDK_OFFSET(0x1C1BC10)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_ADDAPPLYCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1C1B8B0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_CREATEAPPLYCHARACTERIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C1BC50)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_STARTAPPLYCHARACTERIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C1BCE0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_ENDMULTIFLOORRAIDSTATCHANGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C1B970)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_FINISHMULTIFLOORRAIDSTATCHANGEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C1BD20)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_FINISHSIZEPREFIXEDMULTIFLOORRAIDSTATCHANGEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C1BD40)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MultiFloorRaidStatChangeExcel_TypeDefinitionIndex = 18974;

	class MultiFloorRaidStatChangeExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MultiFloorRaidStatChangeExcel* GetRootAsMultiFloorRaidStatChangeExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MultiFloorRaidStatChangeExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_GETROOTASMULTIFLOORRAIDSTATCHANGEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MultiFloorRaidStatChangeExcel* GetRootAsMultiFloorRaidStatChangeExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MultiFloorRaidStatChangeExcel* arg)
		{
			return (return (::MX::Data::Excel::MultiFloorRaidStatChangeExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MultiFloorRaidStatChangeExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_GETROOTASMULTIFLOORRAIDSTATCHANGEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MultiFloorRaidStatChangeExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MultiFloorRaidStatChangeExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_StatChangeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_GET_STATCHANGEID_OFFSET))(nullptr);
		}

		::FlatData::StatType* StatType(::System::Int32 arg)
		{
			return (return (::FlatData::StatType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_STATTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StatTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_GET_STATTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetStatTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_GETSTATTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 StatAdd(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_STATADD_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StatAddLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_GET_STATADDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetStatAddBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_GETSTATADDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 StatMultiply(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_STATMULTIPLY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StatMultiplyLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_GET_STATMULTIPLYLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetStatMultiplyBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_GETSTATMULTIPLYBYTES_OFFSET))(nullptr);
		}

		::System::Int64 ApplyCharacterId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_APPLYCHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ApplyCharacterIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_GET_APPLYCHARACTERIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetApplyCharacterIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_GETAPPLYCHARACTERIDBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMultiFloorRaidStatChangeExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_CREATEMULTIFLOORRAIDSTATCHANGEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMultiFloorRaidStatChangeExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_STARTMULTIFLOORRAIDSTATCHANGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddStatChangeId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_ADDSTATCHANGEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStatType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_ADDSTATTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateStatTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_CREATESTATTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartStatTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_STARTSTATTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStatAdd(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_ADDSTATADD_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateStatAddVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_CREATESTATADDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartStatAddVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_STARTSTATADDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStatMultiply(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_ADDSTATMULTIPLY_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateStatMultiplyVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_CREATESTATMULTIPLYVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartStatMultiplyVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_STARTSTATMULTIPLYVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddApplyCharacterId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_ADDAPPLYCHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateApplyCharacterIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_CREATEAPPLYCHARACTERIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartApplyCharacterIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_STARTAPPLYCHARACTERIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMultiFloorRaidStatChangeExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_ENDMULTIFLOORRAIDSTATCHANGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMultiFloorRaidStatChangeExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_FINISHMULTIFLOORRAIDSTATCHANGEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMultiFloorRaidStatChangeExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCEL_FINISHSIZEPREFIXEDMULTIFLOORRAIDSTATCHANGEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

