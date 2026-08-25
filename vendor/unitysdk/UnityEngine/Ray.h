#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector3; }

#define UNITYENGINE_RAY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1EEBA0)
#define UNITYENGINE_RAY_GET_ORIGIN_OFFSET UNITYSDK_OFFSET(0xA1EE9E0)
#define UNITYENGINE_RAY_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0xA1EE9C0)
#define UNITYENGINE_RAY_GETPOINT_OFFSET UNITYSDK_OFFSET(0xA1EEC90)
#define UNITYENGINE_RAY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA1EECC0)
#define UNITYENGINE_RAY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA1EECD0)

namespace UnityEngine
{
	inline static constexpr unsigned int Ray_TypeDefinitionIndex = 30980;

	class Ray : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* m_Origin; // 0x10
		::UnityEngine::Vector3* m_Direction; // 0x1C

		::System::Void .ctor(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector3* get_origin()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAY_GET_ORIGIN_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_direction()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAY_GET_DIRECTION_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* GetPoint(::System::Single arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAY_GETPOINT_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAY_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAY_TOSTRING_OFFSET))(str, arg, nullptr);
		}

	};
}

