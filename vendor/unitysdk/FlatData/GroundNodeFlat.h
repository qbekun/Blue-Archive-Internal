#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class GroundNodeFlat; }
namespace FlatData { class GroundNodeType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define FLATDATA_GROUNDNODEFLAT_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD4A300)
#define FLATDATA_GROUNDNODEFLAT_GETROOTASGROUNDNODEFLAT_OFFSET UNITYSDK_OFFSET(0xD4A310)
#define FLATDATA_GROUNDNODEFLAT_GETROOTASGROUNDNODEFLAT_OFFSET UNITYSDK_OFFSET(0xD4A370)
#define FLATDATA_GROUNDNODEFLAT___INIT_OFFSET UNITYSDK_OFFSET(0xD4A3D0)
#define FLATDATA_GROUNDNODEFLAT___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD49DF0)
#define FLATDATA_GROUNDNODEFLAT_GET_X_OFFSET UNITYSDK_OFFSET(0xD4A3F0)
#define FLATDATA_GROUNDNODEFLAT_GET_Y_OFFSET UNITYSDK_OFFSET(0xD4A440)
#define FLATDATA_GROUNDNODEFLAT_GET_ISCANNOTUSESKILL_OFFSET UNITYSDK_OFFSET(0xD4A490)
#define FLATDATA_GROUNDNODEFLAT_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xD4A4E0)
#define FLATDATA_GROUNDNODEFLAT_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0xD4A5A0)
#define FLATDATA_GROUNDNODEFLAT_GET_ORIGINALNODETYPE_OFFSET UNITYSDK_OFFSET(0xD4A5F0)
#define FLATDATA_GROUNDNODEFLAT_CREATEGROUNDNODEFLAT_OFFSET UNITYSDK_OFFSET(0xD4A640)
#define FLATDATA_GROUNDNODEFLAT_STARTGROUNDNODEFLAT_OFFSET UNITYSDK_OFFSET(0xD4A8E0)
#define FLATDATA_GROUNDNODEFLAT_ADDX_OFFSET UNITYSDK_OFFSET(0xD4A830)
#define FLATDATA_GROUNDNODEFLAT_ADDY_OFFSET UNITYSDK_OFFSET(0xD4A800)
#define FLATDATA_GROUNDNODEFLAT_ADDISCANNOTUSESKILL_OFFSET UNITYSDK_OFFSET(0xD4A860)
#define FLATDATA_GROUNDNODEFLAT_ADDPOSITION_OFFSET UNITYSDK_OFFSET(0xD4A7D0)
#define FLATDATA_GROUNDNODEFLAT_ADDNODETYPE_OFFSET UNITYSDK_OFFSET(0xD4A7A0)
#define FLATDATA_GROUNDNODEFLAT_ADDORIGINALNODETYPE_OFFSET UNITYSDK_OFFSET(0xD4A770)
#define FLATDATA_GROUNDNODEFLAT_ENDGROUNDNODEFLAT_OFFSET UNITYSDK_OFFSET(0xD4A890)

namespace FlatData
{
	inline static constexpr unsigned int GroundNodeFlat_TypeDefinitionIndex = 9294;

	class GroundNodeFlat : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDNODEFLAT_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::GroundNodeFlat* GetRootAsGroundNodeFlat(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::GroundNodeFlat*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDNODEFLAT_GETROOTASGROUNDNODEFLAT_OFFSET))(arg, nullptr);
		}

		::FlatData::GroundNodeFlat* GetRootAsGroundNodeFlat(::FlatBuffers::ByteBuffer* arg, ::FlatData::GroundNodeFlat* arg2)
		{
			return ((::FlatData::GroundNodeFlat*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::GroundNodeFlat*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDNODEFLAT_GETROOTASGROUNDNODEFLAT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDNODEFLAT___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::GroundNodeFlat* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::GroundNodeFlat*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDNODEFLAT___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 get_X()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDNODEFLAT_GET_X_OFFSET))(nullptr);
		}

		::System::Int32 get_Y()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDNODEFLAT_GET_Y_OFFSET))(nullptr);
		}

		::System::Boolean get_IsCanNotUseSkill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDNODEFLAT_GET_ISCANNOTUSESKILL_OFFSET))(nullptr);
		}

		Il2CppObject* get_Position()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDNODEFLAT_GET_POSITION_OFFSET))(nullptr);
		}

		::FlatData::GroundNodeType* get_NodeType()
		{
			return ((::FlatData::GroundNodeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDNODEFLAT_GET_NODETYPE_OFFSET))(nullptr);
		}

		::FlatData::GroundNodeType* get_OriginalNodeType()
		{
			return ((::FlatData::GroundNodeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDNODEFLAT_GET_ORIGINALNODETYPE_OFFSET))(nullptr);
		}

		Il2CppObject* CreateGroundNodeFlat(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2, ::System::Int32 arg3, ::System::Boolean arg4, Il2CppObject* arg5, ::FlatData::GroundNodeType* arg6, ::FlatData::GroundNodeType* arg7)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::System::Int32, ::System::Boolean, Il2CppObject*, ::FlatData::GroundNodeType*, ::FlatData::GroundNodeType*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDNODEFLAT_CREATEGROUNDNODEFLAT_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Void StartGroundNodeFlat(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDNODEFLAT_STARTGROUNDNODEFLAT_OFFSET))(arg, nullptr);
		}

		::System::Void AddX(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDNODEFLAT_ADDX_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddY(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDNODEFLAT_ADDY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddIsCanNotUseSkill(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDNODEFLAT_ADDISCANNOTUSESKILL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddPosition(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDNODEFLAT_ADDPOSITION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddNodeType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::GroundNodeType* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::GroundNodeType*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDNODEFLAT_ADDNODETYPE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddOriginalNodeType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::GroundNodeType* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::GroundNodeType*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDNODEFLAT_ADDORIGINALNODETYPE_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndGroundNodeFlat(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_GROUNDNODEFLAT_ENDGROUNDNODEFLAT_OFFSET))(arg, nullptr);
		}

	};
}

