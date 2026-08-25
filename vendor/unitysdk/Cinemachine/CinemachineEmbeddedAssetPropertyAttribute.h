#pragma once
#include "../unitysdk.h"

#define CINEMACHINE_CINEMACHINEEMBEDDEDASSETPROPERTYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x285C890)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineEmbeddedAssetPropertyAttribute_TypeDefinitionIndex = 34311;

	class CinemachineEmbeddedAssetPropertyAttribute : public Il2CppObject
	{
	public:
		::System::Boolean WarnIfNull; // 0x18

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEMBEDDEDASSETPROPERTYATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

