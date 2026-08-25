#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector4; }

#define MASKCHANNELFILTER_SET_MASK_OFFSET UNITYSDK_OFFSET(0xA014770)
#define MASKCHANNELFILTER_GET_MASK_OFFSET UNITYSDK_OFFSET(0xA014780)
#define MASKCHANNELFILTER_GET_INVERTED_OFFSET UNITYSDK_OFFSET(0xA014790)
#define MASKCHANNELFILTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA014720)
#define MASKCHANNELFILTER_SET_INVERTED_OFFSET UNITYSDK_OFFSET(0xA0147A0)

	inline static constexpr unsigned int MaskChannelFilter_TypeDefinitionIndex = 32464;

	class MaskChannelFilter : public Il2CppObject
	{
	public:
		::UnityEngine::Vector4* _mask_k__BackingField; // 0x10
		::UnityEngine::Vector4* _inverted_k__BackingField; // 0x20

		::System::Void set_mask(::UnityEngine::Vector4* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + MASKCHANNELFILTER_SET_MASK_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector4* get_mask()
		{
			return (return (::UnityEngine::Vector4*(*)(::PVOID))((::PBYTE)hIl2Cpp + MASKCHANNELFILTER_GET_MASK_OFFSET))(nullptr);
		}

		::UnityEngine::Vector4* get_inverted()
		{
			return (return (::UnityEngine::Vector4*(*)(::PVOID))((::PBYTE)hIl2Cpp + MASKCHANNELFILTER_GET_INVERTED_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::Vector4* arg, ::UnityEngine::Vector4* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector4*, ::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + MASKCHANNELFILTER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_inverted(::UnityEngine::Vector4* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + MASKCHANNELFILTER_SET_INVERTED_OFFSET))(arg, nullptr);
		}

	};

