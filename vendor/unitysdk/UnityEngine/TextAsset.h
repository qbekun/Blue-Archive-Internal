#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class TextAsset; }

#define UNITYENGINE_TEXTASSET_GET_BYTES_OFFSET UNITYSDK_OFFSET(0xA232E10)
#define UNITYENGINE_TEXTASSET_GETPREVIEWBYTES_OFFSET UNITYSDK_OFFSET(0xA232E50)
#define UNITYENGINE_TEXTASSET_INTERNAL_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0xA232E90)
#define UNITYENGINE_TEXTASSET_GETDATAPTR_OFFSET UNITYSDK_OFFSET(0xA232ED0)
#define UNITYENGINE_TEXTASSET_GETDATASIZE_OFFSET UNITYSDK_OFFSET(0xA232F10)
#define UNITYENGINE_TEXTASSET_GET_TEXT_OFFSET UNITYSDK_OFFSET(0xA232F50)
#define UNITYENGINE_TEXTASSET_GET_DATASIZE_OFFSET UNITYSDK_OFFSET(0xA2332D0)
#define UNITYENGINE_TEXTASSET_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA233310)
#define UNITYENGINE_TEXTASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xA233350)
#define UNITYENGINE_TEXTASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xA233450)
#define UNITYENGINE_TEXTASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2333C0)
#define UNITYENGINE_TEXTASSET_GETDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TEXTASSET_GETPREVIEW_OFFSET UNITYSDK_OFFSET(0xA2334D0)
#define UNITYENGINE_TEXTASSET_DECODESTRING_OFFSET UNITYSDK_OFFSET(0xA232F90)

namespace UnityEngine
{
	inline static constexpr unsigned int TextAsset_TypeDefinitionIndex = 31171;

	class TextAsset : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* get_bytes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTASSET_GET_BYTES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetPreviewBytes(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTASSET_GETPREVIEWBYTES_OFFSET))(arg, nullptr);
		}

		::System::Void Internal_CreateInstance(::UnityEngine::TextAsset* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::TextAsset*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTASSET_INTERNAL_CREATEINSTANCE_OFFSET))(arg, str, nullptr);
		}

		::System::Int32 GetDataPtr()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTASSET_GETDATAPTR_OFFSET))(nullptr);
		}

		::System::Int64 GetDataSize()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTASSET_GETDATASIZE_OFFSET))(nullptr);
		}

		::System::String* get_text()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTASSET_GET_TEXT_OFFSET))(nullptr);
		}

		::System::Int64 get_dataSize()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTASSET_GET_DATASIZE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTASSET_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTASSET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTASSET_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(CreateOptions* arg, ::System::String* str)
		{
			((::System::Void(*)(CreateOptions*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTASSET_.CTOR_OFFSET))(arg, str, nullptr);
		}

		Il2CppObject* GetData()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTASSET_GETDATA_OFFSET))(nullptr);
		}

		::System::String* GetPreview(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTASSET_GETPREVIEW_OFFSET))(arg, nullptr);
		}

		::System::String* DecodeString(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTASSET_DECODESTRING_OFFSET))(arg, nullptr);
		}

	};
}

