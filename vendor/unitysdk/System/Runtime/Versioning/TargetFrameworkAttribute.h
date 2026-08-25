#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_VERSIONING_TARGETFRAMEWORKATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x91F71E0)
#define SYSTEM_RUNTIME_VERSIONING_TARGETFRAMEWORKATTRIBUTE_SET_FRAMEWORKDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x91F7270)

namespace System::Runtime::Versioning
{
	inline static constexpr unsigned int TargetFrameworkAttribute_TypeDefinitionIndex = 24567;

	class TargetFrameworkAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _frameworkName; // 0x10
		::System::String* _frameworkDisplayName; // 0x18

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_VERSIONING_TARGETFRAMEWORKATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void set_FrameworkDisplayName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_VERSIONING_TARGETFRAMEWORKATTRIBUTE_SET_FRAMEWORKDISPLAYNAME_OFFSET))(str, nullptr);
		}

	};
}

