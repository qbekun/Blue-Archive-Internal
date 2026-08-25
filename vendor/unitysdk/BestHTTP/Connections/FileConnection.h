#pragma once
#include "../../unitysdk.h"

#define BESTHTTP_CONNECTIONS_FILECONNECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x8EF040)
#define BESTHTTP_CONNECTIONS_FILECONNECTION_THREADFUNC_OFFSET UNITYSDK_OFFSET(0x8FCFB0)

namespace BestHTTP::Connections
{
	inline static constexpr unsigned int FileConnection_TypeDefinitionIndex = 23419;

	class FileConnection : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_FILECONNECTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void ThreadFunc()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_FILECONNECTION_THREADFUNC_OFFSET))(nullptr);
		}

	};
}

