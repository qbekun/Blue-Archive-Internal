#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Object; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class DrivenTransformProperties; }

#define UNITYENGINE_DRIVENRECTTRANSFORMTRACKER_ADD_OFFSET UNITYSDK_OFFSET(0xA23B910)
#define UNITYENGINE_DRIVENRECTTRANSFORMTRACKER_CLEAR_OFFSET UNITYSDK_OFFSET(0xA23B920)

namespace UnityEngine
{
	inline static constexpr unsigned int DrivenRectTransformTracker_TypeDefinitionIndex = 31207;

	class DrivenRectTransformTracker : public Il2CppObject
	{
	public:
		::System::Void Add(::UnityEngine::Object* arg, ::UnityEngine::RectTransform* arg, ::UnityEngine::DrivenTransformProperties* arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::UnityEngine::RectTransform*, ::UnityEngine::DrivenTransformProperties*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DRIVENRECTTRANSFORMTRACKER_ADD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DRIVENRECTTRANSFORMTRACKER_CLEAR_OFFSET))(nullptr);
		}

	};
}

