#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class IEventHandler; }

#define UNITYENGINE_UIELEMENTS_POINTERCAPTUREEVENTBASE`1_SET_RELATEDTARGET_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTERCAPTUREEVENTBASE`1_GET_POINTERID_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTERCAPTUREEVENTBASE`1_SET_POINTERID_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTERCAPTUREEVENTBASE`1_INIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTERCAPTUREEVENTBASE`1_LOCALINIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTERCAPTUREEVENTBASE`1_GETPOOLED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTERCAPTUREEVENTBASE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerCaptureEventBase`1_TypeDefinitionIndex = 30444;

	class PointerCaptureEventBase`1 : public <>c
	{
	public:
		::UnityEngine::UIElements::IEventHandler* _relatedTarget_k__BackingField; // 0x0
		::System::Int32 _pointerId_k__BackingField; // 0x0

		::System::Void set_relatedTarget(::UnityEngine::UIElements::IEventHandler* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCAPTUREEVENTBASE`1_SET_RELATEDTARGET_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_pointerId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCAPTUREEVENTBASE`1_GET_POINTERID_OFFSET))(nullptr);
		}

		::System::Void set_pointerId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCAPTUREEVENTBASE`1_SET_POINTERID_OFFSET))(arg, nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCAPTUREEVENTBASE`1_INIT_OFFSET))(nullptr);
		}

		::System::Void LocalInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCAPTUREEVENTBASE`1_LOCALINIT_OFFSET))(nullptr);
		}

		Il2CppObject* GetPooled(::UnityEngine::UIElements::IEventHandler* arg, ::UnityEngine::UIElements::IEventHandler* arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::UIElements::IEventHandler*, ::UnityEngine::UIElements::IEventHandler*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCAPTUREEVENTBASE`1_GETPOOLED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCAPTUREEVENTBASE`1_.CTOR_OFFSET))(nullptr);
		}

	};
}

