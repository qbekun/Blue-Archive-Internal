#pragma once
#include "../unitysdk.h"

namespace Animancer { class MixerTransition2D; }

#define ANIMANCER_MIXERTRANSITION2D_COPYFROM_OFFSET UNITYSDK_OFFSET(0x4C14B0)
#define ANIMANCER_MIXERTRANSITION2D_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x4C14F0)
#define ANIMANCER_MIXERTRANSITION2D_CREATESTATE_OFFSET UNITYSDK_OFFSET(0x4C1500)
#define ANIMANCER_MIXERTRANSITION2D_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C1680)

namespace Animancer
{
	inline static constexpr unsigned int MixerTransition2D_TypeDefinitionIndex = 35247;

	class MixerTransition2D : public ::ToyWebViewShared::RemoteTracer::Plex
	{
	public:
		MixerType* _Type; // 0x68

		::System::Void CopyFrom(::Animancer::MixerTransition2D* arg)
		{
			((::System::Void(*)(::Animancer::MixerTransition2D*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERTRANSITION2D_COPYFROM_OFFSET))(arg, nullptr);
		}

		MixerType&* get_Type()
		{
			return (return (MixerType&*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERTRANSITION2D_GET_TYPE_OFFSET))(nullptr);
		}

		Il2CppObject* CreateState()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERTRANSITION2D_CREATESTATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERTRANSITION2D_.CTOR_OFFSET))(nullptr);
		}

	};
}

