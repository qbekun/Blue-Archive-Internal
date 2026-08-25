#pragma once
#include "unitysdk.h"

class AnimationProperties;
class UILabel;
class UIWidget;
namespace UnityEngine { class Vector3; }

#define TWEENLETTERS_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2081F80)
#define TWEENLETTERS_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x2082060)
#define TWEENLETTERS_SETLETTERORDER_OFFSET UNITYSDK_OFFSET(0x2082090)
#define TWEENLETTERS_PLAY_OFFSET UNITYSDK_OFFSET(0x2082400)
#define TWEENLETTERS_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2082460)
#define TWEENLETTERS_SCALERANGE_OFFSET UNITYSDK_OFFSET(0x2082550)
#define TWEENLETTERS_GETLETTERDURATION_OFFSET UNITYSDK_OFFSET(0x2082560)
#define TWEENLETTERS_AWAKE_OFFSET UNITYSDK_OFFSET(0x2082760)
#define TWEENLETTERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x20827D0)
#define TWEENLETTERS_ONPOSTFILL_OFFSET UNITYSDK_OFFSET(0x20827F0)
#define TWEENLETTERS_GETCENTER_OFFSET UNITYSDK_OFFSET(0x20831C0)

	inline static constexpr unsigned int TweenLetters_TypeDefinitionIndex = 170;

	class TweenLetters : public Il2CppObject
	{
	public:
		AnimationProperties* hoverOver; // 0x80
		AnimationProperties* hoverOut; // 0x88
		UILabel* mLabel; // 0x90
		::System::Int32 mVertexCount; // 0x98
		::Il2CppArray<::System::Object*>* mLetterOrder; // 0xA0
		::Il2CppArray<::System::Object*>* mLetter; // 0xA8
		AnimationProperties* mCurrent; // 0xB0

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENLETTERS_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnUpdate(::System::Single arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TWEENLETTERS_ONUPDATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetLetterOrder(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TWEENLETTERS_SETLETTERORDER_OFFSET))(arg, nullptr);
		}

		::System::Void Play(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TWEENLETTERS_PLAY_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENLETTERS_ONENABLE_OFFSET))(nullptr);
		}

		::System::Single ScaleRange(::System::Single arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TWEENLETTERS_SCALERANGE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void GetLetterDuration(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TWEENLETTERS_GETLETTERDURATION_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENLETTERS_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENLETTERS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnPostFill(UIWidget* arg, ::System::Int32 arg2, Il2CppObject* arg3, Il2CppObject* arg4, Il2CppObject* arg5)
		{
			((::System::Void(*)(UIWidget*, ::System::Int32, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TWEENLETTERS_ONPOSTFILL_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::UnityEngine::Vector3* GetCenter(Il2CppObject* arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			return ((::UnityEngine::Vector3*(*)(Il2CppObject*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TWEENLETTERS_GETCENTER_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

