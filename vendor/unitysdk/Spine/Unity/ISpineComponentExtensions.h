#pragma once
#include "../../unitysdk.h"

namespace Spine::Unity { class ISpineComponent; }

#define SPINE_UNITY_ISPINECOMPONENTEXTENSIONS_ISNULLORDESTROYED_OFFSET UNITYSDK_OFFSET(0x96190A0)

namespace Spine::Unity
{
	inline static constexpr unsigned int ISpineComponentExtensions_TypeDefinitionIndex = 35345;

	class ISpineComponentExtensions : public Il2CppObject
	{
	public:
		::System::Boolean IsNullOrDestroyed(::Spine::Unity::ISpineComponent* arg)
		{
			return (return (::System::Boolean(*)(::Spine::Unity::ISpineComponent*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ISPINECOMPONENTEXTENSIONS_ISNULLORDESTROYED_OFFSET))(arg, nullptr);
		}

	};
}

