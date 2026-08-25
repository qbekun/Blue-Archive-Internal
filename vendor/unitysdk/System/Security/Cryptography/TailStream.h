#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x91944F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_CLEAR_OFFSET UNITYSDK_OFFSET(0x9194940)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9194960)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_GET_BUFFER_OFFSET UNITYSDK_OFFSET(0x91947B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x9194A50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x9194A60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x9194A70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x9194A80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x9194AF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x9194B60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x9194BD0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x9194BE0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x9194C50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x9194CC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x9194D30)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int TailStream_TypeDefinitionIndex = 24347;

	class TailStream : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _Buffer; // 0x28
		::System::Int32 _BufferSize; // 0x30
		::System::Int32 _BufferIndex; // 0x34
		::System::Boolean _BufferFull; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_CLEAR_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_DISPOSE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Buffer()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_GET_BUFFER_OFFSET))(nullptr);
		}

		::System::Boolean get_CanRead()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_GET_CANREAD_OFFSET))(nullptr);
		}

		::System::Boolean get_CanSeek()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_GET_CANSEEK_OFFSET))(nullptr);
		}

		::System::Boolean get_CanWrite()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_GET_CANWRITE_OFFSET))(nullptr);
		}

		::System::Int64 get_Length()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Int64 get_Position()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void set_Position(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_FLUSH_OFFSET))(nullptr);
		}

		::System::Int64 Seek(::System::Int64 arg, ::System::IO::SeekOrigin* arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::System::IO::SeekOrigin*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_SEEK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetLength(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_SETLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Int32 Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

