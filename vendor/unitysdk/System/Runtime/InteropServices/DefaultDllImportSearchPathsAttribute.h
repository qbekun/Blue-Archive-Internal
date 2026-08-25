#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_DEFAULTDLLIMPORTSEARCHPATHSATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9222C70)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int DefaultDllImportSearchPathsAttribute_TypeDefinitionIndex = 24706;

	class DefaultDllImportSearchPathsAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Runtime::InteropServices::DllImportSearchPath* _paths; // 0x10

		::System::Void .ctor(::System::Runtime::InteropServices::DllImportSearchPath* arg)
		{
			((::System::Void(*)(::System::Runtime::InteropServices::DllImportSearchPath*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_DEFAULTDLLIMPORTSEARCHPATHSATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

