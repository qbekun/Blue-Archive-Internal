#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DIAGNOSTICS_ASYNCSTREAMREADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x9B01430)
#define SYSTEM_DIAGNOSTICS_ASYNCSTREAMREADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B01450)
#define SYSTEM_DIAGNOSTICS_ASYNCSTREAMREADER_CANCELOPERATION_OFFSET UNITYSDK_OFFSET(0x9B01860)

namespace System::Diagnostics
{
	inline static constexpr unsigned int AsyncStreamReader_TypeDefinitionIndex = 29252;

	class AsyncStreamReader : public Il2CppObject
	{
	public:
		::System::IO::Stream* stream; // 0x10
		::System::Text::Encoding* encoding; // 0x18
		::System::Text::Decoder* decoder; // 0x20
		::Il2CppArray<::System::Object*>* byteBuffer; // 0x28
		::Il2CppArray<::System::Object*>* charBuffer; // 0x30
		::System::Boolean cancelOperation; // 0x38
		::System::Threading::ManualResetEvent* eofEvent; // 0x40
		::System::Object* syncObject; // 0x48
		::System::IAsyncResult* asyncReadResult; // 0x50

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_ASYNCSTREAMREADER_CLOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_ASYNCSTREAMREADER_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void CancelOperation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_ASYNCSTREAMREADER_CANCELOPERATION_OFFSET))(nullptr);
		}

	};
}

