#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_FRIENDACCESSALLOWEDATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x922B1A0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int FriendAccessAllowedAttribute_TypeDefinitionIndex = 24796;

	class FriendAccessAllowedAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_FRIENDACCESSALLOWEDATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

