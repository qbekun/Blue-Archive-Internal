#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class FrameRate; }

#define UNITYENGINE_PLAYABLES_FRAMERATE_GET_DROPFRAME_OFFSET UNITYSDK_OFFSET(0xA268780)
#define UNITYENGINE_PLAYABLES_FRAMERATE_GET_RATE_OFFSET UNITYSDK_OFFSET(0xA268790)
#define UNITYENGINE_PLAYABLES_FRAMERATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA268810)
#define UNITYENGINE_PLAYABLES_FRAMERATE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA268830)
#define UNITYENGINE_PLAYABLES_FRAMERATE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA268840)
#define UNITYENGINE_PLAYABLES_FRAMERATE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA2688D0)
#define UNITYENGINE_PLAYABLES_FRAMERATE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA2688E0)
#define UNITYENGINE_PLAYABLES_FRAMERATE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA268930)
#define UNITYENGINE_PLAYABLES_FRAMERATE_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA268B50)

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int FrameRate_TypeDefinitionIndex = 31598;

	class FrameRate : public Il2CppObject
	{
	public:
		::UnityEngine::Playables::FrameRate* k_24Fps; // 0x0
		::UnityEngine::Playables::FrameRate* k_23_976Fps; // 0x4
		::UnityEngine::Playables::FrameRate* k_25Fps; // 0x8
		::UnityEngine::Playables::FrameRate* k_30Fps; // 0xC
		::UnityEngine::Playables::FrameRate* k_29_97Fps; // 0x10
		::UnityEngine::Playables::FrameRate* k_50Fps; // 0x14
		::UnityEngine::Playables::FrameRate* k_60Fps; // 0x18
		::UnityEngine::Playables::FrameRate* k_59_94Fps; // 0x1C
		::System::Int32 m_Rate; // 0x10

		::System::Boolean get_dropFrame()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_FRAMERATE_GET_DROPFRAME_OFFSET))(nullptr);
		}

		::System::Double get_rate()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_FRAMERATE_GET_RATE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::UInt32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_FRAMERATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Playables::FrameRate* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Playables::FrameRate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_FRAMERATE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_FRAMERATE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_FRAMERATE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_FRAMERATE_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_FRAMERATE_TOSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_FRAMERATE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

