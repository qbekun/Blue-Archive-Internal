#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class StringTestExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }
namespace FlatBuffers { class StringOffset; }

#define FLATDATA_STRINGTESTEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD5B700)
#define FLATDATA_STRINGTESTEXCEL_GETROOTASSTRINGTESTEXCEL_OFFSET UNITYSDK_OFFSET(0xD5B710)
#define FLATDATA_STRINGTESTEXCEL_GETROOTASSTRINGTESTEXCEL_OFFSET UNITYSDK_OFFSET(0xD5B770)
#define FLATDATA_STRINGTESTEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD5B7D0)
#define FLATDATA_STRINGTESTEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD5B470)
#define FLATDATA_STRINGTESTEXCEL_STRING_OFFSET UNITYSDK_OFFSET(0xD5B7F0)
#define FLATDATA_STRINGTESTEXCEL_GET_STRINGLENGTH_OFFSET UNITYSDK_OFFSET(0xD5B840)
#define FLATDATA_STRINGTESTEXCEL_GET_SENTENCE1_OFFSET UNITYSDK_OFFSET(0xD5B880)
#define FLATDATA_STRINGTESTEXCEL_GETSENTENCE1BYTES_OFFSET UNITYSDK_OFFSET(0xD5B8C0)
#define FLATDATA_STRINGTESTEXCEL_GET_SCRIPT_OFFSET UNITYSDK_OFFSET(0xD5B8E0)
#define FLATDATA_STRINGTESTEXCEL_GETSCRIPTBYTES_OFFSET UNITYSDK_OFFSET(0xD5B920)
#define FLATDATA_STRINGTESTEXCEL_CREATESTRINGTESTEXCEL_OFFSET UNITYSDK_OFFSET(0xD5B940)
#define FLATDATA_STRINGTESTEXCEL_STARTSTRINGTESTEXCEL_OFFSET UNITYSDK_OFFSET(0xD5BAD0)
#define FLATDATA_STRINGTESTEXCEL_ADDSTRING_OFFSET UNITYSDK_OFFSET(0xD5BA50)
#define FLATDATA_STRINGTESTEXCEL_CREATESTRINGVECTOR_OFFSET UNITYSDK_OFFSET(0xD5BAF0)
#define FLATDATA_STRINGTESTEXCEL_STARTSTRINGVECTOR_OFFSET UNITYSDK_OFFSET(0xD5BB80)
#define FLATDATA_STRINGTESTEXCEL_ADDSENTENCE1_OFFSET UNITYSDK_OFFSET(0xD5BA20)
#define FLATDATA_STRINGTESTEXCEL_ADDSCRIPT_OFFSET UNITYSDK_OFFSET(0xD5B9F0)
#define FLATDATA_STRINGTESTEXCEL_ENDSTRINGTESTEXCEL_OFFSET UNITYSDK_OFFSET(0xD5BA80)

namespace FlatData
{
	inline static constexpr unsigned int StringTestExcel_TypeDefinitionIndex = 9333;

	class StringTestExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_STRINGTESTEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::StringTestExcel* GetRootAsStringTestExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::StringTestExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_STRINGTESTEXCEL_GETROOTASSTRINGTESTEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::StringTestExcel* GetRootAsStringTestExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::StringTestExcel* arg2)
		{
			return ((::FlatData::StringTestExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::StringTestExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_STRINGTESTEXCEL_GETROOTASSTRINGTESTEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_STRINGTESTEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::StringTestExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::StringTestExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_STRINGTESTEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* String(::System::Int32 arg)
		{
			return ((::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_STRINGTESTEXCEL_STRING_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StringLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_STRINGTESTEXCEL_GET_STRINGLENGTH_OFFSET))(nullptr);
		}

		::System::String* get_Sentence1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_STRINGTESTEXCEL_GET_SENTENCE1_OFFSET))(nullptr);
		}

		Il2CppObject* GetSentence1Bytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_STRINGTESTEXCEL_GETSENTENCE1BYTES_OFFSET))(nullptr);
		}

		::System::String* get_Script()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_STRINGTESTEXCEL_GET_SCRIPT_OFFSET))(nullptr);
		}

		Il2CppObject* GetScriptBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_STRINGTESTEXCEL_GETSCRIPTBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateStringTestExcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2, ::FlatBuffers::StringOffset* arg3, ::FlatBuffers::StringOffset* arg4)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_STRINGTESTEXCEL_CREATESTRINGTESTEXCEL_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void StartStringTestExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_STRINGTESTEXCEL_STARTSTRINGTESTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddString(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_STRINGTESTEXCEL_ADDSTRING_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateStringVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_STRINGTESTEXCEL_CREATESTRINGVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartStringVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_STRINGTESTEXCEL_STARTSTRINGVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddSentence1(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_STRINGTESTEXCEL_ADDSENTENCE1_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddScript(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_STRINGTESTEXCEL_ADDSCRIPT_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndStringTestExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_STRINGTESTEXCEL_ENDSTRINGTESTEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

