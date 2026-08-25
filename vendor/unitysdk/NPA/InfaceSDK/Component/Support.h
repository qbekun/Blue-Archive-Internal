#pragma once
#include "../../../unitysdk.h"

#define NPA_INFACESDK_COMPONENT_SUPPORT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D17360)

namespace NPA::InfaceSDK::Component
{
	inline static constexpr unsigned int Support_TypeDefinitionIndex = 25911;

	class Support : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_SUPPORT_.CTOR_OFFSET))(nullptr);
		}

	};
}

