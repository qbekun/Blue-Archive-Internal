#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MinigameCCGLevelNodeExcel; }
namespace FlatData { class CCGLevelNodeIcon; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B969D0)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCEL_GETROOTASMINIGAMECCGLEVELNODEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B969E0)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCEL_GETROOTASMINIGAMECCGLEVELNODEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B96A40)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B96AD0)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B96AA0)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCEL_GET_LEVELID_OFFSET UNITYSDK_OFFSET(0x1B96AF0)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCEL_GET_NODEID_OFFSET UNITYSDK_OFFSET(0x1B96B40)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCEL_GET_NODEICON_OFFSET UNITYSDK_OFFSET(0x1B96B90)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCEL_GET_STAGEGROUPID_OFFSET UNITYSDK_OFFSET(0x1B96BE0)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCEL_NEXTNODEID_OFFSET UNITYSDK_OFFSET(0x1B96C30)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCEL_GET_NEXTNODEIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1B96C90)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCEL_GETNEXTNODEIDBYTES_OFFSET UNITYSDK_OFFSET(0x1B96CD0)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCEL_CREATEMINIGAMECCGLEVELNODEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B96CF0)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCEL_STARTMINIGAMECCGLEVELNODEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B96F30)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCEL_ADDLEVELID_OFFSET UNITYSDK_OFFSET(0x1B96E50)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCEL_ADDNODEID_OFFSET UNITYSDK_OFFSET(0x1B96E20)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCEL_ADDNODEICON_OFFSET UNITYSDK_OFFSET(0x1B96EB0)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCEL_ADDSTAGEGROUPID_OFFSET UNITYSDK_OFFSET(0x1B96DF0)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCEL_ADDNEXTNODEID_OFFSET UNITYSDK_OFFSET(0x1B96E80)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCEL_CREATENEXTNODEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B96F50)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCEL_STARTNEXTNODEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B96FE0)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCEL_ENDMINIGAMECCGLEVELNODEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B96EE0)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCEL_FINISHMINIGAMECCGLEVELNODEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B97020)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCEL_FINISHSIZEPREFIXEDMINIGAMECCGLEVELNODEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B97040)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameCCGLevelNodeExcel_TypeDefinitionIndex = 18489;

	class MinigameCCGLevelNodeExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MinigameCCGLevelNodeExcel* GetRootAsMinigameCCGLevelNodeExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameCCGLevelNodeExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCEL_GETROOTASMINIGAMECCGLEVELNODEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MinigameCCGLevelNodeExcel* GetRootAsMinigameCCGLevelNodeExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MinigameCCGLevelNodeExcel* arg)
		{
			return (return (::MX::Data::Excel::MinigameCCGLevelNodeExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MinigameCCGLevelNodeExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCEL_GETROOTASMINIGAMECCGLEVELNODEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MinigameCCGLevelNodeExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameCCGLevelNodeExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_LevelId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCEL_GET_LEVELID_OFFSET))(nullptr);
		}

		::System::Int64 get_NodeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCEL_GET_NODEID_OFFSET))(nullptr);
		}

		::FlatData::CCGLevelNodeIcon* get_NodeIcon()
		{
			return (return (::FlatData::CCGLevelNodeIcon*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCEL_GET_NODEICON_OFFSET))(nullptr);
		}

		::System::Int64 get_StageGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCEL_GET_STAGEGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 NextNodeId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCEL_NEXTNODEID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_NextNodeIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCEL_GET_NEXTNODEIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetNextNodeIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCEL_GETNEXTNODEIDBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMinigameCCGLevelNodeExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::CCGLevelNodeIcon* arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatData::CCGLevelNodeIcon*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCEL_CREATEMINIGAMECCGLEVELNODEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMinigameCCGLevelNodeExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCEL_STARTMINIGAMECCGLEVELNODEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddLevelId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCEL_ADDLEVELID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNodeId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCEL_ADDNODEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNodeIcon(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::CCGLevelNodeIcon* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::CCGLevelNodeIcon*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCEL_ADDNODEICON_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCEL_ADDSTAGEGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNextNodeId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCEL_ADDNEXTNODEID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateNextNodeIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCEL_CREATENEXTNODEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartNextNodeIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCEL_STARTNEXTNODEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMinigameCCGLevelNodeExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCEL_ENDMINIGAMECCGLEVELNODEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMinigameCCGLevelNodeExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCEL_FINISHMINIGAMECCGLEVELNODEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMinigameCCGLevelNodeExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELNODEEXCEL_FINISHSIZEPREFIXEDMINIGAMECCGLEVELNODEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

