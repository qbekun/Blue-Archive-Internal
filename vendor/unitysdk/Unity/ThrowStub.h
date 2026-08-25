#pragma once
#include "../unitysdk.h"

#define UNITY_THROWSTUB_THROWNOTSUPPORTEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x96282A0)

namespace Unity
{
	inline static constexpr unsigned int ThrowStub_TypeDefinitionIndex = 38075;

	class ThrowStub : public Il2CppObject
	{
	public:
		::System::Void ThrowNotSupportedException()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_THROWSTUB_THROWNOTSUPPORTEDEXCEPTION_OFFSET))(nullptr);
		}

	};
}

