#pragma once
#include "../../../unitysdk.h"

#define NPA_INFACESDK_COMPONENT_PATCH_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D15820)

namespace NPA::InfaceSDK::Component
{
	inline static constexpr unsigned int Patch_TypeDefinitionIndex = 25903;

	class Patch : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_PATCH_.CTOR_OFFSET))(nullptr);
		}

	};
}

