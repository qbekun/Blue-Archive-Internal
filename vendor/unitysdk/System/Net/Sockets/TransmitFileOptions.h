#pragma once
#include "../../../unitysdk.h"

namespace System::Net::Sockets
{
	inline static constexpr unsigned int TransmitFileOptions_TypeDefinitionIndex = 29921;

	class TransmitFileOptions : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Net::Sockets::TransmitFileOptions* UseDefaultWorkerThread; // 0x0
		::System::Net::Sockets::TransmitFileOptions* Disconnect; // 0x0
		::System::Net::Sockets::TransmitFileOptions* ReuseSocket; // 0x0
		::System::Net::Sockets::TransmitFileOptions* WriteBehind; // 0x0
		::System::Net::Sockets::TransmitFileOptions* UseSystemThread; // 0x0
		::System::Net::Sockets::TransmitFileOptions* UseKernelApc; // 0x0

	};
}

