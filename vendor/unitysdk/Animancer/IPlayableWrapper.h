#pragma once
#include "../unitysdk.h"

namespace Animancer { class AnimancerNode; }
namespace Animancer { class IPlayableWrapper; }
namespace UnityEngine::Playables { class Playable; }

#define ANIMANCER_IPLAYABLEWRAPPER_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_IPLAYABLEWRAPPER_GET_APPLYANIMATORIK_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_IPLAYABLEWRAPPER_GET_APPLYFOOTIK_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_IPLAYABLEWRAPPER_GETCHILD_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_IPLAYABLEWRAPPER_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_IPLAYABLEWRAPPER_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_IPLAYABLEWRAPPER_SET_SPEED_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_IPLAYABLEWRAPPER_SET_APPLYFOOTIK_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_IPLAYABLEWRAPPER_GET_KEEPCHILDRENCONNECTED_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_IPLAYABLEWRAPPER_GET_CHILDCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_IPLAYABLEWRAPPER_SET_APPLYANIMATORIK_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_IPLAYABLEWRAPPER_GET_PLAYABLE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Animancer
{
	inline static constexpr unsigned int IPlayableWrapper_TypeDefinitionIndex = 35152;

	class IPlayableWrapper : public Il2CppObject
	{
	public:
		::System::Single get_Weight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_IPLAYABLEWRAPPER_GET_WEIGHT_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyAnimatorIK()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_IPLAYABLEWRAPPER_GET_APPLYANIMATORIK_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyFootIK()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_IPLAYABLEWRAPPER_GET_APPLYFOOTIK_OFFSET))(nullptr);
		}

		::Animancer::AnimancerNode* GetChild(::System::Int32 arg)
		{
			return (return (::Animancer::AnimancerNode*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_IPLAYABLEWRAPPER_GETCHILD_OFFSET))(arg, nullptr);
		}

		::Animancer::IPlayableWrapper* get_Parent()
		{
			return (return (::Animancer::IPlayableWrapper*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_IPLAYABLEWRAPPER_GET_PARENT_OFFSET))(nullptr);
		}

		::System::Single get_Speed()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_IPLAYABLEWRAPPER_GET_SPEED_OFFSET))(nullptr);
		}

		::System::Void set_Speed(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_IPLAYABLEWRAPPER_SET_SPEED_OFFSET))(arg, nullptr);
		}

		::System::Void set_ApplyFootIK(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_IPLAYABLEWRAPPER_SET_APPLYFOOTIK_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_KeepChildrenConnected()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_IPLAYABLEWRAPPER_GET_KEEPCHILDRENCONNECTED_OFFSET))(nullptr);
		}

		::System::Int32 get_ChildCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_IPLAYABLEWRAPPER_GET_CHILDCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_ApplyAnimatorIK(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_IPLAYABLEWRAPPER_SET_APPLYANIMATORIK_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Playables::Playable* get_Playable()
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_IPLAYABLEWRAPPER_GET_PLAYABLE_OFFSET))(nullptr);
		}

	};
}

