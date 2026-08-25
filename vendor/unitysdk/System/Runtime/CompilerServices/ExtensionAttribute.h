#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_EXTENSIONATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9227D10)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int ExtensionAttribute_TypeDefinitionIndex = 24747;

	class ExtensionAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_EXTENSIONATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

