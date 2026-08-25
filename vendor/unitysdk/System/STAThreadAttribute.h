#pragma once
#include "../unitysdk.h"

#define SYSTEM_STATHREADATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9379430)

namespace System
{
	inline static constexpr unsigned int STAThreadAttribute_TypeDefinitionIndex = 23841;

	class STAThreadAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STATHREADATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

