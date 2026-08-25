#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
class Direction;
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Vector2; }

#define UISLIDER_ONPRESSBACKGROUND_OFFSET UNITYSDK_OFFSET(0xA3D350)
#define UISLIDER_ONPAN_OFFSET UNITYSDK_OFFSET(0xA3D5A0)
#define UISLIDER_GET_INVERTED_OFFSET UNITYSDK_OFFSET(0xA3D6D0)
#define UISLIDER_GET_ISCOLLIDERENABLED_OFFSET UNITYSDK_OFFSET(0xA3D5E0)
#define UISLIDER_SET_INVERTED_OFFSET UNITYSDK_OFFSET(0xA3D6E0)
#define UISLIDER_ONSTART_OFFSET UNITYSDK_OFFSET(0xA36FE0)
#define UISLIDER_ONPRESSFOREGROUND_OFFSET UNITYSDK_OFFSET(0xA3D6F0)
#define UISLIDER_GET_SLIDERVALUE_OFFSET UNITYSDK_OFFSET(0xA3DA60)
#define UISLIDER_ONDRAGBACKGROUND_OFFSET UNITYSDK_OFFSET(0xA3DB50)
#define UISLIDER_SET_SLIDERVALUE_OFFSET UNITYSDK_OFFSET(0xA3DC10)
#define UISLIDER_MXPROGRESSIVEVALUEUPDATE_OFFSET UNITYSDK_OFFSET(0xA3D530)
#define UISLIDER_UPGRADE_OFFSET UNITYSDK_OFFSET(0xA3DC40)
#define UISLIDER_ONDRAGFOREGROUND_OFFSET UNITYSDK_OFFSET(0xA3DD20)
#define UISLIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA365E0)

	inline static constexpr unsigned int UISlider_TypeDefinitionIndex = 77;

	class UISlider : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* foreground; // 0x70
		::System::Single rawValue; // 0x78
		Direction* direction; // 0x7C
		::System::Boolean mInverted; // 0x80
		::System::Single mScrollSpeedCustomize; // 0x84
		::System::Single ScrollViewTotalHeight; // 0x88
		::System::Single ScrollViewSingleElementHeight; // 0x8C
		::UnityEngine::Coroutine* progressiveCoroutine; // 0x90
		::System::Single dragTargetValue; // 0x98

		::System::Void OnPressBackground(::UnityEngine::GameObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISLIDER_ONPRESSBACKGROUND_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnPan(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UISLIDER_ONPAN_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_inverted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISLIDER_GET_INVERTED_OFFSET))(nullptr);
		}

		::System::Boolean get_isColliderEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISLIDER_GET_ISCOLLIDERENABLED_OFFSET))(nullptr);
		}

		::System::Void set_inverted(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISLIDER_SET_INVERTED_OFFSET))(arg, nullptr);
		}

		::System::Void OnStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISLIDER_ONSTART_OFFSET))(nullptr);
		}

		::System::Void OnPressForeground(::UnityEngine::GameObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISLIDER_ONPRESSFOREGROUND_OFFSET))(arg, arg2, nullptr);
		}

		::System::Single get_sliderValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UISLIDER_GET_SLIDERVALUE_OFFSET))(nullptr);
		}

		::System::Void OnDragBackground(::UnityEngine::GameObject* arg, ::UnityEngine::Vector2* arg2)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UISLIDER_ONDRAGBACKGROUND_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_sliderValue(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UISLIDER_SET_SLIDERVALUE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* MxProgressiveValueUpdate()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISLIDER_MXPROGRESSIVEVALUEUPDATE_OFFSET))(nullptr);
		}

		::System::Void Upgrade()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISLIDER_UPGRADE_OFFSET))(nullptr);
		}

		::System::Void OnDragForeground(::UnityEngine::GameObject* arg, ::UnityEngine::Vector2* arg2)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UISLIDER_ONDRAGFOREGROUND_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISLIDER_.CTOR_OFFSET))(nullptr);
		}

	};

