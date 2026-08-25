#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class GroundGridFlat; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }
namespace FlatBuffers { class StringOffset; }

#define FLATDATA_GROUNDGRIDFLAT_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD49A70)
#define FLATDATA_GROUNDGRIDFLAT_GETROOTASGROUNDGRIDFLAT_OFFSET UNITYSDK_OFFSET(0xD49A80)
#define FLATDATA_GROUNDGRIDFLAT_GETROOTASGROUNDGRIDFLAT_OFFSET UNITYSDK_OFFSET(0xD49AE0)
#define FLATDATA_GROUNDGRIDFLAT___INIT_OFFSET UNITYSDK_OFFSET(0xD49B70)
#define FLATDATA_GROUNDGRIDFLAT___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD49B40)
#define FLATDATA_GROUNDGRIDFLAT_GET_X_OFFSET UNITYSDK_OFFSET(0xD49B90)
#define FLATDATA_GROUNDGRIDFLAT_GET_Y_OFFSET UNITYSDK_OFFSET(0xD49BE0)
#define FLATDATA_GROUNDGRIDFLAT_GET_STARTX_OFFSET UNITYSDK_OFFSET(0xD49C30)
#define FLATDATA_GROUNDGRIDFLAT_GET_STARTY_OFFSET UNITYSDK_OFFSET(0xD49C80)
#define FLATDATA_GROUNDGRIDFLAT_GET_GAP_OFFSET UNITYSDK_OFFSET(0xD49CD0)
#define FLATDATA_GROUNDGRIDFLAT_NODES_OFFSET UNITYSDK_OFFSET(0xD49D20)
#define FLATDATA_GROUNDGRIDFLAT_GET_NODESLENGTH_OFFSET UNITYSDK_OFFSET(0xD49E20)
#define FLATDATA_GROUNDGRIDFLAT_GET_VERSION_OFFSET UNITYSDK_OFFSET(0xD49E60)
#define FLATDATA_GROUNDGRIDFLAT_GETVERSIONBYTES_OFFSET UNITYSDK_OFFSET(0xD49EA0)
#define FLATDATA_GROUNDGRIDFLAT_CREATEGROUNDGRIDFLAT_OFFSET UNITYSDK_OFFSET(0xD49EC0)
#define FLATDATA_GROUNDGRIDFLAT_STARTGROUNDGRIDFLAT_OFFSET UNITYSDK_OFFSET(0xD4A1D0)
#define FLATDATA_GROUNDGRIDFLAT_ADDX_OFFSET UNITYSDK_OFFSET(0xD4A150)
#define FLATDATA_GROUNDGRIDFLAT_ADDY_OFFSET UNITYSDK_OFFSET(0xD4A120)
#define FLATDATA_GROUNDGRIDFLAT_ADDSTARTX_OFFSET UNITYSDK_OFFSET(0xD4A0F0)
#define FLATDATA_GROUNDGRIDFLAT_ADDSTARTY_OFFSET UNITYSDK_OFFSET(0xD4A0C0)
#define FLATDATA_GROUNDGRIDFLAT_ADDGAP_OFFSET UNITYSDK_OFFSET(0xD4A090)
#define FLATDATA_GROUNDGRIDFLAT_ADDNODES_OFFSET UNITYSDK_OFFSET(0xD4A060)
#define FLATDATA_GROUNDGRIDFLAT_CREATENODESVECTOR_OFFSET UNITYSDK_OFFSET(0xD4A1F0)
#define FLATDATA_GROUNDGRIDFLAT_STARTNODESVECTOR_OFFSET UNITYSDK_OFFSET(0xD4A280)
#define FLATDATA_GROUNDGRIDFLAT_ADDVERSION_OFFSET UNITYSDK_OFFSET(0xD4A030)
#define FLATDATA_GROUNDGRIDFLAT_ENDGROUNDGRIDFLAT_OFFSET UNITYSDK_OFFSET(0xD4A180)
#define FLATDATA_GROUNDGRIDFLAT_FINISHGROUNDGRIDFLATBUFFER_OFFSET UNITYSDK_OFFSET(0xD4A2C0)
#define FLATDATA_GROUNDGRIDFLAT_FINISHSIZEPREFIXEDGROUNDGRIDFLATBUFFER_OFFSET UNITYSDK_OFFSET(0xD4A2E0)

namespace FlatData
{
	inline static constexpr unsigned int GroundGridFlat_TypeDefinitionIndex = 9293;

	class GroundGridFlat : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDGRIDFLAT_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::GroundGridFlat* GetRootAsGroundGridFlat(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::GroundGridFlat*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDGRIDFLAT_GETROOTASGROUNDGRIDFLAT_OFFSET))(arg, nullptr);
		}

		::FlatData::GroundGridFlat* GetRootAsGroundGridFlat(::FlatBuffers::ByteBuffer* arg, ::FlatData::GroundGridFlat* arg2)
		{
			return ((::FlatData::GroundGridFlat*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::GroundGridFlat*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDGRIDFLAT_GETROOTASGROUNDGRIDFLAT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDGRIDFLAT___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::GroundGridFlat* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::GroundGridFlat*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDGRIDFLAT___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 get_X()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDGRIDFLAT_GET_X_OFFSET))(nullptr);
		}

		::System::Int32 get_Y()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDGRIDFLAT_GET_Y_OFFSET))(nullptr);
		}

		::System::Single get_StartX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDGRIDFLAT_GET_STARTX_OFFSET))(nullptr);
		}

		::System::Single get_StartY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDGRIDFLAT_GET_STARTY_OFFSET))(nullptr);
		}

		::System::Single get_Gap()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDGRIDFLAT_GET_GAP_OFFSET))(nullptr);
		}

		Il2CppObject* Nodes(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDGRIDFLAT_NODES_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_NodesLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDGRIDFLAT_GET_NODESLENGTH_OFFSET))(nullptr);
		}

		::System::String* get_Version()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDGRIDFLAT_GET_VERSION_OFFSET))(nullptr);
		}

		Il2CppObject* GetVersionBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDGRIDFLAT_GETVERSIONBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateGroundGridFlat(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2, ::System::Int32 arg3, ::System::Single arg4, ::System::Single arg5, ::System::Single arg6, ::FlatBuffers::VectorOffset* arg7, ::FlatBuffers::StringOffset* arg8)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::FlatBuffers::VectorOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDGRIDFLAT_CREATEGROUNDGRIDFLAT_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::System::Void StartGroundGridFlat(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDGRIDFLAT_STARTGROUNDGRIDFLAT_OFFSET))(arg, nullptr);
		}

		::System::Void AddX(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDGRIDFLAT_ADDX_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddY(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDGRIDFLAT_ADDY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStartX(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDGRIDFLAT_ADDSTARTX_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStartY(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDGRIDFLAT_ADDSTARTY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddGap(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDGRIDFLAT_ADDGAP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddNodes(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDGRIDFLAT_ADDNODES_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateNodesVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDGRIDFLAT_CREATENODESVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartNodesVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDGRIDFLAT_STARTNODESVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddVersion(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDGRIDFLAT_ADDVERSION_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndGroundGridFlat(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDGRIDFLAT_ENDGROUNDGRIDFLAT_OFFSET))(arg, nullptr);
		}

		::System::Void FinishGroundGridFlatBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDGRIDFLAT_FINISHGROUNDGRIDFLATBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedGroundGridFlatBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDGRIDFLAT_FINISHSIZEPREFIXEDGROUNDGRIDFLATBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

