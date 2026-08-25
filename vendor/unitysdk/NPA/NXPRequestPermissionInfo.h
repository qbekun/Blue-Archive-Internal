#pragma once
#include "../unitysdk.h"

#define NPA_NXPREQUESTPERMISSIONINFO_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x9BBD880)
#define NPA_NXPREQUESTPERMISSIONINFO_SET_TITLE_OFFSET UNITYSDK_OFFSET(0x9BBD890)
#define NPA_NXPREQUESTPERMISSIONINFO_GET_CAUTIONTEXT_OFFSET UNITYSDK_OFFSET(0x9BBD8A0)
#define NPA_NXPREQUESTPERMISSIONINFO_SET_CAUTIONTEXT_OFFSET UNITYSDK_OFFSET(0x9BBD8B0)
#define NPA_NXPREQUESTPERMISSIONINFO_GET_VISIBLEPREFIX_OFFSET UNITYSDK_OFFSET(0x9BBD8C0)
#define NPA_NXPREQUESTPERMISSIONINFO_SET_VISIBLEPREFIX_OFFSET UNITYSDK_OFFSET(0x9BBD8D0)
#define NPA_NXPREQUESTPERMISSIONINFO_GET_VISIBLEIMAGE_OFFSET UNITYSDK_OFFSET(0x9BBD8E0)
#define NPA_NXPREQUESTPERMISSIONINFO_SET_VISIBLEIMAGE_OFFSET UNITYSDK_OFFSET(0x9BBD8F0)
#define NPA_NXPREQUESTPERMISSIONINFO_ADDPERMISSION_OFFSET UNITYSDK_OFFSET(0x9BBD900)
#define NPA_NXPREQUESTPERMISSIONINFO_ADDPERMISSION_OFFSET UNITYSDK_OFFSET(0x9BBDA20)
#define NPA_NXPREQUESTPERMISSIONINFO_ADDPERMISSION_OFFSET UNITYSDK_OFFSET(0x9BBD920)
#define NPA_NXPREQUESTPERMISSIONINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BBDA40)
#define NPA_NXPREQUESTPERMISSIONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BBDB60)

namespace NPA
{
	inline static constexpr unsigned int NXPRequestPermissionInfo_TypeDefinitionIndex = 25540;

	class NXPRequestPermissionInfo : public Il2CppObject
	{
	public:
		::System::String* title; // 0x10
		::System::String* cautionText; // 0x18
		::System::Boolean visiblePrefix; // 0x20
		::System::Boolean visibleImage; // 0x21
		Il2CppObject* requestPermissionList; // 0x28

		::System::String* get_Title()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPREQUESTPERMISSIONINFO_GET_TITLE_OFFSET))(nullptr);
		}

		::System::Void set_Title(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPREQUESTPERMISSIONINFO_SET_TITLE_OFFSET))(str, nullptr);
		}

		::System::String* get_CautionText()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPREQUESTPERMISSIONINFO_GET_CAUTIONTEXT_OFFSET))(nullptr);
		}

		::System::Void set_CautionText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPREQUESTPERMISSIONINFO_SET_CAUTIONTEXT_OFFSET))(str, nullptr);
		}

		::System::Boolean get_VisiblePrefix()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPREQUESTPERMISSIONINFO_GET_VISIBLEPREFIX_OFFSET))(nullptr);
		}

		::System::Void set_VisiblePrefix(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPREQUESTPERMISSIONINFO_SET_VISIBLEPREFIX_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_VisibleImage()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPREQUESTPERMISSIONINFO_GET_VISIBLEIMAGE_OFFSET))(nullptr);
		}

		::System::Void set_VisibleImage(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPREQUESTPERMISSIONINFO_SET_VISIBLEIMAGE_OFFSET))(arg, nullptr);
		}

		::System::Void AddPermission(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPREQUESTPERMISSIONINFO_ADDPERMISSION_OFFSET))(str, nullptr);
		}

		::System::Void AddPermission(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPREQUESTPERMISSIONINFO_ADDPERMISSION_OFFSET))(str, arg, nullptr);
		}

		::System::Void AddPermission(::System::String* str, ::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPREQUESTPERMISSIONINFO_ADDPERMISSION_OFFSET))(str, arg, str, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPREQUESTPERMISSIONINFO_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPREQUESTPERMISSIONINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

