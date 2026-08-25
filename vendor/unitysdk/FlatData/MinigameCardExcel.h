#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class MinigameCardExcel; }
namespace FlatData { class CCGCharacterType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_MINIGAMECARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD50C50)
#define FLATDATA_MINIGAMECARDEXCEL_GETROOTASMINIGAMECARDEXCEL_OFFSET UNITYSDK_OFFSET(0xD50C60)
#define FLATDATA_MINIGAMECARDEXCEL_GETROOTASMINIGAMECARDEXCEL_OFFSET UNITYSDK_OFFSET(0xD50CC0)
#define FLATDATA_MINIGAMECARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD50D20)
#define FLATDATA_MINIGAMECARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD50970)
#define FLATDATA_MINIGAMECARDEXCEL_NONE_OFFSET UNITYSDK_OFFSET(0xD50D40)
#define FLATDATA_MINIGAMECARDEXCEL_GET_NONELENGTH_OFFSET UNITYSDK_OFFSET(0xD50DA0)
#define FLATDATA_MINIGAMECARDEXCEL_NONE_OFFSET UNITYSDK_OFFSET(0xD50DE0)
#define FLATDATA_MINIGAMECARDEXCEL_GETNONEBYTES_OFFSET UNITYSDK_OFFSET(0xD50E70)
#define FLATDATA_MINIGAMECARDEXCEL_CREATEMINIGAMECARDEXCEL_OFFSET UNITYSDK_OFFSET(0xD50E90)
#define FLATDATA_MINIGAMECARDEXCEL_STARTMINIGAMECARDEXCEL_OFFSET UNITYSDK_OFFSET(0xD50F80)
#define FLATDATA_MINIGAMECARDEXCEL_ADDNONE_OFFSET UNITYSDK_OFFSET(0xD50F00)
#define FLATDATA_MINIGAMECARDEXCEL_CREATENONEVECTOR_OFFSET UNITYSDK_OFFSET(0xD50FA0)
#define FLATDATA_MINIGAMECARDEXCEL_STARTNONEVECTOR_OFFSET UNITYSDK_OFFSET(0xD51030)
#define FLATDATA_MINIGAMECARDEXCEL_ENDMINIGAMECARDEXCEL_OFFSET UNITYSDK_OFFSET(0xD50F30)

namespace FlatData
{
	inline static constexpr unsigned int MinigameCardExcel_TypeDefinitionIndex = 9307;

	class MinigameCardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMECARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::MinigameCardExcel* GetRootAsMinigameCardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::MinigameCardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMECARDEXCEL_GETROOTASMINIGAMECARDEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::MinigameCardExcel* GetRootAsMinigameCardExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::MinigameCardExcel* arg2)
		{
			return ((::FlatData::MinigameCardExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::MinigameCardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMECARDEXCEL_GETROOTASMINIGAMECARDEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMECARDEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::MinigameCardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::MinigameCardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMECARDEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::CCGCharacterType* none(::System::Int32 arg)
		{
			return ((::FlatData::CCGCharacterType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMECARDEXCEL_NONE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_NoneLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMECARDEXCEL_GET_NONELENGTH_OFFSET))(nullptr);
		}

		::FlatData::CCGCharacterType* None(::System::Int32 arg)
		{
			return ((::FlatData::CCGCharacterType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMECARDEXCEL_NONE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetNoneBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMECARDEXCEL_GETNONEBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMinigameCardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMECARDEXCEL_CREATEMINIGAMECARDEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartMinigameCardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMECARDEXCEL_STARTMINIGAMECARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddNone(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMECARDEXCEL_ADDNONE_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateNoneVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMECARDEXCEL_CREATENONEVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartNoneVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMECARDEXCEL_STARTNONEVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndMinigameCardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_MINIGAMECARDEXCEL_ENDMINIGAMECARDEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

