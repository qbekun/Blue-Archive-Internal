#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_SOCKETS_SENDPACKETSELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AA8100)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int SendPacketsElement_TypeDefinitionIndex = 29913;

	class SendPacketsElement : public Il2CppObject
	{
	public:
		::System::String* m_FilePath; // 0x10
		::Il2CppArray<::System::Object*>* m_Buffer; // 0x18
		::System::Int32 m_Offset; // 0x20
		::System::Int32 m_Count; // 0x24
		::System::Boolean m_endOfPacket; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SENDPACKETSELEMENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

