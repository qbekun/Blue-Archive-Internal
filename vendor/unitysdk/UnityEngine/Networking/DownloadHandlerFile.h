#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Networking { class DownloadHandlerFile; }

#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERFILE_CREATE_OFFSET UNITYSDK_OFFSET(0xA4A6D30)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERFILE_INTERNALCREATEVFS_OFFSET UNITYSDK_OFFSET(0xA4A6D80)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERFILE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4A6E30)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERFILE_GETNATIVEDATA_OFFSET UNITYSDK_OFFSET(0xA4A6E60)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERFILE_GETDATA_OFFSET UNITYSDK_OFFSET(0xA4A6EC0)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERFILE_GETTEXT_OFFSET UNITYSDK_OFFSET(0xA4A6F20)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERFILE_SET_REMOVEFILEONABORT_OFFSET UNITYSDK_OFFSET(0xA4A6F80)

namespace UnityEngine::Networking
{
	inline static constexpr unsigned int DownloadHandlerFile_TypeDefinitionIndex = 37431;

	class DownloadHandlerFile : public Il2CppObject
	{
	public:
		::System::Int32 Create(::UnityEngine::Networking::DownloadHandlerFile* arg, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Networking::DownloadHandlerFile*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERFILE_CREATE_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void InternalCreateVFS(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERFILE_INTERNALCREATEVFS_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERFILE_.CTOR_OFFSET))(str, nullptr);
		}

		Il2CppObject* GetNativeData()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERFILE_GETNATIVEDATA_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetData()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERFILE_GETDATA_OFFSET))(nullptr);
		}

		::System::String* GetText()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERFILE_GETTEXT_OFFSET))(nullptr);
		}

		::System::Void set_removeFileOnAbort(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERFILE_SET_REMOVEFILEONABORT_OFFSET))(arg, nullptr);
		}

	};
}

