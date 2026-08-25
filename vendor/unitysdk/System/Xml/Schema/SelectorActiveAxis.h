#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_SELECTORACTIVEAXIS_GET_LASTDEPTH_OFFSET UNITYSDK_OFFSET(0x9A0B0F0)
#define SYSTEM_XML_SCHEMA_SELECTORACTIVEAXIS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A0AFF0)
#define SYSTEM_XML_SCHEMA_SELECTORACTIVEAXIS_ENDELEMENT_OFFSET UNITYSDK_OFFSET(0x9A0B190)
#define SYSTEM_XML_SCHEMA_SELECTORACTIVEAXIS_PUSHKS_OFFSET UNITYSDK_OFFSET(0x9A0B1C0)
#define SYSTEM_XML_SCHEMA_SELECTORACTIVEAXIS_POPKS_OFFSET UNITYSDK_OFFSET(0x9A0B680)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int SelectorActiveAxis_TypeDefinitionIndex = 27963;

	class SelectorActiveAxis : public ::UnityEngine::AddressableAssets::Addressables
	{
	public:
		::System::Xml::Schema::ConstraintStruct* cs; // 0x28
		::System::Collections::ArrayList* KSs; // 0x30
		::System::Int32 KSpointer; // 0x38

		::System::Int32 get_lastDepth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SELECTORACTIVEAXIS_GET_LASTDEPTH_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Xml::Schema::Asttree* arg, ::System::Xml::Schema::ConstraintStruct* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::Asttree*, ::System::Xml::Schema::ConstraintStruct*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SELECTORACTIVEAXIS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean EndElement(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SELECTORACTIVEAXIS_ENDELEMENT_OFFSET))(str, str, nullptr);
		}

		::System::Int32 PushKS(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SELECTORACTIVEAXIS_PUSHKS_OFFSET))(arg, arg, nullptr);
		}

		::System::Xml::Schema::KeySequence* PopKS()
		{
			return (return (::System::Xml::Schema::KeySequence*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SELECTORACTIVEAXIS_POPKS_OFFSET))(nullptr);
		}

	};
}

