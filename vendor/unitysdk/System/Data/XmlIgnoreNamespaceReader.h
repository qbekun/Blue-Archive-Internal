#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_XMLIGNORENAMESPACEREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x978E3B0)
#define SYSTEM_DATA_XMLIGNORENAMESPACEREADER_MOVETOFIRSTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x978E440)
#define SYSTEM_DATA_XMLIGNORENAMESPACEREADER_MOVETONEXTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x978E550)

namespace System::Data
{
	inline static constexpr unsigned int XmlIgnoreNamespaceReader_TypeDefinitionIndex = 32309;

	class XmlIgnoreNamespaceReader : public Il2CppObject
	{
	public:
		Il2CppObject* _namespacesToIgnore; // 0x30

		::System::Void .ctor(::System::Xml::XmlDocument* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Xml::XmlDocument*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLIGNORENAMESPACEREADER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean MoveToFirstAttribute()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLIGNORENAMESPACEREADER_MOVETOFIRSTATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Boolean MoveToNextAttribute()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLIGNORENAMESPACEREADER_MOVETONEXTATTRIBUTE_OFFSET))(nullptr);
		}

	};
}

