#pragma once
#include "unitysdk.h"

#define OPENURLSUPPORT_OPENURL_OFFSET UNITYSDK_OFFSET(0xA11880)

	inline static constexpr unsigned int OpenURLSupport_TypeDefinitionIndex = 36566;

	class OpenURLSupport : public Il2CppObject
	{
	public:
		::System::Void OpenURL(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + OPENURLSUPPORT_OPENURL_OFFSET))(str, nullptr);
		}

	};

