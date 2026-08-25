#pragma once
#include "unitysdk.h"

namespace UnityEngine::Animations { class AnimationStream&; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Component; }

#define PROPERTYSYNCER_CREATE_OFFSET UNITYSDK_OFFSET(0x9E22AB0)
#define PROPERTYSYNCER_STREAMVALUES_OFFSET UNITYSDK_OFFSET(0x9E22870)
#define PROPERTYSYNCER_BINDAT_OFFSET UNITYSDK_OFFSET(0x9E22BC0)
#define PROPERTYSYNCER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E22C90)
#define PROPERTYSYNCER_SYNC_OFFSET UNITYSDK_OFFSET(0x9E22790)

	inline static constexpr unsigned int PropertySyncer_TypeDefinitionIndex = 37157;

	class PropertySyncer : public Il2CppObject
	{
	public:
		Il2CppObject* sceneHandles; // 0x10
		Il2CppObject* streamHandles; // 0x20
		Il2CppObject* buffer; // 0x30

		PropertySyncer* Create(::System::Int32 arg)
		{
			return (return (PropertySyncer*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PROPERTYSYNCER_CREATE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* StreamValues(::UnityEngine::Animations::AnimationStream&* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::Animations::AnimationStream&*, ::PVOID))((::PBYTE)hIl2Cpp + PROPERTYSYNCER_STREAMVALUES_OFFSET))(arg, nullptr);
		}

		::System::Void BindAt(::System::Int32 arg, ::UnityEngine::Animator* arg, ::UnityEngine::Component* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Animator*, ::UnityEngine::Component*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PROPERTYSYNCER_BINDAT_OFFSET))(arg, arg, arg, str, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROPERTYSYNCER_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Sync(::UnityEngine::Animations::AnimationStream&* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::AnimationStream&*, ::PVOID))((::PBYTE)hIl2Cpp + PROPERTYSYNCER_SYNC_OFFSET))(arg, nullptr);
		}

	};

