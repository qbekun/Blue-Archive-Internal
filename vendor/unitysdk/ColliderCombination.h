#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector2; }
class ColliderCombination;
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Ray; }

#define COLLIDERCOMBINATION_GET_CACHEDCOLLIDERS_OFFSET UNITYSDK_OFFSET(0x20B24A0)
#define COLLIDERCOMBINATION_SET_CACHEDCOLLIDERS_OFFSET UNITYSDK_OFFSET(0x20B24B0)
#define COLLIDERCOMBINATION_GET_CACHEDBOUNDS_OFFSET UNITYSDK_OFFSET(0x20B24C0)
#define COLLIDERCOMBINATION_SET_CACHEDBOUNDS_OFFSET UNITYSDK_OFFSET(0x20B24D0)
#define COLLIDERCOMBINATION_GET_CACHEDAABBMINPOINT_OFFSET UNITYSDK_OFFSET(0x20B24E0)
#define COLLIDERCOMBINATION_SET_CACHEDAABBMINPOINT_OFFSET UNITYSDK_OFFSET(0x20B2500)
#define COLLIDERCOMBINATION_GET_CACHEDAABBMAXPOINT_OFFSET UNITYSDK_OFFSET(0x20B2510)
#define COLLIDERCOMBINATION_SET_CACHEDAABBMAXPOINT_OFFSET UNITYSDK_OFFSET(0x20B2530)
#define COLLIDERCOMBINATION_AWAKE_OFFSET UNITYSDK_OFFSET(0x20B2540)
#define COLLIDERCOMBINATION_ENABLECOLLIDERS_OFFSET UNITYSDK_OFFSET(0x20B2890)
#define COLLIDERCOMBINATION_GET_ONCLICKCALLBACK_OFFSET UNITYSDK_OFFSET(0x20B28E0)
#define COLLIDERCOMBINATION_SET_ONCLICKCALLBACK_OFFSET UNITYSDK_OFFSET(0x20B28F0)
#define COLLIDERCOMBINATION_GET_ONPRESSCALLBACK_OFFSET UNITYSDK_OFFSET(0x20B2900)
#define COLLIDERCOMBINATION_SET_ONPRESSCALLBACK_OFFSET UNITYSDK_OFFSET(0x20B2910)
#define COLLIDERCOMBINATION_GET_ONDRAGCALLBACK_OFFSET UNITYSDK_OFFSET(0x20B2920)
#define COLLIDERCOMBINATION_SET_ONDRAGCALLBACK_OFFSET UNITYSDK_OFFSET(0x20B2930)
#define COLLIDERCOMBINATION_ONCLICK_OFFSET UNITYSDK_OFFSET(0x20B2940)
#define COLLIDERCOMBINATION_ONPRESS_OFFSET UNITYSDK_OFFSET(0x20B2960)
#define COLLIDERCOMBINATION_ONDRAG_OFFSET UNITYSDK_OFFSET(0x20B2980)
#define COLLIDERCOMBINATION_BOUNDSINTERSECTWITH_OFFSET UNITYSDK_OFFSET(0x20B29A0)
#define COLLIDERCOMBINATION_BOUNDSINTERSECTWITH_OFFSET UNITYSDK_OFFSET(0x20B2B20)
#define COLLIDERCOMBINATION_BOUNDSINTERSECTWITH_OFFSET UNITYSDK_OFFSET(0x20B2B90)
#define COLLIDERCOMBINATION_BOUNDSINTERSECTWITH_OFFSET UNITYSDK_OFFSET(0x20B2CD0)
#define COLLIDERCOMBINATION_BOUNDSCONTAINS_OFFSET UNITYSDK_OFFSET(0x20B2D80)
#define COLLIDERCOMBINATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x20B2E20)

	inline static constexpr unsigned int ColliderCombination_TypeDefinitionIndex = 3586;

	class ColliderCombination : public Il2CppObject
	{
	public:
		::UnityEngine::Renderer* MainRenderer; // 0x18
		::Il2CppArray<::System::Object*>* _CachedColliders_k__BackingField; // 0x20
		::Il2CppArray<::System::Object*>* _CachedBounds_k__BackingField; // 0x28
		::UnityEngine::Vector3* _CachedAABBMinPoint_k__BackingField; // 0x30
		::UnityEngine::Vector3* _CachedAABBMaxPoint_k__BackingField; // 0x3C
		::System::Action* _OnClickCallback_k__BackingField; // 0x48
		Il2CppObject* _OnPressCallback_k__BackingField; // 0x50
		Il2CppObject* _OnDragCallback_k__BackingField; // 0x58

		::Il2CppArray<::System::Object*>* get_CachedColliders()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLIDERCOMBINATION_GET_CACHEDCOLLIDERS_OFFSET))(nullptr);
		}

		::System::Void set_CachedColliders(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + COLLIDERCOMBINATION_SET_CACHEDCOLLIDERS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_CachedBounds()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLIDERCOMBINATION_GET_CACHEDBOUNDS_OFFSET))(nullptr);
		}

		::System::Void set_CachedBounds(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + COLLIDERCOMBINATION_SET_CACHEDBOUNDS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_CachedAABBMinPoint()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLIDERCOMBINATION_GET_CACHEDAABBMINPOINT_OFFSET))(nullptr);
		}

		::System::Void set_CachedAABBMinPoint(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + COLLIDERCOMBINATION_SET_CACHEDAABBMINPOINT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_CachedAABBMaxPoint()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLIDERCOMBINATION_GET_CACHEDAABBMAXPOINT_OFFSET))(nullptr);
		}

		::System::Void set_CachedAABBMaxPoint(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + COLLIDERCOMBINATION_SET_CACHEDAABBMAXPOINT_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLIDERCOMBINATION_AWAKE_OFFSET))(nullptr);
		}

		::System::Void EnableColliders(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + COLLIDERCOMBINATION_ENABLECOLLIDERS_OFFSET))(arg, nullptr);
		}

		::System::Action* get_OnClickCallback()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLIDERCOMBINATION_GET_ONCLICKCALLBACK_OFFSET))(nullptr);
		}

		::System::Void set_OnClickCallback(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + COLLIDERCOMBINATION_SET_ONCLICKCALLBACK_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_OnPressCallback()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLIDERCOMBINATION_GET_ONPRESSCALLBACK_OFFSET))(nullptr);
		}

		::System::Void set_OnPressCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + COLLIDERCOMBINATION_SET_ONPRESSCALLBACK_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_OnDragCallback()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLIDERCOMBINATION_GET_ONDRAGCALLBACK_OFFSET))(nullptr);
		}

		::System::Void set_OnDragCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + COLLIDERCOMBINATION_SET_ONDRAGCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLIDERCOMBINATION_ONCLICK_OFFSET))(nullptr);
		}

		::System::Void OnPress(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + COLLIDERCOMBINATION_ONPRESS_OFFSET))(arg, nullptr);
		}

		::System::Void OnDrag(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + COLLIDERCOMBINATION_ONDRAG_OFFSET))(arg, nullptr);
		}

		::System::Boolean BoundsIntersectWith(ColliderCombination* arg)
		{
			return ((::System::Boolean(*)(ColliderCombination*, ::PVOID))((::PBYTE)hIl2Cpp + COLLIDERCOMBINATION_BOUNDSINTERSECTWITH_OFFSET))(arg, nullptr);
		}

		::System::Boolean BoundsIntersectWith(::Il2CppArray<::System::Object*>* arg)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + COLLIDERCOMBINATION_BOUNDSINTERSECTWITH_OFFSET))(arg, nullptr);
		}

		::System::Boolean BoundsIntersectWith(::UnityEngine::Collider* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::Collider*, ::PVOID))((::PBYTE)hIl2Cpp + COLLIDERCOMBINATION_BOUNDSINTERSECTWITH_OFFSET))(arg, nullptr);
		}

		::System::Boolean BoundsIntersectWith(::UnityEngine::Ray* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::Ray*, ::PVOID))((::PBYTE)hIl2Cpp + COLLIDERCOMBINATION_BOUNDSINTERSECTWITH_OFFSET))(arg, nullptr);
		}

		::System::Boolean BoundsContains(::UnityEngine::Vector3* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + COLLIDERCOMBINATION_BOUNDSCONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLIDERCOMBINATION_.CTOR_OFFSET))(nullptr);
		}

	};

