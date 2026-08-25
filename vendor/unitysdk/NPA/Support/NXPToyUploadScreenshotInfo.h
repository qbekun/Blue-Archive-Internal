#pragma once
#include "../../unitysdk.h"

namespace NPA::Support { class NXPToyMediaType; }

#define NPA_SUPPORT_NXPTOYUPLOADSCREENSHOTINFO_GET_IMAGEDATA_OFFSET UNITYSDK_OFFSET(0x9CC2790)
#define NPA_SUPPORT_NXPTOYUPLOADSCREENSHOTINFO_GET_MEDIATYPE_OFFSET UNITYSDK_OFFSET(0x9CC27A0)
#define NPA_SUPPORT_NXPTOYUPLOADSCREENSHOTINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x9CC27B0)
#define NPA_SUPPORT_NXPTOYUPLOADSCREENSHOTINFO_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x9CC27C0)
#define NPA_SUPPORT_NXPTOYUPLOADSCREENSHOTINFO_GET_SITUATION_OFFSET UNITYSDK_OFFSET(0x9CC27D0)
#define NPA_SUPPORT_NXPTOYUPLOADSCREENSHOTINFO_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0x9CC27E0)
#define NPA_SUPPORT_NXPTOYUPLOADSCREENSHOTINFO_GET_MIMETYPE_OFFSET UNITYSDK_OFFSET(0x9CC27F0)
#define NPA_SUPPORT_NXPTOYUPLOADSCREENSHOTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC2840)
#define NPA_SUPPORT_NXPTOYUPLOADSCREENSHOTINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9CC2960)

namespace NPA::Support
{
	inline static constexpr unsigned int NXPToyUploadScreenshotInfo_TypeDefinitionIndex = 27222;

	class NXPToyUploadScreenshotInfo : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _ImageData_k__BackingField; // 0x10
		::NPA::Support::NXPToyMediaType* _MediaType_k__BackingField; // 0x18
		::System::String* _Id_k__BackingField; // 0x20
		::System::String* _Title_k__BackingField; // 0x28
		::System::String* _Situation_k__BackingField; // 0x30
		::System::String* _Location_k__BackingField; // 0x38

		::Il2CppArray<::System::Object*>* get_ImageData()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SUPPORT_NXPTOYUPLOADSCREENSHOTINFO_GET_IMAGEDATA_OFFSET))(nullptr);
		}

		::NPA::Support::NXPToyMediaType* get_MediaType()
		{
			return (return (::NPA::Support::NXPToyMediaType*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SUPPORT_NXPTOYUPLOADSCREENSHOTINFO_GET_MEDIATYPE_OFFSET))(nullptr);
		}

		::System::String* get_Id()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SUPPORT_NXPTOYUPLOADSCREENSHOTINFO_GET_ID_OFFSET))(nullptr);
		}

		::System::String* get_Title()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SUPPORT_NXPTOYUPLOADSCREENSHOTINFO_GET_TITLE_OFFSET))(nullptr);
		}

		::System::String* get_Situation()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SUPPORT_NXPTOYUPLOADSCREENSHOTINFO_GET_SITUATION_OFFSET))(nullptr);
		}

		::System::String* get_Location()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SUPPORT_NXPTOYUPLOADSCREENSHOTINFO_GET_LOCATION_OFFSET))(nullptr);
		}

		::System::String* get_MimeType()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SUPPORT_NXPTOYUPLOADSCREENSHOTINFO_GET_MIMETYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::NPA::Support::NXPToyMediaType* arg, ::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::NPA::Support::NXPToyMediaType*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SUPPORT_NXPTOYUPLOADSCREENSHOTINFO_.CTOR_OFFSET))(arg, arg, str, str, str, str, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SUPPORT_NXPTOYUPLOADSCREENSHOTINFO_TOSTRING_OFFSET))(nullptr);
		}

	};
}

