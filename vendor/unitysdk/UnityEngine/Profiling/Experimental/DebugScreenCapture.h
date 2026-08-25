#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class TextureFormat; }

#define UNITYENGINE_PROFILING_EXPERIMENTAL_DEBUGSCREENCAPTURE_SET_RAWIMAGEDATAREFERENCE_OFFSET UNITYSDK_OFFSET(0xA2455E0)
#define UNITYENGINE_PROFILING_EXPERIMENTAL_DEBUGSCREENCAPTURE_SET_IMAGEFORMAT_OFFSET UNITYSDK_OFFSET(0xA2455F0)
#define UNITYENGINE_PROFILING_EXPERIMENTAL_DEBUGSCREENCAPTURE_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0xA245600)
#define UNITYENGINE_PROFILING_EXPERIMENTAL_DEBUGSCREENCAPTURE_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xA245610)

namespace UnityEngine::Profiling::Experimental
{
	inline static constexpr unsigned int DebugScreenCapture_TypeDefinitionIndex = 31237;

	class DebugScreenCapture : public Il2CppObject
	{
	public:
		Il2CppObject* _rawImageDataReference_k__BackingField; // 0x10
		::UnityEngine::TextureFormat* _imageFormat_k__BackingField; // 0x20
		::System::Int32 _width_k__BackingField; // 0x24
		::System::Int32 _height_k__BackingField; // 0x28

		::System::Void set_rawImageDataReference(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_EXPERIMENTAL_DEBUGSCREENCAPTURE_SET_RAWIMAGEDATAREFERENCE_OFFSET))(arg, nullptr);
		}

		::System::Void set_imageFormat(::UnityEngine::TextureFormat* arg)
		{
			((::System::Void(*)(::UnityEngine::TextureFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_EXPERIMENTAL_DEBUGSCREENCAPTURE_SET_IMAGEFORMAT_OFFSET))(arg, nullptr);
		}

		::System::Void set_width(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_EXPERIMENTAL_DEBUGSCREENCAPTURE_SET_WIDTH_OFFSET))(arg, nullptr);
		}

		::System::Void set_height(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_EXPERIMENTAL_DEBUGSCREENCAPTURE_SET_HEIGHT_OFFSET))(arg, nullptr);
		}

	};
}

