#pragma once
#include "unitysdk.h"

#define HANDSHAKEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DB3510)

	inline static constexpr unsigned int HandShakeException_TypeDefinitionIndex = 26399;

	class HandShakeException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HANDSHAKEEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

	};

