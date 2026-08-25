#pragma once
#include "../../../unitysdk.h"

#define BESTHTTP_CONNECTIONS_HTTP2_BUFFERHELPER_SETUINT16_OFFSET UNITYSDK_OFFSET(0x907F60)
#define BESTHTTP_CONNECTIONS_HTTP2_BUFFERHELPER_SETUINT24_OFFSET UNITYSDK_OFFSET(0x907FA0)
#define BESTHTTP_CONNECTIONS_HTTP2_BUFFERHELPER_SETUINT31_OFFSET UNITYSDK_OFFSET(0x907FF0)
#define BESTHTTP_CONNECTIONS_HTTP2_BUFFERHELPER_SETUINT32_OFFSET UNITYSDK_OFFSET(0x908060)
#define BESTHTTP_CONNECTIONS_HTTP2_BUFFERHELPER_SETLONG_OFFSET UNITYSDK_OFFSET(0x9080D0)
#define BESTHTTP_CONNECTIONS_HTTP2_BUFFERHELPER_SETBIT_OFFSET UNITYSDK_OFFSET(0x9081A0)
#define BESTHTTP_CONNECTIONS_HTTP2_BUFFERHELPER_SETBIT_OFFSET UNITYSDK_OFFSET(0x908210)
#define BESTHTTP_CONNECTIONS_HTTP2_BUFFERHELPER_READBIT_OFFSET UNITYSDK_OFFSET(0x908240)
#define BESTHTTP_CONNECTIONS_HTTP2_BUFFERHELPER_READVALUE_OFFSET UNITYSDK_OFFSET(0x908260)
#define BESTHTTP_CONNECTIONS_HTTP2_BUFFERHELPER_READUINT16_OFFSET UNITYSDK_OFFSET(0x9089A0)
#define BESTHTTP_CONNECTIONS_HTTP2_BUFFERHELPER_READUINT24_OFFSET UNITYSDK_OFFSET(0x9089F0)
#define BESTHTTP_CONNECTIONS_HTTP2_BUFFERHELPER_READUINT31_OFFSET UNITYSDK_OFFSET(0x908A50)
#define BESTHTTP_CONNECTIONS_HTTP2_BUFFERHELPER_READUINT32_OFFSET UNITYSDK_OFFSET(0x908AC0)
#define BESTHTTP_CONNECTIONS_HTTP2_BUFFERHELPER_READLONG_OFFSET UNITYSDK_OFFSET(0x908B30)

namespace BestHTTP::Connections::HTTP2
{
	inline static constexpr unsigned int BufferHelper_TypeDefinitionIndex = 23429;

	class BufferHelper : public Il2CppObject
	{
	public:
		::System::Void SetUInt16(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::UInt16 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::UInt16, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_BUFFERHELPER_SETUINT16_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetUInt24(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_BUFFERHELPER_SETUINT24_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetUInt31(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_BUFFERHELPER_SETUINT31_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetUInt32(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_BUFFERHELPER_SETUINT32_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetLong(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_BUFFERHELPER_SETLONG_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Byte SetBit(::System::Byte arg, ::System::Byte arg, ::System::Boolean arg)
		{
			return (return (::System::Byte(*)(::System::Byte, ::System::Byte, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_BUFFERHELPER_SETBIT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Byte SetBit(::System::Byte arg, ::System::Byte arg, ::System::Byte arg)
		{
			return (return (::System::Byte(*)(::System::Byte, ::System::Byte, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_BUFFERHELPER_SETBIT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Byte ReadBit(::System::Byte arg, ::System::Byte arg)
		{
			return (return (::System::Byte(*)(::System::Byte, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_BUFFERHELPER_READBIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Byte ReadValue(::System::Byte arg, ::System::Byte arg, ::System::Byte arg)
		{
			return (return (::System::Byte(*)(::System::Byte, ::System::Byte, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_BUFFERHELPER_READVALUE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::UInt16 ReadUInt16(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::UInt16(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_BUFFERHELPER_READUINT16_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 ReadUInt24(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_BUFFERHELPER_READUINT24_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 ReadUInt31(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_BUFFERHELPER_READUINT31_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 ReadUInt32(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_BUFFERHELPER_READUINT32_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 ReadLong(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_BUFFERHELPER_READLONG_OFFSET))(arg, arg, nullptr);
		}

	};
}

