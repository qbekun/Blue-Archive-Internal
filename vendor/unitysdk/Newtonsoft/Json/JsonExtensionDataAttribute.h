#pragma once
#include "../../unitysdk.h"

#define NEWTONSOFT_JSON_JSONEXTENSIONDATAATTRIBUTE_GET_WRITEDATA_OFFSET UNITYSDK_OFFSET(0x944FDB0)
#define NEWTONSOFT_JSON_JSONEXTENSIONDATAATTRIBUTE_SET_WRITEDATA_OFFSET UNITYSDK_OFFSET(0x944FDC0)
#define NEWTONSOFT_JSON_JSONEXTENSIONDATAATTRIBUTE_GET_READDATA_OFFSET UNITYSDK_OFFSET(0x944FDD0)
#define NEWTONSOFT_JSON_JSONEXTENSIONDATAATTRIBUTE_SET_READDATA_OFFSET UNITYSDK_OFFSET(0x944FDE0)
#define NEWTONSOFT_JSON_JSONEXTENSIONDATAATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x944FDF0)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonExtensionDataAttribute_TypeDefinitionIndex = 31691;

	class JsonExtensionDataAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Boolean _WriteData_k__BackingField; // 0x10
		::System::Boolean _ReadData_k__BackingField; // 0x11

		::System::Boolean get_WriteData()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONEXTENSIONDATAATTRIBUTE_GET_WRITEDATA_OFFSET))(nullptr);
		}

		::System::Void set_WriteData(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONEXTENSIONDATAATTRIBUTE_SET_WRITEDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ReadData()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONEXTENSIONDATAATTRIBUTE_GET_READDATA_OFFSET))(nullptr);
		}

		::System::Void set_ReadData(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONEXTENSIONDATAATTRIBUTE_SET_READDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONEXTENSIONDATAATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

