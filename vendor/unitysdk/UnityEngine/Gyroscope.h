#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Quaternion; }
namespace UnityEngine { class Quaternion&; }

#define UNITYENGINE_GYROSCOPE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2904E0)
#define UNITYENGINE_GYROSCOPE_ATTITUDE_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA290500)
#define UNITYENGINE_GYROSCOPE_GETENABLED_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA290590)
#define UNITYENGINE_GYROSCOPE_SETENABLED_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA2905D0)
#define UNITYENGINE_GYROSCOPE_SETUPDATEINTERVAL_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA290610)
#define UNITYENGINE_GYROSCOPE_GET_ATTITUDE_OFFSET UNITYSDK_OFFSET(0xA290660)
#define UNITYENGINE_GYROSCOPE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0xA2906C0)
#define UNITYENGINE_GYROSCOPE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0xA290700)
#define UNITYENGINE_GYROSCOPE_SET_UPDATEINTERVAL_OFFSET UNITYSDK_OFFSET(0xA290740)
#define UNITYENGINE_GYROSCOPE_ATTITUDE_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA290550)

namespace UnityEngine
{
	inline static constexpr unsigned int Gyroscope_TypeDefinitionIndex = 37745;

	class Gyroscope : public Il2CppObject
	{
	public:
		::System::Int32 m_GyroIndex; // 0x10

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Quaternion* attitude_Internal(::System::Int32 arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE_ATTITUDE_INTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean getEnabled_Internal(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE_GETENABLED_INTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void setEnabled_Internal(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE_SETENABLED_INTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void setUpdateInterval_Internal(::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE_SETUPDATEINTERVAL_INTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Quaternion* get_attitude()
		{
			return (return (::UnityEngine::Quaternion*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE_GET_ATTITUDE_OFFSET))(nullptr);
		}

		::System::Boolean get_enabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE_GET_ENABLED_OFFSET))(nullptr);
		}

		::System::Void set_enabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE_SET_ENABLED_OFFSET))(arg, nullptr);
		}

		::System::Void set_updateInterval(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE_SET_UPDATEINTERVAL_OFFSET))(arg, nullptr);
		}

		::System::Void attitude_Internal_Injected(::System::Int32 arg, ::UnityEngine::Quaternion&* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Quaternion&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE_ATTITUDE_INTERNAL_INJECTED_OFFSET))(arg, arg, nullptr);
		}

	};
}

