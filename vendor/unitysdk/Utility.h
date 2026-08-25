#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class Bounds; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }
class UIScrollView;
namespace UnityEngine { class Texture2D; }
namespace FlatData { class ScenarioModeSubTypes; }

#define UTILITY_IS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UTILITY_GETORADDCOMPONENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UTILITY_PICKRANDOM_OFFSET UNITYSDK_OFFSET(0x000000)
#define UTILITY_INSTANCEWITHLOADASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define UTILITY_INSTANCEWITHLOADASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define UTILITY_INSTANCEWITHPREFAB_OFFSET UNITYSDK_OFFSET(0x000000)
#define UTILITY_DESTROYALLCHILD_OFFSET UNITYSDK_OFFSET(0x211F520)
#define UTILITY_CHANGELAYERSRECURSIVELY_OFFSET UNITYSDK_OFFSET(0x211F5E0)
#define UTILITY_CHANGETAGRECURSIVELY_OFFSET UNITYSDK_OFFSET(0x211F690)
#define UTILITY_GETOBJECTHIERARCHYPATH_OFFSET UNITYSDK_OFFSET(0x211F9C0)
#define UTILITY_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x211FE90)
#define UTILITY_ISSAMEARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UTILITY_ISSAMEARRAY_OFFSET UNITYSDK_OFFSET(0x211FEC0)
#define UTILITY_ISSAMEARRAY_OFFSET UNITYSDK_OFFSET(0x211FF30)
#define UTILITY_FINDDEEPCHILD_OFFSET UNITYSDK_OFFSET(0x211FFA0)
#define UTILITY_FINDDEEPCHILDIGNORECASE_OFFSET UNITYSDK_OFFSET(0x2120390)
#define UTILITY_CALCULATEBOUNDINGBOXINCHILD_OFFSET UNITYSDK_OFFSET(0x2120A20)
#define UTILITY_CALCULATEBOUNDINGBOX_OFFSET UNITYSDK_OFFSET(0x2120ED0)
#define UTILITY_PLAY_OFFSET UNITYSDK_OFFSET(0x21213B0)
#define UTILITY_REVERSENONTIMESCALE_OFFSET UNITYSDK_OFFSET(0x2121480)
#define UTILITY_PLAYNEW_OFFSET UNITYSDK_OFFSET(0x2121540)
#define UTILITY_SETNORMALIZEDTIME_OFFSET UNITYSDK_OFFSET(0x2121600)
#define UTILITY_ADDRANGEUNIQUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UTILITY_MOVE_OFFSET UNITYSDK_OFFSET(0x21216F0)
#define UTILITY_FIXEDANIMATION_OFFSET UNITYSDK_OFFSET(0x2121940)
#define UTILITY_SAMPLEANIMATION_OFFSET UNITYSDK_OFFSET(0x2121A20)
#define UTILITY_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x2121BA0)
#define UTILITY_CO_PLAYANIMATIONIGNORETIMESCALE_OFFSET UNITYSDK_OFFSET(0x2121D00)
#define UTILITY_PLAYANIMATIONYIELD_OFFSET UNITYSDK_OFFSET(0x2121DB0)
#define UTILITY_GETAGENTTYPEID_OFFSET UNITYSDK_OFFSET(0x2121E80)
#define UTILITY_COMPRESSIFLOWMEMORYDEVICE_OFFSET UNITYSDK_OFFSET(0x2122090)
#define UTILITY_FORMATTOUNITYPROPERTYNAMING_OFFSET UNITYSDK_OFFSET(0x2122180)
#define UTILITY_PARSESCENARIOMODESUBTYPETOSERIESNUMBER_OFFSET UNITYSDK_OFFSET(0x21224A0)
#define UTILITY_CONTAINSKOREAN_OFFSET UNITYSDK_OFFSET(0x21224C0)
#define UTILITY_ACTIVECHILDCOUNT_OFFSET UNITYSDK_OFFSET(0x2123450)
#define UTILITY_COLLECTGARBAGE_OFFSET UNITYSDK_OFFSET(0x21234E0)
#define UTILITY_ISPOINTEROVERUGUI_OFFSET UNITYSDK_OFFSET(0x2123610)
#define UTILITY_.CCTOR_OFFSET UNITYSDK_OFFSET(0x21236C0)
#define UTILITY__FORMATTOUNITYPROPERTYNAMING_G__PICKCHAR|32_0_OFFSET UNITYSDK_OFFSET(0x2122460)

	inline static constexpr unsigned int Utility_TypeDefinitionIndex = 3897;

	class Utility : public Il2CppObject
	{
	public:
		::System::Random* Ran; // 0x0
		::System::Int32 GCIterationCount; // 0x8

		::System::Boolean Is(::System::Type* arg)
		{
			return ((::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UTILITY_IS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetOrAddComponent(::UnityEngine::GameObject* arg)
		{
			return ((Il2CppObject*(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UTILITY_GETORADDCOMPONENT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* PickRandom(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UTILITY_PICKRANDOM_OFFSET))(arg, nullptr);
		}

		::System::Void InstanceWithLoadAsync(::System::String* str, ::UnityEngine::Transform* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Transform*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UTILITY_INSTANCEWITHLOADASYNC_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Void InstanceWithLoadAsync(::System::String* str, ::UnityEngine::Transform* arg, Il2CppObject* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Transform*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UTILITY_INSTANCEWITHLOADASYNC_OFFSET))(str, arg, arg2, arg3, nullptr);
		}

		Il2CppObject* InstanceWithPrefab(Il2CppObject* arg, ::UnityEngine::Transform* arg2)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UTILITY_INSTANCEWITHPREFAB_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void DestroyAllChild(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UTILITY_DESTROYALLCHILD_OFFSET))(arg, nullptr);
		}

		::System::Void ChangeLayersRecursively(::UnityEngine::Transform* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UTILITY_CHANGELAYERSRECURSIVELY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ChangeTagRecursively(::UnityEngine::Transform* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UTILITY_CHANGETAGRECURSIVELY_OFFSET))(arg, str, nullptr);
		}

		::System::String* GetObjectHierarchyPath(::UnityEngine::Component* arg)
		{
			return ((::System::String*(*)(::UnityEngine::Component*, ::PVOID))((::PBYTE)hIl2Cpp + UTILITY_GETOBJECTHIERARCHYPATH_OFFSET))(arg, nullptr);
		}

		::System::Void SetActive(::UnityEngine::Component* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::UnityEngine::Component*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UTILITY_SETACTIVE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsSameArray(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UTILITY_ISSAMEARRAY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsSameArray(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UTILITY_ISSAMEARRAY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsSameArray(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UTILITY_ISSAMEARRAY_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Transform* FindDeepChild(::UnityEngine::Transform* arg, ::System::String* str)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UTILITY_FINDDEEPCHILD_OFFSET))(arg, str, nullptr);
		}

		::UnityEngine::Transform* FindDeepChildIgnoreCase(::UnityEngine::Transform* arg, ::System::String* str)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UTILITY_FINDDEEPCHILDIGNORECASE_OFFSET))(arg, str, nullptr);
		}

		::UnityEngine::Bounds* CalculateBoundingBoxInChild(::UnityEngine::GameObject* arg)
		{
			return ((::UnityEngine::Bounds*(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UTILITY_CALCULATEBOUNDINGBOXINCHILD_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Bounds* CalculateBoundingBox(::UnityEngine::MeshFilter* arg)
		{
			return ((::UnityEngine::Bounds*(*)(::UnityEngine::MeshFilter*, ::PVOID))((::PBYTE)hIl2Cpp + UTILITY_CALCULATEBOUNDINGBOX_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Play(::UnityEngine::Animation* arg, ::System::String* str, ::System::Boolean arg2, ::System::Action* arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::UnityEngine::Animation*, ::System::String*, ::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UTILITY_PLAY_OFFSET))(arg, str, arg2, arg3, nullptr);
		}

		::System::Collections::IEnumerator* ReverseNonTimeScale(::UnityEngine::Animation* arg, ::UnityEngine::AnimationClip* arg2, ::System::Action* arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::UnityEngine::Animation*, ::UnityEngine::AnimationClip*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UTILITY_REVERSENONTIMESCALE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Collections::IEnumerator* PlayNew(::UnityEngine::Animation* arg, ::System::String* str, ::System::Boolean arg2, ::System::Boolean arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::UnityEngine::Animation*, ::System::String*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UTILITY_PLAYNEW_OFFSET))(arg, str, arg2, arg3, nullptr);
		}

		::System::Void SetNormalizedTime(::UnityEngine::Animation* arg, ::UnityEngine::AnimationClip* arg2, ::System::Single arg3)
		{
			((::System::Void(*)(::UnityEngine::Animation*, ::UnityEngine::AnimationClip*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UTILITY_SETNORMALIZEDTIME_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void AddRangeUnique(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UTILITY_ADDRANGEUNIQUE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Move(UIScrollView* arg, ::System::Single arg2, ::System::Int32 arg3, ::System::Int32 arg4, ::System::Boolean arg5, ::System::Single arg6)
		{
			((::System::Void(*)(UIScrollView*, ::System::Single, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UTILITY_MOVE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void FixedAnimation(::UnityEngine::Animation* arg, ::System::String* str, ::System::Single arg2)
		{
			((::System::Void(*)(::UnityEngine::Animation*, ::System::String*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UTILITY_FIXEDANIMATION_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void SampleAnimation(::UnityEngine::Animation* arg, ::System::String* str, ::System::Single arg2)
		{
			((::System::Void(*)(::UnityEngine::Animation*, ::System::String*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UTILITY_SAMPLEANIMATION_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void PlayAnimation(::UnityEngine::Animation* arg, ::System::String* str, ::System::Boolean arg2, ::System::Single arg3)
		{
			((::System::Void(*)(::UnityEngine::Animation*, ::System::String*, ::System::Boolean, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UTILITY_PLAYANIMATION_OFFSET))(arg, str, arg2, arg3, nullptr);
		}

		::System::Collections::IEnumerator* Co_PlayAnimationIgnoreTimeScale(::UnityEngine::Animation* arg, ::System::String* str)
		{
			return ((::System::Collections::IEnumerator*(*)(::UnityEngine::Animation*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UTILITY_CO_PLAYANIMATIONIGNORETIMESCALE_OFFSET))(arg, str, nullptr);
		}

		::System::Collections::IEnumerator* PlayAnimationYield(::UnityEngine::Animation* arg, ::System::String* str, ::System::Boolean arg2, ::System::Action* arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::UnityEngine::Animation*, ::System::String*, ::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UTILITY_PLAYANIMATIONYIELD_OFFSET))(arg, str, arg2, arg3, nullptr);
		}

		::System::Int32 GetAgentTypeId(::System::String* str)
		{
			return ((::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UTILITY_GETAGENTTYPEID_OFFSET))(str, nullptr);
		}

		::System::Void CompressIfLowMemoryDevice(::UnityEngine::Texture2D* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture2D*, ::PVOID))((::PBYTE)hIl2Cpp + UTILITY_COMPRESSIFLOWMEMORYDEVICE_OFFSET))(arg, nullptr);
		}

		::System::String* FormatToUnityPropertyNaming(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UTILITY_FORMATTOUNITYPROPERTYNAMING_OFFSET))(str, nullptr);
		}

		::System::Int32 ParseScenarioModeSubTypeToSeriesNumber(::FlatData::ScenarioModeSubTypes* arg)
		{
			return ((::System::Int32(*)(::FlatData::ScenarioModeSubTypes*, ::PVOID))((::PBYTE)hIl2Cpp + UTILITY_PARSESCENARIOMODESUBTYPETOSERIESNUMBER_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContainsKorean(::System::String* str, ::System::String* str2, ::System::Boolean arg)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UTILITY_CONTAINSKOREAN_OFFSET))(str, str2, arg, nullptr);
		}

		::System::Int32 ActiveChildCount(::UnityEngine::Transform* arg)
		{
			return ((::System::Int32(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UTILITY_ACTIVECHILDCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void CollectGarbage(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UTILITY_COLLECTGARBAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsPointerOverUGUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UTILITY_ISPOINTEROVERUGUI_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTILITY_.CCTOR_OFFSET))(nullptr);
		}

		::System::Char _FormatToUnityPropertyNaming_g__PickChar|32_0(::System::Int32 arg, <>c__DisplayClass32_0&* arg2)
		{
			return ((::System::Char(*)(::System::Int32, <>c__DisplayClass32_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UTILITY__FORMATTOUNITYPROPERTYNAMING_G__PICKCHAR|32_0_OFFSET))(arg, arg2, nullptr);
		}

	};

