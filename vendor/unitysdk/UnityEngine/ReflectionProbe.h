#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector4; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class ReflectionProbe; }
namespace UnityEngine { class Vector4&; }

#define UNITYENGINE_REFLECTIONPROBE_GET_DEFAULTTEXTUREHDRDECODEVALUES_OFFSET UNITYSDK_OFFSET(0xA1EAA40)
#define UNITYENGINE_REFLECTIONPROBE_GET_DEFAULTTEXTURE_OFFSET UNITYSDK_OFFSET(0xA1EAAD0)
#define UNITYENGINE_REFLECTIONPROBE_CALLREFLECTIONPROBEEVENT_OFFSET UNITYSDK_OFFSET(0xA1EAB10)
#define UNITYENGINE_REFLECTIONPROBE_CALLSETDEFAULTREFLECTION_OFFSET UNITYSDK_OFFSET(0xA1EAB70)
#define UNITYENGINE_REFLECTIONPROBE_GET_DEFAULTTEXTUREHDRDECODEVALUES_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1EAA90)

namespace UnityEngine
{
	inline static constexpr unsigned int ReflectionProbe_TypeDefinitionIndex = 30971;

	class ReflectionProbe : public Il2CppObject
	{
	public:
		Il2CppObject* reflectionProbeChanged; // 0x0
		Il2CppObject* defaultReflectionTexture; // 0x8

		::UnityEngine::Vector4* get_defaultTextureHDRDecodeValues()
		{
			return (return (::UnityEngine::Vector4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_DEFAULTTEXTUREHDRDECODEVALUES_OFFSET))(nullptr);
		}

		::UnityEngine::Texture* get_defaultTexture()
		{
			return (return (::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_DEFAULTTEXTURE_OFFSET))(nullptr);
		}

		::System::Void CallReflectionProbeEvent(::UnityEngine::ReflectionProbe* arg, ReflectionProbeEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::ReflectionProbe*, ReflectionProbeEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_CALLREFLECTIONPROBEEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CallSetDefaultReflection(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_CALLSETDEFAULTREFLECTION_OFFSET))(arg, nullptr);
		}

		::System::Void get_defaultTextureHDRDecodeValues_Injected(::UnityEngine::Vector4&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REFLECTIONPROBE_GET_DEFAULTTEXTUREHDRDECODEVALUES_INJECTED_OFFSET))(arg, nullptr);
		}

	};
}

