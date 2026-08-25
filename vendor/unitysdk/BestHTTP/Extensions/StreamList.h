#pragma once
#include "../../unitysdk.h"

#define BESTHTTP_EXTENSIONS_STREAMLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x8D6AC0)
#define BESTHTTP_EXTENSIONS_STREAMLIST_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x8D6B30)
#define BESTHTTP_EXTENSIONS_STREAMLIST_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x8D6B80)
#define BESTHTTP_EXTENSIONS_STREAMLIST_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x8D6B90)
#define BESTHTTP_EXTENSIONS_STREAMLIST_FLUSH_OFFSET UNITYSDK_OFFSET(0x8D6BE0)
#define BESTHTTP_EXTENSIONS_STREAMLIST_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x8D6C60)
#define BESTHTTP_EXTENSIONS_STREAMLIST_READ_OFFSET UNITYSDK_OFFSET(0x8D6CD0)
#define BESTHTTP_EXTENSIONS_STREAMLIST_WRITE_OFFSET UNITYSDK_OFFSET(0x8D6FF0)
#define BESTHTTP_EXTENSIONS_STREAMLIST_WRITE_OFFSET UNITYSDK_OFFSET(0x8D7040)
#define BESTHTTP_EXTENSIONS_STREAMLIST_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8D70F0)
#define BESTHTTP_EXTENSIONS_STREAMLIST_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x8D72A0)
#define BESTHTTP_EXTENSIONS_STREAMLIST_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x8D7300)
#define BESTHTTP_EXTENSIONS_STREAMLIST_SEEK_OFFSET UNITYSDK_OFFSET(0x8D7360)
#define BESTHTTP_EXTENSIONS_STREAMLIST_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x8D73C0)

namespace BestHTTP::Extensions
{
	inline static constexpr unsigned int StreamList_TypeDefinitionIndex = 23354;

	class StreamList : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* Streams; // 0x28
		::System::Int32 CurrentIdx; // 0x30

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_STREAMLIST_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanRead()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_STREAMLIST_GET_CANREAD_OFFSET))(nullptr);
		}

		::System::Boolean get_CanSeek()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_STREAMLIST_GET_CANSEEK_OFFSET))(nullptr);
		}

		::System::Boolean get_CanWrite()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_STREAMLIST_GET_CANWRITE_OFFSET))(nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_STREAMLIST_FLUSH_OFFSET))(nullptr);
		}

		::System::Int64 get_Length()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_STREAMLIST_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Int32 Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_STREAMLIST_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_STREAMLIST_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Write(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_STREAMLIST_WRITE_OFFSET))(str, nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_STREAMLIST_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Position()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_STREAMLIST_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void set_Position(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_STREAMLIST_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::System::Int64 Seek(::System::Int64 arg, ::System::IO::SeekOrigin* arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::System::IO::SeekOrigin*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_STREAMLIST_SEEK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetLength(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_STREAMLIST_SETLENGTH_OFFSET))(arg, nullptr);
		}

	};
}

