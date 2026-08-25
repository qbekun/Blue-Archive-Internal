#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class Motion; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_MOTION_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD56B40)
#define FLATDATA_MOTION_GETROOTASMOTION_OFFSET UNITYSDK_OFFSET(0xD56B50)
#define FLATDATA_MOTION_GETROOTASMOTION_OFFSET UNITYSDK_OFFSET(0xD56BB0)
#define FLATDATA_MOTION___INIT_OFFSET UNITYSDK_OFFSET(0xD56C40)
#define FLATDATA_MOTION___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD56C10)
#define FLATDATA_MOTION_GET_NAME_OFFSET UNITYSDK_OFFSET(0xD56C60)
#define FLATDATA_MOTION_GETNAMEBYTES_OFFSET UNITYSDK_OFFSET(0xD56CA0)
#define FLATDATA_MOTION_POSITIONS_OFFSET UNITYSDK_OFFSET(0xD56CC0)
#define FLATDATA_MOTION_GET_POSITIONSLENGTH_OFFSET UNITYSDK_OFFSET(0xD56D90)
#define FLATDATA_MOTION_CREATEMOTION_OFFSET UNITYSDK_OFFSET(0xD56DD0)
#define FLATDATA_MOTION_STARTMOTION_OFFSET UNITYSDK_OFFSET(0xD56F10)
#define FLATDATA_MOTION_ADDNAME_OFFSET UNITYSDK_OFFSET(0xD56E90)
#define FLATDATA_MOTION_ADDPOSITIONS_OFFSET UNITYSDK_OFFSET(0xD56E60)
#define FLATDATA_MOTION_CREATEPOSITIONSVECTOR_OFFSET UNITYSDK_OFFSET(0xD56F30)
#define FLATDATA_MOTION_STARTPOSITIONSVECTOR_OFFSET UNITYSDK_OFFSET(0xD56FC0)
#define FLATDATA_MOTION_ENDMOTION_OFFSET UNITYSDK_OFFSET(0xD56EC0)

namespace FlatData
{
	inline static constexpr unsigned int Motion_TypeDefinitionIndex = 9322;

	class Motion : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MOTION_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::Motion* GetRootAsMotion(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::Motion*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MOTION_GETROOTASMOTION_OFFSET))(arg, nullptr);
		}

		::FlatData::Motion* GetRootAsMotion(::FlatBuffers::ByteBuffer* arg, ::FlatData::Motion* arg2)
		{
			return ((::FlatData::Motion*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::Motion*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MOTION_GETROOTASMOTION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MOTION___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::Motion* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::Motion*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MOTION___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MOTION_GET_NAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetNameBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MOTION_GETNAMEBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* Positions(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MOTION_POSITIONS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PositionsLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MOTION_GET_POSITIONSLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMotion(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2, ::FlatBuffers::VectorOffset* arg3)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MOTION_CREATEMOTION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void StartMotion(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MOTION_STARTMOTION_OFFSET))(arg, nullptr);
		}

		::System::Void AddName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MOTION_ADDNAME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddPositions(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MOTION_ADDPOSITIONS_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreatePositionsVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MOTION_CREATEPOSITIONSVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartPositionsVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MOTION_STARTPOSITIONSVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndMotion(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MOTION_ENDMOTION_OFFSET))(arg, nullptr);
		}

	};
}

