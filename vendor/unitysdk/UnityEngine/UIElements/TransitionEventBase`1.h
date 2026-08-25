#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class StylePropertyNameCollection; }
namespace UnityEngine::UIElements { class StylePropertyName; }

#define UNITYENGINE_UIELEMENTS_TRANSITIONEVENTBASE`1_GET_STYLEPROPERTYNAMES_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_TRANSITIONEVENTBASE`1_SET_ELAPSEDTIME_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_TRANSITIONEVENTBASE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_TRANSITIONEVENTBASE`1_INIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_TRANSITIONEVENTBASE`1_LOCALINIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_TRANSITIONEVENTBASE`1_GETPOOLED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int TransitionEventBase`1_TypeDefinitionIndex = 30547;

	class TransitionEventBase`1 : public <>c
	{
	public:
		::UnityEngine::UIElements::StylePropertyNameCollection* _stylePropertyNames_k__BackingField; // 0x0
		::System::Double _elapsedTime_k__BackingField; // 0x0

		::UnityEngine::UIElements::StylePropertyNameCollection* get_stylePropertyNames()
		{
			return (return (::UnityEngine::UIElements::StylePropertyNameCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TRANSITIONEVENTBASE`1_GET_STYLEPROPERTYNAMES_OFFSET))(nullptr);
		}

		::System::Void set_elapsedTime(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TRANSITIONEVENTBASE`1_SET_ELAPSEDTIME_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TRANSITIONEVENTBASE`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TRANSITIONEVENTBASE`1_INIT_OFFSET))(nullptr);
		}

		::System::Void LocalInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TRANSITIONEVENTBASE`1_LOCALINIT_OFFSET))(nullptr);
		}

		Il2CppObject* GetPooled(::UnityEngine::UIElements::StylePropertyName* arg, ::System::Double arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::UIElements::StylePropertyName*, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TRANSITIONEVENTBASE`1_GETPOOLED_OFFSET))(arg, arg, nullptr);
		}

	};
}

