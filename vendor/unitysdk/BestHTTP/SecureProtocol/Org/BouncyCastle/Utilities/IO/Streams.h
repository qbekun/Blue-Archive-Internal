#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_STREAMS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9326D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_STREAMS_DRAIN_OFFSET UNITYSDK_OFFSET(0x9326E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_STREAMS_READALL_OFFSET UNITYSDK_OFFSET(0x932770)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_STREAMS_READALLLIMITED_OFFSET UNITYSDK_OFFSET(0x9328C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_STREAMS_READFULLY_OFFSET UNITYSDK_OFFSET(0x932AA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_STREAMS_READFULLY_OFFSET UNITYSDK_OFFSET(0x932B10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_STREAMS_PIPEALL_OFFSET UNITYSDK_OFFSET(0x9327F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_STREAMS_PIPEALLLIMITED_OFFSET UNITYSDK_OFFSET(0x932940)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_STREAMS_WRITEBUFTO_OFFSET UNITYSDK_OFFSET(0x932B90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_STREAMS_WRITEBUFTO_OFFSET UNITYSDK_OFFSET(0x932BC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_STREAMS_WRITEZEROES_OFFSET UNITYSDK_OFFSET(0x932C70)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO
{
	inline static constexpr unsigned int Streams_TypeDefinitionIndex = 21600;

	class Streams : public Il2CppObject
	{
	public:
		::System::Int32 BufferSize; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_STREAMS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Drain(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_STREAMS_DRAIN_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ReadAll(::System::IO::Stream* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_STREAMS_READALL_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ReadAllLimited(::System::IO::Stream* arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::IO::Stream*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_STREAMS_READALLLIMITED_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 ReadFully(::System::IO::Stream* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::System::IO::Stream*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_STREAMS_READFULLY_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 ReadFully(::System::IO::Stream* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::IO::Stream*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_STREAMS_READFULLY_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void PipeAll(::System::IO::Stream* arg, ::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_STREAMS_PIPEALL_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 PipeAllLimited(::System::IO::Stream* arg, ::System::Int64 arg, ::System::IO::Stream* arg)
		{
			return (return (::System::Int64(*)(::System::IO::Stream*, ::System::Int64, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_STREAMS_PIPEALLLIMITED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteBufTo(::System::IO::MemoryStream* arg, ::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::MemoryStream*, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_STREAMS_WRITEBUFTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 WriteBufTo(::System::IO::MemoryStream* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::IO::MemoryStream*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_STREAMS_WRITEBUFTO_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteZeroes(::System::IO::Stream* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_STREAMS_WRITEZEROES_OFFSET))(arg, arg, nullptr);
		}

	};
}

