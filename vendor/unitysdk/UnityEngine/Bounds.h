#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Bounds; }
namespace UnityEngine { class Ray; }
namespace UnityEngine { class Bounds&; }
namespace UnityEngine { class Vector3&; }
namespace UnityEngine { class Ray&; }

#define UNITYENGINE_BOUNDS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1ED0D0)
#define UNITYENGINE_BOUNDS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA1ED100)
#define UNITYENGINE_BOUNDS_EQUALS_OFFSET UNITYSDK_OFFSET(0xA1ED1F0)
#define UNITYENGINE_BOUNDS_EQUALS_OFFSET UNITYSDK_OFFSET(0xA1ED2C0)
#define UNITYENGINE_BOUNDS_GET_CENTER_OFFSET UNITYSDK_OFFSET(0xA1ED1C0)
#define UNITYENGINE_BOUNDS_SET_CENTER_OFFSET UNITYSDK_OFFSET(0xA1ED330)
#define UNITYENGINE_BOUNDS_GET_SIZE_OFFSET UNITYSDK_OFFSET(0xA1ED340)
#define UNITYENGINE_BOUNDS_SET_SIZE_OFFSET UNITYSDK_OFFSET(0xA1ED360)
#define UNITYENGINE_BOUNDS_GET_EXTENTS_OFFSET UNITYSDK_OFFSET(0xA1ED1D0)
#define UNITYENGINE_BOUNDS_SET_EXTENTS_OFFSET UNITYSDK_OFFSET(0xA1ED390)
#define UNITYENGINE_BOUNDS_GET_MIN_OFFSET UNITYSDK_OFFSET(0xA1ED3A0)
#define UNITYENGINE_BOUNDS_SET_MIN_OFFSET UNITYSDK_OFFSET(0xA1ED3D0)
#define UNITYENGINE_BOUNDS_GET_MAX_OFFSET UNITYSDK_OFFSET(0xA1ED420)
#define UNITYENGINE_BOUNDS_SET_MAX_OFFSET UNITYSDK_OFFSET(0xA1ED4A0)
#define UNITYENGINE_BOUNDS_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA1ED4F0)
#define UNITYENGINE_BOUNDS_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xA1ED580)
#define UNITYENGINE_BOUNDS_SETMINMAX_OFFSET UNITYSDK_OFFSET(0xA1ED450)
#define UNITYENGINE_BOUNDS_ENCAPSULATE_OFFSET UNITYSDK_OFFSET(0xA1ED610)
#define UNITYENGINE_BOUNDS_ENCAPSULATE_OFFSET UNITYSDK_OFFSET(0xA1ED680)
#define UNITYENGINE_BOUNDS_EXPAND_OFFSET UNITYSDK_OFFSET(0xA1ED790)
#define UNITYENGINE_BOUNDS_INTERSECTS_OFFSET UNITYSDK_OFFSET(0xA1ED7C0)
#define UNITYENGINE_BOUNDS_INTERSECTRAY_OFFSET UNITYSDK_OFFSET(0xA1ED860)
#define UNITYENGINE_BOUNDS_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA1ED920)
#define UNITYENGINE_BOUNDS_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA1ED930)
#define UNITYENGINE_BOUNDS_CONTAINS_OFFSET UNITYSDK_OFFSET(0xA1EDAD0)
#define UNITYENGINE_BOUNDS_INTERSECTRAYAABB_OFFSET UNITYSDK_OFFSET(0xA1ED8D0)
#define UNITYENGINE_BOUNDS_CONTAINS_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1EDB10)
#define UNITYENGINE_BOUNDS_INTERSECTRAYAABB_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1EDB50)

namespace UnityEngine
{
	inline static constexpr unsigned int Bounds_TypeDefinitionIndex = 30976;

	class Bounds : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* m_Center; // 0x10
		::UnityEngine::Vector3* m_Extents; // 0x1C

		::System::Void .ctor(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Bounds* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Bounds*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_EQUALS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_center()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_GET_CENTER_OFFSET))(nullptr);
		}

		::System::Void set_center(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_SET_CENTER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_size()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_GET_SIZE_OFFSET))(nullptr);
		}

		::System::Void set_size(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_SET_SIZE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_extents()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_GET_EXTENTS_OFFSET))(nullptr);
		}

		::System::Void set_extents(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_SET_EXTENTS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_min()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_GET_MIN_OFFSET))(nullptr);
		}

		::System::Void set_min(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_SET_MIN_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_max()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_GET_MAX_OFFSET))(nullptr);
		}

		::System::Void set_max(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_SET_MAX_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::Bounds* arg, ::UnityEngine::Bounds* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Bounds*, ::UnityEngine::Bounds*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::Bounds* arg, ::UnityEngine::Bounds* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Bounds*, ::UnityEngine::Bounds*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetMinMax(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_SETMINMAX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Encapsulate(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_ENCAPSULATE_OFFSET))(arg, nullptr);
		}

		::System::Void Encapsulate(::UnityEngine::Bounds* arg)
		{
			((::System::Void(*)(::UnityEngine::Bounds*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_ENCAPSULATE_OFFSET))(arg, nullptr);
		}

		::System::Void Expand(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_EXPAND_OFFSET))(arg, nullptr);
		}

		::System::Boolean Intersects(::UnityEngine::Bounds* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Bounds*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_INTERSECTS_OFFSET))(arg, nullptr);
		}

		::System::Boolean IntersectRay(::UnityEngine::Ray* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Ray*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_INTERSECTRAY_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_TOSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean Contains(::UnityEngine::Vector3* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Boolean IntersectRayAABB(::UnityEngine::Ray* arg, ::UnityEngine::Bounds* arg, float&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Ray*, ::UnityEngine::Bounds*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_INTERSECTRAYAABB_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean Contains_Injected(::UnityEngine::Bounds&* arg, ::UnityEngine::Vector3&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Bounds&*, ::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_CONTAINS_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IntersectRayAABB_Injected(::UnityEngine::Ray&* arg, ::UnityEngine::Bounds&* arg, float&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Ray&*, ::UnityEngine::Bounds&*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDS_INTERSECTRAYAABB_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

