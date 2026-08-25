#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class Position; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define FLATDATA_POSITION_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD56810)
#define FLATDATA_POSITION_GETROOTASPOSITION_OFFSET UNITYSDK_OFFSET(0xD56820)
#define FLATDATA_POSITION_GETROOTASPOSITION_OFFSET UNITYSDK_OFFSET(0xD56880)
#define FLATDATA_POSITION___INIT_OFFSET UNITYSDK_OFFSET(0xD56910)
#define FLATDATA_POSITION___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD568E0)
#define FLATDATA_POSITION_GET_X_OFFSET UNITYSDK_OFFSET(0xD56930)
#define FLATDATA_POSITION_GET_Z_OFFSET UNITYSDK_OFFSET(0xD56980)
#define FLATDATA_POSITION_CREATEPOSITION_OFFSET UNITYSDK_OFFSET(0xD569D0)
#define FLATDATA_POSITION_STARTPOSITION_OFFSET UNITYSDK_OFFSET(0xD56B20)
#define FLATDATA_POSITION_ADDX_OFFSET UNITYSDK_OFFSET(0xD56AA0)
#define FLATDATA_POSITION_ADDZ_OFFSET UNITYSDK_OFFSET(0xD56A70)
#define FLATDATA_POSITION_ENDPOSITION_OFFSET UNITYSDK_OFFSET(0xD56AD0)

namespace FlatData
{
	inline static constexpr unsigned int Position_TypeDefinitionIndex = 9321;

	class Position : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_POSITION_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::Position* GetRootAsPosition(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::Position*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_POSITION_GETROOTASPOSITION_OFFSET))(arg, nullptr);
		}

		::FlatData::Position* GetRootAsPosition(::FlatBuffers::ByteBuffer* arg, ::FlatData::Position* arg2)
		{
			return ((::FlatData::Position*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::Position*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_POSITION_GETROOTASPOSITION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_POSITION___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::Position* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::Position*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_POSITION___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Single get_X()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_POSITION_GET_X_OFFSET))(nullptr);
		}

		::System::Single get_Z()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_POSITION_GET_Z_OFFSET))(nullptr);
		}

		Il2CppObject* CreatePosition(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_POSITION_CREATEPOSITION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void StartPosition(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_POSITION_STARTPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void AddX(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_POSITION_ADDX_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddZ(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_POSITION_ADDZ_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndPosition(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_POSITION_ENDPOSITION_OFFSET))(arg, nullptr);
		}

	};
}

