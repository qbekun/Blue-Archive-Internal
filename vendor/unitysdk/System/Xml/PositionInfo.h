#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_POSITIONINFO_HASLINEINFO_OFFSET UNITYSDK_OFFSET(0x99AC170)
#define SYSTEM_XML_POSITIONINFO_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x99AC180)
#define SYSTEM_XML_POSITIONINFO_GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x99AC190)
#define SYSTEM_XML_POSITIONINFO_GETPOSITIONINFO_OFFSET UNITYSDK_OFFSET(0x99AC1A0)
#define SYSTEM_XML_POSITIONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x99AC290)

namespace System::Xml
{
	inline static constexpr unsigned int PositionInfo_TypeDefinitionIndex = 27791;

	class PositionInfo : public Il2CppObject
	{
	public:
		::System::Boolean HasLineInfo()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_POSITIONINFO_HASLINEINFO_OFFSET))(nullptr);
		}

		::System::Int32 get_LineNumber()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_POSITIONINFO_GET_LINENUMBER_OFFSET))(nullptr);
		}

		::System::Int32 get_LinePosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_POSITIONINFO_GET_LINEPOSITION_OFFSET))(nullptr);
		}

		::System::Xml::PositionInfo* GetPositionInfo(::System::Object* arg)
		{
			return (return (::System::Xml::PositionInfo*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_POSITIONINFO_GETPOSITIONINFO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_POSITIONINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

