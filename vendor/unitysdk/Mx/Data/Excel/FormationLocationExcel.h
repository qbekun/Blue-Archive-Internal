#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class FormationLocationExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_FORMATIONLOCATIONEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B27EC0)
#define MX_DATA_EXCEL_FORMATIONLOCATIONEXCEL_GETROOTASFORMATIONLOCATIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1B27ED0)
#define MX_DATA_EXCEL_FORMATIONLOCATIONEXCEL_GETROOTASFORMATIONLOCATIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1B27F30)
#define MX_DATA_EXCEL_FORMATIONLOCATIONEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B27FC0)
#define MX_DATA_EXCEL_FORMATIONLOCATIONEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B27F90)
#define MX_DATA_EXCEL_FORMATIONLOCATIONEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B27FE0)
#define MX_DATA_EXCEL_FORMATIONLOCATIONEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1B28030)
#define MX_DATA_EXCEL_FORMATIONLOCATIONEXCEL_SLOTZ_OFFSET UNITYSDK_OFFSET(0x1B28080)
#define MX_DATA_EXCEL_FORMATIONLOCATIONEXCEL_GET_SLOTZLENGTH_OFFSET UNITYSDK_OFFSET(0x1B280E0)
#define MX_DATA_EXCEL_FORMATIONLOCATIONEXCEL_GETSLOTZBYTES_OFFSET UNITYSDK_OFFSET(0x1B28120)
#define MX_DATA_EXCEL_FORMATIONLOCATIONEXCEL_SLOTX_OFFSET UNITYSDK_OFFSET(0x1B28140)
#define MX_DATA_EXCEL_FORMATIONLOCATIONEXCEL_GET_SLOTXLENGTH_OFFSET UNITYSDK_OFFSET(0x1B281A0)
#define MX_DATA_EXCEL_FORMATIONLOCATIONEXCEL_GETSLOTXBYTES_OFFSET UNITYSDK_OFFSET(0x1B281E0)
#define MX_DATA_EXCEL_FORMATIONLOCATIONEXCEL_CREATEFORMATIONLOCATIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1B28200)
#define MX_DATA_EXCEL_FORMATIONLOCATIONEXCEL_STARTFORMATIONLOCATIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1B283F0)
#define MX_DATA_EXCEL_FORMATIONLOCATIONEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1B28310)
#define MX_DATA_EXCEL_FORMATIONLOCATIONEXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0x1B282E0)
#define MX_DATA_EXCEL_FORMATIONLOCATIONEXCEL_ADDSLOTZ_OFFSET UNITYSDK_OFFSET(0x1B28370)
#define MX_DATA_EXCEL_FORMATIONLOCATIONEXCEL_CREATESLOTZVECTOR_OFFSET UNITYSDK_OFFSET(0x1B28410)
#define MX_DATA_EXCEL_FORMATIONLOCATIONEXCEL_STARTSLOTZVECTOR_OFFSET UNITYSDK_OFFSET(0x1B284A0)
#define MX_DATA_EXCEL_FORMATIONLOCATIONEXCEL_ADDSLOTX_OFFSET UNITYSDK_OFFSET(0x1B28340)
#define MX_DATA_EXCEL_FORMATIONLOCATIONEXCEL_CREATESLOTXVECTOR_OFFSET UNITYSDK_OFFSET(0x1B284E0)
#define MX_DATA_EXCEL_FORMATIONLOCATIONEXCEL_STARTSLOTXVECTOR_OFFSET UNITYSDK_OFFSET(0x1B28570)
#define MX_DATA_EXCEL_FORMATIONLOCATIONEXCEL_ENDFORMATIONLOCATIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1B283A0)
#define MX_DATA_EXCEL_FORMATIONLOCATIONEXCEL_FINISHFORMATIONLOCATIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B285B0)
#define MX_DATA_EXCEL_FORMATIONLOCATIONEXCEL_FINISHSIZEPREFIXEDFORMATIONLOCATIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B285D0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int FormationLocationExcel_TypeDefinitionIndex = 18010;

	class FormationLocationExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FORMATIONLOCATIONEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::FormationLocationExcel* GetRootAsFormationLocationExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::FormationLocationExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FORMATIONLOCATIONEXCEL_GETROOTASFORMATIONLOCATIONEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::FormationLocationExcel* GetRootAsFormationLocationExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::FormationLocationExcel* arg)
		{
			return (return (::MX::Data::Excel::FormationLocationExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::FormationLocationExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FORMATIONLOCATIONEXCEL_GETROOTASFORMATIONLOCATIONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FORMATIONLOCATIONEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::FormationLocationExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::FormationLocationExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FORMATIONLOCATIONEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FORMATIONLOCATIONEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_GroupID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FORMATIONLOCATIONEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Single SlotZ(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FORMATIONLOCATIONEXCEL_SLOTZ_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SlotZLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FORMATIONLOCATIONEXCEL_GET_SLOTZLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetSlotZBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FORMATIONLOCATIONEXCEL_GETSLOTZBYTES_OFFSET))(nullptr);
		}

		::System::Single SlotX(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FORMATIONLOCATIONEXCEL_SLOTX_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SlotXLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FORMATIONLOCATIONEXCEL_GET_SLOTXLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetSlotXBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FORMATIONLOCATIONEXCEL_GETSLOTXBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateFormationLocationExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FORMATIONLOCATIONEXCEL_CREATEFORMATIONLOCATIONEXCEL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartFormationLocationExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FORMATIONLOCATIONEXCEL_STARTFORMATIONLOCATIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FORMATIONLOCATIONEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGroupID(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FORMATIONLOCATIONEXCEL_ADDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSlotZ(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FORMATIONLOCATIONEXCEL_ADDSLOTZ_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateSlotZVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FORMATIONLOCATIONEXCEL_CREATESLOTZVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartSlotZVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FORMATIONLOCATIONEXCEL_STARTSLOTZVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSlotX(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FORMATIONLOCATIONEXCEL_ADDSLOTX_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateSlotXVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FORMATIONLOCATIONEXCEL_CREATESLOTXVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartSlotXVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FORMATIONLOCATIONEXCEL_STARTSLOTXVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndFormationLocationExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FORMATIONLOCATIONEXCEL_ENDFORMATIONLOCATIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishFormationLocationExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FORMATIONLOCATIONEXCEL_FINISHFORMATIONLOCATIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedFormationLocationExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FORMATIONLOCATIONEXCEL_FINISHSIZEPREFIXEDFORMATIONLOCATIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

