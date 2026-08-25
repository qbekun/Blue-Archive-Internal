#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class AndroidJavaClass; }
namespace UnityEngine { class GlobalJavaObjectRef; }
namespace UnityEngine { class AndroidJavaObject; }

#define UNITYENGINE_ANDROIDJAVAPROXY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1B3F10)
#define UNITYENGINE_ANDROIDJAVAPROXY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1B3FF0)
#define UNITYENGINE_ANDROIDJAVAPROXY_FINALIZE_OFFSET UNITYSDK_OFFSET(0xA1B4050)
#define UNITYENGINE_ANDROIDJAVAPROXY_INVOKE_OFFSET UNITYSDK_OFFSET(0xA1B41F0)
#define UNITYENGINE_ANDROIDJAVAPROXY_INVOKE_OFFSET UNITYSDK_OFFSET(0xA1B5DF0)
#define UNITYENGINE_ANDROIDJAVAPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0xA1B6810)
#define UNITYENGINE_ANDROIDJAVAPROXY_HASHCODE_OFFSET UNITYSDK_OFFSET(0xA1B6940)
#define UNITYENGINE_ANDROIDJAVAPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA1B6CD0)
#define UNITYENGINE_ANDROIDJAVAPROXY_GETPROXYOBJECT_OFFSET UNITYSDK_OFFSET(0xA1B6D30)
#define UNITYENGINE_ANDROIDJAVAPROXY_GETRAWPROXY_OFFSET UNITYSDK_OFFSET(0xA1B6AB0)
#define UNITYENGINE_ANDROIDJAVAPROXY_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA1B7170)

namespace UnityEngine
{
	inline static constexpr unsigned int AndroidJavaProxy_TypeDefinitionIndex = 37062;

	class AndroidJavaProxy : public Il2CppObject
	{
	public:
		::UnityEngine::AndroidJavaClass* javaInterface; // 0x10
		::System::Int32 proxyObject; // 0x18
		::UnityEngine::GlobalJavaObjectRef* s_JavaLangSystemClass; // 0x0
		::System::Int32 s_HashCodeMethodID; // 0x8

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAPROXY_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::UnityEngine::AndroidJavaClass* arg)
		{
			((::System::Void(*)(::UnityEngine::AndroidJavaClass*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAPROXY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAPROXY_FINALIZE_OFFSET))(nullptr);
		}

		::UnityEngine::AndroidJavaObject* Invoke(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::UnityEngine::AndroidJavaObject*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAPROXY_INVOKE_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::AndroidJavaObject* Invoke(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::UnityEngine::AndroidJavaObject*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAPROXY_INVOKE_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean equals(::UnityEngine::AndroidJavaObject* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::AndroidJavaObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAPROXY_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 hashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAPROXY_HASHCODE_OFFSET))(nullptr);
		}

		::System::String* toString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAPROXY_TOSTRING_OFFSET))(nullptr);
		}

		::UnityEngine::AndroidJavaObject* GetProxyObject()
		{
			return (return (::UnityEngine::AndroidJavaObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAPROXY_GETPROXYOBJECT_OFFSET))(nullptr);
		}

		::System::Int32 GetRawProxy()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAPROXY_GETRAWPROXY_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAPROXY_.CCTOR_OFFSET))(nullptr);
		}

	};
}

