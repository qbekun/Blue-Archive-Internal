#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Rect; }
namespace UnityEngine { class Rect&; }

#define UNITYENGINE_RECTOFFSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1F0070)
#define UNITYENGINE_RECTOFFSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1F00F0)
#define UNITYENGINE_RECTOFFSET_FINALIZE_OFFSET UNITYSDK_OFFSET(0xA1F0130)
#define UNITYENGINE_RECTOFFSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1F0310)
#define UNITYENGINE_RECTOFFSET_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA1F0500)
#define UNITYENGINE_RECTOFFSET_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA1F0510)
#define UNITYENGINE_RECTOFFSET_DESTROY_OFFSET UNITYSDK_OFFSET(0xA1F0280)
#define UNITYENGINE_RECTOFFSET_INTERNALCREATE_OFFSET UNITYSDK_OFFSET(0xA1F00B0)
#define UNITYENGINE_RECTOFFSET_INTERNALDESTROY_OFFSET UNITYSDK_OFFSET(0xA1F08D0)
#define UNITYENGINE_RECTOFFSET_GET_LEFT_OFFSET UNITYSDK_OFFSET(0xA1F07D0)
#define UNITYENGINE_RECTOFFSET_SET_LEFT_OFFSET UNITYSDK_OFFSET(0xA1F0400)
#define UNITYENGINE_RECTOFFSET_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0xA1F0810)
#define UNITYENGINE_RECTOFFSET_SET_RIGHT_OFFSET UNITYSDK_OFFSET(0xA1F0440)
#define UNITYENGINE_RECTOFFSET_GET_TOP_OFFSET UNITYSDK_OFFSET(0xA1F0850)
#define UNITYENGINE_RECTOFFSET_SET_TOP_OFFSET UNITYSDK_OFFSET(0xA1F0480)
#define UNITYENGINE_RECTOFFSET_GET_BOTTOM_OFFSET UNITYSDK_OFFSET(0xA1F0890)
#define UNITYENGINE_RECTOFFSET_SET_BOTTOM_OFFSET UNITYSDK_OFFSET(0xA1F04C0)
#define UNITYENGINE_RECTOFFSET_GET_HORIZONTAL_OFFSET UNITYSDK_OFFSET(0xA1F0910)
#define UNITYENGINE_RECTOFFSET_GET_VERTICAL_OFFSET UNITYSDK_OFFSET(0xA1F0950)
#define UNITYENGINE_RECTOFFSET_REMOVE_OFFSET UNITYSDK_OFFSET(0xA1F0990)
#define UNITYENGINE_RECTOFFSET_REMOVE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1F09F0)

namespace UnityEngine
{
	inline static constexpr unsigned int RectOffset_TypeDefinitionIndex = 30983;

	class RectOffset : public Il2CppObject
	{
	public:
		::System::Int32 m_Ptr; // 0x10
		::System::Object* m_SourceStyle; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_TOSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::Void Destroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_DESTROY_OFFSET))(nullptr);
		}

		::System::Int32 InternalCreate()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_INTERNALCREATE_OFFSET))(nullptr);
		}

		::System::Void InternalDestroy(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_INTERNALDESTROY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_left()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_GET_LEFT_OFFSET))(nullptr);
		}

		::System::Void set_left(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_SET_LEFT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_right()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_GET_RIGHT_OFFSET))(nullptr);
		}

		::System::Void set_right(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_SET_RIGHT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_top()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_GET_TOP_OFFSET))(nullptr);
		}

		::System::Void set_top(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_SET_TOP_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_bottom()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_GET_BOTTOM_OFFSET))(nullptr);
		}

		::System::Void set_bottom(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_SET_BOTTOM_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_horizontal()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_GET_HORIZONTAL_OFFSET))(nullptr);
		}

		::System::Int32 get_vertical()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_GET_VERTICAL_OFFSET))(nullptr);
		}

		::UnityEngine::Rect* Remove(::UnityEngine::Rect* arg)
		{
			return (return (::UnityEngine::Rect*(*)(::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void Remove_Injected(::UnityEngine::Rect&* arg, ::UnityEngine::Rect&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rect&*, ::UnityEngine::Rect&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTOFFSET_REMOVE_INJECTED_OFFSET))(arg, arg, nullptr);
		}

	};
}

