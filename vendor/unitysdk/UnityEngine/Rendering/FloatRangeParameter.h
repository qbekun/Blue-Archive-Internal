#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector2; }

#define UNITYENGINE_RENDERING_FLOATRANGEPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE4180)
#define UNITYENGINE_RENDERING_FLOATRANGEPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x9FE4200)
#define UNITYENGINE_RENDERING_FLOATRANGEPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9FE4230)
#define UNITYENGINE_RENDERING_FLOATRANGEPARAMETER_INTERP_OFFSET UNITYSDK_OFFSET(0x9FE4240)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int FloatRangeParameter_TypeDefinitionIndex = 34112;

	class FloatRangeParameter : public ::System::Net::Cache::RequestCacheValidator
	{
	public:
		::System::Single min; // 0x20
		::System::Single max; // 0x24

		::System::Void .ctor(::UnityEngine::Vector2* arg, ::System::Single arg, ::System::Single arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::System::Single, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FLOATRANGEPARAMETER_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void set_value(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FLOATRANGEPARAMETER_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_value()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FLOATRANGEPARAMETER_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void Interp(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FLOATRANGEPARAMETER_INTERP_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

