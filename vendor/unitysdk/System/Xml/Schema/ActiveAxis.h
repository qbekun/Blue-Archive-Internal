#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_ACTIVEAXIS_GET_CURRENTDEPTH_OFFSET UNITYSDK_OFFSET(0x9A05D40)
#define SYSTEM_XML_SCHEMA_ACTIVEAXIS_REACTIVATE_OFFSET UNITYSDK_OFFSET(0x9A05D50)
#define SYSTEM_XML_SCHEMA_ACTIVEAXIS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A05D60)
#define SYSTEM_XML_SCHEMA_ACTIVEAXIS_MOVETOSTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x9A05F30)
#define SYSTEM_XML_SCHEMA_ACTIVEAXIS_ENDELEMENT_OFFSET UNITYSDK_OFFSET(0x9A06080)
#define SYSTEM_XML_SCHEMA_ACTIVEAXIS_MOVETOATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9A06180)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int ActiveAxis_TypeDefinitionIndex = 27950;

	class ActiveAxis : public Il2CppObject
	{
	public:
		::System::Int32 _currentDepth; // 0x10
		::System::Boolean _isActive; // 0x14
		::System::Xml::Schema::Asttree* _axisTree; // 0x18
		::System::Collections::ArrayList* _axisStack; // 0x20

		::System::Int32 get_CurrentDepth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_ACTIVEAXIS_GET_CURRENTDEPTH_OFFSET))(nullptr);
		}

		::System::Void Reactivate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_ACTIVEAXIS_REACTIVATE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Xml::Schema::Asttree* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::Asttree*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_ACTIVEAXIS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean MoveToStartElement(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_ACTIVEAXIS_MOVETOSTARTELEMENT_OFFSET))(str, str, nullptr);
		}

		::System::Boolean EndElement(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_ACTIVEAXIS_ENDELEMENT_OFFSET))(str, str, nullptr);
		}

		::System::Boolean MoveToAttribute(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_ACTIVEAXIS_MOVETOATTRIBUTE_OFFSET))(str, str, nullptr);
		}

	};
}

