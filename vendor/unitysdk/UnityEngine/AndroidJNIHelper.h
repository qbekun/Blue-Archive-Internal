#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class AndroidJavaRunnable; }
namespace UnityEngine { class AndroidJavaProxy; }

#define UNITYENGINE_ANDROIDJNIHELPER_GETCONSTRUCTORID_OFFSET UNITYSDK_OFFSET(0xA1BE100)
#define UNITYENGINE_ANDROIDJNIHELPER_GETMETHODID_OFFSET UNITYSDK_OFFSET(0xA1B7490)
#define UNITYENGINE_ANDROIDJNIHELPER_GETFIELDID_OFFSET UNITYSDK_OFFSET(0xA1C0000)
#define UNITYENGINE_ANDROIDJNIHELPER_CREATEJAVARUNNABLE_OFFSET UNITYSDK_OFFSET(0xA1BCE00)
#define UNITYENGINE_ANDROIDJNIHELPER_CREATEJAVAPROXY_OFFSET UNITYSDK_OFFSET(0xA1B6F40)
#define UNITYENGINE_ANDROIDJNIHELPER_CREATEJNIARGARRAY_OFFSET UNITYSDK_OFFSET(0xA1B7EE0)
#define UNITYENGINE_ANDROIDJNIHELPER_DELETEJNIARGARRAY_OFFSET UNITYSDK_OFFSET(0xA1C0230)
#define UNITYENGINE_ANDROIDJNIHELPER_GETCONSTRUCTORID_OFFSET UNITYSDK_OFFSET(0xA1B7EF0)
#define UNITYENGINE_ANDROIDJNIHELPER_GETMETHODID_OFFSET UNITYSDK_OFFSET(0xA1B81E0)
#define UNITYENGINE_ANDROIDJNIHELPER_CONVERTFROMJNIARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANDROIDJNIHELPER_GETMETHODID_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANDROIDJNIHELPER_GETFIELDID_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine
{
	inline static constexpr unsigned int AndroidJNIHelper_TypeDefinitionIndex = 37068;

	class AndroidJNIHelper : public Il2CppObject
	{
	public:
		::System::Int32 GetConstructorID(::System::Int32 arg, ::System::String* str)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNIHELPER_GETCONSTRUCTORID_OFFSET))(arg, str, nullptr);
		}

		::System::Int32 GetMethodID(::System::Int32 arg, ::System::String* str, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNIHELPER_GETMETHODID_OFFSET))(arg, str, str, arg, nullptr);
		}

		::System::Int32 GetFieldID(::System::Int32 arg, ::System::String* str, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNIHELPER_GETFIELDID_OFFSET))(arg, str, str, arg, nullptr);
		}

		::System::Int32 CreateJavaRunnable(::UnityEngine::AndroidJavaRunnable* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::AndroidJavaRunnable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNIHELPER_CREATEJAVARUNNABLE_OFFSET))(arg, nullptr);
		}

		::System::Int32 CreateJavaProxy(::UnityEngine::AndroidJavaProxy* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::AndroidJavaProxy*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNIHELPER_CREATEJAVAPROXY_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* CreateJNIArgArray(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNIHELPER_CREATEJNIARGARRAY_OFFSET))(arg, nullptr);
		}

		::System::Void DeleteJNIArgArray(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNIHELPER_DELETEJNIARGARRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetConstructorID(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNIHELPER_GETCONSTRUCTORID_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetMethodID(::System::Int32 arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNIHELPER_GETMETHODID_OFFSET))(arg, str, arg, arg, nullptr);
		}

		Il2CppObject* ConvertFromJNIArray(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNIHELPER_CONVERTFROMJNIARRAY_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetMethodID(::System::Int32 arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNIHELPER_GETMETHODID_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Int32 GetFieldID(::System::Int32 arg, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNIHELPER_GETFIELDID_OFFSET))(arg, str, arg, nullptr);
		}

	};
}

