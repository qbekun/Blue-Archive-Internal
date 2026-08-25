#pragma once
#include "unitysdk.h"

#define ONDEFAULTATTRIBUTEUSEDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x996BC50)
#define ONDEFAULTATTRIBUTEUSEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x996BD60)

	inline static constexpr unsigned int OnDefaultAttributeUseDelegate_TypeDefinitionIndex = 27698;

	class OnDefaultAttributeUseDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONDEFAULTATTRIBUTEUSEDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Xml::IDtdDefaultAttributeInfo* arg, ::System::Xml::XmlTextReaderImpl* arg)
		{
			((::System::Void(*)(::System::Xml::IDtdDefaultAttributeInfo*, ::System::Xml::XmlTextReaderImpl*, ::PVOID))((::PBYTE)hIl2Cpp + ONDEFAULTATTRIBUTEUSEDELEGATE_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};

