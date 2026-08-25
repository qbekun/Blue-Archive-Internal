#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_COMIMPORTATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9222BF0)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int ComImportAttribute_TypeDefinitionIndex = 24699;

	class ComImportAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_COMIMPORTATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

