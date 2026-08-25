#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Vector2; }

#define ANIMANCER_DIRECTIONALANIMATIONSET_GET_UP_OFFSET UNITYSDK_OFFSET(0x4BB010)
#define ANIMANCER_DIRECTIONALANIMATIONSET_SET_UP_OFFSET UNITYSDK_OFFSET(0x4BB020)
#define ANIMANCER_DIRECTIONALANIMATIONSET_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x4BB030)
#define ANIMANCER_DIRECTIONALANIMATIONSET_SET_RIGHT_OFFSET UNITYSDK_OFFSET(0x4BB040)
#define ANIMANCER_DIRECTIONALANIMATIONSET_GET_DOWN_OFFSET UNITYSDK_OFFSET(0x4BB050)
#define ANIMANCER_DIRECTIONALANIMATIONSET_SET_DOWN_OFFSET UNITYSDK_OFFSET(0x4BB060)
#define ANIMANCER_DIRECTIONALANIMATIONSET_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x4BB070)
#define ANIMANCER_DIRECTIONALANIMATIONSET_SET_LEFT_OFFSET UNITYSDK_OFFSET(0x4BB080)
#define ANIMANCER_DIRECTIONALANIMATIONSET_ALLOWSETCLIPS_OFFSET UNITYSDK_OFFSET(0x4BB090)
#define ANIMANCER_DIRECTIONALANIMATIONSET_ASSERTCANSETCLIPS_OFFSET UNITYSDK_OFFSET(0x4BB0A0)
#define ANIMANCER_DIRECTIONALANIMATIONSET_GETCLIP_OFFSET UNITYSDK_OFFSET(0x4BB0B0)
#define ANIMANCER_DIRECTIONALANIMATIONSET_GET_CLIPCOUNT_OFFSET UNITYSDK_OFFSET(0x4BB120)
#define ANIMANCER_DIRECTIONALANIMATIONSET_GETDIRECTIONNAME_OFFSET UNITYSDK_OFFSET(0x4BB130)
#define ANIMANCER_DIRECTIONALANIMATIONSET_GETCLIP_OFFSET UNITYSDK_OFFSET(0x4BB180)
#define ANIMANCER_DIRECTIONALANIMATIONSET_GETCLIP_OFFSET UNITYSDK_OFFSET(0x4BB1F0)
#define ANIMANCER_DIRECTIONALANIMATIONSET_SETCLIP_OFFSET UNITYSDK_OFFSET(0x4BB260)
#define ANIMANCER_DIRECTIONALANIMATIONSET_SETCLIP_OFFSET UNITYSDK_OFFSET(0x4BB2E0)
#define ANIMANCER_DIRECTIONALANIMATIONSET_DIRECTIONTOVECTOR_OFFSET UNITYSDK_OFFSET(0x4BB360)
#define ANIMANCER_DIRECTIONALANIMATIONSET_GETDIRECTION_OFFSET UNITYSDK_OFFSET(0x4BB480)
#define ANIMANCER_DIRECTIONALANIMATIONSET_VECTORTODIRECTION_OFFSET UNITYSDK_OFFSET(0x4BB490)
#define ANIMANCER_DIRECTIONALANIMATIONSET_SNAPVECTORTODIRECTION_OFFSET UNITYSDK_OFFSET(0x4BB500)
#define ANIMANCER_DIRECTIONALANIMATIONSET_SNAP_OFFSET UNITYSDK_OFFSET(0x4BB620)
#define ANIMANCER_DIRECTIONALANIMATIONSET_ADDCLIPS_OFFSET UNITYSDK_OFFSET(0x4BB630)
#define ANIMANCER_DIRECTIONALANIMATIONSET_GETANIMATIONCLIPS_OFFSET UNITYSDK_OFFSET(0x4BB720)
#define ANIMANCER_DIRECTIONALANIMATIONSET_ADDDIRECTIONS_OFFSET UNITYSDK_OFFSET(0x4BB830)
#define ANIMANCER_DIRECTIONALANIMATIONSET_ADDCLIPSANDDIRECTIONS_OFFSET UNITYSDK_OFFSET(0x4BB8E0)
#define ANIMANCER_DIRECTIONALANIMATIONSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x4BB990)

namespace Animancer
{
	inline static constexpr unsigned int DirectionalAnimationSet_TypeDefinitionIndex = 35197;

	class DirectionalAnimationSet : public Il2CppObject
	{
	public:
		::UnityEngine::AnimationClip* _Up; // 0x18
		::UnityEngine::AnimationClip* _Right; // 0x20
		::UnityEngine::AnimationClip* _Down; // 0x28
		::UnityEngine::AnimationClip* _Left; // 0x30

		::UnityEngine::AnimationClip* get_Up()
		{
			return (return (::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALANIMATIONSET_GET_UP_OFFSET))(nullptr);
		}

		::System::Void set_Up(::UnityEngine::AnimationClip* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALANIMATIONSET_SET_UP_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AnimationClip* get_Right()
		{
			return (return (::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALANIMATIONSET_GET_RIGHT_OFFSET))(nullptr);
		}

		::System::Void set_Right(::UnityEngine::AnimationClip* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALANIMATIONSET_SET_RIGHT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AnimationClip* get_Down()
		{
			return (return (::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALANIMATIONSET_GET_DOWN_OFFSET))(nullptr);
		}

		::System::Void set_Down(::UnityEngine::AnimationClip* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALANIMATIONSET_SET_DOWN_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AnimationClip* get_Left()
		{
			return (return (::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALANIMATIONSET_GET_LEFT_OFFSET))(nullptr);
		}

		::System::Void set_Left(::UnityEngine::AnimationClip* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALANIMATIONSET_SET_LEFT_OFFSET))(arg, nullptr);
		}

		::System::Void AllowSetClips(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALANIMATIONSET_ALLOWSETCLIPS_OFFSET))(arg, nullptr);
		}

		::System::Void AssertCanSetClips()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALANIMATIONSET_ASSERTCANSETCLIPS_OFFSET))(nullptr);
		}

		::UnityEngine::AnimationClip* GetClip(::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::AnimationClip*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALANIMATIONSET_GETCLIP_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ClipCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALANIMATIONSET_GET_CLIPCOUNT_OFFSET))(nullptr);
		}

		::System::String* GetDirectionName(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALANIMATIONSET_GETDIRECTIONNAME_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AnimationClip* GetClip(Direction* arg)
		{
			return (return (::UnityEngine::AnimationClip*(*)(Direction*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALANIMATIONSET_GETCLIP_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AnimationClip* GetClip(::System::Int32 arg)
		{
			return (return (::UnityEngine::AnimationClip*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALANIMATIONSET_GETCLIP_OFFSET))(arg, nullptr);
		}

		::System::Void SetClip(Direction* arg, ::UnityEngine::AnimationClip* arg)
		{
			((::System::Void(*)(Direction*, ::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALANIMATIONSET_SETCLIP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetClip(::System::Int32 arg, ::UnityEngine::AnimationClip* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALANIMATIONSET_SETCLIP_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector2* DirectionToVector(Direction* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(Direction*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALANIMATIONSET_DIRECTIONTOVECTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* GetDirection(::System::Int32 arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALANIMATIONSET_GETDIRECTION_OFFSET))(arg, nullptr);
		}

		Direction* VectorToDirection(::UnityEngine::Vector2* arg)
		{
			return (return (Direction*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALANIMATIONSET_VECTORTODIRECTION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* SnapVectorToDirection(::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALANIMATIONSET_SNAPVECTORTODIRECTION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* Snap(::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALANIMATIONSET_SNAP_OFFSET))(arg, nullptr);
		}

		::System::Void AddClips(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALANIMATIONSET_ADDCLIPS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetAnimationClips(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALANIMATIONSET_GETANIMATIONCLIPS_OFFSET))(arg, nullptr);
		}

		::System::Void AddDirections(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALANIMATIONSET_ADDDIRECTIONS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddClipsAndDirections(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALANIMATIONSET_ADDCLIPSANDDIRECTIONS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALANIMATIONSET_.CTOR_OFFSET))(nullptr);
		}

	};
}

