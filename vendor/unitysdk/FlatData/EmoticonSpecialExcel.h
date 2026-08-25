#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class EmoticonSpecialExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define FLATDATA_EMOTICONSPECIALEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD34180)
#define FLATDATA_EMOTICONSPECIALEXCEL_GETROOTASEMOTICONSPECIALEXCEL_OFFSET UNITYSDK_OFFSET(0xD34190)
#define FLATDATA_EMOTICONSPECIALEXCEL_GETROOTASEMOTICONSPECIALEXCEL_OFFSET UNITYSDK_OFFSET(0xD341F0)
#define FLATDATA_EMOTICONSPECIALEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD34250)
#define FLATDATA_EMOTICONSPECIALEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD33EF0)
#define FLATDATA_EMOTICONSPECIALEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xD34270)
#define FLATDATA_EMOTICONSPECIALEXCEL_GET_CHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0xD342C0)
#define FLATDATA_EMOTICONSPECIALEXCEL_GET_RANDOM_OFFSET UNITYSDK_OFFSET(0xD34310)
#define FLATDATA_EMOTICONSPECIALEXCEL_GETRANDOMBYTES_OFFSET UNITYSDK_OFFSET(0xD34350)
#define FLATDATA_EMOTICONSPECIALEXCEL_CREATEEMOTICONSPECIALEXCEL_OFFSET UNITYSDK_OFFSET(0xD34370)
#define FLATDATA_EMOTICONSPECIALEXCEL_STARTEMOTICONSPECIALEXCEL_OFFSET UNITYSDK_OFFSET(0xD34510)
#define FLATDATA_EMOTICONSPECIALEXCEL_ADDUNIQUEID_OFFSET UNITYSDK_OFFSET(0xD34460)
#define FLATDATA_EMOTICONSPECIALEXCEL_ADDCHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0xD34430)
#define FLATDATA_EMOTICONSPECIALEXCEL_ADDRANDOM_OFFSET UNITYSDK_OFFSET(0xD34490)
#define FLATDATA_EMOTICONSPECIALEXCEL_ENDEMOTICONSPECIALEXCEL_OFFSET UNITYSDK_OFFSET(0xD344C0)

namespace FlatData
{
	inline static constexpr unsigned int EmoticonSpecialExcel_TypeDefinitionIndex = 9253;

	class EmoticonSpecialExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EMOTICONSPECIALEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::EmoticonSpecialExcel* GetRootAsEmoticonSpecialExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::EmoticonSpecialExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EMOTICONSPECIALEXCEL_GETROOTASEMOTICONSPECIALEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::EmoticonSpecialExcel* GetRootAsEmoticonSpecialExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::EmoticonSpecialExcel* arg2)
		{
			return ((::FlatData::EmoticonSpecialExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::EmoticonSpecialExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EMOTICONSPECIALEXCEL_GETROOTASEMOTICONSPECIALEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EMOTICONSPECIALEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::EmoticonSpecialExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::EmoticonSpecialExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EMOTICONSPECIALEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EMOTICONSPECIALEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EMOTICONSPECIALEXCEL_GET_CHARACTERUNIQUEID_OFFSET))(nullptr);
		}

		::System::String* get_Random()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EMOTICONSPECIALEXCEL_GET_RANDOM_OFFSET))(nullptr);
		}

		Il2CppObject* GetRandomBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EMOTICONSPECIALEXCEL_GETRANDOMBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEmoticonSpecialExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::FlatBuffers::StringOffset* arg4)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EMOTICONSPECIALEXCEL_CREATEEMOTICONSPECIALEXCEL_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void StartEmoticonSpecialExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EMOTICONSPECIALEXCEL_STARTEMOTICONSPECIALEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EMOTICONSPECIALEXCEL_ADDUNIQUEID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddCharacterUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EMOTICONSPECIALEXCEL_ADDCHARACTERUNIQUEID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddRandom(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EMOTICONSPECIALEXCEL_ADDRANDOM_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndEmoticonSpecialExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EMOTICONSPECIALEXCEL_ENDEMOTICONSPECIALEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

