#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_MONOCHUNKPARSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A760E0)
#define SYSTEM_NET_MONOCHUNKPARSER_READ_OFFSET UNITYSDK_OFFSET(0x9A761B0)
#define SYSTEM_NET_MONOCHUNKPARSER_READFROMCHUNKS_OFFSET UNITYSDK_OFFSET(0x9A761C0)
#define SYSTEM_NET_MONOCHUNKPARSER_WRITE_OFFSET UNITYSDK_OFFSET(0x9A765D0)
#define SYSTEM_NET_MONOCHUNKPARSER_INTERNALWRITE_OFFSET UNITYSDK_OFFSET(0x9A765F0)
#define SYSTEM_NET_MONOCHUNKPARSER_GET_WANTMORE_OFFSET UNITYSDK_OFFSET(0x9A77100)
#define SYSTEM_NET_MONOCHUNKPARSER_GET_DATAAVAILABLE_OFFSET UNITYSDK_OFFSET(0x9A77120)
#define SYSTEM_NET_MONOCHUNKPARSER_GET_CHUNKLEFT_OFFSET UNITYSDK_OFFSET(0x9A77210)
#define SYSTEM_NET_MONOCHUNKPARSER_READBODY_OFFSET UNITYSDK_OFFSET(0x9A76B30)
#define SYSTEM_NET_MONOCHUNKPARSER_GETCHUNKSIZE_OFFSET UNITYSDK_OFFSET(0x9A76710)
#define SYSTEM_NET_MONOCHUNKPARSER_REMOVECHUNKEXTENSION_OFFSET UNITYSDK_OFFSET(0x9A772B0)
#define SYSTEM_NET_MONOCHUNKPARSER_READCRLF_OFFSET UNITYSDK_OFFSET(0x9A76C40)
#define SYSTEM_NET_MONOCHUNKPARSER_READTRAILER_OFFSET UNITYSDK_OFFSET(0x9A76D60)
#define SYSTEM_NET_MONOCHUNKPARSER_THROWPROTOCOLVIOLATION_OFFSET UNITYSDK_OFFSET(0x9A77250)

namespace System::Net
{
	inline static constexpr unsigned int MonoChunkParser_TypeDefinitionIndex = 29784;

	class MonoChunkParser : public Il2CppObject
	{
	public:
		::System::Net::WebHeaderCollection* headers; // 0x10
		::System::Int32 chunkSize; // 0x18
		::System::Int32 chunkRead; // 0x1C
		::System::Int32 totalWritten; // 0x20
		State* state; // 0x24
		::System::Text::StringBuilder* saved; // 0x28
		::System::Boolean sawCR; // 0x30
		::System::Boolean gotit; // 0x31
		::System::Int32 trailerState; // 0x34
		::System::Collections::ArrayList* chunks; // 0x38

		::System::Void .ctor(::System::Net::WebHeaderCollection* arg)
		{
			((::System::Void(*)(::System::Net::WebHeaderCollection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKPARSER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKPARSER_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 ReadFromChunks(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKPARSER_READFROMCHUNKS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKPARSER_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void InternalWrite(::Il2CppArray<::System::Object*>* arg, int32_t&* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, int32_t&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKPARSER_INTERNALWRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean get_WantMore()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKPARSER_GET_WANTMORE_OFFSET))(nullptr);
		}

		::System::Boolean get_DataAvailable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKPARSER_GET_DATAAVAILABLE_OFFSET))(nullptr);
		}

		::System::Int32 get_ChunkLeft()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKPARSER_GET_CHUNKLEFT_OFFSET))(nullptr);
		}

		State* ReadBody(::Il2CppArray<::System::Object*>* arg, int32_t&* arg, ::System::Int32 arg)
		{
			return (return (State*(*)(::Il2CppArray<::System::Object*>*, int32_t&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKPARSER_READBODY_OFFSET))(arg, arg, arg, nullptr);
		}

		State* GetChunkSize(::Il2CppArray<::System::Object*>* arg, int32_t&* arg, ::System::Int32 arg)
		{
			return (return (State*(*)(::Il2CppArray<::System::Object*>*, int32_t&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKPARSER_GETCHUNKSIZE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* RemoveChunkExtension(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKPARSER_REMOVECHUNKEXTENSION_OFFSET))(str, nullptr);
		}

		State* ReadCRLF(::Il2CppArray<::System::Object*>* arg, int32_t&* arg, ::System::Int32 arg)
		{
			return (return (State*(*)(::Il2CppArray<::System::Object*>*, int32_t&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKPARSER_READCRLF_OFFSET))(arg, arg, arg, nullptr);
		}

		State* ReadTrailer(::Il2CppArray<::System::Object*>* arg, int32_t&* arg, ::System::Int32 arg)
		{
			return (return (State*(*)(::Il2CppArray<::System::Object*>*, int32_t&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKPARSER_READTRAILER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ThrowProtocolViolation(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKPARSER_THROWPROTOCOLVIOLATION_OFFSET))(str, nullptr);
		}

	};
}

