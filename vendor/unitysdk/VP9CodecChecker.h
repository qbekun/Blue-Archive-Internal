#pragma once
#include "unitysdk.h"

#define VP9CODECCHECKER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x2127160)
#define VP9CODECCHECKER_COTASKMEMFREE_OFFSET UNITYSDK_OFFSET(0x2127260)
#define VP9CODECCHECKER_ISVP9DECODERAVAILABLE_OFFSET UNITYSDK_OFFSET(0x21272E0)
#define VP9CODECCHECKER_MFTENUMEX_OFFSET UNITYSDK_OFFSET(0x21278D0)
#define VP9CODECCHECKER_INVALIDATECACHE_OFFSET UNITYSDK_OFFSET(0x2127990)

	inline static constexpr unsigned int VP9CodecChecker_TypeDefinitionIndex = 3913;

	class VP9CodecChecker : public Il2CppObject
	{
	public:
		::System::Guid* MFT_CATEGORY_VIDEO_DECODER; // 0x0
		::System::Guid* MFVideoFormat_VP90; // 0x10
		::System::Guid* MFMediaType_Video; // 0x20
		Il2CppObject* cachedResult; // 0x30

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VP9CODECCHECKER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void CoTaskMemFree(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + VP9CODECCHECKER_COTASKMEMFREE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsVP9DecoderAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + VP9CODECCHECKER_ISVP9DECODERAVAILABLE_OFFSET))(nullptr);
		}

		::System::Void MFTEnumEx(::System::Guid&* arg, ::System::UInt32 arg2, ::System::Int32 arg3, ::System::Int32 arg4, int32_t&* arg5, uint32_t&* arg6)
		{
			((::System::Void(*)(::System::Guid&*, ::System::UInt32, ::System::Int32, ::System::Int32, int32_t&*, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + VP9CODECCHECKER_MFTENUMEX_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void InvalidateCache()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VP9CODECCHECKER_INVALIDATECACHE_OFFSET))(nullptr);
		}

	};

