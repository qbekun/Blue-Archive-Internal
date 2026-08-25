#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector3Int; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class BoundsInt; }

#define UNITYENGINE_BOUNDSINT_GET_X_OFFSET UNITYSDK_OFFSET(0xA1EDBA0)
#define UNITYENGINE_BOUNDSINT_GET_Y_OFFSET UNITYSDK_OFFSET(0xA1EDBB0)
#define UNITYENGINE_BOUNDSINT_GET_Z_OFFSET UNITYSDK_OFFSET(0xA1EDBC0)
#define UNITYENGINE_BOUNDSINT_GET_CENTER_OFFSET UNITYSDK_OFFSET(0xA1EDBD0)
#define UNITYENGINE_BOUNDSINT_GET_SIZE_OFFSET UNITYSDK_OFFSET(0xA1EDC10)
#define UNITYENGINE_BOUNDSINT_SET_SIZE_OFFSET UNITYSDK_OFFSET(0xA1EDC30)
#define UNITYENGINE_BOUNDSINT_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA1EDC40)
#define UNITYENGINE_BOUNDSINT_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA1EDC50)
#define UNITYENGINE_BOUNDSINT_EQUALS_OFFSET UNITYSDK_OFFSET(0xA1EDDD0)
#define UNITYENGINE_BOUNDSINT_EQUALS_OFFSET UNITYSDK_OFFSET(0xA1EDE90)
#define UNITYENGINE_BOUNDSINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA1EDEF0)

namespace UnityEngine
{
	inline static constexpr unsigned int BoundsInt_TypeDefinitionIndex = 30977;

	class BoundsInt : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3Int* m_Position; // 0x10
		::UnityEngine::Vector3Int* m_Size; // 0x1C

		::System::Int32 get_x()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDSINT_GET_X_OFFSET))(nullptr);
		}

		::System::Int32 get_y()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDSINT_GET_Y_OFFSET))(nullptr);
		}

		::System::Int32 get_z()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDSINT_GET_Z_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_center()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDSINT_GET_CENTER_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3Int* get_size()
		{
			return (return (::UnityEngine::Vector3Int*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDSINT_GET_SIZE_OFFSET))(nullptr);
		}

		::System::Void set_size(::UnityEngine::Vector3Int* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3Int*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDSINT_SET_SIZE_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDSINT_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDSINT_TOSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDSINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::BoundsInt* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::BoundsInt*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDSINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDSINT_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

