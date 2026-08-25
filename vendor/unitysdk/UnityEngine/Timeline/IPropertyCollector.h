#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_TIMELINE_IPROPERTYCOLLECTOR_PUSHACTIVEGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TIMELINE_IPROPERTYCOLLECTOR_POPACTIVEGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TIMELINE_IPROPERTYCOLLECTOR_ADDFROMCLIP_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TIMELINE_IPROPERTYCOLLECTOR_ADDFROMNAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TIMELINE_IPROPERTYCOLLECTOR_ADDFROMNAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TIMELINE_IPROPERTYCOLLECTOR_ADDFROMNAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TIMELINE_IPROPERTYCOLLECTOR_ADDFROMCOMPONENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TIMELINE_IPROPERTYCOLLECTOR_ADDOBJECTPROPERTIES_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int IPropertyCollector_TypeDefinitionIndex = 36334;

	class IPropertyCollector : public Il2CppObject
	{
	public:
		::System::Void PushActiveGameObject(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IPROPERTYCOLLECTOR_PUSHACTIVEGAMEOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void PopActiveGameObject()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IPROPERTYCOLLECTOR_POPACTIVEGAMEOBJECT_OFFSET))(nullptr);
		}

		::System::Void AddFromClip(::UnityEngine::AnimationClip* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IPROPERTYCOLLECTOR_ADDFROMCLIP_OFFSET))(arg, nullptr);
		}

		::System::Void AddFromName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IPROPERTYCOLLECTOR_ADDFROMNAME_OFFSET))(str, nullptr);
		}

		::System::Void AddFromName(::UnityEngine::GameObject* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IPROPERTYCOLLECTOR_ADDFROMNAME_OFFSET))(arg, str, nullptr);
		}

		::System::Void AddFromName(::UnityEngine::GameObject* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IPROPERTYCOLLECTOR_ADDFROMNAME_OFFSET))(arg, str, nullptr);
		}

		::System::Void AddFromComponent(::UnityEngine::GameObject* arg, ::UnityEngine::Component* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Component*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IPROPERTYCOLLECTOR_ADDFROMCOMPONENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddObjectProperties(::UnityEngine::Object* arg, ::UnityEngine::AnimationClip* arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_IPROPERTYCOLLECTOR_ADDOBJECTPROPERTIES_OFFSET))(arg, arg, nullptr);
		}

	};
}

