#pragma once
#include "unitysdk.h"

namespace Cinemachine { class CinemachineBlend; }
namespace Cinemachine { class BlendSourceVirtualCamera; }

#define BRAINFRAME_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x2823980)
#define BRAINFRAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x2822980)

	inline static constexpr unsigned int BrainFrame_TypeDefinitionIndex = 34198;

	class BrainFrame : public Il2CppObject
	{
	public:
		::System::Int32 id; // 0x10
		::Cinemachine::CinemachineBlend* blend; // 0x18
		::Cinemachine::CinemachineBlend* workingBlend; // 0x20
		::Cinemachine::BlendSourceVirtualCamera* workingBlendSource; // 0x28
		::System::Single deltaTimeOverride; // 0x30
		::System::Single blendStartPosition; // 0x34

		::System::Boolean get_Active()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BRAINFRAME_GET_ACTIVE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BRAINFRAME_.CTOR_OFFSET))(nullptr);
		}

	};

