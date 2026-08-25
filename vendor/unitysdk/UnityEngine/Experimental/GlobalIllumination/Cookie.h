#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine::Experimental::GlobalIllumination { class Cookie; }

#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_COOKIE_DEFAULTS_OFFSET UNITYSDK_OFFSET(0xA26E4C0)

namespace UnityEngine::Experimental::GlobalIllumination
{
	inline static constexpr unsigned int Cookie_TypeDefinitionIndex = 31637;

	class Cookie : public Il2CppObject
	{
	public:
		::System::Int32 instanceID; // 0x10
		::System::Single scale; // 0x14
		::UnityEngine::Vector2* sizes; // 0x18

		::UnityEngine::Experimental::GlobalIllumination::Cookie* Defaults()
		{
			return (return (::UnityEngine::Experimental::GlobalIllumination::Cookie*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_COOKIE_DEFAULTS_OFFSET))(nullptr);
		}

	};
}

