#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Vector2; }

#define ANIMANCER_DIRECTIONALANIMATIONSET8_GET_UPRIGHT_OFFSET UNITYSDK_OFFSET(0x4BB9A0)
#define ANIMANCER_DIRECTIONALANIMATIONSET8_SET_UPRIGHT_OFFSET UNITYSDK_OFFSET(0x4BB9B0)
#define ANIMANCER_DIRECTIONALANIMATIONSET8_GET_DOWNRIGHT_OFFSET UNITYSDK_OFFSET(0x4BB9C0)
#define ANIMANCER_DIRECTIONALANIMATIONSET8_SET_DOWNRIGHT_OFFSET UNITYSDK_OFFSET(0x4BB9D0)
#define ANIMANCER_DIRECTIONALANIMATIONSET8_GET_DOWNLEFT_OFFSET UNITYSDK_OFFSET(0x4BB9E0)
#define ANIMANCER_DIRECTIONALANIMATIONSET8_SET_DOWNLEFT_OFFSET UNITYSDK_OFFSET(0x4BB9F0)
#define ANIMANCER_DIRECTIONALANIMATIONSET8_GET_UPLEFT_OFFSET UNITYSDK_OFFSET(0x4BBA00)
#define ANIMANCER_DIRECTIONALANIMATIONSET8_SET_UPLEFT_OFFSET UNITYSDK_OFFSET(0x4BBA10)
#define ANIMANCER_DIRECTIONALANIMATIONSET8_GETCLIP_OFFSET UNITYSDK_OFFSET(0x4BBA20)
#define ANIMANCER_DIRECTIONALANIMATIONSET8_GET_CLIPCOUNT_OFFSET UNITYSDK_OFFSET(0x4BBBF0)
#define ANIMANCER_DIRECTIONALANIMATIONSET8_GETDIRECTIONNAME_OFFSET UNITYSDK_OFFSET(0x4BBC00)
#define ANIMANCER_DIRECTIONALANIMATIONSET8_GETCLIP_OFFSET UNITYSDK_OFFSET(0x4BBC50)
#define ANIMANCER_DIRECTIONALANIMATIONSET8_GETCLIP_OFFSET UNITYSDK_OFFSET(0x4BBCE0)
#define ANIMANCER_DIRECTIONALANIMATIONSET8_SETCLIP_OFFSET UNITYSDK_OFFSET(0x4BBD70)
#define ANIMANCER_DIRECTIONALANIMATIONSET8_SETCLIP_OFFSET UNITYSDK_OFFSET(0x4BBE00)
#define ANIMANCER_DIRECTIONALANIMATIONSET8_DIRECTIONTOVECTOR_OFFSET UNITYSDK_OFFSET(0x4BBE90)
#define ANIMANCER_DIRECTIONALANIMATIONSET8_GETDIRECTION_OFFSET UNITYSDK_OFFSET(0x4BC040)
#define ANIMANCER_DIRECTIONALANIMATIONSET8_VECTORTODIRECTION_OFFSET UNITYSDK_OFFSET(0x4BC050)
#define ANIMANCER_DIRECTIONALANIMATIONSET8_SNAPVECTORTODIRECTION_OFFSET UNITYSDK_OFFSET(0x4BC1F0)
#define ANIMANCER_DIRECTIONALANIMATIONSET8_SNAP_OFFSET UNITYSDK_OFFSET(0x4BC2B0)
#define ANIMANCER_DIRECTIONALANIMATIONSET8_.CTOR_OFFSET UNITYSDK_OFFSET(0x4BC380)

namespace Animancer
{
	inline static constexpr unsigned int DirectionalAnimationSet8_TypeDefinitionIndex = 35200;

	class DirectionalAnimationSet8 : public Il2CppObject
	{
	public:
		::UnityEngine::AnimationClip* _UpRight; // 0x38
		::UnityEngine::AnimationClip* _DownRight; // 0x40
		::UnityEngine::AnimationClip* _DownLeft; // 0x48
		::UnityEngine::AnimationClip* _UpLeft; // 0x50

		::UnityEngine::AnimationClip* get_UpRight()
		{
			return (return (::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALANIMATIONSET8_GET_UPRIGHT_OFFSET))(nullptr);
		}

		::System::Void set_UpRight(::UnityEngine::AnimationClip* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALANIMATIONSET8_SET_UPRIGHT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AnimationClip* get_DownRight()
		{
			return (return (::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALANIMATIONSET8_GET_DOWNRIGHT_OFFSET))(nullptr);
		}

		::System::Void set_DownRight(::UnityEngine::AnimationClip* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALANIMATIONSET8_SET_DOWNRIGHT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AnimationClip* get_DownLeft()
		{
			return (return (::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALANIMATIONSET8_GET_DOWNLEFT_OFFSET))(nullptr);
		}

		::System::Void set_DownLeft(::UnityEngine::AnimationClip* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALANIMATIONSET8_SET_DOWNLEFT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AnimationClip* get_UpLeft()
		{
			return (return (::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALANIMATIONSET8_GET_UPLEFT_OFFSET))(nullptr);
		}

		::System::Void set_UpLeft(::UnityEngine::AnimationClip* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALANIMATIONSET8_SET_UPLEFT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AnimationClip* GetClip(::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::AnimationClip*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALANIMATIONSET8_GETCLIP_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ClipCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALANIMATIONSET8_GET_CLIPCOUNT_OFFSET))(nullptr);
		}

		::System::String* GetDirectionName(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALANIMATIONSET8_GETDIRECTIONNAME_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AnimationClip* GetClip(Direction* arg)
		{
			return (return (::UnityEngine::AnimationClip*(*)(Direction*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALANIMATIONSET8_GETCLIP_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AnimationClip* GetClip(::System::Int32 arg)
		{
			return (return (::UnityEngine::AnimationClip*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALANIMATIONSET8_GETCLIP_OFFSET))(arg, nullptr);
		}

		::System::Void SetClip(Direction* arg, ::UnityEngine::AnimationClip* arg)
		{
			((::System::Void(*)(Direction*, ::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALANIMATIONSET8_SETCLIP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetClip(::System::Int32 arg, ::UnityEngine::AnimationClip* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALANIMATIONSET8_SETCLIP_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector2* DirectionToVector(Direction* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(Direction*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALANIMATIONSET8_DIRECTIONTOVECTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* GetDirection(::System::Int32 arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALANIMATIONSET8_GETDIRECTION_OFFSET))(arg, nullptr);
		}

		Direction* VectorToDirection(::UnityEngine::Vector2* arg)
		{
			return (return (Direction*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALANIMATIONSET8_VECTORTODIRECTION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* SnapVectorToDirection(::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALANIMATIONSET8_SNAPVECTORTODIRECTION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* Snap(::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALANIMATIONSET8_SNAP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALANIMATIONSET8_.CTOR_OFFSET))(nullptr);
		}

	};
}

