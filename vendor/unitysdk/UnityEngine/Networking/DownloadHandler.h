#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Networking { class UnityWebRequest; }
namespace UnityEngine::Networking { class DownloadHandler; }

#define UNITYENGINE_NETWORKING_DOWNLOADHANDLER_RELEASE_OFFSET UNITYSDK_OFFSET(0xA4A6150)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4A6190)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLER_FINALIZE_OFFSET UNITYSDK_OFFSET(0xA4A61A0)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA4A6270)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLER_GET_ERROR_OFFSET UNITYSDK_OFFSET(0xA4A6300)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLER_GETERRORMSG_OFFSET UNITYSDK_OFFSET(0xA4A6340)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLER_GET_DATA_OFFSET UNITYSDK_OFFSET(0xA4A6380)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLER_GET_TEXT_OFFSET UNITYSDK_OFFSET(0xA4A63A0)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLER_GETNATIVEDATA_OFFSET UNITYSDK_OFFSET(0xA4A63C0)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLER_GETDATA_OFFSET UNITYSDK_OFFSET(0xA4A63D0)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLER_GETTEXT_OFFSET UNITYSDK_OFFSET(0xA4A64F0)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLER_GETTEXTENCODER_OFFSET UNITYSDK_OFFSET(0xA4A65C0)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLER_GETCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xA4A6870)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLER_RECEIVEDATA_OFFSET UNITYSDK_OFFSET(0xA4A68B0)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLER_RECEIVECONTENTLENGTHHEADER_OFFSET UNITYSDK_OFFSET(0xA4A68C0)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLER_RECEIVECONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0xA4A68E0)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLER_COMPLETECONTENT_OFFSET UNITYSDK_OFFSET(0xA4A68F0)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLER_GETPROGRESS_OFFSET UNITYSDK_OFFSET(0xA4A6900)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLER_GETCHECKEDDOWNLOADER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLER_INTERNALGETBYTEARRAY_OFFSET UNITYSDK_OFFSET(0xA4A6910)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLER_INTERNALGETBYTEARRAY_OFFSET UNITYSDK_OFFSET(0xA4A6460)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLER_INTERNALGETNATIVEARRAY_OFFSET UNITYSDK_OFFSET(0xA4A6950)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLER_DISPOSENATIVEARRAY_OFFSET UNITYSDK_OFFSET(0xA4A6A70)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLER_CREATENATIVEARRAYFORNATIVEDATA_OFFSET UNITYSDK_OFFSET(0xA4A6AB0)

namespace UnityEngine::Networking
{
	inline static constexpr unsigned int DownloadHandler_TypeDefinitionIndex = 37428;

	class DownloadHandler : public Il2CppObject
	{
	public:
		::System::Int32 m_Ptr; // 0x10

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLER_RELEASE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLER_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLER_DISPOSE_OFFSET))(nullptr);
		}

		::System::String* get_error()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLER_GET_ERROR_OFFSET))(nullptr);
		}

		::System::String* GetErrorMsg()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLER_GETERRORMSG_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_data()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLER_GET_DATA_OFFSET))(nullptr);
		}

		::System::String* get_text()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLER_GET_TEXT_OFFSET))(nullptr);
		}

		Il2CppObject* GetNativeData()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLER_GETNATIVEDATA_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetData()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLER_GETDATA_OFFSET))(nullptr);
		}

		::System::String* GetText()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLER_GETTEXT_OFFSET))(nullptr);
		}

		::System::Text::Encoding* GetTextEncoder()
		{
			return (return (::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLER_GETTEXTENCODER_OFFSET))(nullptr);
		}

		::System::String* GetContentType()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLER_GETCONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Boolean ReceiveData(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLER_RECEIVEDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ReceiveContentLengthHeader(::System::UInt64 arg)
		{
			((::System::Void(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLER_RECEIVECONTENTLENGTHHEADER_OFFSET))(arg, nullptr);
		}

		::System::Void ReceiveContentLength(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLER_RECEIVECONTENTLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Void CompleteContent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLER_COMPLETECONTENT_OFFSET))(nullptr);
		}

		::System::Single GetProgress()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLER_GETPROGRESS_OFFSET))(nullptr);
		}

		Il2CppObject* GetCheckedDownloader(::UnityEngine::Networking::UnityWebRequest* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::Networking::UnityWebRequest*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLER_GETCHECKEDDOWNLOADER_OFFSET))(arg, nullptr);
		}

		::System::Object** InternalGetByteArray(::UnityEngine::Networking::DownloadHandler* arg, int32_t&* arg)
		{
			return (return (::System::Object**(*)(::UnityEngine::Networking::DownloadHandler*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLER_INTERNALGETBYTEARRAY_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* InternalGetByteArray(::UnityEngine::Networking::DownloadHandler* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::Networking::DownloadHandler*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLER_INTERNALGETBYTEARRAY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* InternalGetNativeArray(::UnityEngine::Networking::DownloadHandler* arg, Il2CppObject&* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::Networking::DownloadHandler*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLER_INTERNALGETNATIVEARRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DisposeNativeArray(Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLER_DISPOSENATIVEARRAY_OFFSET))(arg, nullptr);
		}

		::System::Void CreateNativeArrayForNativeData(Il2CppObject&* arg, ::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLER_CREATENATIVEARRAYFORNATIVEDATA_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

