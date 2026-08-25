#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector2; }

#define UNITYENGINE_RENDERING_NOINTERPFLOATRANGEPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE4260)
#define UNITYENGINE_RENDERING_NOINTERPFLOATRANGEPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x9FE42E0)
#define UNITYENGINE_RENDERING_NOINTERPFLOATRANGEPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9FE4310)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int NoInterpFloatRangeParameter_TypeDefinitionIndex = 34113;

	class NoInterpFloatRangeParameter : public ::System::Net::Cache::RequestCacheValidator
	{
	public:
		::System::Single min; // 0x20
		::System::Single max; // 0x24

		::System::Void .ctor(::UnityEngine::Vector2* arg, ::System::Single arg, ::System::Single arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::System::Single, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPFLOATRANGEPARAMETER_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void set_value(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPFLOATRANGEPARAMETER_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_value()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPFLOATRANGEPARAMETER_GET_VALUE_OFFSET))(nullptr);
		}

	};
}

