#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector3; }

#define UNITYENGINE_UIELEMENTS_ITRANSFORM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ITRANSFORM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ITRANSFORM_GET_SCALE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ITransform_TypeDefinitionIndex = 30114;

	class ITransform : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* get_position()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ITRANSFORM_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void set_position(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ITRANSFORM_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_scale()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ITRANSFORM_GET_SCALE_OFFSET))(nullptr);
		}

	};
}

