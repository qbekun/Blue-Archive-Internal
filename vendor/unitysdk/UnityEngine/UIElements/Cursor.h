#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine::UIElements { class Cursor; }

#define UNITYENGINE_UIELEMENTS_CURSOR_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0xA311B10)
#define UNITYENGINE_UIELEMENTS_CURSOR_SET_TEXTURE_OFFSET UNITYSDK_OFFSET(0xA311B20)
#define UNITYENGINE_UIELEMENTS_CURSOR_GET_HOTSPOT_OFFSET UNITYSDK_OFFSET(0xA311B30)
#define UNITYENGINE_UIELEMENTS_CURSOR_SET_HOTSPOT_OFFSET UNITYSDK_OFFSET(0xA311B40)
#define UNITYENGINE_UIELEMENTS_CURSOR_GET_DEFAULTCURSORID_OFFSET UNITYSDK_OFFSET(0xA311B50)
#define UNITYENGINE_UIELEMENTS_CURSOR_SET_DEFAULTCURSORID_OFFSET UNITYSDK_OFFSET(0xA311B60)
#define UNITYENGINE_UIELEMENTS_CURSOR_EQUALS_OFFSET UNITYSDK_OFFSET(0xA311B70)
#define UNITYENGINE_UIELEMENTS_CURSOR_EQUALS_OFFSET UNITYSDK_OFFSET(0xA311C70)
#define UNITYENGINE_UIELEMENTS_CURSOR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA311D00)
#define UNITYENGINE_UIELEMENTS_CURSOR_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA311DC0)
#define UNITYENGINE_UIELEMENTS_CURSOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA311E70)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int Cursor_TypeDefinitionIndex = 30074;

	class Cursor : public Il2CppObject
	{
	public:
		::UnityEngine::Texture2D* _texture_k__BackingField; // 0x10
		::UnityEngine::Vector2* _hotspot_k__BackingField; // 0x18
		::System::Int32 _defaultCursorId_k__BackingField; // 0x20

		::UnityEngine::Texture2D* get_texture()
		{
			return (return (::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CURSOR_GET_TEXTURE_OFFSET))(nullptr);
		}

		::System::Void set_texture(::UnityEngine::Texture2D* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture2D*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CURSOR_SET_TEXTURE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_hotspot()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CURSOR_GET_HOTSPOT_OFFSET))(nullptr);
		}

		::System::Void set_hotspot(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CURSOR_SET_HOTSPOT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_defaultCursorId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CURSOR_GET_DEFAULTCURSORID_OFFSET))(nullptr);
		}

		::System::Void set_defaultCursorId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CURSOR_SET_DEFAULTCURSORID_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CURSOR_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::Cursor* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::Cursor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CURSOR_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CURSOR_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::UIElements::Cursor* arg, ::UnityEngine::UIElements::Cursor* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::Cursor*, ::UnityEngine::UIElements::Cursor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CURSOR_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CURSOR_TOSTRING_OFFSET))(nullptr);
		}

	};
}

