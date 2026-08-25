#pragma once
#include "unitysdk.h"

#define LOGICCOMPONENTKEYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2163440)

	inline static constexpr unsigned int LogicComponentKeyAttribute_TypeDefinitionIndex = 4007;

	class LogicComponentKeyAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGICCOMPONENTKEYATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};

