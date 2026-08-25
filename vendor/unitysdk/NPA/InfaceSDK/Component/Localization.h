#pragma once
#include "../../../unitysdk.h"

#define NPA_INFACESDK_COMPONENT_LOCALIZATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D133A0)

namespace NPA::InfaceSDK::Component
{
	inline static constexpr unsigned int Localization_TypeDefinitionIndex = 25894;

	class Localization : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_LOCALIZATION_.CTOR_OFFSET))(nullptr);
		}

	};
}

