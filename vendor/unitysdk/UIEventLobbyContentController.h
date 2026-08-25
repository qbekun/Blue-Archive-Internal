#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }
namespace UnityEngine { class Coroutine; }

#define UIEVENTLOBBYCONTENTCONTROLLER_REMOVE_CONTENTCOMPLETED_OFFSET UNITYSDK_OFFSET(0x2446690)
#define UIEVENTLOBBYCONTENTCONTROLLER_PLAYOPENANIMATION_OFFSET UNITYSDK_OFFSET(0x2446260)
#define UIEVENTLOBBYCONTENTCONTROLLER_SETOPENANIMATIONCLIP_OFFSET UNITYSDK_OFFSET(0x2445010)
#define UIEVENTLOBBYCONTENTCONTROLLER_ONCONTENTCOMPLETED_OFFSET UNITYSDK_OFFSET(0x2446BD0)
#define UIEVENTLOBBYCONTENTCONTROLLER_ADD_CONTENTCOMPLETED_OFFSET UNITYSDK_OFFSET(0x2446BF0)
#define UIEVENTLOBBYCONTENTCONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIEVENTLOBBYCONTENTCONTROLLER_GET_ISOPENANIMATIONENDED_OFFSET UNITYSDK_OFFSET(0x2446C90)
#define UIEVENTLOBBYCONTENTCONTROLLER_SET_ISOPENANIMATIONENDED_OFFSET UNITYSDK_OFFSET(0x2446CA0)
#define UIEVENTLOBBYCONTENTCONTROLLER_REFRESHCONTENT_OFFSET UNITYSDK_OFFSET(0x2446CB0)
#define UIEVENTLOBBYCONTENTCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x2446CC0)
#define UIEVENTLOBBYCONTENTCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2446CD0)
#define UIEVENTLOBBYCONTENTCONTROLLER_REFRESHCONTENTREWARD_OFFSET UNITYSDK_OFFSET(0x2446CE0)
#define UIEVENTLOBBYCONTENTCONTROLLER_SETACTIVECONTENT_OFFSET UNITYSDK_OFFSET(0x2446CF0)
#define UIEVENTLOBBYCONTENTCONTROLLER_REGISTOPENANIMATIONCLIPLIST_OFFSET UNITYSDK_OFFSET(0x24467B0)

	inline static constexpr unsigned int UIEventLobbyContentController_TypeDefinitionIndex = 5539;

	class UIEventLobbyContentController : public Il2CppObject
	{
	public:
		::UnityEngine::Animation* openAnimation; // 0x18
		Il2CppObject* openAnimationClipList; // 0x20
		::System::Boolean _IsOpenAnimationEnded_k__BackingField; // 0x28
		::System::Action* ContentCompleted; // 0x30

		::System::Void remove_ContentCompleted(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_REMOVE_CONTENTCOMPLETED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Coroutine* PlayOpenAnimation(::System::Boolean arg)
		{
			return ((::UnityEngine::Coroutine*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_PLAYOPENANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Void SetOpenAnimationClip(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_SETOPENANIMATIONCLIP_OFFSET))(arg, nullptr);
		}

		::System::Void OnContentCompleted()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_ONCONTENTCOMPLETED_OFFSET))(nullptr);
		}

		::System::Void add_ContentCompleted(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_ADD_CONTENTCOMPLETED_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsOpenAnimationEnded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_GET_ISOPENANIMATIONENDED_OFFSET))(nullptr);
		}

		::System::Void set_IsOpenAnimationEnded(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_SET_ISOPENANIMATIONENDED_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshContent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_REFRESHCONTENT_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RefreshContentReward()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_REFRESHCONTENTREWARD_OFFSET))(nullptr);
		}

		::System::Void SetActiveContent(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_SETACTIVECONTENT_OFFSET))(arg, nullptr);
		}

		::System::Void RegistOpenAnimationClipList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_REGISTOPENANIMATIONCLIPLIST_OFFSET))(nullptr);
		}

	};

