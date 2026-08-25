#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class MoveEnd; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define FLATDATA_MOVEEND_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD57000)
#define FLATDATA_MOVEEND_GETROOTASMOVEEND_OFFSET UNITYSDK_OFFSET(0xD57010)
#define FLATDATA_MOVEEND_GETROOTASMOVEEND_OFFSET UNITYSDK_OFFSET(0xD57070)
#define FLATDATA_MOVEEND___INIT_OFFSET UNITYSDK_OFFSET(0xD57100)
#define FLATDATA_MOVEEND___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD570D0)
#define FLATDATA_MOVEEND_GET_NORMAL_OFFSET UNITYSDK_OFFSET(0xD57120)
#define FLATDATA_MOVEEND_GET_STAND_OFFSET UNITYSDK_OFFSET(0xD571D0)
#define FLATDATA_MOVEEND_GET_KNEEL_OFFSET UNITYSDK_OFFSET(0xD57280)
#define FLATDATA_MOVEEND_CREATEMOVEEND_OFFSET UNITYSDK_OFFSET(0xD57330)
#define FLATDATA_MOVEEND_STARTMOVEEND_OFFSET UNITYSDK_OFFSET(0xD574C0)
#define FLATDATA_MOVEEND_ADDNORMAL_OFFSET UNITYSDK_OFFSET(0xD57440)
#define FLATDATA_MOVEEND_ADDSTAND_OFFSET UNITYSDK_OFFSET(0xD57410)
#define FLATDATA_MOVEEND_ADDKNEEL_OFFSET UNITYSDK_OFFSET(0xD573E0)
#define FLATDATA_MOVEEND_ENDMOVEEND_OFFSET UNITYSDK_OFFSET(0xD57470)

namespace FlatData
{
	inline static constexpr unsigned int MoveEnd_TypeDefinitionIndex = 9323;

	class MoveEnd : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MOVEEND_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::MoveEnd* GetRootAsMoveEnd(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::MoveEnd*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MOVEEND_GETROOTASMOVEEND_OFFSET))(arg, nullptr);
		}

		::FlatData::MoveEnd* GetRootAsMoveEnd(::FlatBuffers::ByteBuffer* arg, ::FlatData::MoveEnd* arg2)
		{
			return ((::FlatData::MoveEnd*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::MoveEnd*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MOVEEND_GETROOTASMOVEEND_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MOVEEND___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::MoveEnd* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::MoveEnd*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MOVEEND___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* get_Normal()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MOVEEND_GET_NORMAL_OFFSET))(nullptr);
		}

		Il2CppObject* get_Stand()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MOVEEND_GET_STAND_OFFSET))(nullptr);
		}

		Il2CppObject* get_Kneel()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MOVEEND_GET_KNEEL_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMoveEnd(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2, Il2CppObject* arg3, Il2CppObject* arg4)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MOVEEND_CREATEMOVEEND_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void StartMoveEnd(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MOVEEND_STARTMOVEEND_OFFSET))(arg, nullptr);
		}

		::System::Void AddNormal(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MOVEEND_ADDNORMAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStand(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MOVEEND_ADDSTAND_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddKneel(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MOVEEND_ADDKNEEL_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndMoveEnd(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MOVEEND_ENDMOVEEND_OFFSET))(arg, nullptr);
		}

	};
}

